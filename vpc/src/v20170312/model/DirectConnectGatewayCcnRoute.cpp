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

#include <tencentcloud/vpc/v20170312/model/DirectConnectGatewayCcnRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DirectConnectGatewayCcnRoute::DirectConnectGatewayCcnRoute() :
    m_routeIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_aSPathHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectGatewayCcnRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGatewayCcnRoute.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGatewayCcnRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("ASPath") && !value["ASPath"].IsNull())
    {
        if (!value["ASPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectGatewayCcnRoute.ASPath` is not array type"));

        const rapidjson::Value &tmpValue = value["ASPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aSPath.push_back((*itr).GetString());
        }
        m_aSPathHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGatewayCcnRoute.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGatewayCcnRoute.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectGatewayCcnRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_aSPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ASPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aSPath.begin(); itr != m_aSPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string DirectConnectGatewayCcnRoute::GetRouteId() const
{
    return m_routeId;
}

void DirectConnectGatewayCcnRoute::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string DirectConnectGatewayCcnRoute::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void DirectConnectGatewayCcnRoute::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

vector<string> DirectConnectGatewayCcnRoute::GetASPath() const
{
    return m_aSPath;
}

void DirectConnectGatewayCcnRoute::SetASPath(const vector<string>& _aSPath)
{
    m_aSPath = _aSPath;
    m_aSPathHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::ASPathHasBeenSet() const
{
    return m_aSPathHasBeenSet;
}

string DirectConnectGatewayCcnRoute::GetDescription() const
{
    return m_description;
}

void DirectConnectGatewayCcnRoute::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DirectConnectGatewayCcnRoute::GetUpdateTime() const
{
    return m_updateTime;
}

void DirectConnectGatewayCcnRoute::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

