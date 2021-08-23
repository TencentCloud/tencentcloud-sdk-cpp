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

#include <tencentcloud/lighthouse/v20200324/model/InternetAccessible.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InternetAccessible::InternetAccessible() :
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_publicIpAssignedHasBeenSet(false)
{
}

CoreInternalOutcome InternetAccessible::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAssigned") && !value["PublicIpAssigned"].IsNull())
    {
        if (!value["PublicIpAssigned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.PublicIpAssigned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAssigned = value["PublicIpAssigned"].GetBool();
        m_publicIpAssignedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetAccessible::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_publicIpAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpAssigned, allocator);
    }

}


string InternetAccessible::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void InternetAccessible::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool InternetAccessible::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

int64_t InternetAccessible::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void InternetAccessible::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool InternetAccessible::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

bool InternetAccessible::GetPublicIpAssigned() const
{
    return m_publicIpAssigned;
}

void InternetAccessible::SetPublicIpAssigned(const bool& _publicIpAssigned)
{
    m_publicIpAssigned = _publicIpAssigned;
    m_publicIpAssignedHasBeenSet = true;
}

bool InternetAccessible::PublicIpAssignedHasBeenSet() const
{
    return m_publicIpAssignedHasBeenSet;
}

