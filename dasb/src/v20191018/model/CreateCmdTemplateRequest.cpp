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

#include <tencentcloud/dasb/v20191018/model/CreateCmdTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

CreateCmdTemplateRequest::CreateCmdTemplateRequest() :
    m_nameHasBeenSet(false),
    m_cmdListHasBeenSet(false),
    m_encodingHasBeenSet(false)
{
}

string CreateCmdTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmdList.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encoding, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCmdTemplateRequest::GetName() const
{
    return m_name;
}

void CreateCmdTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCmdTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCmdTemplateRequest::GetCmdList() const
{
    return m_cmdList;
}

void CreateCmdTemplateRequest::SetCmdList(const string& _cmdList)
{
    m_cmdList = _cmdList;
    m_cmdListHasBeenSet = true;
}

bool CreateCmdTemplateRequest::CmdListHasBeenSet() const
{
    return m_cmdListHasBeenSet;
}

uint64_t CreateCmdTemplateRequest::GetEncoding() const
{
    return m_encoding;
}

void CreateCmdTemplateRequest::SetEncoding(const uint64_t& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool CreateCmdTemplateRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}


