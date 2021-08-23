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

#include <tencentcloud/ie/v20200304/model/QualityControlResultItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

QualityControlResultItems::QualityControlResultItems() :
    m_idHasBeenSet(false),
    m_qualityControlItemsHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlResultItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlResultItems.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("QualityControlItems") && !value["QualityControlItems"].IsNull())
    {
        if (!value["QualityControlItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlResultItems.QualityControlItems` is not array type"));

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

void QualityControlResultItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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


string QualityControlResultItems::GetId() const
{
    return m_id;
}

void QualityControlResultItems::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool QualityControlResultItems::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<QualityControlItem> QualityControlResultItems::GetQualityControlItems() const
{
    return m_qualityControlItems;
}

void QualityControlResultItems::SetQualityControlItems(const vector<QualityControlItem>& _qualityControlItems)
{
    m_qualityControlItems = _qualityControlItems;
    m_qualityControlItemsHasBeenSet = true;
}

bool QualityControlResultItems::QualityControlItemsHasBeenSet() const
{
    return m_qualityControlItemsHasBeenSet;
}

