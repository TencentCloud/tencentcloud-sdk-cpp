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

#include <tencentcloud/omics/v20221128/model/ImportTableFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

ImportTableFileRequest::ImportTableFileRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cosUriHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ImportTableFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUri.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataType.begin(); itr != m_dataType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportTableFileRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportTableFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportTableFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ImportTableFileRequest::GetName() const
{
    return m_name;
}

void ImportTableFileRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImportTableFileRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImportTableFileRequest::GetCosUri() const
{
    return m_cosUri;
}

void ImportTableFileRequest::SetCosUri(const string& _cosUri)
{
    m_cosUri = _cosUri;
    m_cosUriHasBeenSet = true;
}

bool ImportTableFileRequest::CosUriHasBeenSet() const
{
    return m_cosUriHasBeenSet;
}

vector<string> ImportTableFileRequest::GetDataType() const
{
    return m_dataType;
}

void ImportTableFileRequest::SetDataType(const vector<string>& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool ImportTableFileRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string ImportTableFileRequest::GetDescription() const
{
    return m_description;
}

void ImportTableFileRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImportTableFileRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


