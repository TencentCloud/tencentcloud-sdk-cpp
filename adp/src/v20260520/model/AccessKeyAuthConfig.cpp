/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/AccessKeyAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AccessKeyAuthConfig::AccessKeyAuthConfig() :
    m_paramListHasBeenSet(false),
    m_passThroughConfigHasBeenSet(false),
    m_usageModeHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyAuthConfig.ParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessKeyParamConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramList.push_back(item);
        }
        m_paramListHasBeenSet = true;
    }

    if (value.HasMember("PassThroughConfig") && !value["PassThroughConfig"].IsNull())
    {
        if (!value["PassThroughConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAuthConfig.PassThroughConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_passThroughConfig.Deserialize(value["PassThroughConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_passThroughConfigHasBeenSet = true;
    }

    if (value.HasMember("UsageMode") && !value["UsageMode"].IsNull())
    {
        if (!value["UsageMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAuthConfig.UsageMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usageMode = value["UsageMode"].GetInt64();
        m_usageModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_passThroughConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_passThroughConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageMode, allocator);
    }

}


vector<AccessKeyParamConfig> AccessKeyAuthConfig::GetParamList() const
{
    return m_paramList;
}

void AccessKeyAuthConfig::SetParamList(const vector<AccessKeyParamConfig>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool AccessKeyAuthConfig::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

AccessKeyPassThroughConfig AccessKeyAuthConfig::GetPassThroughConfig() const
{
    return m_passThroughConfig;
}

void AccessKeyAuthConfig::SetPassThroughConfig(const AccessKeyPassThroughConfig& _passThroughConfig)
{
    m_passThroughConfig = _passThroughConfig;
    m_passThroughConfigHasBeenSet = true;
}

bool AccessKeyAuthConfig::PassThroughConfigHasBeenSet() const
{
    return m_passThroughConfigHasBeenSet;
}

int64_t AccessKeyAuthConfig::GetUsageMode() const
{
    return m_usageMode;
}

void AccessKeyAuthConfig::SetUsageMode(const int64_t& _usageMode)
{
    m_usageMode = _usageMode;
    m_usageModeHasBeenSet = true;
}

bool AccessKeyAuthConfig::UsageModeHasBeenSet() const
{
    return m_usageModeHasBeenSet;
}

