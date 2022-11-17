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

#include <tencentcloud/scf/v20180416/model/InstanceConcurrencyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

InstanceConcurrencyConfig::InstanceConcurrencyConfig() :
    m_dynamicEnabledHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConcurrencyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DynamicEnabled") && !value["DynamicEnabled"].IsNull())
    {
        if (!value["DynamicEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.DynamicEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicEnabled = string(value["DynamicEnabled"].GetString());
        m_dynamicEnabledHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.MaxConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetUint64();
        m_maxConcurrencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConcurrencyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dynamicEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dynamicEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

}


string InstanceConcurrencyConfig::GetDynamicEnabled() const
{
    return m_dynamicEnabled;
}

void InstanceConcurrencyConfig::SetDynamicEnabled(const string& _dynamicEnabled)
{
    m_dynamicEnabled = _dynamicEnabled;
    m_dynamicEnabledHasBeenSet = true;
}

bool InstanceConcurrencyConfig::DynamicEnabledHasBeenSet() const
{
    return m_dynamicEnabledHasBeenSet;
}

uint64_t InstanceConcurrencyConfig::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void InstanceConcurrencyConfig::SetMaxConcurrency(const uint64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool InstanceConcurrencyConfig::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

