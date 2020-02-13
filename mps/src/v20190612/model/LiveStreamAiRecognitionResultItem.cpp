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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiRecognitionResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

LiveStreamAiRecognitionResultItem::LiveStreamAiRecognitionResultItem() :
    m_typeHasBeenSet(false),
    m_faceRecognitionResultSetHasBeenSet(false),
    m_asrWordsRecognitionResultSetHasBeenSet(false),
    m_ocrWordsRecognitionResultSetHasBeenSet(false),
    m_asrFullTextRecognitionResultSetHasBeenSet(false),
    m_ocrFullTextRecognitionResultSetHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiRecognitionResultItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `LiveStreamAiRecognitionResultItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FaceRecognitionResultSet") && !value["FaceRecognitionResultSet"].IsNull())
    {
        if (!value["FaceRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `LiveStreamAiRecognitionResultItem.FaceRecognitionResultSet` is not array type"));

        const Value &tmpValue = value["FaceRecognitionResultSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamFaceRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceRecognitionResultSet.push_back(item);
        }
        m_faceRecognitionResultSetHasBeenSet = true;
    }

    if (value.HasMember("AsrWordsRecognitionResultSet") && !value["AsrWordsRecognitionResultSet"].IsNull())
    {
        if (!value["AsrWordsRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `LiveStreamAiRecognitionResultItem.AsrWordsRecognitionResultSet` is not array type"));

        const Value &tmpValue = value["AsrWordsRecognitionResultSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamAsrWordsRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asrWordsRecognitionResultSet.push_back(item);
        }
        m_asrWordsRecognitionResultSetHasBeenSet = true;
    }

    if (value.HasMember("OcrWordsRecognitionResultSet") && !value["OcrWordsRecognitionResultSet"].IsNull())
    {
        if (!value["OcrWordsRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `LiveStreamAiRecognitionResultItem.OcrWordsRecognitionResultSet` is not array type"));

        const Value &tmpValue = value["OcrWordsRecognitionResultSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamOcrWordsRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ocrWordsRecognitionResultSet.push_back(item);
        }
        m_ocrWordsRecognitionResultSetHasBeenSet = true;
    }

    if (value.HasMember("AsrFullTextRecognitionResultSet") && !value["AsrFullTextRecognitionResultSet"].IsNull())
    {
        if (!value["AsrFullTextRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `LiveStreamAiRecognitionResultItem.AsrFullTextRecognitionResultSet` is not array type"));

        const Value &tmpValue = value["AsrFullTextRecognitionResultSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamAsrFullTextRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asrFullTextRecognitionResultSet.push_back(item);
        }
        m_asrFullTextRecognitionResultSetHasBeenSet = true;
    }

    if (value.HasMember("OcrFullTextRecognitionResultSet") && !value["OcrFullTextRecognitionResultSet"].IsNull())
    {
        if (!value["OcrFullTextRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `LiveStreamAiRecognitionResultItem.OcrFullTextRecognitionResultSet` is not array type"));

        const Value &tmpValue = value["OcrFullTextRecognitionResultSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamOcrFullTextRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ocrFullTextRecognitionResultSet.push_back(item);
        }
        m_ocrFullTextRecognitionResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiRecognitionResultItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_faceRecognitionResultSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceRecognitionResultSet.begin(); itr != m_faceRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_asrWordsRecognitionResultSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AsrWordsRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_asrWordsRecognitionResultSet.begin(); itr != m_asrWordsRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ocrWordsRecognitionResultSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrWordsRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ocrWordsRecognitionResultSet.begin(); itr != m_ocrWordsRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_asrFullTextRecognitionResultSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AsrFullTextRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_asrFullTextRecognitionResultSet.begin(); itr != m_asrFullTextRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ocrFullTextRecognitionResultSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrFullTextRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ocrFullTextRecognitionResultSet.begin(); itr != m_ocrFullTextRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LiveStreamAiRecognitionResultItem::GetType() const
{
    return m_type;
}

void LiveStreamAiRecognitionResultItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LiveStreamAiRecognitionResultItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<LiveStreamFaceRecognitionResult> LiveStreamAiRecognitionResultItem::GetFaceRecognitionResultSet() const
{
    return m_faceRecognitionResultSet;
}

void LiveStreamAiRecognitionResultItem::SetFaceRecognitionResultSet(const vector<LiveStreamFaceRecognitionResult>& _faceRecognitionResultSet)
{
    m_faceRecognitionResultSet = _faceRecognitionResultSet;
    m_faceRecognitionResultSetHasBeenSet = true;
}

bool LiveStreamAiRecognitionResultItem::FaceRecognitionResultSetHasBeenSet() const
{
    return m_faceRecognitionResultSetHasBeenSet;
}

vector<LiveStreamAsrWordsRecognitionResult> LiveStreamAiRecognitionResultItem::GetAsrWordsRecognitionResultSet() const
{
    return m_asrWordsRecognitionResultSet;
}

void LiveStreamAiRecognitionResultItem::SetAsrWordsRecognitionResultSet(const vector<LiveStreamAsrWordsRecognitionResult>& _asrWordsRecognitionResultSet)
{
    m_asrWordsRecognitionResultSet = _asrWordsRecognitionResultSet;
    m_asrWordsRecognitionResultSetHasBeenSet = true;
}

bool LiveStreamAiRecognitionResultItem::AsrWordsRecognitionResultSetHasBeenSet() const
{
    return m_asrWordsRecognitionResultSetHasBeenSet;
}

vector<LiveStreamOcrWordsRecognitionResult> LiveStreamAiRecognitionResultItem::GetOcrWordsRecognitionResultSet() const
{
    return m_ocrWordsRecognitionResultSet;
}

void LiveStreamAiRecognitionResultItem::SetOcrWordsRecognitionResultSet(const vector<LiveStreamOcrWordsRecognitionResult>& _ocrWordsRecognitionResultSet)
{
    m_ocrWordsRecognitionResultSet = _ocrWordsRecognitionResultSet;
    m_ocrWordsRecognitionResultSetHasBeenSet = true;
}

bool LiveStreamAiRecognitionResultItem::OcrWordsRecognitionResultSetHasBeenSet() const
{
    return m_ocrWordsRecognitionResultSetHasBeenSet;
}

vector<LiveStreamAsrFullTextRecognitionResult> LiveStreamAiRecognitionResultItem::GetAsrFullTextRecognitionResultSet() const
{
    return m_asrFullTextRecognitionResultSet;
}

void LiveStreamAiRecognitionResultItem::SetAsrFullTextRecognitionResultSet(const vector<LiveStreamAsrFullTextRecognitionResult>& _asrFullTextRecognitionResultSet)
{
    m_asrFullTextRecognitionResultSet = _asrFullTextRecognitionResultSet;
    m_asrFullTextRecognitionResultSetHasBeenSet = true;
}

bool LiveStreamAiRecognitionResultItem::AsrFullTextRecognitionResultSetHasBeenSet() const
{
    return m_asrFullTextRecognitionResultSetHasBeenSet;
}

vector<LiveStreamOcrFullTextRecognitionResult> LiveStreamAiRecognitionResultItem::GetOcrFullTextRecognitionResultSet() const
{
    return m_ocrFullTextRecognitionResultSet;
}

void LiveStreamAiRecognitionResultItem::SetOcrFullTextRecognitionResultSet(const vector<LiveStreamOcrFullTextRecognitionResult>& _ocrFullTextRecognitionResultSet)
{
    m_ocrFullTextRecognitionResultSet = _ocrFullTextRecognitionResultSet;
    m_ocrFullTextRecognitionResultSetHasBeenSet = true;
}

bool LiveStreamAiRecognitionResultItem::OcrFullTextRecognitionResultSetHasBeenSet() const
{
    return m_ocrFullTextRecognitionResultSetHasBeenSet;
}

