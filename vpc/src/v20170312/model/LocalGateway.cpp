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

#include <tencentcloud/vpc/v20170312/model/LocalGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

LocalGateway::LocalGateway() :
    m_cdcIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_uniqLocalGwIdHasBeenSet(false),
    m_localGatewayNameHasBeenSet(false),
    m_localGwIpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false)
{
}

CoreInternalOutcome LocalGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqLocalGwId") && !value["UniqLocalGwId"].IsNull())
    {
        if (!value["UniqLocalGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.UniqLocalGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqLocalGwId = string(value["UniqLocalGwId"].GetString());
        m_uniqLocalGwIdHasBeenSet = true;
    }

    if (value.HasMember("LocalGatewayName") && !value["LocalGatewayName"].IsNull())
    {
        if (!value["LocalGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.LocalGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localGatewayName = string(value["LocalGatewayName"].GetString());
        m_localGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("LocalGwIp") && !value["LocalGwIp"].IsNull())
    {
        if (!value["LocalGwIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.LocalGwIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localGwIp = string(value["LocalGwIp"].GetString());
        m_localGwIpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LocalGateway.TagSet` is not array type"));

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

    if (value.HasMember("LocalGatewayId") && !value["LocalGatewayId"].IsNull())
    {
        if (!value["LocalGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalGateway.LocalGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localGatewayId = string(value["LocalGatewayId"].GetString());
        m_localGatewayIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqLocalGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqLocalGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqLocalGwId.c_str(), allocator).Move(), allocator);
    }

    if (m_localGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_localGwIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalGwIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localGwIp.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_localGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localGatewayId.c_str(), allocator).Move(), allocator);
    }

}


string LocalGateway::GetCdcId() const
{
    return m_cdcId;
}

void LocalGateway::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool LocalGateway::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string LocalGateway::GetVpcId() const
{
    return m_vpcId;
}

void LocalGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LocalGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LocalGateway::GetUniqLocalGwId() const
{
    return m_uniqLocalGwId;
}

void LocalGateway::SetUniqLocalGwId(const string& _uniqLocalGwId)
{
    m_uniqLocalGwId = _uniqLocalGwId;
    m_uniqLocalGwIdHasBeenSet = true;
}

bool LocalGateway::UniqLocalGwIdHasBeenSet() const
{
    return m_uniqLocalGwIdHasBeenSet;
}

string LocalGateway::GetLocalGatewayName() const
{
    return m_localGatewayName;
}

void LocalGateway::SetLocalGatewayName(const string& _localGatewayName)
{
    m_localGatewayName = _localGatewayName;
    m_localGatewayNameHasBeenSet = true;
}

bool LocalGateway::LocalGatewayNameHasBeenSet() const
{
    return m_localGatewayNameHasBeenSet;
}

string LocalGateway::GetLocalGwIp() const
{
    return m_localGwIp;
}

void LocalGateway::SetLocalGwIp(const string& _localGwIp)
{
    m_localGwIp = _localGwIp;
    m_localGwIpHasBeenSet = true;
}

bool LocalGateway::LocalGwIpHasBeenSet() const
{
    return m_localGwIpHasBeenSet;
}

string LocalGateway::GetCreateTime() const
{
    return m_createTime;
}

void LocalGateway::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LocalGateway::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> LocalGateway::GetTagSet() const
{
    return m_tagSet;
}

void LocalGateway::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool LocalGateway::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string LocalGateway::GetLocalGatewayId() const
{
    return m_localGatewayId;
}

void LocalGateway::SetLocalGatewayId(const string& _localGatewayId)
{
    m_localGatewayId = _localGatewayId;
    m_localGatewayIdHasBeenSet = true;
}

bool LocalGateway::LocalGatewayIdHasBeenSet() const
{
    return m_localGatewayIdHasBeenSet;
}

