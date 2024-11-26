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

#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModifyAttributeLabelRequest::ModifyAttributeLabelRequest() :
    m_botBizIdHasBeenSet(false),
    m_attributeBizIdHasBeenSet(false),
    m_attrNameHasBeenSet(false),
    m_attrKeyHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_deleteLabelBizIdsHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

string ModifyAttributeLabelRequest::ToJsonString() const
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

    if (m_attributeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_attrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attrName.c_str(), allocator).Move(), allocator);
    }

    if (m_attrKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attrKey.c_str(), allocator).Move(), allocator);
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

    if (m_deleteLabelBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteLabelBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteLabelBizIds.begin(); itr != m_deleteLabelBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAttributeLabelRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ModifyAttributeLabelRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string ModifyAttributeLabelRequest::GetAttributeBizId() const
{
    return m_attributeBizId;
}

void ModifyAttributeLabelRequest::SetAttributeBizId(const string& _attributeBizId)
{
    m_attributeBizId = _attributeBizId;
    m_attributeBizIdHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::AttributeBizIdHasBeenSet() const
{
    return m_attributeBizIdHasBeenSet;
}

string ModifyAttributeLabelRequest::GetAttrName() const
{
    return m_attrName;
}

void ModifyAttributeLabelRequest::SetAttrName(const string& _attrName)
{
    m_attrName = _attrName;
    m_attrNameHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::AttrNameHasBeenSet() const
{
    return m_attrNameHasBeenSet;
}

string ModifyAttributeLabelRequest::GetAttrKey() const
{
    return m_attrKey;
}

void ModifyAttributeLabelRequest::SetAttrKey(const string& _attrKey)
{
    m_attrKey = _attrKey;
    m_attrKeyHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::AttrKeyHasBeenSet() const
{
    return m_attrKeyHasBeenSet;
}

string ModifyAttributeLabelRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ModifyAttributeLabelRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ModifyAttributeLabelRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ModifyAttributeLabelRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

vector<string> ModifyAttributeLabelRequest::GetDeleteLabelBizIds() const
{
    return m_deleteLabelBizIds;
}

void ModifyAttributeLabelRequest::SetDeleteLabelBizIds(const vector<string>& _deleteLabelBizIds)
{
    m_deleteLabelBizIds = _deleteLabelBizIds;
    m_deleteLabelBizIdsHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::DeleteLabelBizIdsHasBeenSet() const
{
    return m_deleteLabelBizIdsHasBeenSet;
}

vector<AttributeLabel> ModifyAttributeLabelRequest::GetLabels() const
{
    return m_labels;
}

void ModifyAttributeLabelRequest::SetLabels(const vector<AttributeLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}


