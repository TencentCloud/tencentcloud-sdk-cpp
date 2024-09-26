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

#include <tencentcloud/vpc/v20170312/model/RouteECMPAlgorithm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

RouteECMPAlgorithm::RouteECMPAlgorithm() :
    m_destinationCidrBlockHasBeenSet(false),
    m_subnetRouteAlgorithmHasBeenSet(false)
{
}

CoreInternalOutcome RouteECMPAlgorithm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteECMPAlgorithm.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetRouteAlgorithm") && !value["SubnetRouteAlgorithm"].IsNull())
    {
        if (!value["SubnetRouteAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteECMPAlgorithm.SubnetRouteAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetRouteAlgorithm = string(value["SubnetRouteAlgorithm"].GetString());
        m_subnetRouteAlgorithmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteECMPAlgorithm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetRouteAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetRouteAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetRouteAlgorithm.c_str(), allocator).Move(), allocator);
    }

}


string RouteECMPAlgorithm::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void RouteECMPAlgorithm::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool RouteECMPAlgorithm::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string RouteECMPAlgorithm::GetSubnetRouteAlgorithm() const
{
    return m_subnetRouteAlgorithm;
}

void RouteECMPAlgorithm::SetSubnetRouteAlgorithm(const string& _subnetRouteAlgorithm)
{
    m_subnetRouteAlgorithm = _subnetRouteAlgorithm;
    m_subnetRouteAlgorithmHasBeenSet = true;
}

bool RouteECMPAlgorithm::SubnetRouteAlgorithmHasBeenSet() const
{
    return m_subnetRouteAlgorithmHasBeenSet;
}

