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

#include <tencentcloud/ecm/v20190719/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_simpleModuleHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_internetHasBeenSet(false),
    m_instanceTypeConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_systemDiskSizeHasBeenSet(false),
    m_dataDiskSizeHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_expireStateHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_newFlagHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_physicalPositionHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }

    if (value.HasMember("SimpleModule") && !value["SimpleModule"].IsNull())
    {
        if (!value["SimpleModule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SimpleModule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_simpleModule.Deserialize(value["SimpleModule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_simpleModuleHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Position` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_position.Deserialize(value["Position"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Internet") && !value["Internet"].IsNull())
    {
        if (!value["Internet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Internet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internet.Deserialize(value["Internet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeConfig") && !value["InstanceTypeConfig"].IsNull())
    {
        if (!value["InstanceTypeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceTypeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceTypeConfig.Deserialize(value["InstanceTypeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceTypeConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.TagSet` is not array type"));

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

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskSize") && !value["SystemDiskSize"].IsNull())
    {
        if (!value["SystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskSize = value["SystemDiskSize"].GetInt64();
        m_systemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskSize") && !value["DataDiskSize"].IsNull())
    {
        if (!value["DataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.DataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskSize = value["DataDiskSize"].GetInt64();
        m_dataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ExpireState") && !value["ExpireState"].IsNull())
    {
        if (!value["ExpireState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ExpireState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireState = string(value["ExpireState"].GetString());
        m_expireStateHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("NewFlag") && !value["NewFlag"].IsNull())
    {
        if (!value["NewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newFlag = value["NewFlag"].GetInt64();
        m_newFlagHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("VirtualPrivateCloud") && !value["VirtualPrivateCloud"].IsNull())
    {
        if (!value["VirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.VirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualPrivateCloud.Deserialize(value["VirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("PhysicalPosition") && !value["PhysicalPosition"].IsNull())
    {
        if (!value["PhysicalPosition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PhysicalPosition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_physicalPosition.Deserialize(value["PhysicalPosition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_physicalPositionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_simpleModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_simpleModule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_position.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceTypeConfig.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskSize, allocator);
    }

    if (m_dataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskSize, allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_expireStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireState.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_newFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newFlag, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_physicalPosition.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetInstanceState() const
{
    return m_instanceState;
}

void Instance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Instance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

Image Instance::GetImage() const
{
    return m_image;
}

void Instance::SetImage(const Image& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Instance::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

SimpleModule Instance::GetSimpleModule() const
{
    return m_simpleModule;
}

void Instance::SetSimpleModule(const SimpleModule& _simpleModule)
{
    m_simpleModule = _simpleModule;
    m_simpleModuleHasBeenSet = true;
}

bool Instance::SimpleModuleHasBeenSet() const
{
    return m_simpleModuleHasBeenSet;
}

Position Instance::GetPosition() const
{
    return m_position;
}

void Instance::SetPosition(const Position& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Instance::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

Internet Instance::GetInternet() const
{
    return m_internet;
}

void Instance::SetInternet(const Internet& _internet)
{
    m_internet = _internet;
    m_internetHasBeenSet = true;
}

bool Instance::InternetHasBeenSet() const
{
    return m_internetHasBeenSet;
}

InstanceTypeConfig Instance::GetInstanceTypeConfig() const
{
    return m_instanceTypeConfig;
}

void Instance::SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig)
{
    m_instanceTypeConfig = _instanceTypeConfig;
    m_instanceTypeConfigHasBeenSet = true;
}

bool Instance::InstanceTypeConfigHasBeenSet() const
{
    return m_instanceTypeConfigHasBeenSet;
}

string Instance::GetCreateTime() const
{
    return m_createTime;
}

void Instance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Instance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> Instance::GetTagSet() const
{
    return m_tagSet;
}

void Instance::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool Instance::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string Instance::GetLatestOperation() const
{
    return m_latestOperation;
}

void Instance::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool Instance::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string Instance::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void Instance::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool Instance::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

string Instance::GetRestrictState() const
{
    return m_restrictState;
}

void Instance::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool Instance::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

int64_t Instance::GetSystemDiskSize() const
{
    return m_systemDiskSize;
}

void Instance::SetSystemDiskSize(const int64_t& _systemDiskSize)
{
    m_systemDiskSize = _systemDiskSize;
    m_systemDiskSizeHasBeenSet = true;
}

bool Instance::SystemDiskSizeHasBeenSet() const
{
    return m_systemDiskSizeHasBeenSet;
}

int64_t Instance::GetDataDiskSize() const
{
    return m_dataDiskSize;
}

void Instance::SetDataDiskSize(const int64_t& _dataDiskSize)
{
    m_dataDiskSize = _dataDiskSize;
    m_dataDiskSizeHasBeenSet = true;
}

bool Instance::DataDiskSizeHasBeenSet() const
{
    return m_dataDiskSizeHasBeenSet;
}

string Instance::GetUUID() const
{
    return m_uUID;
}

void Instance::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool Instance::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

int64_t Instance::GetPayMode() const
{
    return m_payMode;
}

void Instance::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Instance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string Instance::GetExpireTime() const
{
    return m_expireTime;
}

void Instance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Instance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Instance::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void Instance::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool Instance::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

int64_t Instance::GetRenewFlag() const
{
    return m_renewFlag;
}

void Instance::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Instance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string Instance::GetExpireState() const
{
    return m_expireState;
}

void Instance::SetExpireState(const string& _expireState)
{
    m_expireState = _expireState;
    m_expireStateHasBeenSet = true;
}

bool Instance::ExpireStateHasBeenSet() const
{
    return m_expireStateHasBeenSet;
}

DiskInfo Instance::GetSystemDisk() const
{
    return m_systemDisk;
}

void Instance::SetSystemDisk(const DiskInfo& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool Instance::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DiskInfo> Instance::GetDataDisks() const
{
    return m_dataDisks;
}

void Instance::SetDataDisks(const vector<DiskInfo>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool Instance::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

int64_t Instance::GetNewFlag() const
{
    return m_newFlag;
}

void Instance::SetNewFlag(const int64_t& _newFlag)
{
    m_newFlag = _newFlag;
    m_newFlagHasBeenSet = true;
}

bool Instance::NewFlagHasBeenSet() const
{
    return m_newFlagHasBeenSet;
}

vector<string> Instance::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void Instance::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool Instance::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

VirtualPrivateCloud Instance::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void Instance::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool Instance::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

string Instance::GetISP() const
{
    return m_iSP;
}

void Instance::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool Instance::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

PhysicalPosition Instance::GetPhysicalPosition() const
{
    return m_physicalPosition;
}

void Instance::SetPhysicalPosition(const PhysicalPosition& _physicalPosition)
{
    m_physicalPosition = _physicalPosition;
    m_physicalPositionHasBeenSet = true;
}

bool Instance::PhysicalPositionHasBeenSet() const
{
    return m_physicalPositionHasBeenSet;
}

