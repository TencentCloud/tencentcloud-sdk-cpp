/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ai3d/v20250513/model/Convert3DFormatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

Convert3DFormatRequest::Convert3DFormatRequest() :
    m_file3DHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

string Convert3DFormatRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_file3DHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File3D";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_file3D.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string Convert3DFormatRequest::GetFile3D() const
{
    return m_file3D;
}

void Convert3DFormatRequest::SetFile3D(const string& _file3D)
{
    m_file3D = _file3D;
    m_file3DHasBeenSet = true;
}

bool Convert3DFormatRequest::File3DHasBeenSet() const
{
    return m_file3DHasBeenSet;
}

string Convert3DFormatRequest::GetFormat() const
{
    return m_format;
}

void Convert3DFormatRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool Convert3DFormatRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}


