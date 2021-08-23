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

#include <tencentcloud/ie/v20200304/model/TargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

TargetInfo::TargetInfo() :
    m_fileNameHasBeenSet(false),
    m_segmentInfoHasBeenSet(false)
{
}

CoreInternalOutcome TargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("SegmentInfo") && !value["SegmentInfo"].IsNull())
    {
        if (!value["SegmentInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetInfo.SegmentInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentInfo.Deserialize(value["SegmentInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TargetInfo::GetFileName() const
{
    return m_fileName;
}

void TargetInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool TargetInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

SegmentInfo TargetInfo::GetSegmentInfo() const
{
    return m_segmentInfo;
}

void TargetInfo::SetSegmentInfo(const SegmentInfo& _segmentInfo)
{
    m_segmentInfo = _segmentInfo;
    m_segmentInfoHasBeenSet = true;
}

bool TargetInfo::SegmentInfoHasBeenSet() const
{
    return m_segmentInfoHasBeenSet;
}

