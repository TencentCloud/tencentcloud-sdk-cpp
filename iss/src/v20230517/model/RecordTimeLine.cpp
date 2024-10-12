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

#include <tencentcloud/iss/v20230517/model/RecordTimeLine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

RecordTimeLine::RecordTimeLine() :
    m_beginHasBeenSet(false),
    m_endHasBeenSet(false),
    m_hlsUrlHasBeenSet(false)
{
}

CoreInternalOutcome RecordTimeLine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Begin") && !value["Begin"].IsNull())
    {
        if (!value["Begin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTimeLine.Begin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_begin = value["Begin"].GetUint64();
        m_beginHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTimeLine.End` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetUint64();
        m_endHasBeenSet = true;
    }

    if (value.HasMember("HlsUrl") && !value["HlsUrl"].IsNull())
    {
        if (!value["HlsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTimeLine.HlsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hlsUrl = string(value["HlsUrl"].GetString());
        m_hlsUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTimeLine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Begin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_begin, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

    if (m_hlsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hlsUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RecordTimeLine::GetBegin() const
{
    return m_begin;
}

void RecordTimeLine::SetBegin(const uint64_t& _begin)
{
    m_begin = _begin;
    m_beginHasBeenSet = true;
}

bool RecordTimeLine::BeginHasBeenSet() const
{
    return m_beginHasBeenSet;
}

uint64_t RecordTimeLine::GetEnd() const
{
    return m_end;
}

void RecordTimeLine::SetEnd(const uint64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool RecordTimeLine::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

string RecordTimeLine::GetHlsUrl() const
{
    return m_hlsUrl;
}

void RecordTimeLine::SetHlsUrl(const string& _hlsUrl)
{
    m_hlsUrl = _hlsUrl;
    m_hlsUrlHasBeenSet = true;
}

bool RecordTimeLine::HlsUrlHasBeenSet() const
{
    return m_hlsUrlHasBeenSet;
}

