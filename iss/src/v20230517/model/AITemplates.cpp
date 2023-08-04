/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iss/v20230517/model/AITemplates.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AITemplates::AITemplates() :
    m_tagHasBeenSet(false),
    m_aIConfigHasBeenSet(false),
    m_snapshotConfigHasBeenSet(false)
{
}

CoreInternalOutcome AITemplates::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITemplates.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("AIConfig") && !value["AIConfig"].IsNull())
    {
        if (!value["AIConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AITemplates.AIConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aIConfig.Deserialize(value["AIConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aIConfigHasBeenSet = true;
    }

    if (value.HasMember("SnapshotConfig") && !value["SnapshotConfig"].IsNull())
    {
        if (!value["SnapshotConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AITemplates.SnapshotConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotConfig.Deserialize(value["SnapshotConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AITemplates::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_aIConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aIConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AITemplates::GetTag() const
{
    return m_tag;
}

void AITemplates::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AITemplates::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

AIConfig AITemplates::GetAIConfig() const
{
    return m_aIConfig;
}

void AITemplates::SetAIConfig(const AIConfig& _aIConfig)
{
    m_aIConfig = _aIConfig;
    m_aIConfigHasBeenSet = true;
}

bool AITemplates::AIConfigHasBeenSet() const
{
    return m_aIConfigHasBeenSet;
}

SnapshotConfig AITemplates::GetSnapshotConfig() const
{
    return m_snapshotConfig;
}

void AITemplates::SetSnapshotConfig(const SnapshotConfig& _snapshotConfig)
{
    m_snapshotConfig = _snapshotConfig;
    m_snapshotConfigHasBeenSet = true;
}

bool AITemplates::SnapshotConfigHasBeenSet() const
{
    return m_snapshotConfigHasBeenSet;
}

