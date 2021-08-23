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

#include <tencentcloud/tiw/v20190919/model/SnapshotWhiteboard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

SnapshotWhiteboard::SnapshotWhiteboard() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_initParamsHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotWhiteboard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotWhiteboard.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotWhiteboard.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("InitParams") && !value["InitParams"].IsNull())
    {
        if (!value["InitParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotWhiteboard.InitParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initParams = string(value["InitParams"].GetString());
        m_initParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotWhiteboard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_initParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initParams.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SnapshotWhiteboard::GetWidth() const
{
    return m_width;
}

void SnapshotWhiteboard::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool SnapshotWhiteboard::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t SnapshotWhiteboard::GetHeight() const
{
    return m_height;
}

void SnapshotWhiteboard::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool SnapshotWhiteboard::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string SnapshotWhiteboard::GetInitParams() const
{
    return m_initParams;
}

void SnapshotWhiteboard::SetInitParams(const string& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool SnapshotWhiteboard::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

