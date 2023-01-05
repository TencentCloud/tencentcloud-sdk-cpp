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

#include <tencentcloud/dts/v20211206/model/CompareObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareObject::CompareObject() :
    m_objectModeHasBeenSet(false),
    m_objectItemsHasBeenSet(false),
    m_advancedObjectsHasBeenSet(false)
{
}

CoreInternalOutcome CompareObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectMode") && !value["ObjectMode"].IsNull())
    {
        if (!value["ObjectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareObject.ObjectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectMode = string(value["ObjectMode"].GetString());
        m_objectModeHasBeenSet = true;
    }

    if (value.HasMember("ObjectItems") && !value["ObjectItems"].IsNull())
    {
        if (!value["ObjectItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareObject.ObjectItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ObjectItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareObjectItem item;
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

    if (value.HasMember("AdvancedObjects") && !value["AdvancedObjects"].IsNull())
    {
        if (!value["AdvancedObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareObject.AdvancedObjects` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvancedObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_advancedObjects.push_back((*itr).GetString());
        }
        m_advancedObjectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_advancedObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advancedObjects.begin(); itr != m_advancedObjects.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CompareObject::GetObjectMode() const
{
    return m_objectMode;
}

void CompareObject::SetObjectMode(const string& _objectMode)
{
    m_objectMode = _objectMode;
    m_objectModeHasBeenSet = true;
}

bool CompareObject::ObjectModeHasBeenSet() const
{
    return m_objectModeHasBeenSet;
}

vector<CompareObjectItem> CompareObject::GetObjectItems() const
{
    return m_objectItems;
}

void CompareObject::SetObjectItems(const vector<CompareObjectItem>& _objectItems)
{
    m_objectItems = _objectItems;
    m_objectItemsHasBeenSet = true;
}

bool CompareObject::ObjectItemsHasBeenSet() const
{
    return m_objectItemsHasBeenSet;
}

vector<string> CompareObject::GetAdvancedObjects() const
{
    return m_advancedObjects;
}

void CompareObject::SetAdvancedObjects(const vector<string>& _advancedObjects)
{
    m_advancedObjects = _advancedObjects;
    m_advancedObjectsHasBeenSet = true;
}

bool CompareObject::AdvancedObjectsHasBeenSet() const
{
    return m_advancedObjectsHasBeenSet;
}

