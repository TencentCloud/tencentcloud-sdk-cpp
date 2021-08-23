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

#include <tencentcloud/tci/v20190318/model/ActionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ActionInfo::ActionInfo() :
    m_bodyPostureHasBeenSet(false),
    m_handupHasBeenSet(false),
    m_lookHeadHasBeenSet(false),
    m_writingHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_topHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome ActionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BodyPosture") && !value["BodyPosture"].IsNull())
    {
        if (!value["BodyPosture"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.BodyPosture` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyPosture.Deserialize(value["BodyPosture"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyPostureHasBeenSet = true;
    }

    if (value.HasMember("Handup") && !value["Handup"].IsNull())
    {
        if (!value["Handup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.Handup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_handup.Deserialize(value["Handup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_handupHasBeenSet = true;
    }

    if (value.HasMember("LookHead") && !value["LookHead"].IsNull())
    {
        if (!value["LookHead"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.LookHead` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lookHead.Deserialize(value["LookHead"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lookHeadHasBeenSet = true;
    }

    if (value.HasMember("Writing") && !value["Writing"].IsNull())
    {
        if (!value["Writing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.Writing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_writing.Deserialize(value["Writing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_writingHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.Top` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetInt64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bodyPostureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyPosture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bodyPosture.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_handupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_handup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lookHeadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LookHead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lookHead.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_writingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Writing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_writing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

}


ActionType ActionInfo::GetBodyPosture() const
{
    return m_bodyPosture;
}

void ActionInfo::SetBodyPosture(const ActionType& _bodyPosture)
{
    m_bodyPosture = _bodyPosture;
    m_bodyPostureHasBeenSet = true;
}

bool ActionInfo::BodyPostureHasBeenSet() const
{
    return m_bodyPostureHasBeenSet;
}

ActionType ActionInfo::GetHandup() const
{
    return m_handup;
}

void ActionInfo::SetHandup(const ActionType& _handup)
{
    m_handup = _handup;
    m_handupHasBeenSet = true;
}

bool ActionInfo::HandupHasBeenSet() const
{
    return m_handupHasBeenSet;
}

ActionType ActionInfo::GetLookHead() const
{
    return m_lookHead;
}

void ActionInfo::SetLookHead(const ActionType& _lookHead)
{
    m_lookHead = _lookHead;
    m_lookHeadHasBeenSet = true;
}

bool ActionInfo::LookHeadHasBeenSet() const
{
    return m_lookHeadHasBeenSet;
}

ActionType ActionInfo::GetWriting() const
{
    return m_writing;
}

void ActionInfo::SetWriting(const ActionType& _writing)
{
    m_writing = _writing;
    m_writingHasBeenSet = true;
}

bool ActionInfo::WritingHasBeenSet() const
{
    return m_writingHasBeenSet;
}

int64_t ActionInfo::GetHeight() const
{
    return m_height;
}

void ActionInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ActionInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t ActionInfo::GetLeft() const
{
    return m_left;
}

void ActionInfo::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool ActionInfo::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

int64_t ActionInfo::GetTop() const
{
    return m_top;
}

void ActionInfo::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool ActionInfo::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

int64_t ActionInfo::GetWidth() const
{
    return m_width;
}

void ActionInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ActionInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

