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

#include <tencentcloud/ess/v20201111/model/SuccessCreateStaffData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SuccessCreateStaffData::SuccessCreateStaffData() :
    m_displayNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_weworkOpenIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome SuccessCreateStaffData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCreateStaffData.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCreateStaffData.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCreateStaffData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCreateStaffData.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("WeworkOpenId") && !value["WeworkOpenId"].IsNull())
    {
        if (!value["WeworkOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCreateStaffData.WeworkOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weworkOpenId = string(value["WeworkOpenId"].GetString());
        m_weworkOpenIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCreateStaffData.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuccessCreateStaffData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_weworkOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeworkOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weworkOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string SuccessCreateStaffData::GetDisplayName() const
{
    return m_displayName;
}

void SuccessCreateStaffData::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool SuccessCreateStaffData::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string SuccessCreateStaffData::GetMobile() const
{
    return m_mobile;
}

void SuccessCreateStaffData::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool SuccessCreateStaffData::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string SuccessCreateStaffData::GetUserId() const
{
    return m_userId;
}

void SuccessCreateStaffData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SuccessCreateStaffData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SuccessCreateStaffData::GetNote() const
{
    return m_note;
}

void SuccessCreateStaffData::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool SuccessCreateStaffData::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string SuccessCreateStaffData::GetWeworkOpenId() const
{
    return m_weworkOpenId;
}

void SuccessCreateStaffData::SetWeworkOpenId(const string& _weworkOpenId)
{
    m_weworkOpenId = _weworkOpenId;
    m_weworkOpenIdHasBeenSet = true;
}

bool SuccessCreateStaffData::WeworkOpenIdHasBeenSet() const
{
    return m_weworkOpenIdHasBeenSet;
}

string SuccessCreateStaffData::GetUrl() const
{
    return m_url;
}

void SuccessCreateStaffData::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SuccessCreateStaffData::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

