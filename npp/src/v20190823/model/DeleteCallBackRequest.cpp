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

#include <tencentcloud/npp/v20190823/model/DeleteCallBackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

DeleteCallBackRequest::DeleteCallBackRequest() :
    m_bizAppIdHasBeenSet(false),
    m_callIdHasBeenSet(false),
    m_cancelFlagHasBeenSet(false)
{
}

string DeleteCallBackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_callIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callId.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cancelFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCallBackRequest::GetBizAppId() const
{
    return m_bizAppId;
}

void DeleteCallBackRequest::SetBizAppId(const string& _bizAppId)
{
    m_bizAppId = _bizAppId;
    m_bizAppIdHasBeenSet = true;
}

bool DeleteCallBackRequest::BizAppIdHasBeenSet() const
{
    return m_bizAppIdHasBeenSet;
}

string DeleteCallBackRequest::GetCallId() const
{
    return m_callId;
}

void DeleteCallBackRequest::SetCallId(const string& _callId)
{
    m_callId = _callId;
    m_callIdHasBeenSet = true;
}

bool DeleteCallBackRequest::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string DeleteCallBackRequest::GetCancelFlag() const
{
    return m_cancelFlag;
}

void DeleteCallBackRequest::SetCancelFlag(const string& _cancelFlag)
{
    m_cancelFlag = _cancelFlag;
    m_cancelFlagHasBeenSet = true;
}

bool DeleteCallBackRequest::CancelFlagHasBeenSet() const
{
    return m_cancelFlagHasBeenSet;
}


