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

#include <tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ConsumeCustomMFATokenRequest::ConsumeCustomMFATokenRequest() :
    m_mFATokenHasBeenSet(false)
{
}

string ConsumeCustomMFATokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mFATokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MFAToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mFAToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ConsumeCustomMFATokenRequest::GetMFAToken() const
{
    return m_mFAToken;
}

void ConsumeCustomMFATokenRequest::SetMFAToken(const string& _mFAToken)
{
    m_mFAToken = _mFAToken;
    m_mFATokenHasBeenSet = true;
}

bool ConsumeCustomMFATokenRequest::MFATokenHasBeenSet() const
{
    return m_mFATokenHasBeenSet;
}


