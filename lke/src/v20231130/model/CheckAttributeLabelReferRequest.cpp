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

#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CheckAttributeLabelReferRequest::CheckAttributeLabelReferRequest() :
    m_botBizIdHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_labelBizIdHasBeenSet(false),
    m_attributeBizIdHasBeenSet(false)
{
}

string CheckAttributeLabelReferRequest::ToJsonString() const
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

    if (m_labelBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labelBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attributeBizId.begin(); itr != m_attributeBizId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAttributeLabelReferRequest::GetBotBizId() const
{
    return m_botBizId;
}

void CheckAttributeLabelReferRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool CheckAttributeLabelReferRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string CheckAttributeLabelReferRequest::GetLoginUin() const
{
    return m_loginUin;
}

void CheckAttributeLabelReferRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool CheckAttributeLabelReferRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string CheckAttributeLabelReferRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void CheckAttributeLabelReferRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool CheckAttributeLabelReferRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string CheckAttributeLabelReferRequest::GetLabelBizId() const
{
    return m_labelBizId;
}

void CheckAttributeLabelReferRequest::SetLabelBizId(const string& _labelBizId)
{
    m_labelBizId = _labelBizId;
    m_labelBizIdHasBeenSet = true;
}

bool CheckAttributeLabelReferRequest::LabelBizIdHasBeenSet() const
{
    return m_labelBizIdHasBeenSet;
}

vector<string> CheckAttributeLabelReferRequest::GetAttributeBizId() const
{
    return m_attributeBizId;
}

void CheckAttributeLabelReferRequest::SetAttributeBizId(const vector<string>& _attributeBizId)
{
    m_attributeBizId = _attributeBizId;
    m_attributeBizIdHasBeenSet = true;
}

bool CheckAttributeLabelReferRequest::AttributeBizIdHasBeenSet() const
{
    return m_attributeBizIdHasBeenSet;
}


