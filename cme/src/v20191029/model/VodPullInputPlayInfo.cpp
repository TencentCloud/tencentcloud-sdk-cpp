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

#include <tencentcloud/cme/v20191029/model/VodPullInputPlayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VodPullInputPlayInfo::VodPullInputPlayInfo() :
    m_urlHasBeenSet(false),
    m_timeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome VodPullInputPlayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodPullInputPlayInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodPullInputPlayInfo.TimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetDouble();
        m_timeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VodPullInputPlayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

}


string VodPullInputPlayInfo::GetUrl() const
{
    return m_url;
}

void VodPullInputPlayInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool VodPullInputPlayInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

double VodPullInputPlayInfo::GetTimeOffset() const
{
    return m_timeOffset;
}

void VodPullInputPlayInfo::SetTimeOffset(const double& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool VodPullInputPlayInfo::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

