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

#include <tencentcloud/tcm/v20210413/model/MetricSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

MetricSpec::MetricSpec() :
    m_typeHasBeenSet(false),
    m_podsHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

CoreInternalOutcome MetricSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSpec.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Pods") && !value["Pods"].IsNull())
    {
        if (!value["Pods"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSpec.Pods` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pods.Deserialize(value["Pods"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podsHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSpec.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_podsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pods.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MetricSpec::GetType() const
{
    return m_type;
}

void MetricSpec::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MetricSpec::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

PodsMetricSource MetricSpec::GetPods() const
{
    return m_pods;
}

void MetricSpec::SetPods(const PodsMetricSource& _pods)
{
    m_pods = _pods;
    m_podsHasBeenSet = true;
}

bool MetricSpec::PodsHasBeenSet() const
{
    return m_podsHasBeenSet;
}

ResourceMetricSource MetricSpec::GetResource() const
{
    return m_resource;
}

void MetricSpec::SetResource(const ResourceMetricSource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MetricSpec::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

