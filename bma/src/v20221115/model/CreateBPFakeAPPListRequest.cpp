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

#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

CreateBPFakeAPPListRequest::CreateBPFakeAPPListRequest() :
    m_fakeAPPsHasBeenSet(false)
{
}

string CreateBPFakeAPPListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fakeAPPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeAPPs.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBPFakeAPPListRequest::GetFakeAPPs() const
{
    return m_fakeAPPs;
}

void CreateBPFakeAPPListRequest::SetFakeAPPs(const string& _fakeAPPs)
{
    m_fakeAPPs = _fakeAPPs;
    m_fakeAPPsHasBeenSet = true;
}

bool CreateBPFakeAPPListRequest::FakeAPPsHasBeenSet() const
{
    return m_fakeAPPsHasBeenSet;
}


