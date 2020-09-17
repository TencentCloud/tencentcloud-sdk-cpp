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

#include <tencentcloud/ie/v20200304/model/SegmentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

SegmentInfo::SegmentInfo() :
    m_fragmentTimeHasBeenSet(false),
    m_segmentTypeHasBeenSet(false),
    m_fragmentNameHasBeenSet(false)
{
}

CoreInternalOutcome SegmentInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FragmentTime") && !value["FragmentTime"].IsNull())
    {
        if (!value["FragmentTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SegmentInfo.FragmentTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentTime = value["FragmentTime"].GetInt64();
        m_fragmentTimeHasBeenSet = true;
    }

    if (value.HasMember("SegmentType") && !value["SegmentType"].IsNull())
    {
        if (!value["SegmentType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SegmentInfo.SegmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentType = string(value["SegmentType"].GetString());
        m_segmentTypeHasBeenSet = true;
    }

    if (value.HasMember("FragmentName") && !value["FragmentName"].IsNull())
    {
        if (!value["FragmentName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SegmentInfo.FragmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentName = string(value["FragmentName"].GetString());
        m_fragmentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fragmentTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FragmentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragmentTime, allocator);
    }

    if (m_segmentTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SegmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_segmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_fragmentNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FragmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fragmentName.c_str(), allocator).Move(), allocator);
    }

}


int64_t SegmentInfo::GetFragmentTime() const
{
    return m_fragmentTime;
}

void SegmentInfo::SetFragmentTime(const int64_t& _fragmentTime)
{
    m_fragmentTime = _fragmentTime;
    m_fragmentTimeHasBeenSet = true;
}

bool SegmentInfo::FragmentTimeHasBeenSet() const
{
    return m_fragmentTimeHasBeenSet;
}

string SegmentInfo::GetSegmentType() const
{
    return m_segmentType;
}

void SegmentInfo::SetSegmentType(const string& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool SegmentInfo::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}

string SegmentInfo::GetFragmentName() const
{
    return m_fragmentName;
}

void SegmentInfo::SetFragmentName(const string& _fragmentName)
{
    m_fragmentName = _fragmentName;
    m_fragmentNameHasBeenSet = true;
}

bool SegmentInfo::FragmentNameHasBeenSet() const
{
    return m_fragmentNameHasBeenSet;
}

