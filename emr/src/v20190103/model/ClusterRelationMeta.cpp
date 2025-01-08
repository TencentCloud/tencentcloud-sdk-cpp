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

#include <tencentcloud/emr/v20190103/model/ClusterRelationMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ClusterRelationMeta::ClusterRelationMeta() :
    m_clusterTypeHasBeenSet(false),
    m_clusterIdListHasBeenSet(false)
{
}

CoreInternalOutcome ClusterRelationMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRelationMeta.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterIdList") && !value["ClusterIdList"].IsNull())
    {
        if (!value["ClusterIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterRelationMeta.ClusterIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterIdList.push_back((*itr).GetString());
        }
        m_clusterIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterRelationMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIdList.begin(); itr != m_clusterIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClusterRelationMeta::GetClusterType() const
{
    return m_clusterType;
}

void ClusterRelationMeta::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterRelationMeta::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<string> ClusterRelationMeta::GetClusterIdList() const
{
    return m_clusterIdList;
}

void ClusterRelationMeta::SetClusterIdList(const vector<string>& _clusterIdList)
{
    m_clusterIdList = _clusterIdList;
    m_clusterIdListHasBeenSet = true;
}

bool ClusterRelationMeta::ClusterIdListHasBeenSet() const
{
    return m_clusterIdListHasBeenSet;
}

