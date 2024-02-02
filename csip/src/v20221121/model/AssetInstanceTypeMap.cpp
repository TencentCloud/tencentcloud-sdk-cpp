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

#include <tencentcloud/csip/v20221121/model/AssetInstanceTypeMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetInstanceTypeMap::AssetInstanceTypeMap() :
    m_textHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_instanceTypeListHasBeenSet(false)
{
}

CoreInternalOutcome AssetInstanceTypeMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInstanceTypeMap.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInstanceTypeMap.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeList") && !value["InstanceTypeList"].IsNull())
    {
        if (!value["InstanceTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetInstanceTypeMap.InstanceTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTypeList.push_back(item);
        }
        m_instanceTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetInstanceTypeMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTypeList.begin(); itr != m_instanceTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AssetInstanceTypeMap::GetText() const
{
    return m_text;
}

void AssetInstanceTypeMap::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AssetInstanceTypeMap::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string AssetInstanceTypeMap::GetValue() const
{
    return m_value;
}

void AssetInstanceTypeMap::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AssetInstanceTypeMap::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<FilterDataObject> AssetInstanceTypeMap::GetInstanceTypeList() const
{
    return m_instanceTypeList;
}

void AssetInstanceTypeMap::SetInstanceTypeList(const vector<FilterDataObject>& _instanceTypeList)
{
    m_instanceTypeList = _instanceTypeList;
    m_instanceTypeListHasBeenSet = true;
}

bool AssetInstanceTypeMap::InstanceTypeListHasBeenSet() const
{
    return m_instanceTypeListHasBeenSet;
}

