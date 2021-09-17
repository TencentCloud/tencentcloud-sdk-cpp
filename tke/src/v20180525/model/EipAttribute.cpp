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

#include <tencentcloud/tke/v20180525/model/EipAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EipAttribute::EipAttribute() :
    m_deletePolicyHasBeenSet(false),
    m_internetServiceProviderHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false)
{
}

CoreInternalOutcome EipAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeletePolicy") && !value["DeletePolicy"].IsNull())
    {
        if (!value["DeletePolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAttribute.DeletePolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletePolicy = string(value["DeletePolicy"].GetString());
        m_deletePolicyHasBeenSet = true;
    }

    if (value.HasMember("InternetServiceProvider") && !value["InternetServiceProvider"].IsNull())
    {
        if (!value["InternetServiceProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAttribute.InternetServiceProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetServiceProvider = string(value["InternetServiceProvider"].GetString());
        m_internetServiceProviderHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EipAttribute.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deletePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_internetServiceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetServiceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

}


string EipAttribute::GetDeletePolicy() const
{
    return m_deletePolicy;
}

void EipAttribute::SetDeletePolicy(const string& _deletePolicy)
{
    m_deletePolicy = _deletePolicy;
    m_deletePolicyHasBeenSet = true;
}

bool EipAttribute::DeletePolicyHasBeenSet() const
{
    return m_deletePolicyHasBeenSet;
}

string EipAttribute::GetInternetServiceProvider() const
{
    return m_internetServiceProvider;
}

void EipAttribute::SetInternetServiceProvider(const string& _internetServiceProvider)
{
    m_internetServiceProvider = _internetServiceProvider;
    m_internetServiceProviderHasBeenSet = true;
}

bool EipAttribute::InternetServiceProviderHasBeenSet() const
{
    return m_internetServiceProviderHasBeenSet;
}

uint64_t EipAttribute::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void EipAttribute::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool EipAttribute::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

