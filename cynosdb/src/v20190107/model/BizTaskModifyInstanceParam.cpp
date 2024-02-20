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

#include <tencentcloud/cynosdb/v20190107/model/BizTaskModifyInstanceParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BizTaskModifyInstanceParam::BizTaskModifyInstanceParam() :
    m_instanceIdHasBeenSet(false),
    m_modifyInstanceParamListHasBeenSet(false)
{
}

CoreInternalOutcome BizTaskModifyInstanceParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskModifyInstanceParam.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyInstanceParamList") && !value["ModifyInstanceParamList"].IsNull())
    {
        if (!value["ModifyInstanceParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BizTaskModifyInstanceParam.ModifyInstanceParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ModifyInstanceParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModifyParamItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modifyInstanceParamList.push_back(item);
        }
        m_modifyInstanceParamListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BizTaskModifyInstanceParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyInstanceParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyInstanceParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyInstanceParamList.begin(); itr != m_modifyInstanceParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BizTaskModifyInstanceParam::GetInstanceId() const
{
    return m_instanceId;
}

void BizTaskModifyInstanceParam::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BizTaskModifyInstanceParam::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ModifyParamItem> BizTaskModifyInstanceParam::GetModifyInstanceParamList() const
{
    return m_modifyInstanceParamList;
}

void BizTaskModifyInstanceParam::SetModifyInstanceParamList(const vector<ModifyParamItem>& _modifyInstanceParamList)
{
    m_modifyInstanceParamList = _modifyInstanceParamList;
    m_modifyInstanceParamListHasBeenSet = true;
}

bool BizTaskModifyInstanceParam::ModifyInstanceParamListHasBeenSet() const
{
    return m_modifyInstanceParamListHasBeenSet;
}

