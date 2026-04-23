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

#include <tencentcloud/sms/v20210111/model/SendMultiGlobalSmsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

SendMultiGlobalSmsRequest::SendMultiGlobalSmsRequest() :
    m_smsSdkAppIdHasBeenSet(false),
    m_multiSmsInfoSetHasBeenSet(false)
{
}

string SendMultiGlobalSmsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_smsSdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_multiSmsInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSmsInfoSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiSmsInfoSet.begin(); itr != m_multiSmsInfoSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendMultiGlobalSmsRequest::GetSmsSdkAppId() const
{
    return m_smsSdkAppId;
}

void SendMultiGlobalSmsRequest::SetSmsSdkAppId(const string& _smsSdkAppId)
{
    m_smsSdkAppId = _smsSdkAppId;
    m_smsSdkAppIdHasBeenSet = true;
}

bool SendMultiGlobalSmsRequest::SmsSdkAppIdHasBeenSet() const
{
    return m_smsSdkAppIdHasBeenSet;
}

vector<MultiSmsInfo> SendMultiGlobalSmsRequest::GetMultiSmsInfoSet() const
{
    return m_multiSmsInfoSet;
}

void SendMultiGlobalSmsRequest::SetMultiSmsInfoSet(const vector<MultiSmsInfo>& _multiSmsInfoSet)
{
    m_multiSmsInfoSet = _multiSmsInfoSet;
    m_multiSmsInfoSetHasBeenSet = true;
}

bool SendMultiGlobalSmsRequest::MultiSmsInfoSetHasBeenSet() const
{
    return m_multiSmsInfoSetHasBeenSet;
}


