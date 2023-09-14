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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskObjectResultItem::AiRecognitionTaskObjectResultItem() :
    m_nameHasBeenSet(false),
    m_segmentSetHasBeenSet(false),
    m_recognitionSegmentSetHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskObjectResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskObjectResultItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskObjectResultItem.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskObjectSeqmentItem item;
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

    if (value.HasMember("RecognitionSegmentSet") && !value["RecognitionSegmentSet"].IsNull())
    {
        if (!value["RecognitionSegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskObjectResultItem.RecognitionSegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RecognitionSegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskObjectSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recognitionSegmentSet.push_back(item);
        }
        m_recognitionSegmentSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskObjectResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

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

    if (m_recognitionSegmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognitionSegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recognitionSegmentSet.begin(); itr != m_recognitionSegmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AiRecognitionTaskObjectResultItem::GetName() const
{
    return m_name;
}

void AiRecognitionTaskObjectResultItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AiRecognitionTaskObjectResultItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AiRecognitionTaskObjectSeqmentItem> AiRecognitionTaskObjectResultItem::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiRecognitionTaskObjectResultItem::SetSegmentSet(const vector<AiRecognitionTaskObjectSeqmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiRecognitionTaskObjectResultItem::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

vector<AiRecognitionTaskObjectSegmentItem> AiRecognitionTaskObjectResultItem::GetRecognitionSegmentSet() const
{
    return m_recognitionSegmentSet;
}

void AiRecognitionTaskObjectResultItem::SetRecognitionSegmentSet(const vector<AiRecognitionTaskObjectSegmentItem>& _recognitionSegmentSet)
{
    m_recognitionSegmentSet = _recognitionSegmentSet;
    m_recognitionSegmentSetHasBeenSet = true;
}

bool AiRecognitionTaskObjectResultItem::RecognitionSegmentSetHasBeenSet() const
{
    return m_recognitionSegmentSetHasBeenSet;
}

