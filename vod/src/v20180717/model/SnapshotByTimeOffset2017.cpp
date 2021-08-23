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

#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffset2017.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SnapshotByTimeOffset2017::SnapshotByTimeOffset2017() :
    m_errCodeHasBeenSet(false),
    m_timeOffsetHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotByTimeOffset2017::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffset2017.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffset2017.TimeOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetUint64();
        m_timeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffset2017.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotByTimeOffset2017::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


int64_t SnapshotByTimeOffset2017::GetErrCode() const
{
    return m_errCode;
}

void SnapshotByTimeOffset2017::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool SnapshotByTimeOffset2017::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

uint64_t SnapshotByTimeOffset2017::GetTimeOffset() const
{
    return m_timeOffset;
}

void SnapshotByTimeOffset2017::SetTimeOffset(const uint64_t& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool SnapshotByTimeOffset2017::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

string SnapshotByTimeOffset2017::GetUrl() const
{
    return m_url;
}

void SnapshotByTimeOffset2017::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SnapshotByTimeOffset2017::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

