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

#include <tencentcloud/zj/v20190121/model/DescribeMmsInstanceInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

DescribeMmsInstanceInfoRequest::DescribeMmsInstanceInfoRequest() :
    m_licenseHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string DescribeMmsInstanceInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMmsInstanceInfoRequest::GetLicense() const
{
    return m_license;
}

void DescribeMmsInstanceInfoRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool DescribeMmsInstanceInfoRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t DescribeMmsInstanceInfoRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeMmsInstanceInfoRequest::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeMmsInstanceInfoRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


