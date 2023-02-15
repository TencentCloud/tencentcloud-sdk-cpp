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

#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

CreateBPFakeURLsRequest::CreateBPFakeURLsRequest() :
    m_fakeURLsHasBeenSet(false)
{
}

string CreateBPFakeURLsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fakeURLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeURLs.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBPFakeURLsRequest::GetFakeURLs() const
{
    return m_fakeURLs;
}

void CreateBPFakeURLsRequest::SetFakeURLs(const string& _fakeURLs)
{
    m_fakeURLs = _fakeURLs;
    m_fakeURLsHasBeenSet = true;
}

bool CreateBPFakeURLsRequest::FakeURLsHasBeenSet() const
{
    return m_fakeURLsHasBeenSet;
}


