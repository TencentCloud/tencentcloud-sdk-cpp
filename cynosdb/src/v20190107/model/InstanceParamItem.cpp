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

#include <tencentcloud/cynosdb/v20190107/model/InstanceParamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceParamItem::InstanceParamItem() :
    m_instanceIdHasBeenSet(false),
    m_paramsItemsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceParamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceParamItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ParamsItems") && !value["ParamsItems"].IsNull())
    {
        if (!value["ParamsItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceParamItem.ParamsItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamsItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamItemDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramsItems.push_back(item);
        }
        m_paramsItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceParamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamsItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramsItems.begin(); itr != m_paramsItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceParamItem::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceParamItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceParamItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ParamItemDetail> InstanceParamItem::GetParamsItems() const
{
    return m_paramsItems;
}

void InstanceParamItem::SetParamsItems(const vector<ParamItemDetail>& _paramsItems)
{
    m_paramsItems = _paramsItems;
    m_paramsItemsHasBeenSet = true;
}

bool InstanceParamItem::ParamsItemsHasBeenSet() const
{
    return m_paramsItemsHasBeenSet;
}

