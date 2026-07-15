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

#include <tencentcloud/vod/v20180717/model/UpdateAigcApiTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

UpdateAigcApiTokenRequest::UpdateAigcApiTokenRequest() :
    m_subAppIdHasBeenSet(false),
    m_apiTokenHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string UpdateAigcApiTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_apiTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiToken.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateAigcApiTokenRequest::GetSubAppId() const
{
    return m_subAppId;
}

void UpdateAigcApiTokenRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool UpdateAigcApiTokenRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string UpdateAigcApiTokenRequest::GetApiToken() const
{
    return m_apiToken;
}

void UpdateAigcApiTokenRequest::SetApiToken(const string& _apiToken)
{
    m_apiToken = _apiToken;
    m_apiTokenHasBeenSet = true;
}

bool UpdateAigcApiTokenRequest::ApiTokenHasBeenSet() const
{
    return m_apiTokenHasBeenSet;
}

string UpdateAigcApiTokenRequest::GetActionType() const
{
    return m_actionType;
}

void UpdateAigcApiTokenRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool UpdateAigcApiTokenRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string UpdateAigcApiTokenRequest::GetExtInfo() const
{
    return m_extInfo;
}

void UpdateAigcApiTokenRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool UpdateAigcApiTokenRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


