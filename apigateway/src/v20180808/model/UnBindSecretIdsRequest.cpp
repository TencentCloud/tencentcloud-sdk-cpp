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

#include <tencentcloud/apigateway/v20180808/model/UnBindSecretIdsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

UnBindSecretIdsRequest::UnBindSecretIdsRequest() :
    m_usagePlanIdHasBeenSet(false),
    m_accessKeyIdsHasBeenSet(false)
{
}

string UnBindSecretIdsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_usagePlanIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsagePlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_usagePlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_accessKeyIds.begin(); itr != m_accessKeyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnBindSecretIdsRequest::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void UnBindSecretIdsRequest::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool UnBindSecretIdsRequest::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

vector<string> UnBindSecretIdsRequest::GetAccessKeyIds() const
{
    return m_accessKeyIds;
}

void UnBindSecretIdsRequest::SetAccessKeyIds(const vector<string>& _accessKeyIds)
{
    m_accessKeyIds = _accessKeyIds;
    m_accessKeyIdsHasBeenSet = true;
}

bool UnBindSecretIdsRequest::AccessKeyIdsHasBeenSet() const
{
    return m_accessKeyIdsHasBeenSet;
}


