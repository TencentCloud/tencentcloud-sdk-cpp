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

#include <tencentcloud/ckafka/v20190819/model/DealInstanceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DealInstanceDTO::DealInstanceDTO() :
    m_dealNameHasBeenSet(false),
    m_instanceIdListHasBeenSet(false)
{
}

CoreInternalOutcome DealInstanceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealInstanceDTO.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdList") && !value["InstanceIdList"].IsNull())
    {
        if (!value["InstanceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealInstanceDTO.InstanceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdList.push_back((*itr).GetString());
        }
        m_instanceIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DealInstanceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DealInstanceDTO::GetDealName() const
{
    return m_dealName;
}

void DealInstanceDTO::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool DealInstanceDTO::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

vector<string> DealInstanceDTO::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void DealInstanceDTO::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool DealInstanceDTO::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

