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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationHttpOriginConfig::IncrementalMigrationHttpOriginConfig() :
    m_originInfoHasBeenSet(false),
    m_originParameterHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_originConditionHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationHttpOriginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginInfo") && !value["OriginInfo"].IsNull())
    {
        if (!value["OriginInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginConfig.OriginInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originInfo.Deserialize(value["OriginInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originInfoHasBeenSet = true;
    }

    if (value.HasMember("OriginParameter") && !value["OriginParameter"].IsNull())
    {
        if (!value["OriginParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginConfig.OriginParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originParameter.Deserialize(value["OriginParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originParameterHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginConfig.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("OriginCondition") && !value["OriginCondition"].IsNull())
    {
        if (!value["OriginCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginConfig.OriginCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originCondition.Deserialize(value["OriginCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationHttpOriginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originParameter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_originConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originCondition.ToJsonObject(value[key.c_str()], allocator);
    }

}


IncrementalMigrationHttpOriginInfo IncrementalMigrationHttpOriginConfig::GetOriginInfo() const
{
    return m_originInfo;
}

void IncrementalMigrationHttpOriginConfig::SetOriginInfo(const IncrementalMigrationHttpOriginInfo& _originInfo)
{
    m_originInfo = _originInfo;
    m_originInfoHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginConfig::OriginInfoHasBeenSet() const
{
    return m_originInfoHasBeenSet;
}

IncrementalMigrationHttpOriginParameter IncrementalMigrationHttpOriginConfig::GetOriginParameter() const
{
    return m_originParameter;
}

void IncrementalMigrationHttpOriginConfig::SetOriginParameter(const IncrementalMigrationHttpOriginParameter& _originParameter)
{
    m_originParameter = _originParameter;
    m_originParameterHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginConfig::OriginParameterHasBeenSet() const
{
    return m_originParameterHasBeenSet;
}

string IncrementalMigrationHttpOriginConfig::GetMode() const
{
    return m_mode;
}

void IncrementalMigrationHttpOriginConfig::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

IncrementalMigrationHttpOriginCondition IncrementalMigrationHttpOriginConfig::GetOriginCondition() const
{
    return m_originCondition;
}

void IncrementalMigrationHttpOriginConfig::SetOriginCondition(const IncrementalMigrationHttpOriginCondition& _originCondition)
{
    m_originCondition = _originCondition;
    m_originConditionHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginConfig::OriginConditionHasBeenSet() const
{
    return m_originConditionHasBeenSet;
}

