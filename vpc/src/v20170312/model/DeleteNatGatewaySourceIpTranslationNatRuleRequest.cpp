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

#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeleteNatGatewaySourceIpTranslationNatRuleRequest::DeleteNatGatewaySourceIpTranslationNatRuleRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_natGatewaySnatIdsHasBeenSet(false)
{
}

string DeleteNatGatewaySourceIpTranslationNatRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewaySnatIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewaySnatIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_natGatewaySnatIds.begin(); itr != m_natGatewaySnatIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteNatGatewaySourceIpTranslationNatRuleRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DeleteNatGatewaySourceIpTranslationNatRuleRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DeleteNatGatewaySourceIpTranslationNatRuleRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

vector<string> DeleteNatGatewaySourceIpTranslationNatRuleRequest::GetNatGatewaySnatIds() const
{
    return m_natGatewaySnatIds;
}

void DeleteNatGatewaySourceIpTranslationNatRuleRequest::SetNatGatewaySnatIds(const vector<string>& _natGatewaySnatIds)
{
    m_natGatewaySnatIds = _natGatewaySnatIds;
    m_natGatewaySnatIdsHasBeenSet = true;
}

bool DeleteNatGatewaySourceIpTranslationNatRuleRequest::NatGatewaySnatIdsHasBeenSet() const
{
    return m_natGatewaySnatIdsHasBeenSet;
}


