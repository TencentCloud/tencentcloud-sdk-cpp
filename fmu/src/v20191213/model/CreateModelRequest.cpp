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

#include <tencentcloud/fmu/v20191213/model/CreateModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

CreateModelRequest::CreateModelRequest() :
    m_lUTFileHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lUTFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LUTFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lUTFile.c_str(), allocator).Move(), allocator);
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


string CreateModelRequest::GetLUTFile() const
{
    return m_lUTFile;
}

void CreateModelRequest::SetLUTFile(const string& _lUTFile)
{
    m_lUTFile = _lUTFile;
    m_lUTFileHasBeenSet = true;
}

bool CreateModelRequest::LUTFileHasBeenSet() const
{
    return m_lUTFileHasBeenSet;
}

string CreateModelRequest::GetDescription() const
{
    return m_description;
}

void CreateModelRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateModelRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


