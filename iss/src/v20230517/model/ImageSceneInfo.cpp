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

#include <tencentcloud/iss/v20230517/model/ImageSceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ImageSceneInfo::ImageSceneInfo() :
    m_typeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_multiModeHasBeenSet(false)
{
}

CoreInternalOutcome ImageSceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSceneInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSceneInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("MultiMode") && !value["MultiMode"].IsNull())
    {
        if (!value["MultiMode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSceneInfo.MultiMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiMode.Deserialize(value["MultiMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_multiModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiMode.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ImageSceneInfo::GetType() const
{
    return m_type;
}

void ImageSceneInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageSceneInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ImageSceneInfo::GetInterval() const
{
    return m_interval;
}

void ImageSceneInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ImageSceneInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

MultiSnapshotMode ImageSceneInfo::GetMultiMode() const
{
    return m_multiMode;
}

void ImageSceneInfo::SetMultiMode(const MultiSnapshotMode& _multiMode)
{
    m_multiMode = _multiMode;
    m_multiModeHasBeenSet = true;
}

bool ImageSceneInfo::MultiModeHasBeenSet() const
{
    return m_multiModeHasBeenSet;
}

