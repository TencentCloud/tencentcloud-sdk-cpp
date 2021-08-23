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

#include <tencentcloud/apigateway/v20180808/model/ServiceSubDomainMappings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ServiceSubDomainMappings::ServiceSubDomainMappings() :
    m_isDefaultMappingHasBeenSet(false),
    m_pathMappingSetHasBeenSet(false)
{
}

CoreInternalOutcome ServiceSubDomainMappings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsDefaultMapping") && !value["IsDefaultMapping"].IsNull())
    {
        if (!value["IsDefaultMapping"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSubDomainMappings.IsDefaultMapping` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultMapping = value["IsDefaultMapping"].GetBool();
        m_isDefaultMappingHasBeenSet = true;
    }

    if (value.HasMember("PathMappingSet") && !value["PathMappingSet"].IsNull())
    {
        if (!value["PathMappingSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceSubDomainMappings.PathMappingSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PathMappingSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathMappingSet.push_back(item);
        }
        m_pathMappingSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceSubDomainMappings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isDefaultMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultMapping, allocator);
    }

    if (m_pathMappingSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMappingSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathMappingSet.begin(); itr != m_pathMappingSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool ServiceSubDomainMappings::GetIsDefaultMapping() const
{
    return m_isDefaultMapping;
}

void ServiceSubDomainMappings::SetIsDefaultMapping(const bool& _isDefaultMapping)
{
    m_isDefaultMapping = _isDefaultMapping;
    m_isDefaultMappingHasBeenSet = true;
}

bool ServiceSubDomainMappings::IsDefaultMappingHasBeenSet() const
{
    return m_isDefaultMappingHasBeenSet;
}

vector<PathMapping> ServiceSubDomainMappings::GetPathMappingSet() const
{
    return m_pathMappingSet;
}

void ServiceSubDomainMappings::SetPathMappingSet(const vector<PathMapping>& _pathMappingSet)
{
    m_pathMappingSet = _pathMappingSet;
    m_pathMappingSetHasBeenSet = true;
}

bool ServiceSubDomainMappings::PathMappingSetHasBeenSet() const
{
    return m_pathMappingSetHasBeenSet;
}

