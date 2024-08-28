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

#include <tencentcloud/wedata/v20210820/model/AiopsScriptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AiopsScriptInfo::AiopsScriptInfo() :
    m_scriptContentHasBeenSet(false),
    m_cosPathHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false)
{
}

CoreInternalOutcome AiopsScriptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsScriptInfo.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("CosPath") && !value["CosPath"].IsNull())
    {
        if (!value["CosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsScriptInfo.CosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPath = string(value["CosPath"].GetString());
        m_cosPathHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsScriptInfo.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsScriptInfo.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiopsScriptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

}


string AiopsScriptInfo::GetScriptContent() const
{
    return m_scriptContent;
}

void AiopsScriptInfo::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool AiopsScriptInfo::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string AiopsScriptInfo::GetCosPath() const
{
    return m_cosPath;
}

void AiopsScriptInfo::SetCosPath(const string& _cosPath)
{
    m_cosPath = _cosPath;
    m_cosPathHasBeenSet = true;
}

bool AiopsScriptInfo::CosPathHasBeenSet() const
{
    return m_cosPathHasBeenSet;
}

string AiopsScriptInfo::GetCosRegion() const
{
    return m_cosRegion;
}

void AiopsScriptInfo::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool AiopsScriptInfo::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string AiopsScriptInfo::GetCosBucketName() const
{
    return m_cosBucketName;
}

void AiopsScriptInfo::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool AiopsScriptInfo::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

