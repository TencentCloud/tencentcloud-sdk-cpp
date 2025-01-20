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

#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeIpGeolocationInfosRequest::DescribeIpGeolocationInfosRequest() :
    m_addressIpsHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

string DescribeIpGeolocationInfosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressIps.begin(); itr != m_addressIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fields.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeIpGeolocationInfosRequest::GetAddressIps() const
{
    return m_addressIps;
}

void DescribeIpGeolocationInfosRequest::SetAddressIps(const vector<string>& _addressIps)
{
    m_addressIps = _addressIps;
    m_addressIpsHasBeenSet = true;
}

bool DescribeIpGeolocationInfosRequest::AddressIpsHasBeenSet() const
{
    return m_addressIpsHasBeenSet;
}

IpField DescribeIpGeolocationInfosRequest::GetFields() const
{
    return m_fields;
}

void DescribeIpGeolocationInfosRequest::SetFields(const IpField& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool DescribeIpGeolocationInfosRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}


