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

#include <tencentcloud/omics/v20221128/model/ResourceIds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

ResourceIds::ResourceIds() :
    m_vPCIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_tDSQLCIdHasBeenSet(false),
    m_cFSIdHasBeenSet(false),
    m_cFSStorageTypeHasBeenSet(false),
    m_cVMIdHasBeenSet(false),
    m_eKSIdHasBeenSet(false)
{
}

CoreInternalOutcome ResourceIds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VPCId") && !value["VPCId"].IsNull())
    {
        if (!value["VPCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.VPCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPCId = string(value["VPCId"].GetString());
        m_vPCIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TDSQLCId") && !value["TDSQLCId"].IsNull())
    {
        if (!value["TDSQLCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.TDSQLCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tDSQLCId = string(value["TDSQLCId"].GetString());
        m_tDSQLCIdHasBeenSet = true;
    }

    if (value.HasMember("CFSId") && !value["CFSId"].IsNull())
    {
        if (!value["CFSId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.CFSId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFSId = string(value["CFSId"].GetString());
        m_cFSIdHasBeenSet = true;
    }

    if (value.HasMember("CFSStorageType") && !value["CFSStorageType"].IsNull())
    {
        if (!value["CFSStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.CFSStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFSStorageType = string(value["CFSStorageType"].GetString());
        m_cFSStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("CVMId") && !value["CVMId"].IsNull())
    {
        if (!value["CVMId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.CVMId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVMId = string(value["CVMId"].GetString());
        m_cVMIdHasBeenSet = true;
    }

    if (value.HasMember("EKSId") && !value["EKSId"].IsNull())
    {
        if (!value["EKSId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIds.EKSId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eKSId = string(value["EKSId"].GetString());
        m_eKSIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceIds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vPCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPCId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tDSQLCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TDSQLCId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tDSQLCId.c_str(), allocator).Move(), allocator);
    }

    if (m_cFSIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFSId.c_str(), allocator).Move(), allocator);
    }

    if (m_cFSStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFSStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_cVMIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVMId.c_str(), allocator).Move(), allocator);
    }

    if (m_eKSIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EKSId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eKSId.c_str(), allocator).Move(), allocator);
    }

}


string ResourceIds::GetVPCId() const
{
    return m_vPCId;
}

void ResourceIds::SetVPCId(const string& _vPCId)
{
    m_vPCId = _vPCId;
    m_vPCIdHasBeenSet = true;
}

bool ResourceIds::VPCIdHasBeenSet() const
{
    return m_vPCIdHasBeenSet;
}

string ResourceIds::GetSubnetId() const
{
    return m_subnetId;
}

void ResourceIds::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ResourceIds::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ResourceIds::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void ResourceIds::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool ResourceIds::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string ResourceIds::GetTDSQLCId() const
{
    return m_tDSQLCId;
}

void ResourceIds::SetTDSQLCId(const string& _tDSQLCId)
{
    m_tDSQLCId = _tDSQLCId;
    m_tDSQLCIdHasBeenSet = true;
}

bool ResourceIds::TDSQLCIdHasBeenSet() const
{
    return m_tDSQLCIdHasBeenSet;
}

string ResourceIds::GetCFSId() const
{
    return m_cFSId;
}

void ResourceIds::SetCFSId(const string& _cFSId)
{
    m_cFSId = _cFSId;
    m_cFSIdHasBeenSet = true;
}

bool ResourceIds::CFSIdHasBeenSet() const
{
    return m_cFSIdHasBeenSet;
}

string ResourceIds::GetCFSStorageType() const
{
    return m_cFSStorageType;
}

void ResourceIds::SetCFSStorageType(const string& _cFSStorageType)
{
    m_cFSStorageType = _cFSStorageType;
    m_cFSStorageTypeHasBeenSet = true;
}

bool ResourceIds::CFSStorageTypeHasBeenSet() const
{
    return m_cFSStorageTypeHasBeenSet;
}

string ResourceIds::GetCVMId() const
{
    return m_cVMId;
}

void ResourceIds::SetCVMId(const string& _cVMId)
{
    m_cVMId = _cVMId;
    m_cVMIdHasBeenSet = true;
}

bool ResourceIds::CVMIdHasBeenSet() const
{
    return m_cVMIdHasBeenSet;
}

string ResourceIds::GetEKSId() const
{
    return m_eKSId;
}

void ResourceIds::SetEKSId(const string& _eKSId)
{
    m_eKSId = _eKSId;
    m_eKSIdHasBeenSet = true;
}

bool ResourceIds::EKSIdHasBeenSet() const
{
    return m_eKSIdHasBeenSet;
}

