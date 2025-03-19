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

#include <tencentcloud/mps/v20190612/model/ModifyAsrHotwordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyAsrHotwordsRequest::ModifyAsrHotwordsRequest() :
    m_hotwordsIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string ModifyAsrHotwordsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hotwordsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordsId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAsrHotwordsRequest::GetHotwordsId() const
{
    return m_hotwordsId;
}

void ModifyAsrHotwordsRequest::SetHotwordsId(const string& _hotwordsId)
{
    m_hotwordsId = _hotwordsId;
    m_hotwordsIdHasBeenSet = true;
}

bool ModifyAsrHotwordsRequest::HotwordsIdHasBeenSet() const
{
    return m_hotwordsIdHasBeenSet;
}

string ModifyAsrHotwordsRequest::GetName() const
{
    return m_name;
}

void ModifyAsrHotwordsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAsrHotwordsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAsrHotwordsRequest::GetContent() const
{
    return m_content;
}

void ModifyAsrHotwordsRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyAsrHotwordsRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ModifyAsrHotwordsRequest::GetFileContent() const
{
    return m_fileContent;
}

void ModifyAsrHotwordsRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool ModifyAsrHotwordsRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string ModifyAsrHotwordsRequest::GetFileName() const
{
    return m_fileName;
}

void ModifyAsrHotwordsRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ModifyAsrHotwordsRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}


