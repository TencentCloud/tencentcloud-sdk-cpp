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

#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

AutoScaleDiskInfo::AutoScaleDiskInfo() :
    m_nodeTypeHasBeenSet(false),
    m_scaleTypeHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_percentSizeHasBeenSet(false),
    m_fixSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false)
{
}

CoreInternalOutcome AutoScaleDiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ScaleType") && !value["ScaleType"].IsNull())
    {
        if (!value["ScaleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.ScaleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleType = value["ScaleType"].GetUint64();
        m_scaleTypeHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.Threshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetUint64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("PercentSize") && !value["PercentSize"].IsNull())
    {
        if (!value["PercentSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.PercentSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percentSize = value["PercentSize"].GetUint64();
        m_percentSizeHasBeenSet = true;
    }

    if (value.HasMember("FixSize") && !value["FixSize"].IsNull())
    {
        if (!value["FixSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.FixSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSize = value["FixSize"].GetUint64();
        m_fixSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDiskInfo.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScaleDiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleType, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_percentSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PercentSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentSize, allocator);
    }

    if (m_fixSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

}


string AutoScaleDiskInfo::GetNodeType() const
{
    return m_nodeType;
}

void AutoScaleDiskInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool AutoScaleDiskInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t AutoScaleDiskInfo::GetScaleType() const
{
    return m_scaleType;
}

void AutoScaleDiskInfo::SetScaleType(const uint64_t& _scaleType)
{
    m_scaleType = _scaleType;
    m_scaleTypeHasBeenSet = true;
}

bool AutoScaleDiskInfo::ScaleTypeHasBeenSet() const
{
    return m_scaleTypeHasBeenSet;
}

uint64_t AutoScaleDiskInfo::GetThreshold() const
{
    return m_threshold;
}

void AutoScaleDiskInfo::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool AutoScaleDiskInfo::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

uint64_t AutoScaleDiskInfo::GetDuration() const
{
    return m_duration;
}

void AutoScaleDiskInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AutoScaleDiskInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t AutoScaleDiskInfo::GetPercentSize() const
{
    return m_percentSize;
}

void AutoScaleDiskInfo::SetPercentSize(const uint64_t& _percentSize)
{
    m_percentSize = _percentSize;
    m_percentSizeHasBeenSet = true;
}

bool AutoScaleDiskInfo::PercentSizeHasBeenSet() const
{
    return m_percentSizeHasBeenSet;
}

uint64_t AutoScaleDiskInfo::GetFixSize() const
{
    return m_fixSize;
}

void AutoScaleDiskInfo::SetFixSize(const uint64_t& _fixSize)
{
    m_fixSize = _fixSize;
    m_fixSizeHasBeenSet = true;
}

bool AutoScaleDiskInfo::FixSizeHasBeenSet() const
{
    return m_fixSizeHasBeenSet;
}

uint64_t AutoScaleDiskInfo::GetMaxSize() const
{
    return m_maxSize;
}

void AutoScaleDiskInfo::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool AutoScaleDiskInfo::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

