/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/MediaSnapshotByTimeOffsetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaSnapshotByTimeOffsetItem::MediaSnapshotByTimeOffsetItem() :
    m_definitionHasBeenSet(false),
    m_picInfoSetHasBeenSet(false),
    m_storageHasBeenSet(false)
{
}

CoreInternalOutcome MediaSnapshotByTimeOffsetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimeOffsetItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("PicInfoSet") && !value["PicInfoSet"].IsNull())
    {
        if (!value["PicInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimeOffsetItem.PicInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PicInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSnapshotByTimePicInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_picInfoSet.push_back(item);
        }
        m_picInfoSetHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimeOffsetItem.Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(value["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSnapshotByTimeOffsetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_picInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_picInfoSet.begin(); itr != m_picInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MediaSnapshotByTimeOffsetItem::GetDefinition() const
{
    return m_definition;
}

void MediaSnapshotByTimeOffsetItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MediaSnapshotByTimeOffsetItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<MediaSnapshotByTimePicInfoItem> MediaSnapshotByTimeOffsetItem::GetPicInfoSet() const
{
    return m_picInfoSet;
}

void MediaSnapshotByTimeOffsetItem::SetPicInfoSet(const vector<MediaSnapshotByTimePicInfoItem>& _picInfoSet)
{
    m_picInfoSet = _picInfoSet;
    m_picInfoSetHasBeenSet = true;
}

bool MediaSnapshotByTimeOffsetItem::PicInfoSetHasBeenSet() const
{
    return m_picInfoSetHasBeenSet;
}

TaskOutputStorage MediaSnapshotByTimeOffsetItem::GetStorage() const
{
    return m_storage;
}

void MediaSnapshotByTimeOffsetItem::SetStorage(const TaskOutputStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool MediaSnapshotByTimeOffsetItem::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

