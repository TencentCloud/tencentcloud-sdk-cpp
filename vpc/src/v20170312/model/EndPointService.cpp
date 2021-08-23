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

#include <tencentcloud/vpc/v20170312/model/EndPointService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

EndPointService::EndPointService() :
    m_endPointServiceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_serviceOwnerHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_serviceInstanceIdHasBeenSet(false),
    m_autoAcceptFlagHasBeenSet(false),
    m_endPointCountHasBeenSet(false),
    m_endPointSetHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome EndPointService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPointServiceId") && !value["EndPointServiceId"].IsNull())
    {
        if (!value["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(value["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceOwner") && !value["ServiceOwner"].IsNull())
    {
        if (!value["ServiceOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.ServiceOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceOwner = string(value["ServiceOwner"].GetString());
        m_serviceOwnerHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("ServiceInstanceId") && !value["ServiceInstanceId"].IsNull())
    {
        if (!value["ServiceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.ServiceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceInstanceId = string(value["ServiceInstanceId"].GetString());
        m_serviceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoAcceptFlag") && !value["AutoAcceptFlag"].IsNull())
    {
        if (!value["AutoAcceptFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.AutoAcceptFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoAcceptFlag = value["AutoAcceptFlag"].GetBool();
        m_autoAcceptFlagHasBeenSet = true;
    }

    if (value.HasMember("EndPointCount") && !value["EndPointCount"].IsNull())
    {
        if (!value["EndPointCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.EndPointCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPointCount = value["EndPointCount"].GetUint64();
        m_endPointCountHasBeenSet = true;
    }

    if (value.HasMember("EndPointSet") && !value["EndPointSet"].IsNull())
    {
        if (!value["EndPointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndPointService.EndPointSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EndPointSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endPointSet.push_back(item);
        }
        m_endPointSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointService.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndPointService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAcceptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAcceptFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoAcceptFlag, allocator);
    }

    if (m_endPointCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointCount, allocator);
    }

    if (m_endPointSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endPointSet.begin(); itr != m_endPointSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string EndPointService::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void EndPointService::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool EndPointService::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

string EndPointService::GetVpcId() const
{
    return m_vpcId;
}

void EndPointService::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EndPointService::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EndPointService::GetServiceOwner() const
{
    return m_serviceOwner;
}

void EndPointService::SetServiceOwner(const string& _serviceOwner)
{
    m_serviceOwner = _serviceOwner;
    m_serviceOwnerHasBeenSet = true;
}

bool EndPointService::ServiceOwnerHasBeenSet() const
{
    return m_serviceOwnerHasBeenSet;
}

string EndPointService::GetServiceName() const
{
    return m_serviceName;
}

void EndPointService::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool EndPointService::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string EndPointService::GetServiceVip() const
{
    return m_serviceVip;
}

void EndPointService::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool EndPointService::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string EndPointService::GetServiceInstanceId() const
{
    return m_serviceInstanceId;
}

void EndPointService::SetServiceInstanceId(const string& _serviceInstanceId)
{
    m_serviceInstanceId = _serviceInstanceId;
    m_serviceInstanceIdHasBeenSet = true;
}

bool EndPointService::ServiceInstanceIdHasBeenSet() const
{
    return m_serviceInstanceIdHasBeenSet;
}

bool EndPointService::GetAutoAcceptFlag() const
{
    return m_autoAcceptFlag;
}

void EndPointService::SetAutoAcceptFlag(const bool& _autoAcceptFlag)
{
    m_autoAcceptFlag = _autoAcceptFlag;
    m_autoAcceptFlagHasBeenSet = true;
}

bool EndPointService::AutoAcceptFlagHasBeenSet() const
{
    return m_autoAcceptFlagHasBeenSet;
}

uint64_t EndPointService::GetEndPointCount() const
{
    return m_endPointCount;
}

void EndPointService::SetEndPointCount(const uint64_t& _endPointCount)
{
    m_endPointCount = _endPointCount;
    m_endPointCountHasBeenSet = true;
}

bool EndPointService::EndPointCountHasBeenSet() const
{
    return m_endPointCountHasBeenSet;
}

vector<EndPoint> EndPointService::GetEndPointSet() const
{
    return m_endPointSet;
}

void EndPointService::SetEndPointSet(const vector<EndPoint>& _endPointSet)
{
    m_endPointSet = _endPointSet;
    m_endPointSetHasBeenSet = true;
}

bool EndPointService::EndPointSetHasBeenSet() const
{
    return m_endPointSetHasBeenSet;
}

string EndPointService::GetCreateTime() const
{
    return m_createTime;
}

void EndPointService::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EndPointService::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

