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

#include <tencentcloud/cynosdb/v20190107/model/BizTaskModifyParamsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BizTaskModifyParamsData::BizTaskModifyParamsData() :
    m_clusterIdHasBeenSet(false),
    m_clusterParamListHasBeenSet(false),
    m_modifyInstanceParamsHasBeenSet(false)
{
}

CoreInternalOutcome BizTaskModifyParamsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskModifyParamsData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterParamList") && !value["ClusterParamList"].IsNull())
    {
        if (!value["ClusterParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BizTaskModifyParamsData.ClusterParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModifyParamItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterParamList.push_back(item);
        }
        m_clusterParamListHasBeenSet = true;
    }

    if (value.HasMember("ModifyInstanceParams") && !value["ModifyInstanceParams"].IsNull())
    {
        if (!value["ModifyInstanceParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BizTaskModifyParamsData.ModifyInstanceParams` is not array type"));

        const rapidjson::Value &tmpValue = value["ModifyInstanceParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BizTaskModifyInstanceParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modifyInstanceParams.push_back(item);
        }
        m_modifyInstanceParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BizTaskModifyParamsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterParamList.begin(); itr != m_clusterParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modifyInstanceParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyInstanceParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyInstanceParams.begin(); itr != m_modifyInstanceParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BizTaskModifyParamsData::GetClusterId() const
{
    return m_clusterId;
}

void BizTaskModifyParamsData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BizTaskModifyParamsData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<ModifyParamItem> BizTaskModifyParamsData::GetClusterParamList() const
{
    return m_clusterParamList;
}

void BizTaskModifyParamsData::SetClusterParamList(const vector<ModifyParamItem>& _clusterParamList)
{
    m_clusterParamList = _clusterParamList;
    m_clusterParamListHasBeenSet = true;
}

bool BizTaskModifyParamsData::ClusterParamListHasBeenSet() const
{
    return m_clusterParamListHasBeenSet;
}

vector<BizTaskModifyInstanceParam> BizTaskModifyParamsData::GetModifyInstanceParams() const
{
    return m_modifyInstanceParams;
}

void BizTaskModifyParamsData::SetModifyInstanceParams(const vector<BizTaskModifyInstanceParam>& _modifyInstanceParams)
{
    m_modifyInstanceParams = _modifyInstanceParams;
    m_modifyInstanceParamsHasBeenSet = true;
}

bool BizTaskModifyParamsData::ModifyInstanceParamsHasBeenSet() const
{
    return m_modifyInstanceParamsHasBeenSet;
}

