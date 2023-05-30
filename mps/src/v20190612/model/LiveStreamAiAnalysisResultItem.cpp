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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiAnalysisResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAiAnalysisResultItem::LiveStreamAiAnalysisResultItem() :
    m_typeHasBeenSet(false),
    m_segmentResultSetHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiAnalysisResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiAnalysisResultItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SegmentResultSet") && !value["SegmentResultSet"].IsNull())
    {
        if (!value["SegmentResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiAnalysisResultItem.SegmentResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SegmentRecognitionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentResultSet.push_back(item);
        }
        m_segmentResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiAnalysisResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentResultSet.begin(); itr != m_segmentResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LiveStreamAiAnalysisResultItem::GetType() const
{
    return m_type;
}

void LiveStreamAiAnalysisResultItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LiveStreamAiAnalysisResultItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<SegmentRecognitionItem> LiveStreamAiAnalysisResultItem::GetSegmentResultSet() const
{
    return m_segmentResultSet;
}

void LiveStreamAiAnalysisResultItem::SetSegmentResultSet(const vector<SegmentRecognitionItem>& _segmentResultSet)
{
    m_segmentResultSet = _segmentResultSet;
    m_segmentResultSetHasBeenSet = true;
}

bool LiveStreamAiAnalysisResultItem::SegmentResultSetHasBeenSet() const
{
    return m_segmentResultSetHasBeenSet;
}

