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

#include <tencentcloud/mps/v20190612/model/DescribeInputRISTSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeInputRISTSettings::DescribeInputRISTSettings() :
    m_modeHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_bufferHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInputRISTSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRISTSettings.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRISTSettings.Profile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profile = string(value["Profile"].GetString());
        m_profileHasBeenSet = true;
    }

    if (value.HasMember("Buffer") && !value["Buffer"].IsNull())
    {
        if (!value["Buffer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRISTSettings.Buffer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buffer = value["Buffer"].GetInt64();
        m_bufferHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInputRISTSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_bufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buffer, allocator);
    }

}


string DescribeInputRISTSettings::GetMode() const
{
    return m_mode;
}

void DescribeInputRISTSettings::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeInputRISTSettings::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeInputRISTSettings::GetProfile() const
{
    return m_profile;
}

void DescribeInputRISTSettings::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DescribeInputRISTSettings::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t DescribeInputRISTSettings::GetBuffer() const
{
    return m_buffer;
}

void DescribeInputRISTSettings::SetBuffer(const int64_t& _buffer)
{
    m_buffer = _buffer;
    m_bufferHasBeenSet = true;
}

bool DescribeInputRISTSettings::BufferHasBeenSet() const
{
    return m_bufferHasBeenSet;
}

