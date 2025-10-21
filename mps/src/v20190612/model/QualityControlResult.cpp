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

#include <tencentcloud/mps/v20190612/model/QualityControlResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

QualityControlResult::QualityControlResult() :
    m_typeHasBeenSet(false),
    m_qualityControlItemsHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("QualityControlItems") && !value["QualityControlItems"].IsNull())
    {
        if (!value["QualityControlItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlResult.QualityControlItems` is not array type"));

        const rapidjson::Value &tmpValue = value["QualityControlItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualityControlItems.push_back(item);
        }
        m_qualityControlItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityControlItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityControlItems.begin(); itr != m_qualityControlItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QualityControlResult::GetType() const
{
    return m_type;
}

void QualityControlResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QualityControlResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<QualityControlItem> QualityControlResult::GetQualityControlItems() const
{
    return m_qualityControlItems;
}

void QualityControlResult::SetQualityControlItems(const vector<QualityControlItem>& _qualityControlItems)
{
    m_qualityControlItems = _qualityControlItems;
    m_qualityControlItemsHasBeenSet = true;
}

bool QualityControlResult::QualityControlItemsHasBeenSet() const
{
    return m_qualityControlItemsHasBeenSet;
}

