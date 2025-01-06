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

#include <tencentcloud/lkeap/v20240522/model/UploadDocRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

UploadDocRequest::UploadDocRequest() :
    m_knowledgeBaseIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_attributeLabelHasBeenSet(false),
    m_attributeLabelsHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string UploadDocRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_knowledgeBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeBaseId.c_str(), allocator).Move(), allocator);
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

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeLabel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributeLabel.begin(); itr != m_attributeLabel.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_attributeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributeLabels.begin(); itr != m_attributeLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadDocRequest::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void UploadDocRequest::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool UploadDocRequest::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

string UploadDocRequest::GetFileName() const
{
    return m_fileName;
}

void UploadDocRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadDocRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadDocRequest::GetFileType() const
{
    return m_fileType;
}

void UploadDocRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UploadDocRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string UploadDocRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void UploadDocRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool UploadDocRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

vector<AttributeLabelReferItem> UploadDocRequest::GetAttributeLabel() const
{
    return m_attributeLabel;
}

void UploadDocRequest::SetAttributeLabel(const vector<AttributeLabelReferItem>& _attributeLabel)
{
    m_attributeLabel = _attributeLabel;
    m_attributeLabelHasBeenSet = true;
}

bool UploadDocRequest::AttributeLabelHasBeenSet() const
{
    return m_attributeLabelHasBeenSet;
}

vector<AttributeLabelReferItem> UploadDocRequest::GetAttributeLabels() const
{
    return m_attributeLabels;
}

void UploadDocRequest::SetAttributeLabels(const vector<AttributeLabelReferItem>& _attributeLabels)
{
    m_attributeLabels = _attributeLabels;
    m_attributeLabelsHasBeenSet = true;
}

bool UploadDocRequest::AttributeLabelsHasBeenSet() const
{
    return m_attributeLabelsHasBeenSet;
}

SegmentationConfig UploadDocRequest::GetConfig() const
{
    return m_config;
}

void UploadDocRequest::SetConfig(const SegmentationConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool UploadDocRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


