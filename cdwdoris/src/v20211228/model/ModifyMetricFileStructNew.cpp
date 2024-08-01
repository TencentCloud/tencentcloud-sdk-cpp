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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyMetricFileStructNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyMetricFileStructNew::ModifyMetricFileStructNew() :
    m_instanceTypeHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ifAttentionHasBeenSet(false)
{
}

CoreInternalOutcome ModifyMetricFileStructNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMetricFileStructNew.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MetricType") && !value["MetricType"].IsNull())
    {
        if (!value["MetricType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMetricFileStructNew.MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(value["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMetricFileStructNew.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IfAttention") && !value["IfAttention"].IsNull())
    {
        if (!value["IfAttention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMetricFileStructNew.IfAttention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ifAttention = value["IfAttention"].GetInt64();
        m_ifAttentionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyMetricFileStructNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ifAttentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfAttention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ifAttention, allocator);
    }

}


string ModifyMetricFileStructNew::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyMetricFileStructNew::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyMetricFileStructNew::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ModifyMetricFileStructNew::GetMetricType() const
{
    return m_metricType;
}

void ModifyMetricFileStructNew::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool ModifyMetricFileStructNew::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string ModifyMetricFileStructNew::GetName() const
{
    return m_name;
}

void ModifyMetricFileStructNew::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMetricFileStructNew::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyMetricFileStructNew::GetIfAttention() const
{
    return m_ifAttention;
}

void ModifyMetricFileStructNew::SetIfAttention(const int64_t& _ifAttention)
{
    m_ifAttention = _ifAttention;
    m_ifAttentionHasBeenSet = true;
}

bool ModifyMetricFileStructNew::IfAttentionHasBeenSet() const
{
    return m_ifAttentionHasBeenSet;
}

