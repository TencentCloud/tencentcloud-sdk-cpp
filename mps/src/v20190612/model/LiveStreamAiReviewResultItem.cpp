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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAiReviewResultItem::LiveStreamAiReviewResultItem() :
    m_typeHasBeenSet(false),
    m_imagePornResultSetHasBeenSet(false),
    m_imageTerrorismResultSetHasBeenSet(false),
    m_imagePoliticalResultSetHasBeenSet(false),
    m_voicePornResultSetHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiReviewResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewResultItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ImagePornResultSet") && !value["ImagePornResultSet"].IsNull())
    {
        if (!value["ImagePornResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewResultItem.ImagePornResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImagePornResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamAiReviewImagePornResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imagePornResultSet.push_back(item);
        }
        m_imagePornResultSetHasBeenSet = true;
    }

    if (value.HasMember("ImageTerrorismResultSet") && !value["ImageTerrorismResultSet"].IsNull())
    {
        if (!value["ImageTerrorismResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewResultItem.ImageTerrorismResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageTerrorismResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamAiReviewImageTerrorismResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageTerrorismResultSet.push_back(item);
        }
        m_imageTerrorismResultSetHasBeenSet = true;
    }

    if (value.HasMember("ImagePoliticalResultSet") && !value["ImagePoliticalResultSet"].IsNull())
    {
        if (!value["ImagePoliticalResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewResultItem.ImagePoliticalResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImagePoliticalResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamAiReviewImagePoliticalResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imagePoliticalResultSet.push_back(item);
        }
        m_imagePoliticalResultSetHasBeenSet = true;
    }

    if (value.HasMember("VoicePornResultSet") && !value["VoicePornResultSet"].IsNull())
    {
        if (!value["VoicePornResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewResultItem.VoicePornResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VoicePornResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamAiReviewVoicePornResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_voicePornResultSet.push_back(item);
        }
        m_voicePornResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiReviewResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePornResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePornResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imagePornResultSet.begin(); itr != m_imagePornResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageTerrorismResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTerrorismResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageTerrorismResultSet.begin(); itr != m_imageTerrorismResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imagePoliticalResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePoliticalResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imagePoliticalResultSet.begin(); itr != m_imagePoliticalResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_voicePornResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePornResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_voicePornResultSet.begin(); itr != m_voicePornResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LiveStreamAiReviewResultItem::GetType() const
{
    return m_type;
}

void LiveStreamAiReviewResultItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LiveStreamAiReviewResultItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<LiveStreamAiReviewImagePornResult> LiveStreamAiReviewResultItem::GetImagePornResultSet() const
{
    return m_imagePornResultSet;
}

void LiveStreamAiReviewResultItem::SetImagePornResultSet(const vector<LiveStreamAiReviewImagePornResult>& _imagePornResultSet)
{
    m_imagePornResultSet = _imagePornResultSet;
    m_imagePornResultSetHasBeenSet = true;
}

bool LiveStreamAiReviewResultItem::ImagePornResultSetHasBeenSet() const
{
    return m_imagePornResultSetHasBeenSet;
}

vector<LiveStreamAiReviewImageTerrorismResult> LiveStreamAiReviewResultItem::GetImageTerrorismResultSet() const
{
    return m_imageTerrorismResultSet;
}

void LiveStreamAiReviewResultItem::SetImageTerrorismResultSet(const vector<LiveStreamAiReviewImageTerrorismResult>& _imageTerrorismResultSet)
{
    m_imageTerrorismResultSet = _imageTerrorismResultSet;
    m_imageTerrorismResultSetHasBeenSet = true;
}

bool LiveStreamAiReviewResultItem::ImageTerrorismResultSetHasBeenSet() const
{
    return m_imageTerrorismResultSetHasBeenSet;
}

vector<LiveStreamAiReviewImagePoliticalResult> LiveStreamAiReviewResultItem::GetImagePoliticalResultSet() const
{
    return m_imagePoliticalResultSet;
}

void LiveStreamAiReviewResultItem::SetImagePoliticalResultSet(const vector<LiveStreamAiReviewImagePoliticalResult>& _imagePoliticalResultSet)
{
    m_imagePoliticalResultSet = _imagePoliticalResultSet;
    m_imagePoliticalResultSetHasBeenSet = true;
}

bool LiveStreamAiReviewResultItem::ImagePoliticalResultSetHasBeenSet() const
{
    return m_imagePoliticalResultSetHasBeenSet;
}

vector<LiveStreamAiReviewVoicePornResult> LiveStreamAiReviewResultItem::GetVoicePornResultSet() const
{
    return m_voicePornResultSet;
}

void LiveStreamAiReviewResultItem::SetVoicePornResultSet(const vector<LiveStreamAiReviewVoicePornResult>& _voicePornResultSet)
{
    m_voicePornResultSet = _voicePornResultSet;
    m_voicePornResultSetHasBeenSet = true;
}

bool LiveStreamAiReviewResultItem::VoicePornResultSetHasBeenSet() const
{
    return m_voicePornResultSetHasBeenSet;
}

