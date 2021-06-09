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

#include <tencentcloud/npp/v20190823/model/DelVirtualNumRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

DelVirtualNumRequest::DelVirtualNumRequest() :
    m_bizAppIdHasBeenSet(false),
    m_bindIdHasBeenSet(false),
    m_bizIdHasBeenSet(false)
{
}

string DelVirtualNumRequest::ToJsonString() const
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

    if (m_bindIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DelVirtualNumRequest::GetBizAppId() const
{
    return m_bizAppId;
}

void DelVirtualNumRequest::SetBizAppId(const string& _bizAppId)
{
    m_bizAppId = _bizAppId;
    m_bizAppIdHasBeenSet = true;
}

bool DelVirtualNumRequest::BizAppIdHasBeenSet() const
{
    return m_bizAppIdHasBeenSet;
}

string DelVirtualNumRequest::GetBindId() const
{
    return m_bindId;
}

void DelVirtualNumRequest::SetBindId(const string& _bindId)
{
    m_bindId = _bindId;
    m_bindIdHasBeenSet = true;
}

bool DelVirtualNumRequest::BindIdHasBeenSet() const
{
    return m_bindIdHasBeenSet;
}

string DelVirtualNumRequest::GetBizId() const
{
    return m_bizId;
}

void DelVirtualNumRequest::SetBizId(const string& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool DelVirtualNumRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}


