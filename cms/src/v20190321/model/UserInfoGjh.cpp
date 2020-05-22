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

#include <tencentcloud/cms/v20190321/model/UserInfoGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

UserInfoGjh::UserInfoGjh() :
    m_strDescHasBeenSet(false),
    m_strHeadUrlHasBeenSet(false),
    m_strNickHasBeenSet(false),
    m_strUinHasBeenSet(false),
    m_uiAcntTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserInfoGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StrDesc") && !value["StrDesc"].IsNull())
    {
        if (!value["StrDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfoGjh.StrDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strDesc = string(value["StrDesc"].GetString());
        m_strDescHasBeenSet = true;
    }

    if (value.HasMember("StrHeadUrl") && !value["StrHeadUrl"].IsNull())
    {
        if (!value["StrHeadUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfoGjh.StrHeadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strHeadUrl = string(value["StrHeadUrl"].GetString());
        m_strHeadUrlHasBeenSet = true;
    }

    if (value.HasMember("StrNick") && !value["StrNick"].IsNull())
    {
        if (!value["StrNick"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfoGjh.StrNick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strNick = string(value["StrNick"].GetString());
        m_strNickHasBeenSet = true;
    }

    if (value.HasMember("StrUin") && !value["StrUin"].IsNull())
    {
        if (!value["StrUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfoGjh.StrUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strUin = string(value["StrUin"].GetString());
        m_strUinHasBeenSet = true;
    }

    if (value.HasMember("UiAcntType") && !value["UiAcntType"].IsNull())
    {
        if (!value["UiAcntType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UserInfoGjh.UiAcntType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uiAcntType = value["UiAcntType"].GetInt64();
        m_uiAcntTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfoGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_strDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_strHeadUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrHeadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strHeadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_strNickHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrNick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strNick.c_str(), allocator).Move(), allocator);
    }

    if (m_strUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strUin.c_str(), allocator).Move(), allocator);
    }

    if (m_uiAcntTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UiAcntType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uiAcntType, allocator);
    }

}


string UserInfoGjh::GetStrDesc() const
{
    return m_strDesc;
}

void UserInfoGjh::SetStrDesc(const string& _strDesc)
{
    m_strDesc = _strDesc;
    m_strDescHasBeenSet = true;
}

bool UserInfoGjh::StrDescHasBeenSet() const
{
    return m_strDescHasBeenSet;
}

string UserInfoGjh::GetStrHeadUrl() const
{
    return m_strHeadUrl;
}

void UserInfoGjh::SetStrHeadUrl(const string& _strHeadUrl)
{
    m_strHeadUrl = _strHeadUrl;
    m_strHeadUrlHasBeenSet = true;
}

bool UserInfoGjh::StrHeadUrlHasBeenSet() const
{
    return m_strHeadUrlHasBeenSet;
}

string UserInfoGjh::GetStrNick() const
{
    return m_strNick;
}

void UserInfoGjh::SetStrNick(const string& _strNick)
{
    m_strNick = _strNick;
    m_strNickHasBeenSet = true;
}

bool UserInfoGjh::StrNickHasBeenSet() const
{
    return m_strNickHasBeenSet;
}

string UserInfoGjh::GetStrUin() const
{
    return m_strUin;
}

void UserInfoGjh::SetStrUin(const string& _strUin)
{
    m_strUin = _strUin;
    m_strUinHasBeenSet = true;
}

bool UserInfoGjh::StrUinHasBeenSet() const
{
    return m_strUinHasBeenSet;
}

int64_t UserInfoGjh::GetUiAcntType() const
{
    return m_uiAcntType;
}

void UserInfoGjh::SetUiAcntType(const int64_t& _uiAcntType)
{
    m_uiAcntType = _uiAcntType;
    m_uiAcntTypeHasBeenSet = true;
}

bool UserInfoGjh::UiAcntTypeHasBeenSet() const
{
    return m_uiAcntTypeHasBeenSet;
}

