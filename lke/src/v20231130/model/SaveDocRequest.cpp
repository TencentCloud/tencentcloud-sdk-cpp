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

#include <tencentcloud/lke/v20231130/model/SaveDocRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SaveDocRequest::SaveDocRequest() :
    m_botBizIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_cosHashHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_referUrlTypeHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_isReferHasBeenSet(false),
    m_optHasBeenSet(false),
    m_cateBizIdHasBeenSet(false)
{
}

string SaveDocRequest::ToJsonString() const
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

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_eTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ETag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eTag.c_str(), allocator).Move(), allocator);
    }

    if (m_cosHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosHash.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_attrRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attrRange, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_webUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webUrl.c_str(), allocator).Move(), allocator);
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

    if (m_isReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRefer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRefer, allocator);
    }

    if (m_optHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Opt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_opt, allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaveDocRequest::GetBotBizId() const
{
    return m_botBizId;
}

void SaveDocRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool SaveDocRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string SaveDocRequest::GetFileName() const
{
    return m_fileName;
}

void SaveDocRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SaveDocRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string SaveDocRequest::GetFileType() const
{
    return m_fileType;
}

void SaveDocRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SaveDocRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string SaveDocRequest::GetCosUrl() const
{
    return m_cosUrl;
}

void SaveDocRequest::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool SaveDocRequest::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string SaveDocRequest::GetETag() const
{
    return m_eTag;
}

void SaveDocRequest::SetETag(const string& _eTag)
{
    m_eTag = _eTag;
    m_eTagHasBeenSet = true;
}

bool SaveDocRequest::ETagHasBeenSet() const
{
    return m_eTagHasBeenSet;
}

string SaveDocRequest::GetCosHash() const
{
    return m_cosHash;
}

void SaveDocRequest::SetCosHash(const string& _cosHash)
{
    m_cosHash = _cosHash;
    m_cosHashHasBeenSet = true;
}

bool SaveDocRequest::CosHashHasBeenSet() const
{
    return m_cosHashHasBeenSet;
}

string SaveDocRequest::GetSize() const
{
    return m_size;
}

void SaveDocRequest::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SaveDocRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t SaveDocRequest::GetAttrRange() const
{
    return m_attrRange;
}

void SaveDocRequest::SetAttrRange(const uint64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool SaveDocRequest::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

int64_t SaveDocRequest::GetSource() const
{
    return m_source;
}

void SaveDocRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SaveDocRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SaveDocRequest::GetWebUrl() const
{
    return m_webUrl;
}

void SaveDocRequest::SetWebUrl(const string& _webUrl)
{
    m_webUrl = _webUrl;
    m_webUrlHasBeenSet = true;
}

bool SaveDocRequest::WebUrlHasBeenSet() const
{
    return m_webUrlHasBeenSet;
}

vector<AttrLabelRefer> SaveDocRequest::GetAttrLabels() const
{
    return m_attrLabels;
}

void SaveDocRequest::SetAttrLabels(const vector<AttrLabelRefer>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool SaveDocRequest::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

uint64_t SaveDocRequest::GetReferUrlType() const
{
    return m_referUrlType;
}

void SaveDocRequest::SetReferUrlType(const uint64_t& _referUrlType)
{
    m_referUrlType = _referUrlType;
    m_referUrlTypeHasBeenSet = true;
}

bool SaveDocRequest::ReferUrlTypeHasBeenSet() const
{
    return m_referUrlTypeHasBeenSet;
}

string SaveDocRequest::GetExpireStart() const
{
    return m_expireStart;
}

void SaveDocRequest::SetExpireStart(const string& _expireStart)
{
    m_expireStart = _expireStart;
    m_expireStartHasBeenSet = true;
}

bool SaveDocRequest::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string SaveDocRequest::GetExpireEnd() const
{
    return m_expireEnd;
}

void SaveDocRequest::SetExpireEnd(const string& _expireEnd)
{
    m_expireEnd = _expireEnd;
    m_expireEndHasBeenSet = true;
}

bool SaveDocRequest::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

bool SaveDocRequest::GetIsRefer() const
{
    return m_isRefer;
}

void SaveDocRequest::SetIsRefer(const bool& _isRefer)
{
    m_isRefer = _isRefer;
    m_isReferHasBeenSet = true;
}

bool SaveDocRequest::IsReferHasBeenSet() const
{
    return m_isReferHasBeenSet;
}

uint64_t SaveDocRequest::GetOpt() const
{
    return m_opt;
}

void SaveDocRequest::SetOpt(const uint64_t& _opt)
{
    m_opt = _opt;
    m_optHasBeenSet = true;
}

bool SaveDocRequest::OptHasBeenSet() const
{
    return m_optHasBeenSet;
}

string SaveDocRequest::GetCateBizId() const
{
    return m_cateBizId;
}

void SaveDocRequest::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool SaveDocRequest::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}


