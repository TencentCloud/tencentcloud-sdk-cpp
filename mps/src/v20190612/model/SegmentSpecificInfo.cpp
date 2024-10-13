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

#include <tencentcloud/mps/v20190612/model/SegmentSpecificInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SegmentSpecificInfo::SegmentSpecificInfo() :
    m_switchHasBeenSet(false),
    m_fragmentTimeHasBeenSet(false),
    m_fragmentEndNumHasBeenSet(false)
{
}

CoreInternalOutcome SegmentSpecificInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentSpecificInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("FragmentTime") && !value["FragmentTime"].IsNull())
    {
        if (!value["FragmentTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentSpecificInfo.FragmentTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentTime = value["FragmentTime"].GetInt64();
        m_fragmentTimeHasBeenSet = true;
    }

    if (value.HasMember("FragmentEndNum") && !value["FragmentEndNum"].IsNull())
    {
        if (!value["FragmentEndNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentSpecificInfo.FragmentEndNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentEndNum = value["FragmentEndNum"].GetInt64();
        m_fragmentEndNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentSpecificInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_fragmentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragmentTime, allocator);
    }

    if (m_fragmentEndNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentEndNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragmentEndNum, allocator);
    }

}


string SegmentSpecificInfo::GetSwitch() const
{
    return m_switch;
}

void SegmentSpecificInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool SegmentSpecificInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t SegmentSpecificInfo::GetFragmentTime() const
{
    return m_fragmentTime;
}

void SegmentSpecificInfo::SetFragmentTime(const int64_t& _fragmentTime)
{
    m_fragmentTime = _fragmentTime;
    m_fragmentTimeHasBeenSet = true;
}

bool SegmentSpecificInfo::FragmentTimeHasBeenSet() const
{
    return m_fragmentTimeHasBeenSet;
}

int64_t SegmentSpecificInfo::GetFragmentEndNum() const
{
    return m_fragmentEndNum;
}

void SegmentSpecificInfo::SetFragmentEndNum(const int64_t& _fragmentEndNum)
{
    m_fragmentEndNum = _fragmentEndNum;
    m_fragmentEndNumHasBeenSet = true;
}

bool SegmentSpecificInfo::FragmentEndNumHasBeenSet() const
{
    return m_fragmentEndNumHasBeenSet;
}

