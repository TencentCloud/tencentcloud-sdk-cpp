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

#include <tencentcloud/tcb/v20180608/model/FrequencyLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

FrequencyLimitConfig::FrequencyLimitConfig() :
    m_limitObjectHasBeenSet(false),
    m_limitConfigHasBeenSet(false)
{
}

CoreInternalOutcome FrequencyLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitObject") && !value["LimitObject"].IsNull())
    {
        if (!value["LimitObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequencyLimitConfig.LimitObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitObject = string(value["LimitObject"].GetString());
        m_limitObjectHasBeenSet = true;
    }

    if (value.HasMember("LimitConfig") && !value["LimitConfig"].IsNull())
    {
        if (!value["LimitConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequencyLimitConfig.LimitConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitConfig = string(value["LimitConfig"].GetString());
        m_limitConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrequencyLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitObject.c_str(), allocator).Move(), allocator);
    }

    if (m_limitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitConfig.c_str(), allocator).Move(), allocator);
    }

}


string FrequencyLimitConfig::GetLimitObject() const
{
    return m_limitObject;
}

void FrequencyLimitConfig::SetLimitObject(const string& _limitObject)
{
    m_limitObject = _limitObject;
    m_limitObjectHasBeenSet = true;
}

bool FrequencyLimitConfig::LimitObjectHasBeenSet() const
{
    return m_limitObjectHasBeenSet;
}

string FrequencyLimitConfig::GetLimitConfig() const
{
    return m_limitConfig;
}

void FrequencyLimitConfig::SetLimitConfig(const string& _limitConfig)
{
    m_limitConfig = _limitConfig;
    m_limitConfigHasBeenSet = true;
}

bool FrequencyLimitConfig::LimitConfigHasBeenSet() const
{
    return m_limitConfigHasBeenSet;
}

