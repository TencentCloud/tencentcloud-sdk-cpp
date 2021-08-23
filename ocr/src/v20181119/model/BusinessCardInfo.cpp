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

#include <tencentcloud/ocr/v20181119/model/BusinessCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BusinessCardInfo::BusinessCardInfo() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_itemCoordHasBeenSet(false)
{
}

CoreInternalOutcome BusinessCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessCardInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessCardInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ItemCoord") && !value["ItemCoord"].IsNull())
    {
        if (!value["ItemCoord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessCardInfo.ItemCoord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemCoord.Deserialize(value["ItemCoord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemCoordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemCoord.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BusinessCardInfo::GetName() const
{
    return m_name;
}

void BusinessCardInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BusinessCardInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BusinessCardInfo::GetValue() const
{
    return m_value;
}

void BusinessCardInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BusinessCardInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

ItemCoord BusinessCardInfo::GetItemCoord() const
{
    return m_itemCoord;
}

void BusinessCardInfo::SetItemCoord(const ItemCoord& _itemCoord)
{
    m_itemCoord = _itemCoord;
    m_itemCoordHasBeenSet = true;
}

bool BusinessCardInfo::ItemCoordHasBeenSet() const
{
    return m_itemCoordHasBeenSet;
}

