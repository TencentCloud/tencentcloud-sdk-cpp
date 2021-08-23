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

#include <tencentcloud/cvm/v20170312/model/ImageOsList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ImageOsList::ImageOsList() :
    m_windowsHasBeenSet(false),
    m_linuxHasBeenSet(false)
{
}

CoreInternalOutcome ImageOsList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Windows") && !value["Windows"].IsNull())
    {
        if (!value["Windows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageOsList.Windows` is not array type"));

        const rapidjson::Value &tmpValue = value["Windows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_windows.push_back((*itr).GetString());
        }
        m_windowsHasBeenSet = true;
    }

    if (value.HasMember("Linux") && !value["Linux"].IsNull())
    {
        if (!value["Linux"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageOsList.Linux` is not array type"));

        const rapidjson::Value &tmpValue = value["Linux"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_linux.push_back((*itr).GetString());
        }
        m_linuxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageOsList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_windowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Windows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_windows.begin(); itr != m_windows.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_linuxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Linux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_linux.begin(); itr != m_linux.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ImageOsList::GetWindows() const
{
    return m_windows;
}

void ImageOsList::SetWindows(const vector<string>& _windows)
{
    m_windows = _windows;
    m_windowsHasBeenSet = true;
}

bool ImageOsList::WindowsHasBeenSet() const
{
    return m_windowsHasBeenSet;
}

vector<string> ImageOsList::GetLinux() const
{
    return m_linux;
}

void ImageOsList::SetLinux(const vector<string>& _linux)
{
    m_linux = _linux;
    m_linuxHasBeenSet = true;
}

bool ImageOsList::LinuxHasBeenSet() const
{
    return m_linuxHasBeenSet;
}

