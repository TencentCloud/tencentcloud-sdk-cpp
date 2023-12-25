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

#include <tencentcloud/emr/v20190103/model/EmrProductConfigDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

EmrProductConfigDetail::EmrProductConfigDetail() :
    m_softInfoHasBeenSet(false),
    m_masterNodeSizeHasBeenSet(false),
    m_coreNodeSizeHasBeenSet(false),
    m_taskNodeSizeHasBeenSet(false),
    m_comNodeSizeHasBeenSet(false),
    m_masterResourceHasBeenSet(false),
    m_coreResourceHasBeenSet(false),
    m_taskResourceHasBeenSet(false),
    m_comResourceHasBeenSet(false),
    m_onCosHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_routerNodeSizeHasBeenSet(false),
    m_supportHAHasBeenSet(false),
    m_securityOnHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_cbsEncryptHasBeenSet(false),
    m_applicationRoleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_publicKeyIdHasBeenSet(false)
{
}

CoreInternalOutcome EmrProductConfigDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SoftInfo") && !value["SoftInfo"].IsNull())
    {
        if (!value["SoftInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.SoftInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SoftInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_softInfo.push_back((*itr).GetString());
        }
        m_softInfoHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeSize") && !value["MasterNodeSize"].IsNull())
    {
        if (!value["MasterNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.MasterNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeSize = value["MasterNodeSize"].GetInt64();
        m_masterNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("CoreNodeSize") && !value["CoreNodeSize"].IsNull())
    {
        if (!value["CoreNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.CoreNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coreNodeSize = value["CoreNodeSize"].GetInt64();
        m_coreNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("TaskNodeSize") && !value["TaskNodeSize"].IsNull())
    {
        if (!value["TaskNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.TaskNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNodeSize = value["TaskNodeSize"].GetInt64();
        m_taskNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("ComNodeSize") && !value["ComNodeSize"].IsNull())
    {
        if (!value["ComNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.ComNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_comNodeSize = value["ComNodeSize"].GetInt64();
        m_comNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("MasterResource") && !value["MasterResource"].IsNull())
    {
        if (!value["MasterResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.MasterResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterResource.Deserialize(value["MasterResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterResourceHasBeenSet = true;
    }

    if (value.HasMember("CoreResource") && !value["CoreResource"].IsNull())
    {
        if (!value["CoreResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.CoreResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coreResource.Deserialize(value["CoreResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coreResourceHasBeenSet = true;
    }

    if (value.HasMember("TaskResource") && !value["TaskResource"].IsNull())
    {
        if (!value["TaskResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.TaskResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskResource.Deserialize(value["TaskResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskResourceHasBeenSet = true;
    }

    if (value.HasMember("ComResource") && !value["ComResource"].IsNull())
    {
        if (!value["ComResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.ComResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_comResource.Deserialize(value["ComResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_comResourceHasBeenSet = true;
    }

    if (value.HasMember("OnCos") && !value["OnCos"].IsNull())
    {
        if (!value["OnCos"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.OnCos` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onCos = value["OnCos"].GetBool();
        m_onCosHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("RouterNodeSize") && !value["RouterNodeSize"].IsNull())
    {
        if (!value["RouterNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.RouterNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routerNodeSize = value["RouterNodeSize"].GetInt64();
        m_routerNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("SupportHA") && !value["SupportHA"].IsNull())
    {
        if (!value["SupportHA"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.SupportHA` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportHA = value["SupportHA"].GetBool();
        m_supportHAHasBeenSet = true;
    }

    if (value.HasMember("SecurityOn") && !value["SecurityOn"].IsNull())
    {
        if (!value["SecurityOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.SecurityOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_securityOn = value["SecurityOn"].GetBool();
        m_securityOnHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroup") && !value["SecurityGroup"].IsNull())
    {
        if (!value["SecurityGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.SecurityGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroup = string(value["SecurityGroup"].GetString());
        m_securityGroupHasBeenSet = true;
    }

    if (value.HasMember("CbsEncrypt") && !value["CbsEncrypt"].IsNull())
    {
        if (!value["CbsEncrypt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.CbsEncrypt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cbsEncrypt = value["CbsEncrypt"].GetInt64();
        m_cbsEncryptHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRole") && !value["ApplicationRole"].IsNull())
    {
        if (!value["ApplicationRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.ApplicationRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRole = string(value["ApplicationRole"].GetString());
        m_applicationRoleHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroups") && !value["SecurityGroups"].IsNull())
    {
        if (!value["SecurityGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.SecurityGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroups.push_back((*itr).GetString());
        }
        m_securityGroupsHasBeenSet = true;
    }

    if (value.HasMember("PublicKeyId") && !value["PublicKeyId"].IsNull())
    {
        if (!value["PublicKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrProductConfigDetail.PublicKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKeyId = string(value["PublicKeyId"].GetString());
        m_publicKeyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrProductConfigDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_softInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_softInfo.begin(); itr != m_softInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_masterNodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeSize, allocator);
    }

    if (m_coreNodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreNodeSize, allocator);
    }

    if (m_taskNodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNodeSize, allocator);
    }

    if (m_comNodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comNodeSize, allocator);
    }

    if (m_masterResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coreResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_comResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onCos, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_routerNodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routerNodeSize, allocator);
    }

    if (m_supportHAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportHA, allocator);
    }

    if (m_securityOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityOn, allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_cbsEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbsEncrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cbsEncrypt, allocator);
    }

    if (m_applicationRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationRole.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKeyId.c_str(), allocator).Move(), allocator);
    }

}


vector<string> EmrProductConfigDetail::GetSoftInfo() const
{
    return m_softInfo;
}

void EmrProductConfigDetail::SetSoftInfo(const vector<string>& _softInfo)
{
    m_softInfo = _softInfo;
    m_softInfoHasBeenSet = true;
}

bool EmrProductConfigDetail::SoftInfoHasBeenSet() const
{
    return m_softInfoHasBeenSet;
}

int64_t EmrProductConfigDetail::GetMasterNodeSize() const
{
    return m_masterNodeSize;
}

void EmrProductConfigDetail::SetMasterNodeSize(const int64_t& _masterNodeSize)
{
    m_masterNodeSize = _masterNodeSize;
    m_masterNodeSizeHasBeenSet = true;
}

bool EmrProductConfigDetail::MasterNodeSizeHasBeenSet() const
{
    return m_masterNodeSizeHasBeenSet;
}

int64_t EmrProductConfigDetail::GetCoreNodeSize() const
{
    return m_coreNodeSize;
}

void EmrProductConfigDetail::SetCoreNodeSize(const int64_t& _coreNodeSize)
{
    m_coreNodeSize = _coreNodeSize;
    m_coreNodeSizeHasBeenSet = true;
}

bool EmrProductConfigDetail::CoreNodeSizeHasBeenSet() const
{
    return m_coreNodeSizeHasBeenSet;
}

int64_t EmrProductConfigDetail::GetTaskNodeSize() const
{
    return m_taskNodeSize;
}

void EmrProductConfigDetail::SetTaskNodeSize(const int64_t& _taskNodeSize)
{
    m_taskNodeSize = _taskNodeSize;
    m_taskNodeSizeHasBeenSet = true;
}

bool EmrProductConfigDetail::TaskNodeSizeHasBeenSet() const
{
    return m_taskNodeSizeHasBeenSet;
}

int64_t EmrProductConfigDetail::GetComNodeSize() const
{
    return m_comNodeSize;
}

void EmrProductConfigDetail::SetComNodeSize(const int64_t& _comNodeSize)
{
    m_comNodeSize = _comNodeSize;
    m_comNodeSizeHasBeenSet = true;
}

bool EmrProductConfigDetail::ComNodeSizeHasBeenSet() const
{
    return m_comNodeSizeHasBeenSet;
}

ResourceDetail EmrProductConfigDetail::GetMasterResource() const
{
    return m_masterResource;
}

void EmrProductConfigDetail::SetMasterResource(const ResourceDetail& _masterResource)
{
    m_masterResource = _masterResource;
    m_masterResourceHasBeenSet = true;
}

bool EmrProductConfigDetail::MasterResourceHasBeenSet() const
{
    return m_masterResourceHasBeenSet;
}

ResourceDetail EmrProductConfigDetail::GetCoreResource() const
{
    return m_coreResource;
}

void EmrProductConfigDetail::SetCoreResource(const ResourceDetail& _coreResource)
{
    m_coreResource = _coreResource;
    m_coreResourceHasBeenSet = true;
}

bool EmrProductConfigDetail::CoreResourceHasBeenSet() const
{
    return m_coreResourceHasBeenSet;
}

ResourceDetail EmrProductConfigDetail::GetTaskResource() const
{
    return m_taskResource;
}

void EmrProductConfigDetail::SetTaskResource(const ResourceDetail& _taskResource)
{
    m_taskResource = _taskResource;
    m_taskResourceHasBeenSet = true;
}

bool EmrProductConfigDetail::TaskResourceHasBeenSet() const
{
    return m_taskResourceHasBeenSet;
}

ResourceDetail EmrProductConfigDetail::GetComResource() const
{
    return m_comResource;
}

void EmrProductConfigDetail::SetComResource(const ResourceDetail& _comResource)
{
    m_comResource = _comResource;
    m_comResourceHasBeenSet = true;
}

bool EmrProductConfigDetail::ComResourceHasBeenSet() const
{
    return m_comResourceHasBeenSet;
}

bool EmrProductConfigDetail::GetOnCos() const
{
    return m_onCos;
}

void EmrProductConfigDetail::SetOnCos(const bool& _onCos)
{
    m_onCos = _onCos;
    m_onCosHasBeenSet = true;
}

bool EmrProductConfigDetail::OnCosHasBeenSet() const
{
    return m_onCosHasBeenSet;
}

int64_t EmrProductConfigDetail::GetChargeType() const
{
    return m_chargeType;
}

void EmrProductConfigDetail::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool EmrProductConfigDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t EmrProductConfigDetail::GetRouterNodeSize() const
{
    return m_routerNodeSize;
}

void EmrProductConfigDetail::SetRouterNodeSize(const int64_t& _routerNodeSize)
{
    m_routerNodeSize = _routerNodeSize;
    m_routerNodeSizeHasBeenSet = true;
}

bool EmrProductConfigDetail::RouterNodeSizeHasBeenSet() const
{
    return m_routerNodeSizeHasBeenSet;
}

bool EmrProductConfigDetail::GetSupportHA() const
{
    return m_supportHA;
}

void EmrProductConfigDetail::SetSupportHA(const bool& _supportHA)
{
    m_supportHA = _supportHA;
    m_supportHAHasBeenSet = true;
}

bool EmrProductConfigDetail::SupportHAHasBeenSet() const
{
    return m_supportHAHasBeenSet;
}

bool EmrProductConfigDetail::GetSecurityOn() const
{
    return m_securityOn;
}

void EmrProductConfigDetail::SetSecurityOn(const bool& _securityOn)
{
    m_securityOn = _securityOn;
    m_securityOnHasBeenSet = true;
}

bool EmrProductConfigDetail::SecurityOnHasBeenSet() const
{
    return m_securityOnHasBeenSet;
}

string EmrProductConfigDetail::GetSecurityGroup() const
{
    return m_securityGroup;
}

void EmrProductConfigDetail::SetSecurityGroup(const string& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool EmrProductConfigDetail::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

int64_t EmrProductConfigDetail::GetCbsEncrypt() const
{
    return m_cbsEncrypt;
}

void EmrProductConfigDetail::SetCbsEncrypt(const int64_t& _cbsEncrypt)
{
    m_cbsEncrypt = _cbsEncrypt;
    m_cbsEncryptHasBeenSet = true;
}

bool EmrProductConfigDetail::CbsEncryptHasBeenSet() const
{
    return m_cbsEncryptHasBeenSet;
}

string EmrProductConfigDetail::GetApplicationRole() const
{
    return m_applicationRole;
}

void EmrProductConfigDetail::SetApplicationRole(const string& _applicationRole)
{
    m_applicationRole = _applicationRole;
    m_applicationRoleHasBeenSet = true;
}

bool EmrProductConfigDetail::ApplicationRoleHasBeenSet() const
{
    return m_applicationRoleHasBeenSet;
}

vector<string> EmrProductConfigDetail::GetSecurityGroups() const
{
    return m_securityGroups;
}

void EmrProductConfigDetail::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool EmrProductConfigDetail::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

string EmrProductConfigDetail::GetPublicKeyId() const
{
    return m_publicKeyId;
}

void EmrProductConfigDetail::SetPublicKeyId(const string& _publicKeyId)
{
    m_publicKeyId = _publicKeyId;
    m_publicKeyIdHasBeenSet = true;
}

bool EmrProductConfigDetail::PublicKeyIdHasBeenSet() const
{
    return m_publicKeyIdHasBeenSet;
}

