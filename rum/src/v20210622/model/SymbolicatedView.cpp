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

#include <tencentcloud/rum/v20210622/model/SymbolicatedView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

SymbolicatedView::SymbolicatedView() :
    m_symbolicationVersionHasBeenSet(false),
    m_symbolicatedAtHasBeenSet(false),
    m_symbolicationStatusHasBeenSet(false),
    m_symbolicationSkipReasonHasBeenSet(false),
    m_symbolicationSourceHasBeenSet(false),
    m_symbolicationReleaseHasBeenSet(false),
    m_symbolicationDistHasBeenSet(false),
    m_symbolicationDurationMsHasBeenSet(false),
    m_symbolicatorRequestIdHasBeenSet(false),
    m_framesHasBeenSet(false)
{
}

CoreInternalOutcome SymbolicatedView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SymbolicationVersion") && !value["SymbolicationVersion"].IsNull())
    {
        if (!value["SymbolicationVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationVersion = value["SymbolicationVersion"].GetInt64();
        m_symbolicationVersionHasBeenSet = true;
    }

    if (value.HasMember("SymbolicatedAt") && !value["SymbolicatedAt"].IsNull())
    {
        if (!value["SymbolicatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicatedAt = string(value["SymbolicatedAt"].GetString());
        m_symbolicatedAtHasBeenSet = true;
    }

    if (value.HasMember("SymbolicationStatus") && !value["SymbolicationStatus"].IsNull())
    {
        if (!value["SymbolicationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationStatus = string(value["SymbolicationStatus"].GetString());
        m_symbolicationStatusHasBeenSet = true;
    }

    if (value.HasMember("SymbolicationSkipReason") && !value["SymbolicationSkipReason"].IsNull())
    {
        if (!value["SymbolicationSkipReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationSkipReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationSkipReason = string(value["SymbolicationSkipReason"].GetString());
        m_symbolicationSkipReasonHasBeenSet = true;
    }

    if (value.HasMember("SymbolicationSource") && !value["SymbolicationSource"].IsNull())
    {
        if (!value["SymbolicationSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationSource = string(value["SymbolicationSource"].GetString());
        m_symbolicationSourceHasBeenSet = true;
    }

    if (value.HasMember("SymbolicationRelease") && !value["SymbolicationRelease"].IsNull())
    {
        if (!value["SymbolicationRelease"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationRelease` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationRelease = string(value["SymbolicationRelease"].GetString());
        m_symbolicationReleaseHasBeenSet = true;
    }

    if (value.HasMember("SymbolicationDist") && !value["SymbolicationDist"].IsNull())
    {
        if (!value["SymbolicationDist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationDist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationDist = string(value["SymbolicationDist"].GetString());
        m_symbolicationDistHasBeenSet = true;
    }

    if (value.HasMember("SymbolicationDurationMs") && !value["SymbolicationDurationMs"].IsNull())
    {
        if (!value["SymbolicationDurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicationDurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicationDurationMs = value["SymbolicationDurationMs"].GetInt64();
        m_symbolicationDurationMsHasBeenSet = true;
    }

    if (value.HasMember("SymbolicatorRequestId") && !value["SymbolicatorRequestId"].IsNull())
    {
        if (!value["SymbolicatorRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.SymbolicatorRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbolicatorRequestId = string(value["SymbolicatorRequestId"].GetString());
        m_symbolicatorRequestIdHasBeenSet = true;
    }

    if (value.HasMember("Frames") && !value["Frames"].IsNull())
    {
        if (!value["Frames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SymbolicatedView.Frames` is not array type"));

        const rapidjson::Value &tmpValue = value["Frames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventFrame item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_frames.push_back(item);
        }
        m_framesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SymbolicatedView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_symbolicationVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_symbolicationVersion, allocator);
    }

    if (m_symbolicatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolicationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolicationSkipReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationSkipReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicationSkipReason.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolicationSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicationSource.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolicationReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationRelease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicationRelease.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolicationDistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationDist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicationDist.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolicationDurationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicationDurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_symbolicationDurationMs, allocator);
    }

    if (m_symbolicatorRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymbolicatorRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbolicatorRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_framesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_frames.begin(); itr != m_frames.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SymbolicatedView::GetSymbolicationVersion() const
{
    return m_symbolicationVersion;
}

void SymbolicatedView::SetSymbolicationVersion(const int64_t& _symbolicationVersion)
{
    m_symbolicationVersion = _symbolicationVersion;
    m_symbolicationVersionHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationVersionHasBeenSet() const
{
    return m_symbolicationVersionHasBeenSet;
}

string SymbolicatedView::GetSymbolicatedAt() const
{
    return m_symbolicatedAt;
}

void SymbolicatedView::SetSymbolicatedAt(const string& _symbolicatedAt)
{
    m_symbolicatedAt = _symbolicatedAt;
    m_symbolicatedAtHasBeenSet = true;
}

bool SymbolicatedView::SymbolicatedAtHasBeenSet() const
{
    return m_symbolicatedAtHasBeenSet;
}

string SymbolicatedView::GetSymbolicationStatus() const
{
    return m_symbolicationStatus;
}

void SymbolicatedView::SetSymbolicationStatus(const string& _symbolicationStatus)
{
    m_symbolicationStatus = _symbolicationStatus;
    m_symbolicationStatusHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationStatusHasBeenSet() const
{
    return m_symbolicationStatusHasBeenSet;
}

string SymbolicatedView::GetSymbolicationSkipReason() const
{
    return m_symbolicationSkipReason;
}

void SymbolicatedView::SetSymbolicationSkipReason(const string& _symbolicationSkipReason)
{
    m_symbolicationSkipReason = _symbolicationSkipReason;
    m_symbolicationSkipReasonHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationSkipReasonHasBeenSet() const
{
    return m_symbolicationSkipReasonHasBeenSet;
}

string SymbolicatedView::GetSymbolicationSource() const
{
    return m_symbolicationSource;
}

void SymbolicatedView::SetSymbolicationSource(const string& _symbolicationSource)
{
    m_symbolicationSource = _symbolicationSource;
    m_symbolicationSourceHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationSourceHasBeenSet() const
{
    return m_symbolicationSourceHasBeenSet;
}

string SymbolicatedView::GetSymbolicationRelease() const
{
    return m_symbolicationRelease;
}

void SymbolicatedView::SetSymbolicationRelease(const string& _symbolicationRelease)
{
    m_symbolicationRelease = _symbolicationRelease;
    m_symbolicationReleaseHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationReleaseHasBeenSet() const
{
    return m_symbolicationReleaseHasBeenSet;
}

string SymbolicatedView::GetSymbolicationDist() const
{
    return m_symbolicationDist;
}

void SymbolicatedView::SetSymbolicationDist(const string& _symbolicationDist)
{
    m_symbolicationDist = _symbolicationDist;
    m_symbolicationDistHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationDistHasBeenSet() const
{
    return m_symbolicationDistHasBeenSet;
}

int64_t SymbolicatedView::GetSymbolicationDurationMs() const
{
    return m_symbolicationDurationMs;
}

void SymbolicatedView::SetSymbolicationDurationMs(const int64_t& _symbolicationDurationMs)
{
    m_symbolicationDurationMs = _symbolicationDurationMs;
    m_symbolicationDurationMsHasBeenSet = true;
}

bool SymbolicatedView::SymbolicationDurationMsHasBeenSet() const
{
    return m_symbolicationDurationMsHasBeenSet;
}

string SymbolicatedView::GetSymbolicatorRequestId() const
{
    return m_symbolicatorRequestId;
}

void SymbolicatedView::SetSymbolicatorRequestId(const string& _symbolicatorRequestId)
{
    m_symbolicatorRequestId = _symbolicatorRequestId;
    m_symbolicatorRequestIdHasBeenSet = true;
}

bool SymbolicatedView::SymbolicatorRequestIdHasBeenSet() const
{
    return m_symbolicatorRequestIdHasBeenSet;
}

vector<EventFrame> SymbolicatedView::GetFrames() const
{
    return m_frames;
}

void SymbolicatedView::SetFrames(const vector<EventFrame>& _frames)
{
    m_frames = _frames;
    m_framesHasBeenSet = true;
}

bool SymbolicatedView::FramesHasBeenSet() const
{
    return m_framesHasBeenSet;
}

