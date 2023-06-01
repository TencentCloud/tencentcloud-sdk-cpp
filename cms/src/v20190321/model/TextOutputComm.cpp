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

#include <tencentcloud/cms/v20190321/model/TextOutputComm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

TextOutputComm::TextOutputComm() :
    m_bUCtrlIDHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome TextOutputComm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BUCtrlID") && !value["BUCtrlID"].IsNull())
    {
        if (!value["BUCtrlID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputComm.BUCtrlID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bUCtrlID = value["BUCtrlID"].GetInt64();
        m_bUCtrlIDHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputComm.SendTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = value["SendTime"].GetInt64();
        m_sendTimeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputComm.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputComm.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextOutputComm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bUCtrlIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BUCtrlID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bUCtrlID, allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendTime, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

}


int64_t TextOutputComm::GetBUCtrlID() const
{
    return m_bUCtrlID;
}

void TextOutputComm::SetBUCtrlID(const int64_t& _bUCtrlID)
{
    m_bUCtrlID = _bUCtrlID;
    m_bUCtrlIDHasBeenSet = true;
}

bool TextOutputComm::BUCtrlIDHasBeenSet() const
{
    return m_bUCtrlIDHasBeenSet;
}

int64_t TextOutputComm::GetSendTime() const
{
    return m_sendTime;
}

void TextOutputComm::SetSendTime(const int64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool TextOutputComm::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

int64_t TextOutputComm::GetAppID() const
{
    return m_appID;
}

void TextOutputComm::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool TextOutputComm::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

int64_t TextOutputComm::GetUin() const
{
    return m_uin;
}

void TextOutputComm::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TextOutputComm::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

