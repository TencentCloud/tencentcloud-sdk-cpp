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

#include <tencentcloud/mps/v20190612/model/DescribeInputRTMPSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeInputRTMPSettings::DescribeInputRTMPSettings() :
    m_appNameHasBeenSet(false),
    m_streamKeyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInputRTMPSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRTMPSettings.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamKey") && !value["StreamKey"].IsNull())
    {
        if (!value["StreamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRTMPSettings.StreamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamKey = string(value["StreamKey"].GetString());
        m_streamKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInputRTMPSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamKey.c_str(), allocator).Move(), allocator);
    }

}


string DescribeInputRTMPSettings::GetAppName() const
{
    return m_appName;
}

void DescribeInputRTMPSettings::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeInputRTMPSettings::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeInputRTMPSettings::GetStreamKey() const
{
    return m_streamKey;
}

void DescribeInputRTMPSettings::SetStreamKey(const string& _streamKey)
{
    m_streamKey = _streamKey;
    m_streamKeyHasBeenSet = true;
}

bool DescribeInputRTMPSettings::StreamKeyHasBeenSet() const
{
    return m_streamKeyHasBeenSet;
}

