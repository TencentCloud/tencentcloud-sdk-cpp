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

#include <tencentcloud/gs/v20191118/model/ImportAndroidInstanceImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ImportAndroidInstanceImageRequest::ImportAndroidInstanceImageRequest() :
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_androidVersionHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

string ImportAndroidInstanceImageRequest::ToJsonString() const
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

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_androidVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportAndroidInstanceImageRequest::GetName() const
{
    return m_name;
}

void ImportAndroidInstanceImageRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImportAndroidInstanceImageRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImportAndroidInstanceImageRequest::GetURL() const
{
    return m_uRL;
}

void ImportAndroidInstanceImageRequest::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool ImportAndroidInstanceImageRequest::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string ImportAndroidInstanceImageRequest::GetMD5() const
{
    return m_mD5;
}

void ImportAndroidInstanceImageRequest::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool ImportAndroidInstanceImageRequest::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

string ImportAndroidInstanceImageRequest::GetAndroidVersion() const
{
    return m_androidVersion;
}

void ImportAndroidInstanceImageRequest::SetAndroidVersion(const string& _androidVersion)
{
    m_androidVersion = _androidVersion;
    m_androidVersionHasBeenSet = true;
}

bool ImportAndroidInstanceImageRequest::AndroidVersionHasBeenSet() const
{
    return m_androidVersionHasBeenSet;
}

string ImportAndroidInstanceImageRequest::GetZone() const
{
    return m_zone;
}

void ImportAndroidInstanceImageRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ImportAndroidInstanceImageRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}


