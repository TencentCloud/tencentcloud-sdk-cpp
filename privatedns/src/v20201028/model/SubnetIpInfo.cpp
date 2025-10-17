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

#include <tencentcloud/privatedns/v20201028/model/SubnetIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

SubnetIpInfo::SubnetIpInfo() :
    m_subnetIdHasBeenSet(false),
    m_subnetVipHasBeenSet(false)
{
}

CoreInternalOutcome SubnetIpInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetIpInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetVip") && !value["SubnetVip"].IsNull())
    {
        if (!value["SubnetVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetIpInfo.SubnetVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetVip = string(value["SubnetVip"].GetString());
        m_subnetVipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetIpInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetVip.c_str(), allocator).Move(), allocator);
    }

}


string SubnetIpInfo::GetSubnetId() const
{
    return m_subnetId;
}

void SubnetIpInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SubnetIpInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SubnetIpInfo::GetSubnetVip() const
{
    return m_subnetVip;
}

void SubnetIpInfo::SetSubnetVip(const string& _subnetVip)
{
    m_subnetVip = _subnetVip;
    m_subnetVipHasBeenSet = true;
}

bool SubnetIpInfo::SubnetVipHasBeenSet() const
{
    return m_subnetVipHasBeenSet;
}

