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

#include <tencentcloud/cynosdb/v20190107/model/ClusterReadOnlyValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ClusterReadOnlyValue::ClusterReadOnlyValue() :
    m_clusterIdHasBeenSet(false),
    m_readOnlyValueHasBeenSet(false)
{
}

CoreInternalOutcome ClusterReadOnlyValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterReadOnlyValue.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyValue") && !value["ReadOnlyValue"].IsNull())
    {
        if (!value["ReadOnlyValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterReadOnlyValue.ReadOnlyValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyValue = string(value["ReadOnlyValue"].GetString());
        m_readOnlyValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterReadOnlyValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyValue.c_str(), allocator).Move(), allocator);
    }

}


string ClusterReadOnlyValue::GetClusterId() const
{
    return m_clusterId;
}

void ClusterReadOnlyValue::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterReadOnlyValue::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterReadOnlyValue::GetReadOnlyValue() const
{
    return m_readOnlyValue;
}

void ClusterReadOnlyValue::SetReadOnlyValue(const string& _readOnlyValue)
{
    m_readOnlyValue = _readOnlyValue;
    m_readOnlyValueHasBeenSet = true;
}

bool ClusterReadOnlyValue::ReadOnlyValueHasBeenSet() const
{
    return m_readOnlyValueHasBeenSet;
}

