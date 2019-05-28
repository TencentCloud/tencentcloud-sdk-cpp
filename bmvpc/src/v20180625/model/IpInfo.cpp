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

#include <tencentcloud/bmvpc/v20180625/model/IpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace rapidjson;
using namespace std;

IpInfo::IpInfo() :
    m_subnetIdHasBeenSet(false),
    m_ipsHasBeenSet(false)
{
}

CoreInternalOutcome IpInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `IpInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Ips") && !value["Ips"].IsNull())
    {
        if (!value["Ips"].IsArray())
            return CoreInternalOutcome(Error("response `IpInfo.Ips` is not array type"));

        const Value &tmpValue = value["Ips"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ips.push_back((*itr).GetString());
        }
        m_ipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IpInfo::GetSubnetId() const
{
    return m_subnetId;
}

void IpInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool IpInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> IpInfo::GetIps() const
{
    return m_ips;
}

void IpInfo::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool IpInfo::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

