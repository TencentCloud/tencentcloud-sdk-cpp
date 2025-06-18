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

#include <tencentcloud/lke/v20231130/model/ModifyDocRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModifyDocRequest::ModifyDocRequest() :
    m_botBizIdHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_isReferHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_referUrlTypeHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_isDownloadHasBeenSet(false)
{
}

string ModifyDocRequest::ToJsonString() const
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

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_isReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRefer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRefer, allocator);
    }

    if (m_attrRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attrRange, allocator);
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

    if (m_attrLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrLabels.begin(); itr != m_attrLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_webUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_referUrlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferUrlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_referUrlType, allocator);
    }

    if (m_expireStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireStart.c_str(), allocator).Move(), allocator);
    }

    if (m_expireEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDownloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDownload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDownload, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDocRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ModifyDocRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ModifyDocRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string ModifyDocRequest::GetDocBizId() const
{
    return m_docBizId;
}

void ModifyDocRequest::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ModifyDocRequest::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

bool ModifyDocRequest::GetIsRefer() const
{
    return m_isRefer;
}

void ModifyDocRequest::SetIsRefer(const bool& _isRefer)
{
    m_isRefer = _isRefer;
    m_isReferHasBeenSet = true;
}

bool ModifyDocRequest::IsReferHasBeenSet() const
{
    return m_isReferHasBeenSet;
}

uint64_t ModifyDocRequest::GetAttrRange() const
{
    return m_attrRange;
}

void ModifyDocRequest::SetAttrRange(const uint64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool ModifyDocRequest::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

string ModifyDocRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ModifyDocRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ModifyDocRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ModifyDocRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ModifyDocRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ModifyDocRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

vector<AttrLabelRefer> ModifyDocRequest::GetAttrLabels() const
{
    return m_attrLabels;
}

void ModifyDocRequest::SetAttrLabels(const vector<AttrLabelRefer>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool ModifyDocRequest::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

string ModifyDocRequest::GetWebUrl() const
{
    return m_webUrl;
}

void ModifyDocRequest::SetWebUrl(const string& _webUrl)
{
    m_webUrl = _webUrl;
    m_webUrlHasBeenSet = true;
}

bool ModifyDocRequest::WebUrlHasBeenSet() const
{
    return m_webUrlHasBeenSet;
}

uint64_t ModifyDocRequest::GetReferUrlType() const
{
    return m_referUrlType;
}

void ModifyDocRequest::SetReferUrlType(const uint64_t& _referUrlType)
{
    m_referUrlType = _referUrlType;
    m_referUrlTypeHasBeenSet = true;
}

bool ModifyDocRequest::ReferUrlTypeHasBeenSet() const
{
    return m_referUrlTypeHasBeenSet;
}

string ModifyDocRequest::GetExpireStart() const
{
    return m_expireStart;
}

void ModifyDocRequest::SetExpireStart(const string& _expireStart)
{
    m_expireStart = _expireStart;
    m_expireStartHasBeenSet = true;
}

bool ModifyDocRequest::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string ModifyDocRequest::GetExpireEnd() const
{
    return m_expireEnd;
}

void ModifyDocRequest::SetExpireEnd(const string& _expireEnd)
{
    m_expireEnd = _expireEnd;
    m_expireEndHasBeenSet = true;
}

bool ModifyDocRequest::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

string ModifyDocRequest::GetCateBizId() const
{
    return m_cateBizId;
}

void ModifyDocRequest::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool ModifyDocRequest::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

bool ModifyDocRequest::GetIsDownload() const
{
    return m_isDownload;
}

void ModifyDocRequest::SetIsDownload(const bool& _isDownload)
{
    m_isDownload = _isDownload;
    m_isDownloadHasBeenSet = true;
}

bool ModifyDocRequest::IsDownloadHasBeenSet() const
{
    return m_isDownloadHasBeenSet;
}


