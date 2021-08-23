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

#include <tencentcloud/tcb/v20180608/model/ExtensionFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ExtensionFileInfo::ExtensionFileInfo() :
    m_codeUriHasBeenSet(false),
    m_uploadUrlHasBeenSet(false),
    m_customKeyHasBeenSet(false),
    m_maxSizeHasBeenSet(false)
{
}

CoreInternalOutcome ExtensionFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeUri") && !value["CodeUri"].IsNull())
    {
        if (!value["CodeUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionFileInfo.CodeUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeUri = string(value["CodeUri"].GetString());
        m_codeUriHasBeenSet = true;
    }

    if (value.HasMember("UploadUrl") && !value["UploadUrl"].IsNull())
    {
        if (!value["UploadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionFileInfo.UploadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadUrl = string(value["UploadUrl"].GetString());
        m_uploadUrlHasBeenSet = true;
    }

    if (value.HasMember("CustomKey") && !value["CustomKey"].IsNull())
    {
        if (!value["CustomKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionFileInfo.CustomKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customKey = string(value["CustomKey"].GetString());
        m_customKeyHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionFileInfo.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtensionFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeUri.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_customKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customKey.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

}


string ExtensionFileInfo::GetCodeUri() const
{
    return m_codeUri;
}

void ExtensionFileInfo::SetCodeUri(const string& _codeUri)
{
    m_codeUri = _codeUri;
    m_codeUriHasBeenSet = true;
}

bool ExtensionFileInfo::CodeUriHasBeenSet() const
{
    return m_codeUriHasBeenSet;
}

string ExtensionFileInfo::GetUploadUrl() const
{
    return m_uploadUrl;
}

void ExtensionFileInfo::SetUploadUrl(const string& _uploadUrl)
{
    m_uploadUrl = _uploadUrl;
    m_uploadUrlHasBeenSet = true;
}

bool ExtensionFileInfo::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

string ExtensionFileInfo::GetCustomKey() const
{
    return m_customKey;
}

void ExtensionFileInfo::SetCustomKey(const string& _customKey)
{
    m_customKey = _customKey;
    m_customKeyHasBeenSet = true;
}

bool ExtensionFileInfo::CustomKeyHasBeenSet() const
{
    return m_customKeyHasBeenSet;
}

uint64_t ExtensionFileInfo::GetMaxSize() const
{
    return m_maxSize;
}

void ExtensionFileInfo::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ExtensionFileInfo::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

