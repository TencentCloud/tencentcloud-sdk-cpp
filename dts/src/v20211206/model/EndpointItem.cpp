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

#include <tencentcloud/dts/v20211206/model/EndpointItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

EndpointItem::EndpointItem() :
    m_databaseRegionHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_uniqDcgIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_uniqVpnGwIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_encryptConnHasBeenSet(false),
    m_databaseNetEnvHasBeenSet(false),
    m_ccnOwnerUinHasBeenSet(false),
    m_extraAttrHasBeenSet(false),
    m_childInstanceIdHasBeenSet(false),
    m_childInstanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome EndpointItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseRegion") && !value["DatabaseRegion"].IsNull())
    {
        if (!value["DatabaseRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.DatabaseRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseRegion = string(value["DatabaseRegion"].GetString());
        m_databaseRegionHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("UniqDcgId") && !value["UniqDcgId"].IsNull())
    {
        if (!value["UniqDcgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.UniqDcgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqDcgId = string(value["UniqDcgId"].GetString());
        m_uniqDcgIdHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpnGwId") && !value["UniqVpnGwId"].IsNull())
    {
        if (!value["UniqVpnGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.UniqVpnGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpnGwId = string(value["UniqVpnGwId"].GetString());
        m_uniqVpnGwIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("EncryptConn") && !value["EncryptConn"].IsNull())
    {
        if (!value["EncryptConn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.EncryptConn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptConn = string(value["EncryptConn"].GetString());
        m_encryptConnHasBeenSet = true;
    }

    if (value.HasMember("DatabaseNetEnv") && !value["DatabaseNetEnv"].IsNull())
    {
        if (!value["DatabaseNetEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.DatabaseNetEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseNetEnv = string(value["DatabaseNetEnv"].GetString());
        m_databaseNetEnvHasBeenSet = true;
    }

    if (value.HasMember("CcnOwnerUin") && !value["CcnOwnerUin"].IsNull())
    {
        if (!value["CcnOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.CcnOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnOwnerUin = string(value["CcnOwnerUin"].GetString());
        m_ccnOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("ExtraAttr") && !value["ExtraAttr"].IsNull())
    {
        if (!value["ExtraAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointItem.ExtraAttr` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValuePairOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraAttr.push_back(item);
        }
        m_extraAttrHasBeenSet = true;
    }

    if (value.HasMember("ChildInstanceId") && !value["ChildInstanceId"].IsNull())
    {
        if (!value["ChildInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.ChildInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childInstanceId = string(value["ChildInstanceId"].GetString());
        m_childInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ChildInstanceType") && !value["ChildInstanceType"].IsNull())
    {
        if (!value["ChildInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointItem.ChildInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childInstanceType = string(value["ChildInstanceType"].GetString());
        m_childInstanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqDcgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqDcgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqDcgId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpnGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpnGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpnGwId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_encryptConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptConn.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNetEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNetEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseNetEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_extraAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttr.begin(); itr != m_extraAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_childInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_childInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childInstanceType.c_str(), allocator).Move(), allocator);
    }

}


string EndpointItem::GetDatabaseRegion() const
{
    return m_databaseRegion;
}

void EndpointItem::SetDatabaseRegion(const string& _databaseRegion)
{
    m_databaseRegion = _databaseRegion;
    m_databaseRegionHasBeenSet = true;
}

bool EndpointItem::DatabaseRegionHasBeenSet() const
{
    return m_databaseRegionHasBeenSet;
}

string EndpointItem::GetUser() const
{
    return m_user;
}

void EndpointItem::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool EndpointItem::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string EndpointItem::GetPassword() const
{
    return m_password;
}

void EndpointItem::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool EndpointItem::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string EndpointItem::GetInstanceId() const
{
    return m_instanceId;
}

void EndpointItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EndpointItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EndpointItem::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void EndpointItem::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool EndpointItem::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string EndpointItem::GetUniqDcgId() const
{
    return m_uniqDcgId;
}

void EndpointItem::SetUniqDcgId(const string& _uniqDcgId)
{
    m_uniqDcgId = _uniqDcgId;
    m_uniqDcgIdHasBeenSet = true;
}

bool EndpointItem::UniqDcgIdHasBeenSet() const
{
    return m_uniqDcgIdHasBeenSet;
}

string EndpointItem::GetCcnId() const
{
    return m_ccnId;
}

void EndpointItem::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool EndpointItem::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string EndpointItem::GetUniqVpnGwId() const
{
    return m_uniqVpnGwId;
}

void EndpointItem::SetUniqVpnGwId(const string& _uniqVpnGwId)
{
    m_uniqVpnGwId = _uniqVpnGwId;
    m_uniqVpnGwIdHasBeenSet = true;
}

bool EndpointItem::UniqVpnGwIdHasBeenSet() const
{
    return m_uniqVpnGwIdHasBeenSet;
}

string EndpointItem::GetVpcId() const
{
    return m_vpcId;
}

void EndpointItem::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EndpointItem::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EndpointItem::GetSubnetId() const
{
    return m_subnetId;
}

void EndpointItem::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EndpointItem::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EndpointItem::GetHostName() const
{
    return m_hostName;
}

void EndpointItem::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool EndpointItem::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

uint64_t EndpointItem::GetPort() const
{
    return m_port;
}

void EndpointItem::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool EndpointItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string EndpointItem::GetEncryptConn() const
{
    return m_encryptConn;
}

void EndpointItem::SetEncryptConn(const string& _encryptConn)
{
    m_encryptConn = _encryptConn;
    m_encryptConnHasBeenSet = true;
}

bool EndpointItem::EncryptConnHasBeenSet() const
{
    return m_encryptConnHasBeenSet;
}

string EndpointItem::GetDatabaseNetEnv() const
{
    return m_databaseNetEnv;
}

void EndpointItem::SetDatabaseNetEnv(const string& _databaseNetEnv)
{
    m_databaseNetEnv = _databaseNetEnv;
    m_databaseNetEnvHasBeenSet = true;
}

bool EndpointItem::DatabaseNetEnvHasBeenSet() const
{
    return m_databaseNetEnvHasBeenSet;
}

string EndpointItem::GetCcnOwnerUin() const
{
    return m_ccnOwnerUin;
}

void EndpointItem::SetCcnOwnerUin(const string& _ccnOwnerUin)
{
    m_ccnOwnerUin = _ccnOwnerUin;
    m_ccnOwnerUinHasBeenSet = true;
}

bool EndpointItem::CcnOwnerUinHasBeenSet() const
{
    return m_ccnOwnerUinHasBeenSet;
}

vector<KeyValuePairOption> EndpointItem::GetExtraAttr() const
{
    return m_extraAttr;
}

void EndpointItem::SetExtraAttr(const vector<KeyValuePairOption>& _extraAttr)
{
    m_extraAttr = _extraAttr;
    m_extraAttrHasBeenSet = true;
}

bool EndpointItem::ExtraAttrHasBeenSet() const
{
    return m_extraAttrHasBeenSet;
}

string EndpointItem::GetChildInstanceId() const
{
    return m_childInstanceId;
}

void EndpointItem::SetChildInstanceId(const string& _childInstanceId)
{
    m_childInstanceId = _childInstanceId;
    m_childInstanceIdHasBeenSet = true;
}

bool EndpointItem::ChildInstanceIdHasBeenSet() const
{
    return m_childInstanceIdHasBeenSet;
}

string EndpointItem::GetChildInstanceType() const
{
    return m_childInstanceType;
}

void EndpointItem::SetChildInstanceType(const string& _childInstanceType)
{
    m_childInstanceType = _childInstanceType;
    m_childInstanceTypeHasBeenSet = true;
}

bool EndpointItem::ChildInstanceTypeHasBeenSet() const
{
    return m_childInstanceTypeHasBeenSet;
}

