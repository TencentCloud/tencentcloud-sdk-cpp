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

#include <tencentcloud/cms/v20190321/model/ContentMsgGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

ContentMsgGjh::ContentMsgGjh() :
    m_cIPTypeHasBeenSet(false),
    m_strMsgIPHasBeenSet(false),
    m_strMsgIPv6HasBeenSet(false),
    m_uiPostTimeHasBeenSet(false)
{
}

CoreInternalOutcome ContentMsgGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CIPType") && !value["CIPType"].IsNull())
    {
        if (!value["CIPType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContentMsgGjh.CIPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cIPType = string(value["CIPType"].GetString());
        m_cIPTypeHasBeenSet = true;
    }

    if (value.HasMember("StrMsgIP") && !value["StrMsgIP"].IsNull())
    {
        if (!value["StrMsgIP"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContentMsgGjh.StrMsgIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strMsgIP = string(value["StrMsgIP"].GetString());
        m_strMsgIPHasBeenSet = true;
    }

    if (value.HasMember("StrMsgIPv6") && !value["StrMsgIPv6"].IsNull())
    {
        if (!value["StrMsgIPv6"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContentMsgGjh.StrMsgIPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strMsgIPv6 = string(value["StrMsgIPv6"].GetString());
        m_strMsgIPv6HasBeenSet = true;
    }

    if (value.HasMember("UiPostTime") && !value["UiPostTime"].IsNull())
    {
        if (!value["UiPostTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContentMsgGjh.UiPostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uiPostTime = value["UiPostTime"].GetInt64();
        m_uiPostTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentMsgGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cIPTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CIPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cIPType.c_str(), allocator).Move(), allocator);
    }

    if (m_strMsgIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrMsgIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strMsgIP.c_str(), allocator).Move(), allocator);
    }

    if (m_strMsgIPv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrMsgIPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strMsgIPv6.c_str(), allocator).Move(), allocator);
    }

    if (m_uiPostTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UiPostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uiPostTime, allocator);
    }

}


string ContentMsgGjh::GetCIPType() const
{
    return m_cIPType;
}

void ContentMsgGjh::SetCIPType(const string& _cIPType)
{
    m_cIPType = _cIPType;
    m_cIPTypeHasBeenSet = true;
}

bool ContentMsgGjh::CIPTypeHasBeenSet() const
{
    return m_cIPTypeHasBeenSet;
}

string ContentMsgGjh::GetStrMsgIP() const
{
    return m_strMsgIP;
}

void ContentMsgGjh::SetStrMsgIP(const string& _strMsgIP)
{
    m_strMsgIP = _strMsgIP;
    m_strMsgIPHasBeenSet = true;
}

bool ContentMsgGjh::StrMsgIPHasBeenSet() const
{
    return m_strMsgIPHasBeenSet;
}

string ContentMsgGjh::GetStrMsgIPv6() const
{
    return m_strMsgIPv6;
}

void ContentMsgGjh::SetStrMsgIPv6(const string& _strMsgIPv6)
{
    m_strMsgIPv6 = _strMsgIPv6;
    m_strMsgIPv6HasBeenSet = true;
}

bool ContentMsgGjh::StrMsgIPv6HasBeenSet() const
{
    return m_strMsgIPv6HasBeenSet;
}

int64_t ContentMsgGjh::GetUiPostTime() const
{
    return m_uiPostTime;
}

void ContentMsgGjh::SetUiPostTime(const int64_t& _uiPostTime)
{
    m_uiPostTime = _uiPostTime;
    m_uiPostTimeHasBeenSet = true;
}

bool ContentMsgGjh::UiPostTimeHasBeenSet() const
{
    return m_uiPostTimeHasBeenSet;
}

