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

#include <tencentcloud/cms/v20190321/model/MessageCommonGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

MessageCommonGjh::MessageCommonGjh() :
    m_strPasswordHasBeenSet(false),
    m_uiAppIDHasBeenSet(false),
    m_uiAppSceneIDHasBeenSet(false),
    m_uiSeqHasBeenSet(false)
{
}

CoreInternalOutcome MessageCommonGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StrPassword") && !value["StrPassword"].IsNull())
    {
        if (!value["StrPassword"].IsString())
        {
            return CoreInternalOutcome(Error("response `MessageCommonGjh.StrPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strPassword = string(value["StrPassword"].GetString());
        m_strPasswordHasBeenSet = true;
    }

    if (value.HasMember("UiAppID") && !value["UiAppID"].IsNull())
    {
        if (!value["UiAppID"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MessageCommonGjh.UiAppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uiAppID = value["UiAppID"].GetInt64();
        m_uiAppIDHasBeenSet = true;
    }

    if (value.HasMember("UiAppSceneID") && !value["UiAppSceneID"].IsNull())
    {
        if (!value["UiAppSceneID"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MessageCommonGjh.UiAppSceneID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uiAppSceneID = value["UiAppSceneID"].GetInt64();
        m_uiAppSceneIDHasBeenSet = true;
    }

    if (value.HasMember("UiSeq") && !value["UiSeq"].IsNull())
    {
        if (!value["UiSeq"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MessageCommonGjh.UiSeq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uiSeq = value["UiSeq"].GetInt64();
        m_uiSeqHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageCommonGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_strPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_uiAppIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UiAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uiAppID, allocator);
    }

    if (m_uiAppSceneIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UiAppSceneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uiAppSceneID, allocator);
    }

    if (m_uiSeqHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UiSeq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uiSeq, allocator);
    }

}


string MessageCommonGjh::GetStrPassword() const
{
    return m_strPassword;
}

void MessageCommonGjh::SetStrPassword(const string& _strPassword)
{
    m_strPassword = _strPassword;
    m_strPasswordHasBeenSet = true;
}

bool MessageCommonGjh::StrPasswordHasBeenSet() const
{
    return m_strPasswordHasBeenSet;
}

int64_t MessageCommonGjh::GetUiAppID() const
{
    return m_uiAppID;
}

void MessageCommonGjh::SetUiAppID(const int64_t& _uiAppID)
{
    m_uiAppID = _uiAppID;
    m_uiAppIDHasBeenSet = true;
}

bool MessageCommonGjh::UiAppIDHasBeenSet() const
{
    return m_uiAppIDHasBeenSet;
}

int64_t MessageCommonGjh::GetUiAppSceneID() const
{
    return m_uiAppSceneID;
}

void MessageCommonGjh::SetUiAppSceneID(const int64_t& _uiAppSceneID)
{
    m_uiAppSceneID = _uiAppSceneID;
    m_uiAppSceneIDHasBeenSet = true;
}

bool MessageCommonGjh::UiAppSceneIDHasBeenSet() const
{
    return m_uiAppSceneIDHasBeenSet;
}

int64_t MessageCommonGjh::GetUiSeq() const
{
    return m_uiSeq;
}

void MessageCommonGjh::SetUiSeq(const int64_t& _uiSeq)
{
    m_uiSeq = _uiSeq;
    m_uiSeqHasBeenSet = true;
}

bool MessageCommonGjh::UiSeqHasBeenSet() const
{
    return m_uiSeqHasBeenSet;
}

