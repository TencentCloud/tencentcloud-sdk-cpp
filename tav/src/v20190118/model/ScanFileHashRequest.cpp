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

#include <tencentcloud/tav/v20190118/model/ScanFileHashRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tav::V20190118::Model;
using namespace std;

ScanFileHashRequest::ScanFileHashRequest() :
    m_keyHasBeenSet(false),
    m_md5sHasBeenSet(false),
    m_withCategoryHasBeenSet(false),
    m_sensitiveLevelHasBeenSet(false)
{
}

string ScanFileHashRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_md5sHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5s";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_md5s.c_str(), allocator).Move(), allocator);
    }

    if (m_withCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_withCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sensitiveLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScanFileHashRequest::GetKey() const
{
    return m_key;
}

void ScanFileHashRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ScanFileHashRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string ScanFileHashRequest::GetMd5s() const
{
    return m_md5s;
}

void ScanFileHashRequest::SetMd5s(const string& _md5s)
{
    m_md5s = _md5s;
    m_md5sHasBeenSet = true;
}

bool ScanFileHashRequest::Md5sHasBeenSet() const
{
    return m_md5sHasBeenSet;
}

string ScanFileHashRequest::GetWithCategory() const
{
    return m_withCategory;
}

void ScanFileHashRequest::SetWithCategory(const string& _withCategory)
{
    m_withCategory = _withCategory;
    m_withCategoryHasBeenSet = true;
}

bool ScanFileHashRequest::WithCategoryHasBeenSet() const
{
    return m_withCategoryHasBeenSet;
}

string ScanFileHashRequest::GetSensitiveLevel() const
{
    return m_sensitiveLevel;
}

void ScanFileHashRequest::SetSensitiveLevel(const string& _sensitiveLevel)
{
    m_sensitiveLevel = _sensitiveLevel;
    m_sensitiveLevelHasBeenSet = true;
}

bool ScanFileHashRequest::SensitiveLevelHasBeenSet() const
{
    return m_sensitiveLevelHasBeenSet;
}


