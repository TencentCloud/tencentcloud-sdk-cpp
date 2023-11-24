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

#include <tencentcloud/scf/v20180416/model/IntranetConfigOut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

IntranetConfigOut::IntranetConfigOut() :
    m_ipFixedHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

CoreInternalOutcome IntranetConfigOut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpFixed") && !value["IpFixed"].IsNull())
    {
        if (!value["IpFixed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntranetConfigOut.IpFixed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipFixed = string(value["IpFixed"].GetString());
        m_ipFixedHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntranetConfigOut.IpAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["IpAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipAddress.push_back((*itr).GetString());
        }
        m_ipAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntranetConfigOut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipFixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipFixed.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipAddress.begin(); itr != m_ipAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IntranetConfigOut::GetIpFixed() const
{
    return m_ipFixed;
}

void IntranetConfigOut::SetIpFixed(const string& _ipFixed)
{
    m_ipFixed = _ipFixed;
    m_ipFixedHasBeenSet = true;
}

bool IntranetConfigOut::IpFixedHasBeenSet() const
{
    return m_ipFixedHasBeenSet;
}

vector<string> IntranetConfigOut::GetIpAddress() const
{
    return m_ipAddress;
}

void IntranetConfigOut::SetIpAddress(const vector<string>& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool IntranetConfigOut::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

