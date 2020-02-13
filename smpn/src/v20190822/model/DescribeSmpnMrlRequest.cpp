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

#include <tencentcloud/smpn/v20190822/model/DescribeSmpnMrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Smpn::V20190822::Model;
using namespace rapidjson;
using namespace std;

DescribeSmpnMrlRequest::DescribeSmpnMrlRequest() :
    m_requestDataHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

string DescribeSmpnMrlRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_requestData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


MRLRequest DescribeSmpnMrlRequest::GetRequestData() const
{
    return m_requestData;
}

void DescribeSmpnMrlRequest::SetRequestData(const MRLRequest& _requestData)
{
    m_requestData = _requestData;
    m_requestDataHasBeenSet = true;
}

bool DescribeSmpnMrlRequest::RequestDataHasBeenSet() const
{
    return m_requestDataHasBeenSet;
}

string DescribeSmpnMrlRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeSmpnMrlRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeSmpnMrlRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}


