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

#include <tencentcloud/cms/v20190321/model/MediaInfoTypeGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

MediaInfoTypeGjh::MediaInfoTypeGjh() :
    m_strActionHasBeenSet(false),
    m_strContentHasBeenSet(false),
    m_strFileIDHasBeenSet(false),
    m_strMD5HasBeenSet(false),
    m_strShaHasBeenSet(false),
    m_strTitleHasBeenSet(false),
    m_strUrlHasBeenSet(false),
    m_uiSizeHasBeenSet(false)
{
}

CoreInternalOutcome MediaInfoTypeGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StrAction") && !value["StrAction"].IsNull())
    {
        if (!value["StrAction"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strAction = string(value["StrAction"].GetString());
        m_strActionHasBeenSet = true;
    }

    if (value.HasMember("StrContent") && !value["StrContent"].IsNull())
    {
        if (!value["StrContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strContent = string(value["StrContent"].GetString());
        m_strContentHasBeenSet = true;
    }

    if (value.HasMember("StrFileID") && !value["StrFileID"].IsNull())
    {
        if (!value["StrFileID"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrFileID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strFileID = string(value["StrFileID"].GetString());
        m_strFileIDHasBeenSet = true;
    }

    if (value.HasMember("StrMD5") && !value["StrMD5"].IsNull())
    {
        if (!value["StrMD5"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strMD5 = string(value["StrMD5"].GetString());
        m_strMD5HasBeenSet = true;
    }

    if (value.HasMember("StrSha") && !value["StrSha"].IsNull())
    {
        if (!value["StrSha"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrSha` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strSha = string(value["StrSha"].GetString());
        m_strShaHasBeenSet = true;
    }

    if (value.HasMember("StrTitle") && !value["StrTitle"].IsNull())
    {
        if (!value["StrTitle"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strTitle = string(value["StrTitle"].GetString());
        m_strTitleHasBeenSet = true;
    }

    if (value.HasMember("StrUrl") && !value["StrUrl"].IsNull())
    {
        if (!value["StrUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.StrUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strUrl = string(value["StrUrl"].GetString());
        m_strUrlHasBeenSet = true;
    }

    if (value.HasMember("UiSize") && !value["UiSize"].IsNull())
    {
        if (!value["UiSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaInfoTypeGjh.UiSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uiSize = value["UiSize"].GetInt64();
        m_uiSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaInfoTypeGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_strActionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strAction.c_str(), allocator).Move(), allocator);
    }

    if (m_strContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strContent.c_str(), allocator).Move(), allocator);
    }

    if (m_strFileIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrFileID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strFileID.c_str(), allocator).Move(), allocator);
    }

    if (m_strMD5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_strShaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrSha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strSha.c_str(), allocator).Move(), allocator);
    }

    if (m_strTitleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_strUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_uiSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UiSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uiSize, allocator);
    }

}


string MediaInfoTypeGjh::GetStrAction() const
{
    return m_strAction;
}

void MediaInfoTypeGjh::SetStrAction(const string& _strAction)
{
    m_strAction = _strAction;
    m_strActionHasBeenSet = true;
}

bool MediaInfoTypeGjh::StrActionHasBeenSet() const
{
    return m_strActionHasBeenSet;
}

string MediaInfoTypeGjh::GetStrContent() const
{
    return m_strContent;
}

void MediaInfoTypeGjh::SetStrContent(const string& _strContent)
{
    m_strContent = _strContent;
    m_strContentHasBeenSet = true;
}

bool MediaInfoTypeGjh::StrContentHasBeenSet() const
{
    return m_strContentHasBeenSet;
}

string MediaInfoTypeGjh::GetStrFileID() const
{
    return m_strFileID;
}

void MediaInfoTypeGjh::SetStrFileID(const string& _strFileID)
{
    m_strFileID = _strFileID;
    m_strFileIDHasBeenSet = true;
}

bool MediaInfoTypeGjh::StrFileIDHasBeenSet() const
{
    return m_strFileIDHasBeenSet;
}

string MediaInfoTypeGjh::GetStrMD5() const
{
    return m_strMD5;
}

void MediaInfoTypeGjh::SetStrMD5(const string& _strMD5)
{
    m_strMD5 = _strMD5;
    m_strMD5HasBeenSet = true;
}

bool MediaInfoTypeGjh::StrMD5HasBeenSet() const
{
    return m_strMD5HasBeenSet;
}

string MediaInfoTypeGjh::GetStrSha() const
{
    return m_strSha;
}

void MediaInfoTypeGjh::SetStrSha(const string& _strSha)
{
    m_strSha = _strSha;
    m_strShaHasBeenSet = true;
}

bool MediaInfoTypeGjh::StrShaHasBeenSet() const
{
    return m_strShaHasBeenSet;
}

string MediaInfoTypeGjh::GetStrTitle() const
{
    return m_strTitle;
}

void MediaInfoTypeGjh::SetStrTitle(const string& _strTitle)
{
    m_strTitle = _strTitle;
    m_strTitleHasBeenSet = true;
}

bool MediaInfoTypeGjh::StrTitleHasBeenSet() const
{
    return m_strTitleHasBeenSet;
}

string MediaInfoTypeGjh::GetStrUrl() const
{
    return m_strUrl;
}

void MediaInfoTypeGjh::SetStrUrl(const string& _strUrl)
{
    m_strUrl = _strUrl;
    m_strUrlHasBeenSet = true;
}

bool MediaInfoTypeGjh::StrUrlHasBeenSet() const
{
    return m_strUrlHasBeenSet;
}

int64_t MediaInfoTypeGjh::GetUiSize() const
{
    return m_uiSize;
}

void MediaInfoTypeGjh::SetUiSize(const int64_t& _uiSize)
{
    m_uiSize = _uiSize;
    m_uiSizeHasBeenSet = true;
}

bool MediaInfoTypeGjh::UiSizeHasBeenSet() const
{
    return m_uiSizeHasBeenSet;
}

