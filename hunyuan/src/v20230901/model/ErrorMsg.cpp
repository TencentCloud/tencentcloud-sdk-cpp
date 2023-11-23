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

#include <tencentcloud/hunyuan/v20230901/model/ErrorMsg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ErrorMsg::ErrorMsg() :
    m_msgHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

CoreInternalOutcome ErrorMsg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorMsg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

}


string ErrorMsg::GetMsg() const
{
    return m_msg;
}

void ErrorMsg::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool ErrorMsg::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

int64_t ErrorMsg::GetCode() const
{
    return m_code;
}

void ErrorMsg::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ErrorMsg::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

