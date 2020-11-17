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

#include <tencentcloud/zj/v20190121/model/DelCrowdPackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

DelCrowdPackRequest::DelCrowdPackRequest() :
    m_licenseHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string DelCrowdPackRequest::ToJsonString() const
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

    if (m_iDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DelCrowdPackRequest::GetLicense() const
{
    return m_license;
}

void DelCrowdPackRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool DelCrowdPackRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

uint64_t DelCrowdPackRequest::GetID() const
{
    return m_iD;
}

void DelCrowdPackRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DelCrowdPackRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


