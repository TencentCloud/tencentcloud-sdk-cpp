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

#include <tencentcloud/privatedns/v20201028/model/InboundEndpointSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

InboundEndpointSet::InboundEndpointSet() :
    m_endPointIdHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_endPointServiceHasBeenSet(false)
{
}

CoreInternalOutcome InboundEndpointSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPointId") && !value["EndPointId"].IsNull())
    {
        if (!value["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundEndpointSet.EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(value["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointName") && !value["EndPointName"].IsNull())
    {
        if (!value["EndPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundEndpointSet.EndPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointName = string(value["EndPointName"].GetString());
        m_endPointNameHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundEndpointSet.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundEndpointSet.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundEndpointSet.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("EndPointService") && !value["EndPointService"].IsNull())
    {
        if (!value["EndPointService"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InboundEndpointSet.EndPointService` is not array type"));

        const rapidjson::Value &tmpValue = value["EndPointService"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndPointServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endPointService.push_back(item);
        }
        m_endPointServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InboundEndpointSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endPointService.begin(); itr != m_endPointService.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InboundEndpointSet::GetEndPointId() const
{
    return m_endPointId;
}

void InboundEndpointSet::SetEndPointId(const string& _endPointId)
{
    m_endPointId = _endPointId;
    m_endPointIdHasBeenSet = true;
}

bool InboundEndpointSet::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string InboundEndpointSet::GetEndPointName() const
{
    return m_endPointName;
}

void InboundEndpointSet::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool InboundEndpointSet::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string InboundEndpointSet::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void InboundEndpointSet::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool InboundEndpointSet::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string InboundEndpointSet::GetCreatedAt() const
{
    return m_createdAt;
}

void InboundEndpointSet::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool InboundEndpointSet::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string InboundEndpointSet::GetUpdatedAt() const
{
    return m_updatedAt;
}

void InboundEndpointSet::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool InboundEndpointSet::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

vector<EndPointServiceInfo> InboundEndpointSet::GetEndPointService() const
{
    return m_endPointService;
}

void InboundEndpointSet::SetEndPointService(const vector<EndPointServiceInfo>& _endPointService)
{
    m_endPointService = _endPointService;
    m_endPointServiceHasBeenSet = true;
}

bool InboundEndpointSet::EndPointServiceHasBeenSet() const
{
    return m_endPointServiceHasBeenSet;
}

