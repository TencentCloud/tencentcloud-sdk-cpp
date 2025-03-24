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

#include <tencentcloud/chc/v20230418/model/ServerModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ServerModel::ServerModel() :
    m_devModelHasBeenSet(false),
    m_devNodeHasBeenSet(false),
    m_devHeightHasBeenSet(false),
    m_powerEnergyHasBeenSet(false),
    m_powerportTypeHasBeenSet(false),
    m_powermoduleNumHasBeenSet(false),
    m_inwindPositionHasBeenSet(false),
    m_outwindPositionHasBeenSet(false),
    m_netportPositionHasBeenSet(false),
    m_devWidthHasBeenSet(false),
    m_devDepthHasBeenSet(false),
    m_devWeightHasBeenSet(false),
    m_powerModuleHasBeenSet(false),
    m_powermodulePositionHasBeenSet(false),
    m_netportTypeHasBeenSet(false),
    m_netSpeedHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

CoreInternalOutcome ServerModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DevModel") && !value["DevModel"].IsNull())
    {
        if (!value["DevModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.DevModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devModel = string(value["DevModel"].GetString());
        m_devModelHasBeenSet = true;
    }

    if (value.HasMember("DevNode") && !value["DevNode"].IsNull())
    {
        if (!value["DevNode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.DevNode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devNode = string(value["DevNode"].GetString());
        m_devNodeHasBeenSet = true;
    }

    if (value.HasMember("DevHeight") && !value["DevHeight"].IsNull())
    {
        if (!value["DevHeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.DevHeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devHeight = string(value["DevHeight"].GetString());
        m_devHeightHasBeenSet = true;
    }

    if (value.HasMember("PowerEnergy") && !value["PowerEnergy"].IsNull())
    {
        if (!value["PowerEnergy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.PowerEnergy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerEnergy = string(value["PowerEnergy"].GetString());
        m_powerEnergyHasBeenSet = true;
    }

    if (value.HasMember("PowerportType") && !value["PowerportType"].IsNull())
    {
        if (!value["PowerportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.PowerportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerportType = string(value["PowerportType"].GetString());
        m_powerportTypeHasBeenSet = true;
    }

    if (value.HasMember("PowermoduleNum") && !value["PowermoduleNum"].IsNull())
    {
        if (!value["PowermoduleNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.PowermoduleNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powermoduleNum = string(value["PowermoduleNum"].GetString());
        m_powermoduleNumHasBeenSet = true;
    }

    if (value.HasMember("InwindPosition") && !value["InwindPosition"].IsNull())
    {
        if (!value["InwindPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.InwindPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inwindPosition = string(value["InwindPosition"].GetString());
        m_inwindPositionHasBeenSet = true;
    }

    if (value.HasMember("OutwindPosition") && !value["OutwindPosition"].IsNull())
    {
        if (!value["OutwindPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.OutwindPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outwindPosition = string(value["OutwindPosition"].GetString());
        m_outwindPositionHasBeenSet = true;
    }

    if (value.HasMember("NetportPosition") && !value["NetportPosition"].IsNull())
    {
        if (!value["NetportPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.NetportPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netportPosition = string(value["NetportPosition"].GetString());
        m_netportPositionHasBeenSet = true;
    }

    if (value.HasMember("DevWidth") && !value["DevWidth"].IsNull())
    {
        if (!value["DevWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.DevWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devWidth = string(value["DevWidth"].GetString());
        m_devWidthHasBeenSet = true;
    }

    if (value.HasMember("DevDepth") && !value["DevDepth"].IsNull())
    {
        if (!value["DevDepth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.DevDepth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devDepth = string(value["DevDepth"].GetString());
        m_devDepthHasBeenSet = true;
    }

    if (value.HasMember("DevWeight") && !value["DevWeight"].IsNull())
    {
        if (!value["DevWeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.DevWeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devWeight = string(value["DevWeight"].GetString());
        m_devWeightHasBeenSet = true;
    }

    if (value.HasMember("PowerModule") && !value["PowerModule"].IsNull())
    {
        if (!value["PowerModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.PowerModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerModule = string(value["PowerModule"].GetString());
        m_powerModuleHasBeenSet = true;
    }

    if (value.HasMember("PowermodulePosition") && !value["PowermodulePosition"].IsNull())
    {
        if (!value["PowermodulePosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.PowermodulePosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powermodulePosition = string(value["PowermodulePosition"].GetString());
        m_powermodulePositionHasBeenSet = true;
    }

    if (value.HasMember("NetportType") && !value["NetportType"].IsNull())
    {
        if (!value["NetportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.NetportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netportType = string(value["NetportType"].GetString());
        m_netportTypeHasBeenSet = true;
    }

    if (value.HasMember("NetSpeed") && !value["NetSpeed"].IsNull())
    {
        if (!value["NetSpeed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.NetSpeed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netSpeed = string(value["NetSpeed"].GetString());
        m_netSpeedHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.CheckResult` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = value["CheckResult"].GetUint64();
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerModel.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_devModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devModel.c_str(), allocator).Move(), allocator);
    }

    if (m_devNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devNode.c_str(), allocator).Move(), allocator);
    }

    if (m_devHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devHeight.c_str(), allocator).Move(), allocator);
    }

    if (m_powerEnergyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerEnergy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerEnergy.c_str(), allocator).Move(), allocator);
    }

    if (m_powerportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerportType.c_str(), allocator).Move(), allocator);
    }

    if (m_powermoduleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowermoduleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powermoduleNum.c_str(), allocator).Move(), allocator);
    }

    if (m_inwindPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InwindPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inwindPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_outwindPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutwindPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outwindPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_netportPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetportPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netportPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_devWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devWidth.c_str(), allocator).Move(), allocator);
    }

    if (m_devDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devDepth.c_str(), allocator).Move(), allocator);
    }

    if (m_devWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devWeight.c_str(), allocator).Move(), allocator);
    }

    if (m_powerModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerModule.c_str(), allocator).Move(), allocator);
    }

    if (m_powermodulePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowermodulePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powermodulePosition.c_str(), allocator).Move(), allocator);
    }

    if (m_netportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netportType.c_str(), allocator).Move(), allocator);
    }

    if (m_netSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netSpeed.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkResult, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

}


string ServerModel::GetDevModel() const
{
    return m_devModel;
}

void ServerModel::SetDevModel(const string& _devModel)
{
    m_devModel = _devModel;
    m_devModelHasBeenSet = true;
}

bool ServerModel::DevModelHasBeenSet() const
{
    return m_devModelHasBeenSet;
}

string ServerModel::GetDevNode() const
{
    return m_devNode;
}

void ServerModel::SetDevNode(const string& _devNode)
{
    m_devNode = _devNode;
    m_devNodeHasBeenSet = true;
}

bool ServerModel::DevNodeHasBeenSet() const
{
    return m_devNodeHasBeenSet;
}

string ServerModel::GetDevHeight() const
{
    return m_devHeight;
}

void ServerModel::SetDevHeight(const string& _devHeight)
{
    m_devHeight = _devHeight;
    m_devHeightHasBeenSet = true;
}

bool ServerModel::DevHeightHasBeenSet() const
{
    return m_devHeightHasBeenSet;
}

string ServerModel::GetPowerEnergy() const
{
    return m_powerEnergy;
}

void ServerModel::SetPowerEnergy(const string& _powerEnergy)
{
    m_powerEnergy = _powerEnergy;
    m_powerEnergyHasBeenSet = true;
}

bool ServerModel::PowerEnergyHasBeenSet() const
{
    return m_powerEnergyHasBeenSet;
}

string ServerModel::GetPowerportType() const
{
    return m_powerportType;
}

void ServerModel::SetPowerportType(const string& _powerportType)
{
    m_powerportType = _powerportType;
    m_powerportTypeHasBeenSet = true;
}

bool ServerModel::PowerportTypeHasBeenSet() const
{
    return m_powerportTypeHasBeenSet;
}

string ServerModel::GetPowermoduleNum() const
{
    return m_powermoduleNum;
}

void ServerModel::SetPowermoduleNum(const string& _powermoduleNum)
{
    m_powermoduleNum = _powermoduleNum;
    m_powermoduleNumHasBeenSet = true;
}

bool ServerModel::PowermoduleNumHasBeenSet() const
{
    return m_powermoduleNumHasBeenSet;
}

string ServerModel::GetInwindPosition() const
{
    return m_inwindPosition;
}

void ServerModel::SetInwindPosition(const string& _inwindPosition)
{
    m_inwindPosition = _inwindPosition;
    m_inwindPositionHasBeenSet = true;
}

bool ServerModel::InwindPositionHasBeenSet() const
{
    return m_inwindPositionHasBeenSet;
}

string ServerModel::GetOutwindPosition() const
{
    return m_outwindPosition;
}

void ServerModel::SetOutwindPosition(const string& _outwindPosition)
{
    m_outwindPosition = _outwindPosition;
    m_outwindPositionHasBeenSet = true;
}

bool ServerModel::OutwindPositionHasBeenSet() const
{
    return m_outwindPositionHasBeenSet;
}

string ServerModel::GetNetportPosition() const
{
    return m_netportPosition;
}

void ServerModel::SetNetportPosition(const string& _netportPosition)
{
    m_netportPosition = _netportPosition;
    m_netportPositionHasBeenSet = true;
}

bool ServerModel::NetportPositionHasBeenSet() const
{
    return m_netportPositionHasBeenSet;
}

string ServerModel::GetDevWidth() const
{
    return m_devWidth;
}

void ServerModel::SetDevWidth(const string& _devWidth)
{
    m_devWidth = _devWidth;
    m_devWidthHasBeenSet = true;
}

bool ServerModel::DevWidthHasBeenSet() const
{
    return m_devWidthHasBeenSet;
}

string ServerModel::GetDevDepth() const
{
    return m_devDepth;
}

void ServerModel::SetDevDepth(const string& _devDepth)
{
    m_devDepth = _devDepth;
    m_devDepthHasBeenSet = true;
}

bool ServerModel::DevDepthHasBeenSet() const
{
    return m_devDepthHasBeenSet;
}

string ServerModel::GetDevWeight() const
{
    return m_devWeight;
}

void ServerModel::SetDevWeight(const string& _devWeight)
{
    m_devWeight = _devWeight;
    m_devWeightHasBeenSet = true;
}

bool ServerModel::DevWeightHasBeenSet() const
{
    return m_devWeightHasBeenSet;
}

string ServerModel::GetPowerModule() const
{
    return m_powerModule;
}

void ServerModel::SetPowerModule(const string& _powerModule)
{
    m_powerModule = _powerModule;
    m_powerModuleHasBeenSet = true;
}

bool ServerModel::PowerModuleHasBeenSet() const
{
    return m_powerModuleHasBeenSet;
}

string ServerModel::GetPowermodulePosition() const
{
    return m_powermodulePosition;
}

void ServerModel::SetPowermodulePosition(const string& _powermodulePosition)
{
    m_powermodulePosition = _powermodulePosition;
    m_powermodulePositionHasBeenSet = true;
}

bool ServerModel::PowermodulePositionHasBeenSet() const
{
    return m_powermodulePositionHasBeenSet;
}

string ServerModel::GetNetportType() const
{
    return m_netportType;
}

void ServerModel::SetNetportType(const string& _netportType)
{
    m_netportType = _netportType;
    m_netportTypeHasBeenSet = true;
}

bool ServerModel::NetportTypeHasBeenSet() const
{
    return m_netportTypeHasBeenSet;
}

string ServerModel::GetNetSpeed() const
{
    return m_netSpeed;
}

void ServerModel::SetNetSpeed(const string& _netSpeed)
{
    m_netSpeed = _netSpeed;
    m_netSpeedHasBeenSet = true;
}

bool ServerModel::NetSpeedHasBeenSet() const
{
    return m_netSpeedHasBeenSet;
}

uint64_t ServerModel::GetCheckResult() const
{
    return m_checkResult;
}

void ServerModel::SetCheckResult(const uint64_t& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ServerModel::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string ServerModel::GetVersion() const
{
    return m_version;
}

void ServerModel::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ServerModel::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ServerModel::GetModelVersion() const
{
    return m_modelVersion;
}

void ServerModel::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool ServerModel::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

