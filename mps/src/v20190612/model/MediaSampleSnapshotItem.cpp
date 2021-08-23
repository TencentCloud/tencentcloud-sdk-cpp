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

#include <tencentcloud/mps/v20190612/model/MediaSampleSnapshotItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaSampleSnapshotItem::MediaSampleSnapshotItem() :
    m_definitionHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_imagePathSetHasBeenSet(false),
    m_waterMarkDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome MediaSampleSnapshotItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotItem.SampleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleType = string(value["SampleType"].GetString());
        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotItem.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotItem.Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(value["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
    }

    if (value.HasMember("ImagePathSet") && !value["ImagePathSet"].IsNull())
    {
        if (!value["ImagePathSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotItem.ImagePathSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImagePathSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imagePathSet.push_back((*itr).GetString());
        }
        m_imagePathSetHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkDefinition") && !value["WaterMarkDefinition"].IsNull())
    {
        if (!value["WaterMarkDefinition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotItem.WaterMarkDefinition` is not array type"));

        const rapidjson::Value &tmpValue = value["WaterMarkDefinition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_waterMarkDefinition.push_back((*itr).GetInt64());
        }
        m_waterMarkDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSampleSnapshotItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imagePathSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePathSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imagePathSet.begin(); itr != m_imagePathSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_waterMarkDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_waterMarkDefinition.begin(); itr != m_waterMarkDefinition.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t MediaSampleSnapshotItem::GetDefinition() const
{
    return m_definition;
}

void MediaSampleSnapshotItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MediaSampleSnapshotItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string MediaSampleSnapshotItem::GetSampleType() const
{
    return m_sampleType;
}

void MediaSampleSnapshotItem::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool MediaSampleSnapshotItem::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

int64_t MediaSampleSnapshotItem::GetInterval() const
{
    return m_interval;
}

void MediaSampleSnapshotItem::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool MediaSampleSnapshotItem::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

TaskOutputStorage MediaSampleSnapshotItem::GetStorage() const
{
    return m_storage;
}

void MediaSampleSnapshotItem::SetStorage(const TaskOutputStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool MediaSampleSnapshotItem::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

vector<string> MediaSampleSnapshotItem::GetImagePathSet() const
{
    return m_imagePathSet;
}

void MediaSampleSnapshotItem::SetImagePathSet(const vector<string>& _imagePathSet)
{
    m_imagePathSet = _imagePathSet;
    m_imagePathSetHasBeenSet = true;
}

bool MediaSampleSnapshotItem::ImagePathSetHasBeenSet() const
{
    return m_imagePathSetHasBeenSet;
}

vector<int64_t> MediaSampleSnapshotItem::GetWaterMarkDefinition() const
{
    return m_waterMarkDefinition;
}

void MediaSampleSnapshotItem::SetWaterMarkDefinition(const vector<int64_t>& _waterMarkDefinition)
{
    m_waterMarkDefinition = _waterMarkDefinition;
    m_waterMarkDefinitionHasBeenSet = true;
}

bool MediaSampleSnapshotItem::WaterMarkDefinitionHasBeenSet() const
{
    return m_waterMarkDefinitionHasBeenSet;
}

