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

#include <tencentcloud/ic/v20190307/model/SmsRet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

SmsRet::SmsRet() :
    m_codeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_iccidHasBeenSet(false),
    m_sidHasBeenSet(false)
{
}

CoreInternalOutcome SmsRet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsRet.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsRet.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Iccid") && !value["Iccid"].IsNull())
    {
        if (!value["Iccid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsRet.Iccid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iccid = string(value["Iccid"].GetString());
        m_iccidHasBeenSet = true;
    }

    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsRet.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsRet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

}


string SmsRet::GetCode() const
{
    return m_code;
}

void SmsRet::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool SmsRet::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string SmsRet::GetMsg() const
{
    return m_msg;
}

void SmsRet::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool SmsRet::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string SmsRet::GetIccid() const
{
    return m_iccid;
}

void SmsRet::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool SmsRet::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

string SmsRet::GetSid() const
{
    return m_sid;
}

void SmsRet::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SmsRet::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

