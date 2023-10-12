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

#include <tencentcloud/waf/v20180125/model/ClbObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ClbObject::ClbObject() :
    m_objectIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_preciseDomainsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clsStatusHasBeenSet(false),
    m_virtualDomainHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_instanceLevelHasBeenSet(false),
    m_postCLSStatusHasBeenSet(false),
    m_postCKafkaStatusHasBeenSet(false)
{
}

CoreInternalOutcome ClbObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PreciseDomains") && !value["PreciseDomains"].IsNull())
    {
        if (!value["PreciseDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbObject.PreciseDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["PreciseDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_preciseDomains.push_back((*itr).GetString());
        }
        m_preciseDomainsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClsStatus") && !value["ClsStatus"].IsNull())
    {
        if (!value["ClsStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.ClsStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clsStatus = value["ClsStatus"].GetInt64();
        m_clsStatusHasBeenSet = true;
    }

    if (value.HasMember("VirtualDomain") && !value["VirtualDomain"].IsNull())
    {
        if (!value["VirtualDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.VirtualDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualDomain = string(value["VirtualDomain"].GetString());
        m_virtualDomainHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbObject.PublicIp` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIp.push_back((*itr).GetString());
        }
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbObject.PrivateIp` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIp.push_back((*itr).GetString());
        }
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Vpc") && !value["Vpc"].IsNull())
    {
        if (!value["Vpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.Vpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpc = string(value["Vpc"].GetString());
        m_vpcHasBeenSet = true;
    }

    if (value.HasMember("InstanceLevel") && !value["InstanceLevel"].IsNull())
    {
        if (!value["InstanceLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.InstanceLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLevel = value["InstanceLevel"].GetInt64();
        m_instanceLevelHasBeenSet = true;
    }

    if (value.HasMember("PostCLSStatus") && !value["PostCLSStatus"].IsNull())
    {
        if (!value["PostCLSStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.PostCLSStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postCLSStatus = value["PostCLSStatus"].GetInt64();
        m_postCLSStatusHasBeenSet = true;
    }

    if (value.HasMember("PostCKafkaStatus") && !value["PostCKafkaStatus"].IsNull())
    {
        if (!value["PostCKafkaStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbObject.PostCKafkaStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postCKafkaStatus = value["PostCKafkaStatus"].GetInt64();
        m_postCKafkaStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClbObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_preciseDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreciseDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_preciseDomains.begin(); itr != m_preciseDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_clsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clsStatus, allocator);
    }

    if (m_virtualDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIp.begin(); itr != m_publicIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIp.begin(); itr != m_privateIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpc.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceLevel, allocator);
    }

    if (m_postCLSStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCLSStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postCLSStatus, allocator);
    }

    if (m_postCKafkaStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCKafkaStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postCKafkaStatus, allocator);
    }

}


string ClbObject::GetObjectId() const
{
    return m_objectId;
}

void ClbObject::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool ClbObject::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string ClbObject::GetInstanceId() const
{
    return m_instanceId;
}

void ClbObject::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClbObject::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ClbObject::GetInstanceName() const
{
    return m_instanceName;
}

void ClbObject::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ClbObject::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> ClbObject::GetPreciseDomains() const
{
    return m_preciseDomains;
}

void ClbObject::SetPreciseDomains(const vector<string>& _preciseDomains)
{
    m_preciseDomains = _preciseDomains;
    m_preciseDomainsHasBeenSet = true;
}

bool ClbObject::PreciseDomainsHasBeenSet() const
{
    return m_preciseDomainsHasBeenSet;
}

int64_t ClbObject::GetStatus() const
{
    return m_status;
}

void ClbObject::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClbObject::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ClbObject::GetClsStatus() const
{
    return m_clsStatus;
}

void ClbObject::SetClsStatus(const int64_t& _clsStatus)
{
    m_clsStatus = _clsStatus;
    m_clsStatusHasBeenSet = true;
}

bool ClbObject::ClsStatusHasBeenSet() const
{
    return m_clsStatusHasBeenSet;
}

string ClbObject::GetVirtualDomain() const
{
    return m_virtualDomain;
}

void ClbObject::SetVirtualDomain(const string& _virtualDomain)
{
    m_virtualDomain = _virtualDomain;
    m_virtualDomainHasBeenSet = true;
}

bool ClbObject::VirtualDomainHasBeenSet() const
{
    return m_virtualDomainHasBeenSet;
}

string ClbObject::GetObjectName() const
{
    return m_objectName;
}

void ClbObject::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool ClbObject::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

vector<string> ClbObject::GetPublicIp() const
{
    return m_publicIp;
}

void ClbObject::SetPublicIp(const vector<string>& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ClbObject::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

vector<string> ClbObject::GetPrivateIp() const
{
    return m_privateIp;
}

void ClbObject::SetPrivateIp(const vector<string>& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool ClbObject::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string ClbObject::GetVpcName() const
{
    return m_vpcName;
}

void ClbObject::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool ClbObject::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string ClbObject::GetVpc() const
{
    return m_vpc;
}

void ClbObject::SetVpc(const string& _vpc)
{
    m_vpc = _vpc;
    m_vpcHasBeenSet = true;
}

bool ClbObject::VpcHasBeenSet() const
{
    return m_vpcHasBeenSet;
}

int64_t ClbObject::GetInstanceLevel() const
{
    return m_instanceLevel;
}

void ClbObject::SetInstanceLevel(const int64_t& _instanceLevel)
{
    m_instanceLevel = _instanceLevel;
    m_instanceLevelHasBeenSet = true;
}

bool ClbObject::InstanceLevelHasBeenSet() const
{
    return m_instanceLevelHasBeenSet;
}

int64_t ClbObject::GetPostCLSStatus() const
{
    return m_postCLSStatus;
}

void ClbObject::SetPostCLSStatus(const int64_t& _postCLSStatus)
{
    m_postCLSStatus = _postCLSStatus;
    m_postCLSStatusHasBeenSet = true;
}

bool ClbObject::PostCLSStatusHasBeenSet() const
{
    return m_postCLSStatusHasBeenSet;
}

int64_t ClbObject::GetPostCKafkaStatus() const
{
    return m_postCKafkaStatus;
}

void ClbObject::SetPostCKafkaStatus(const int64_t& _postCKafkaStatus)
{
    m_postCKafkaStatus = _postCKafkaStatus;
    m_postCKafkaStatusHasBeenSet = true;
}

bool ClbObject::PostCKafkaStatusHasBeenSet() const
{
    return m_postCKafkaStatusHasBeenSet;
}

