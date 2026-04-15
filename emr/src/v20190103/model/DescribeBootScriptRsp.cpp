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

#include <tencentcloud/emr/v20190103/model/DescribeBootScriptRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeBootScriptRsp::DescribeBootScriptRsp() :
    m_resourceAfterHasBeenSet(false),
    m_clusterBeforeHasBeenSet(false),
    m_clusterAfterHasBeenSet(false),
    m_serviceBeforeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBootScriptRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceAfter") && !value["ResourceAfter"].IsNull())
    {
        if (!value["ResourceAfter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBootScriptRsp.ResourceAfter` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceAfter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PreExecuteFileSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceAfter.push_back(item);
        }
        m_resourceAfterHasBeenSet = true;
    }

    if (value.HasMember("ClusterBefore") && !value["ClusterBefore"].IsNull())
    {
        if (!value["ClusterBefore"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBootScriptRsp.ClusterBefore` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterBefore"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PreExecuteFileSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterBefore.push_back(item);
        }
        m_clusterBeforeHasBeenSet = true;
    }

    if (value.HasMember("ClusterAfter") && !value["ClusterAfter"].IsNull())
    {
        if (!value["ClusterAfter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBootScriptRsp.ClusterAfter` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterAfter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PreExecuteFileSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterAfter.push_back(item);
        }
        m_clusterAfterHasBeenSet = true;
    }

    if (value.HasMember("ServiceBefore") && !value["ServiceBefore"].IsNull())
    {
        if (!value["ServiceBefore"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBootScriptRsp.ServiceBefore` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceBefore"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PreExecuteFileSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceBefore.push_back(item);
        }
        m_serviceBeforeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBootScriptRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceAfter.begin(); itr != m_resourceAfter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterBefore.begin(); itr != m_clusterBefore.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterAfter.begin(); itr != m_clusterAfter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceBefore.begin(); itr != m_serviceBefore.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PreExecuteFileSetting> DescribeBootScriptRsp::GetResourceAfter() const
{
    return m_resourceAfter;
}

void DescribeBootScriptRsp::SetResourceAfter(const vector<PreExecuteFileSetting>& _resourceAfter)
{
    m_resourceAfter = _resourceAfter;
    m_resourceAfterHasBeenSet = true;
}

bool DescribeBootScriptRsp::ResourceAfterHasBeenSet() const
{
    return m_resourceAfterHasBeenSet;
}

vector<PreExecuteFileSetting> DescribeBootScriptRsp::GetClusterBefore() const
{
    return m_clusterBefore;
}

void DescribeBootScriptRsp::SetClusterBefore(const vector<PreExecuteFileSetting>& _clusterBefore)
{
    m_clusterBefore = _clusterBefore;
    m_clusterBeforeHasBeenSet = true;
}

bool DescribeBootScriptRsp::ClusterBeforeHasBeenSet() const
{
    return m_clusterBeforeHasBeenSet;
}

vector<PreExecuteFileSetting> DescribeBootScriptRsp::GetClusterAfter() const
{
    return m_clusterAfter;
}

void DescribeBootScriptRsp::SetClusterAfter(const vector<PreExecuteFileSetting>& _clusterAfter)
{
    m_clusterAfter = _clusterAfter;
    m_clusterAfterHasBeenSet = true;
}

bool DescribeBootScriptRsp::ClusterAfterHasBeenSet() const
{
    return m_clusterAfterHasBeenSet;
}

vector<PreExecuteFileSetting> DescribeBootScriptRsp::GetServiceBefore() const
{
    return m_serviceBefore;
}

void DescribeBootScriptRsp::SetServiceBefore(const vector<PreExecuteFileSetting>& _serviceBefore)
{
    m_serviceBefore = _serviceBefore;
    m_serviceBeforeHasBeenSet = true;
}

bool DescribeBootScriptRsp::ServiceBeforeHasBeenSet() const
{
    return m_serviceBeforeHasBeenSet;
}

