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

#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeCloudMusicPurchasedRequest::DescribeCloudMusicPurchasedRequest() :
    m_authInfoIdHasBeenSet(false)
{
}

string DescribeCloudMusicPurchasedRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_authInfoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfoId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authInfoId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudMusicPurchasedRequest::GetAuthInfoId() const
{
    return m_authInfoId;
}

void DescribeCloudMusicPurchasedRequest::SetAuthInfoId(const string& _authInfoId)
{
    m_authInfoId = _authInfoId;
    m_authInfoIdHasBeenSet = true;
}

bool DescribeCloudMusicPurchasedRequest::AuthInfoIdHasBeenSet() const
{
    return m_authInfoIdHasBeenSet;
}


