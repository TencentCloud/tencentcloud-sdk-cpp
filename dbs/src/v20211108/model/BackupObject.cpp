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

#include <tencentcloud/dbs/v20211108/model/BackupObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupObject::BackupObject() :
    m_objectModeHasBeenSet(false),
    m_objectItemsHasBeenSet(false)
{
}

CoreInternalOutcome BackupObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectMode") && !value["ObjectMode"].IsNull())
    {
        if (!value["ObjectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObject.ObjectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectMode = string(value["ObjectMode"].GetString());
        m_objectModeHasBeenSet = true;
    }

    if (value.HasMember("ObjectItems") && !value["ObjectItems"].IsNull())
    {
        if (!value["ObjectItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupObject.ObjectItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ObjectItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupObjectItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_objectItems.push_back(item);
        }
        m_objectItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_objectItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_objectItems.begin(); itr != m_objectItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BackupObject::GetObjectMode() const
{
    return m_objectMode;
}

void BackupObject::SetObjectMode(const string& _objectMode)
{
    m_objectMode = _objectMode;
    m_objectModeHasBeenSet = true;
}

bool BackupObject::ObjectModeHasBeenSet() const
{
    return m_objectModeHasBeenSet;
}

vector<BackupObjectItem> BackupObject::GetObjectItems() const
{
    return m_objectItems;
}

void BackupObject::SetObjectItems(const vector<BackupObjectItem>& _objectItems)
{
    m_objectItems = _objectItems;
    m_objectItemsHasBeenSet = true;
}

bool BackupObject::ObjectItemsHasBeenSet() const
{
    return m_objectItemsHasBeenSet;
}

