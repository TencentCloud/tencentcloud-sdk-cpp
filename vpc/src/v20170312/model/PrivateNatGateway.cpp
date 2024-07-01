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

#include <tencentcloud/vpc/v20170312/model/PrivateNatGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

PrivateNatGateway::PrivateNatGateway() :
    m_natGatewayIdHasBeenSet(false),
    m_natGatewayNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_crossDomainHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome PrivateNatGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatGatewayId") && !value["NatGatewayId"].IsNull())
    {
        if (!value["NatGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.NatGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayId = string(value["NatGatewayId"].GetString());
        m_natGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayName") && !value["NatGatewayName"].IsNull())
    {
        if (!value["NatGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.NatGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayName = string(value["NatGatewayName"].GetString());
        m_natGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CrossDomain") && !value["CrossDomain"].IsNull())
    {
        if (!value["CrossDomain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.CrossDomain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_crossDomain = value["CrossDomain"].GetBool();
        m_crossDomainHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateNatGateway.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateNatGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_crossDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossDomain, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PrivateNatGateway::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void PrivateNatGateway::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool PrivateNatGateway::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string PrivateNatGateway::GetNatGatewayName() const
{
    return m_natGatewayName;
}

void PrivateNatGateway::SetNatGatewayName(const string& _natGatewayName)
{
    m_natGatewayName = _natGatewayName;
    m_natGatewayNameHasBeenSet = true;
}

bool PrivateNatGateway::NatGatewayNameHasBeenSet() const
{
    return m_natGatewayNameHasBeenSet;
}

string PrivateNatGateway::GetVpcId() const
{
    return m_vpcId;
}

void PrivateNatGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrivateNatGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrivateNatGateway::GetStatus() const
{
    return m_status;
}

void PrivateNatGateway::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrivateNatGateway::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool PrivateNatGateway::GetCrossDomain() const
{
    return m_crossDomain;
}

void PrivateNatGateway::SetCrossDomain(const bool& _crossDomain)
{
    m_crossDomain = _crossDomain;
    m_crossDomainHasBeenSet = true;
}

bool PrivateNatGateway::CrossDomainHasBeenSet() const
{
    return m_crossDomainHasBeenSet;
}

string PrivateNatGateway::GetCreatedTime() const
{
    return m_createdTime;
}

void PrivateNatGateway::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool PrivateNatGateway::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> PrivateNatGateway::GetTagSet() const
{
    return m_tagSet;
}

void PrivateNatGateway::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool PrivateNatGateway::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

