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

#include <tencentcloud/tse/v20201207/model/TSEGatewaySelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

TSEGatewaySelector::TSEGatewaySelector() :
    m_gatewayIdHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
}

CoreInternalOutcome TSEGatewaySelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TSEGatewaySelector.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TSEGatewaySelector.Services` is not array type"));

        const rapidjson::Value &tmpValue = value["Services"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_services.push_back((*itr).GetString());
        }
        m_servicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TSEGatewaySelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TSEGatewaySelector::GetGatewayId() const
{
    return m_gatewayId;
}

void TSEGatewaySelector::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool TSEGatewaySelector::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

vector<string> TSEGatewaySelector::GetServices() const
{
    return m_services;
}

void TSEGatewaySelector::SetServices(const vector<string>& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool TSEGatewaySelector::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

