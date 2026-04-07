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

#include <tencentcloud/mps/v20190612/model/ManifestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ManifestInfo::ManifestInfo() :
    m_windowsHasBeenSet(false),
    m_adMarkupTypeHasBeenSet(false)
{
}

CoreInternalOutcome ManifestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Windows") && !value["Windows"].IsNull())
    {
        if (!value["Windows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManifestInfo.Windows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_windows = value["Windows"].GetUint64();
        m_windowsHasBeenSet = true;
    }

    if (value.HasMember("AdMarkupType") && !value["AdMarkupType"].IsNull())
    {
        if (!value["AdMarkupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManifestInfo.AdMarkupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adMarkupType = string(value["AdMarkupType"].GetString());
        m_adMarkupTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManifestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_windowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Windows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_windows, allocator);
    }

    if (m_adMarkupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdMarkupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adMarkupType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ManifestInfo::GetWindows() const
{
    return m_windows;
}

void ManifestInfo::SetWindows(const uint64_t& _windows)
{
    m_windows = _windows;
    m_windowsHasBeenSet = true;
}

bool ManifestInfo::WindowsHasBeenSet() const
{
    return m_windowsHasBeenSet;
}

string ManifestInfo::GetAdMarkupType() const
{
    return m_adMarkupType;
}

void ManifestInfo::SetAdMarkupType(const string& _adMarkupType)
{
    m_adMarkupType = _adMarkupType;
    m_adMarkupTypeHasBeenSet = true;
}

bool ManifestInfo::AdMarkupTypeHasBeenSet() const
{
    return m_adMarkupTypeHasBeenSet;
}

