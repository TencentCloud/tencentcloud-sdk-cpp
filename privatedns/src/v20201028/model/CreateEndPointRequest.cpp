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

#include <tencentcloud/privatedns/v20201028/model/CreateEndPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateEndPointRequest::CreateEndPointRequest() :
    m_endPointNameHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_endPointRegionHasBeenSet(false),
    m_ipNumHasBeenSet(false)
{
}

string CreateEndPointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_ipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEndPointRequest::GetEndPointName() const
{
    return m_endPointName;
}

void CreateEndPointRequest::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool CreateEndPointRequest::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string CreateEndPointRequest::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void CreateEndPointRequest::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool CreateEndPointRequest::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

string CreateEndPointRequest::GetEndPointRegion() const
{
    return m_endPointRegion;
}

void CreateEndPointRequest::SetEndPointRegion(const string& _endPointRegion)
{
    m_endPointRegion = _endPointRegion;
    m_endPointRegionHasBeenSet = true;
}

bool CreateEndPointRequest::EndPointRegionHasBeenSet() const
{
    return m_endPointRegionHasBeenSet;
}

int64_t CreateEndPointRequest::GetIpNum() const
{
    return m_ipNum;
}

void CreateEndPointRequest::SetIpNum(const int64_t& _ipNum)
{
    m_ipNum = _ipNum;
    m_ipNumHasBeenSet = true;
}

bool CreateEndPointRequest::IpNumHasBeenSet() const
{
    return m_ipNumHasBeenSet;
}


