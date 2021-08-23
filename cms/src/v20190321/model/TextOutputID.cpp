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

#include <tencentcloud/cms/v20190321/model/TextOutputID.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

TextOutputID::TextOutputID() :
    m_msgIDHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome TextOutputID::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgID") && !value["MsgID"].IsNull())
    {
        if (!value["MsgID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputID.MsgID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgID = string(value["MsgID"].GetString());
        m_msgIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputID.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextOutputID::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgID.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


string TextOutputID::GetMsgID() const
{
    return m_msgID;
}

void TextOutputID::SetMsgID(const string& _msgID)
{
    m_msgID = _msgID;
    m_msgIDHasBeenSet = true;
}

bool TextOutputID::MsgIDHasBeenSet() const
{
    return m_msgIDHasBeenSet;
}

string TextOutputID::GetUin() const
{
    return m_uin;
}

void TextOutputID::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TextOutputID::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

