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

#include <tencentcloud/cms/v20190321/model/CreateFileSampleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

CreateFileSampleRequest::CreateFileSampleRequest() :
    m_contentsHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

string CreateFileSampleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_evilType, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_label, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<FileSample> CreateFileSampleRequest::GetContents() const
{
    return m_contents;
}

void CreateFileSampleRequest::SetContents(const vector<FileSample>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool CreateFileSampleRequest::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

int64_t CreateFileSampleRequest::GetEvilType() const
{
    return m_evilType;
}

void CreateFileSampleRequest::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool CreateFileSampleRequest::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

string CreateFileSampleRequest::GetFileType() const
{
    return m_fileType;
}

void CreateFileSampleRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CreateFileSampleRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

uint64_t CreateFileSampleRequest::GetLabel() const
{
    return m_label;
}

void CreateFileSampleRequest::SetLabel(const uint64_t& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool CreateFileSampleRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}


