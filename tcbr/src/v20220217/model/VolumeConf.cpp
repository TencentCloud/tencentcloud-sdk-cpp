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

#include <tencentcloud/tcbr/v20220217/model/VolumeConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

VolumeConf::VolumeConf() :
    m_typeHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_keyIDHasBeenSet(false),
    m_dstPathHasBeenSet(false),
    m_srcPathHasBeenSet(false),
    m_mountIPHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome VolumeConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("KeyID") && !value["KeyID"].IsNull())
    {
        if (!value["KeyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.KeyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyID = string(value["KeyID"].GetString());
        m_keyIDHasBeenSet = true;
    }

    if (value.HasMember("DstPath") && !value["DstPath"].IsNull())
    {
        if (!value["DstPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.DstPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPath = string(value["DstPath"].GetString());
        m_dstPathHasBeenSet = true;
    }

    if (value.HasMember("SrcPath") && !value["SrcPath"].IsNull())
    {
        if (!value["SrcPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.SrcPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcPath = string(value["SrcPath"].GetString());
        m_srcPathHasBeenSet = true;
    }

    if (value.HasMember("MountIP") && !value["MountIP"].IsNull())
    {
        if (!value["MountIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.MountIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountIP = string(value["MountIP"].GetString());
        m_mountIPHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeConf.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyID.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPath.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcPath.c_str(), allocator).Move(), allocator);
    }

    if (m_mountIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountIP.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string VolumeConf::GetType() const
{
    return m_type;
}

void VolumeConf::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VolumeConf::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VolumeConf::GetBucketName() const
{
    return m_bucketName;
}

void VolumeConf::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool VolumeConf::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string VolumeConf::GetEndpoint() const
{
    return m_endpoint;
}

void VolumeConf::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool VolumeConf::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string VolumeConf::GetKeyID() const
{
    return m_keyID;
}

void VolumeConf::SetKeyID(const string& _keyID)
{
    m_keyID = _keyID;
    m_keyIDHasBeenSet = true;
}

bool VolumeConf::KeyIDHasBeenSet() const
{
    return m_keyIDHasBeenSet;
}

string VolumeConf::GetDstPath() const
{
    return m_dstPath;
}

void VolumeConf::SetDstPath(const string& _dstPath)
{
    m_dstPath = _dstPath;
    m_dstPathHasBeenSet = true;
}

bool VolumeConf::DstPathHasBeenSet() const
{
    return m_dstPathHasBeenSet;
}

string VolumeConf::GetSrcPath() const
{
    return m_srcPath;
}

void VolumeConf::SetSrcPath(const string& _srcPath)
{
    m_srcPath = _srcPath;
    m_srcPathHasBeenSet = true;
}

bool VolumeConf::SrcPathHasBeenSet() const
{
    return m_srcPathHasBeenSet;
}

string VolumeConf::GetMountIP() const
{
    return m_mountIP;
}

void VolumeConf::SetMountIP(const string& _mountIP)
{
    m_mountIP = _mountIP;
    m_mountIPHasBeenSet = true;
}

bool VolumeConf::MountIPHasBeenSet() const
{
    return m_mountIPHasBeenSet;
}

bool VolumeConf::GetReadOnly() const
{
    return m_readOnly;
}

void VolumeConf::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool VolumeConf::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string VolumeConf::GetInstanceId() const
{
    return m_instanceId;
}

void VolumeConf::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VolumeConf::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

