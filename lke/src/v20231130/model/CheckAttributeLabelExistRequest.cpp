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

#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CheckAttributeLabelExistRequest::CheckAttributeLabelExistRequest() :
    m_botBizIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_attributeBizIdHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_lastLabelBizIdHasBeenSet(false)
{
}

string CheckAttributeLabelExistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLabelBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLabelBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastLabelBizId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAttributeLabelExistRequest::GetBotBizId() const
{
    return m_botBizId;
}

void CheckAttributeLabelExistRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool CheckAttributeLabelExistRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string CheckAttributeLabelExistRequest::GetLabelName() const
{
    return m_labelName;
}

void CheckAttributeLabelExistRequest::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool CheckAttributeLabelExistRequest::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string CheckAttributeLabelExistRequest::GetAttributeBizId() const
{
    return m_attributeBizId;
}

void CheckAttributeLabelExistRequest::SetAttributeBizId(const string& _attributeBizId)
{
    m_attributeBizId = _attributeBizId;
    m_attributeBizIdHasBeenSet = true;
}

bool CheckAttributeLabelExistRequest::AttributeBizIdHasBeenSet() const
{
    return m_attributeBizIdHasBeenSet;
}

string CheckAttributeLabelExistRequest::GetLoginUin() const
{
    return m_loginUin;
}

void CheckAttributeLabelExistRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool CheckAttributeLabelExistRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string CheckAttributeLabelExistRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void CheckAttributeLabelExistRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool CheckAttributeLabelExistRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string CheckAttributeLabelExistRequest::GetLastLabelBizId() const
{
    return m_lastLabelBizId;
}

void CheckAttributeLabelExistRequest::SetLastLabelBizId(const string& _lastLabelBizId)
{
    m_lastLabelBizId = _lastLabelBizId;
    m_lastLabelBizIdHasBeenSet = true;
}

bool CheckAttributeLabelExistRequest::LastLabelBizIdHasBeenSet() const
{
    return m_lastLabelBizIdHasBeenSet;
}


