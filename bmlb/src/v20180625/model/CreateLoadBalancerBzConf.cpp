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

#include <tencentcloud/bmlb/v20180625/model/CreateLoadBalancerBzConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

CreateLoadBalancerBzConf::CreateLoadBalancerBzConf() :
    m_bzPayModeHasBeenSet(false),
    m_bzL4MetricsHasBeenSet(false),
    m_bzL7MetricsHasBeenSet(false)
{
}

CoreInternalOutcome CreateLoadBalancerBzConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BzPayMode") && !value["BzPayMode"].IsNull())
    {
        if (!value["BzPayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateLoadBalancerBzConf.BzPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bzPayMode = string(value["BzPayMode"].GetString());
        m_bzPayModeHasBeenSet = true;
    }

    if (value.HasMember("BzL4Metrics") && !value["BzL4Metrics"].IsNull())
    {
        if (!value["BzL4Metrics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateLoadBalancerBzConf.BzL4Metrics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bzL4Metrics = string(value["BzL4Metrics"].GetString());
        m_bzL4MetricsHasBeenSet = true;
    }

    if (value.HasMember("BzL7Metrics") && !value["BzL7Metrics"].IsNull())
    {
        if (!value["BzL7Metrics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateLoadBalancerBzConf.BzL7Metrics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bzL7Metrics = string(value["BzL7Metrics"].GetString());
        m_bzL7MetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateLoadBalancerBzConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bzPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bzPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bzL4MetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzL4Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bzL4Metrics.c_str(), allocator).Move(), allocator);
    }

    if (m_bzL7MetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzL7Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bzL7Metrics.c_str(), allocator).Move(), allocator);
    }

}


string CreateLoadBalancerBzConf::GetBzPayMode() const
{
    return m_bzPayMode;
}

void CreateLoadBalancerBzConf::SetBzPayMode(const string& _bzPayMode)
{
    m_bzPayMode = _bzPayMode;
    m_bzPayModeHasBeenSet = true;
}

bool CreateLoadBalancerBzConf::BzPayModeHasBeenSet() const
{
    return m_bzPayModeHasBeenSet;
}

string CreateLoadBalancerBzConf::GetBzL4Metrics() const
{
    return m_bzL4Metrics;
}

void CreateLoadBalancerBzConf::SetBzL4Metrics(const string& _bzL4Metrics)
{
    m_bzL4Metrics = _bzL4Metrics;
    m_bzL4MetricsHasBeenSet = true;
}

bool CreateLoadBalancerBzConf::BzL4MetricsHasBeenSet() const
{
    return m_bzL4MetricsHasBeenSet;
}

string CreateLoadBalancerBzConf::GetBzL7Metrics() const
{
    return m_bzL7Metrics;
}

void CreateLoadBalancerBzConf::SetBzL7Metrics(const string& _bzL7Metrics)
{
    m_bzL7Metrics = _bzL7Metrics;
    m_bzL7MetricsHasBeenSet = true;
}

bool CreateLoadBalancerBzConf::BzL7MetricsHasBeenSet() const
{
    return m_bzL7MetricsHasBeenSet;
}

