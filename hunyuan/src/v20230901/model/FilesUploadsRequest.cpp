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

#include <tencentcloud/hunyuan/v20230901/model/FilesUploadsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

FilesUploadsRequest::FilesUploadsRequest() :
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

string FilesUploadsRequest::ToJsonString() const
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

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FilesUploadsRequest::GetName() const
{
    return m_name;
}

void FilesUploadsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FilesUploadsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FilesUploadsRequest::GetURL() const
{
    return m_uRL;
}

void FilesUploadsRequest::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool FilesUploadsRequest::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}


