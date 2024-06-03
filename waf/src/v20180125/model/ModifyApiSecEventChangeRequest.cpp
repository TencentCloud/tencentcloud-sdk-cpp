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

#include <tencentcloud/waf/v20180125/model/ModifyApiSecEventChangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyApiSecEventChangeRequest::ModifyApiSecEventChangeRequest() :
    m_modeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_eventIdListHasBeenSet(false),
    m_apiNameListHasBeenSet(false),
    m_isDeleteHasBeenSet(false),
    m_updateApiRemarkHasBeenSet(false)
{
}

string ModifyApiSecEventChangeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIdList.begin(); itr != m_eventIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiNameList.begin(); itr != m_apiNameList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelete, allocator);
    }

    if (m_updateApiRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateApiRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateApiRemark, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiSecEventChangeRequest::GetMode() const
{
    return m_mode;
}

void ModifyApiSecEventChangeRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyApiSecEventChangeRequest::GetUserName() const
{
    return m_userName;
}

void ModifyApiSecEventChangeRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyApiSecEventChangeRequest::GetRemark() const
{
    return m_remark;
}

void ModifyApiSecEventChangeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ModifyApiSecEventChangeRequest::GetEventIdList() const
{
    return m_eventIdList;
}

void ModifyApiSecEventChangeRequest::SetEventIdList(const vector<string>& _eventIdList)
{
    m_eventIdList = _eventIdList;
    m_eventIdListHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::EventIdListHasBeenSet() const
{
    return m_eventIdListHasBeenSet;
}

vector<ApiSecKey> ModifyApiSecEventChangeRequest::GetApiNameList() const
{
    return m_apiNameList;
}

void ModifyApiSecEventChangeRequest::SetApiNameList(const vector<ApiSecKey>& _apiNameList)
{
    m_apiNameList = _apiNameList;
    m_apiNameListHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::ApiNameListHasBeenSet() const
{
    return m_apiNameListHasBeenSet;
}

bool ModifyApiSecEventChangeRequest::GetIsDelete() const
{
    return m_isDelete;
}

void ModifyApiSecEventChangeRequest::SetIsDelete(const bool& _isDelete)
{
    m_isDelete = _isDelete;
    m_isDeleteHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::IsDeleteHasBeenSet() const
{
    return m_isDeleteHasBeenSet;
}

bool ModifyApiSecEventChangeRequest::GetUpdateApiRemark() const
{
    return m_updateApiRemark;
}

void ModifyApiSecEventChangeRequest::SetUpdateApiRemark(const bool& _updateApiRemark)
{
    m_updateApiRemark = _updateApiRemark;
    m_updateApiRemarkHasBeenSet = true;
}

bool ModifyApiSecEventChangeRequest::UpdateApiRemarkHasBeenSet() const
{
    return m_updateApiRemarkHasBeenSet;
}


