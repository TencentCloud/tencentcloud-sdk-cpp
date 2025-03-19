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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTaskTransTextResultOutput::SmartSubtitleTaskTransTextResultOutput() :
    m_segmentSetHasBeenSet(false),
    m_subtitlePathHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTaskTransTextResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextResultOutput.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SmartSubtitleTaskTransTextSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }

    if (value.HasMember("SubtitlePath") && !value["SubtitlePath"].IsNull())
    {
        if (!value["SubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextResultOutput.SubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitlePath = string(value["SubtitlePath"].GetString());
        m_subtitlePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitleTaskTransTextResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitlePath.c_str(), allocator).Move(), allocator);
    }

}


vector<SmartSubtitleTaskTransTextSegmentItem> SmartSubtitleTaskTransTextResultOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void SmartSubtitleTaskTransTextResultOutput::SetSegmentSet(const vector<SmartSubtitleTaskTransTextSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextResultOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string SmartSubtitleTaskTransTextResultOutput::GetSubtitlePath() const
{
    return m_subtitlePath;
}

void SmartSubtitleTaskTransTextResultOutput::SetSubtitlePath(const string& _subtitlePath)
{
    m_subtitlePath = _subtitlePath;
    m_subtitlePathHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextResultOutput::SubtitlePathHasBeenSet() const
{
    return m_subtitlePathHasBeenSet;
}

