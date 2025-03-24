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

#include <tencentcloud/chc/v20230418/model/NetDeviceModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

NetDeviceModel::NetDeviceModel() :
    m_versionHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_devModelHasBeenSet(false),
    m_devWidthHasBeenSet(false),
    m_devDepthHasBeenSet(false),
    m_devWeightHasBeenSet(false),
    m_mountEarHasBeenSet(false),
    m_accordCCCHasBeenSet(false),
    m_passNetworkHasBeenSet(false),
    m_powerportTypeHasBeenSet(false),
    m_powerModuleHasBeenSet(false),
    m_powermoduleNumHasBeenSet(false),
    m_powermodulePositionHasBeenSet(false),
    m_highVoltageAdaptHasBeenSet(false),
    m_powerEnergyHasBeenSet(false),
    m_inwindPositionHasBeenSet(false),
    m_outwindPositionHasBeenSet(false),
    m_businessPortPositionHasBeenSet(false),
    m_lineManagerHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_devHeightHasBeenSet(false)
{
}

CoreInternalOutcome NetDeviceModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("DevModel") && !value["DevModel"].IsNull())
    {
        if (!value["DevModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.DevModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devModel = string(value["DevModel"].GetString());
        m_devModelHasBeenSet = true;
    }

    if (value.HasMember("DevWidth") && !value["DevWidth"].IsNull())
    {
        if (!value["DevWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.DevWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devWidth = string(value["DevWidth"].GetString());
        m_devWidthHasBeenSet = true;
    }

    if (value.HasMember("DevDepth") && !value["DevDepth"].IsNull())
    {
        if (!value["DevDepth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.DevDepth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devDepth = string(value["DevDepth"].GetString());
        m_devDepthHasBeenSet = true;
    }

    if (value.HasMember("DevWeight") && !value["DevWeight"].IsNull())
    {
        if (!value["DevWeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.DevWeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devWeight = string(value["DevWeight"].GetString());
        m_devWeightHasBeenSet = true;
    }

    if (value.HasMember("MountEar") && !value["MountEar"].IsNull())
    {
        if (!value["MountEar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.MountEar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountEar = string(value["MountEar"].GetString());
        m_mountEarHasBeenSet = true;
    }

    if (value.HasMember("AccordCCC") && !value["AccordCCC"].IsNull())
    {
        if (!value["AccordCCC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.AccordCCC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accordCCC = string(value["AccordCCC"].GetString());
        m_accordCCCHasBeenSet = true;
    }

    if (value.HasMember("PassNetwork") && !value["PassNetwork"].IsNull())
    {
        if (!value["PassNetwork"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.PassNetwork` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passNetwork = string(value["PassNetwork"].GetString());
        m_passNetworkHasBeenSet = true;
    }

    if (value.HasMember("PowerportType") && !value["PowerportType"].IsNull())
    {
        if (!value["PowerportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.PowerportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerportType = string(value["PowerportType"].GetString());
        m_powerportTypeHasBeenSet = true;
    }

    if (value.HasMember("PowerModule") && !value["PowerModule"].IsNull())
    {
        if (!value["PowerModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.PowerModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerModule = string(value["PowerModule"].GetString());
        m_powerModuleHasBeenSet = true;
    }

    if (value.HasMember("PowermoduleNum") && !value["PowermoduleNum"].IsNull())
    {
        if (!value["PowermoduleNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.PowermoduleNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powermoduleNum = string(value["PowermoduleNum"].GetString());
        m_powermoduleNumHasBeenSet = true;
    }

    if (value.HasMember("PowermodulePosition") && !value["PowermodulePosition"].IsNull())
    {
        if (!value["PowermodulePosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.PowermodulePosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powermodulePosition = string(value["PowermodulePosition"].GetString());
        m_powermodulePositionHasBeenSet = true;
    }

    if (value.HasMember("HighVoltageAdapt") && !value["HighVoltageAdapt"].IsNull())
    {
        if (!value["HighVoltageAdapt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.HighVoltageAdapt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highVoltageAdapt = string(value["HighVoltageAdapt"].GetString());
        m_highVoltageAdaptHasBeenSet = true;
    }

    if (value.HasMember("PowerEnergy") && !value["PowerEnergy"].IsNull())
    {
        if (!value["PowerEnergy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.PowerEnergy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerEnergy = string(value["PowerEnergy"].GetString());
        m_powerEnergyHasBeenSet = true;
    }

    if (value.HasMember("InwindPosition") && !value["InwindPosition"].IsNull())
    {
        if (!value["InwindPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.InwindPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inwindPosition = string(value["InwindPosition"].GetString());
        m_inwindPositionHasBeenSet = true;
    }

    if (value.HasMember("OutwindPosition") && !value["OutwindPosition"].IsNull())
    {
        if (!value["OutwindPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.OutwindPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outwindPosition = string(value["OutwindPosition"].GetString());
        m_outwindPositionHasBeenSet = true;
    }

    if (value.HasMember("BusinessPortPosition") && !value["BusinessPortPosition"].IsNull())
    {
        if (!value["BusinessPortPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.BusinessPortPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessPortPosition = string(value["BusinessPortPosition"].GetString());
        m_businessPortPositionHasBeenSet = true;
    }

    if (value.HasMember("LineManager") && !value["LineManager"].IsNull())
    {
        if (!value["LineManager"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.LineManager` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineManager = string(value["LineManager"].GetString());
        m_lineManagerHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.CheckResult` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = value["CheckResult"].GetUint64();
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("DevHeight") && !value["DevHeight"].IsNull())
    {
        if (!value["DevHeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceModel.DevHeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devHeight = string(value["DevHeight"].GetString());
        m_devHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetDeviceModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_devModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devModel.c_str(), allocator).Move(), allocator);
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

    if (m_mountEarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountEar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountEar.c_str(), allocator).Move(), allocator);
    }

    if (m_accordCCCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccordCCC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accordCCC.c_str(), allocator).Move(), allocator);
    }

    if (m_passNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passNetwork.c_str(), allocator).Move(), allocator);
    }

    if (m_powerportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerportType.c_str(), allocator).Move(), allocator);
    }

    if (m_powerModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerModule.c_str(), allocator).Move(), allocator);
    }

    if (m_powermoduleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowermoduleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powermoduleNum.c_str(), allocator).Move(), allocator);
    }

    if (m_powermodulePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowermodulePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powermodulePosition.c_str(), allocator).Move(), allocator);
    }

    if (m_highVoltageAdaptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighVoltageAdapt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highVoltageAdapt.c_str(), allocator).Move(), allocator);
    }

    if (m_powerEnergyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerEnergy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerEnergy.c_str(), allocator).Move(), allocator);
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

    if (m_businessPortPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessPortPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessPortPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_lineManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineManager.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkResult, allocator);
    }

    if (m_devHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devHeight.c_str(), allocator).Move(), allocator);
    }

}


string NetDeviceModel::GetVersion() const
{
    return m_version;
}

void NetDeviceModel::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool NetDeviceModel::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string NetDeviceModel::GetModelVersion() const
{
    return m_modelVersion;
}

void NetDeviceModel::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool NetDeviceModel::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string NetDeviceModel::GetDevModel() const
{
    return m_devModel;
}

void NetDeviceModel::SetDevModel(const string& _devModel)
{
    m_devModel = _devModel;
    m_devModelHasBeenSet = true;
}

bool NetDeviceModel::DevModelHasBeenSet() const
{
    return m_devModelHasBeenSet;
}

string NetDeviceModel::GetDevWidth() const
{
    return m_devWidth;
}

void NetDeviceModel::SetDevWidth(const string& _devWidth)
{
    m_devWidth = _devWidth;
    m_devWidthHasBeenSet = true;
}

bool NetDeviceModel::DevWidthHasBeenSet() const
{
    return m_devWidthHasBeenSet;
}

string NetDeviceModel::GetDevDepth() const
{
    return m_devDepth;
}

void NetDeviceModel::SetDevDepth(const string& _devDepth)
{
    m_devDepth = _devDepth;
    m_devDepthHasBeenSet = true;
}

bool NetDeviceModel::DevDepthHasBeenSet() const
{
    return m_devDepthHasBeenSet;
}

string NetDeviceModel::GetDevWeight() const
{
    return m_devWeight;
}

void NetDeviceModel::SetDevWeight(const string& _devWeight)
{
    m_devWeight = _devWeight;
    m_devWeightHasBeenSet = true;
}

bool NetDeviceModel::DevWeightHasBeenSet() const
{
    return m_devWeightHasBeenSet;
}

string NetDeviceModel::GetMountEar() const
{
    return m_mountEar;
}

void NetDeviceModel::SetMountEar(const string& _mountEar)
{
    m_mountEar = _mountEar;
    m_mountEarHasBeenSet = true;
}

bool NetDeviceModel::MountEarHasBeenSet() const
{
    return m_mountEarHasBeenSet;
}

string NetDeviceModel::GetAccordCCC() const
{
    return m_accordCCC;
}

void NetDeviceModel::SetAccordCCC(const string& _accordCCC)
{
    m_accordCCC = _accordCCC;
    m_accordCCCHasBeenSet = true;
}

bool NetDeviceModel::AccordCCCHasBeenSet() const
{
    return m_accordCCCHasBeenSet;
}

string NetDeviceModel::GetPassNetwork() const
{
    return m_passNetwork;
}

void NetDeviceModel::SetPassNetwork(const string& _passNetwork)
{
    m_passNetwork = _passNetwork;
    m_passNetworkHasBeenSet = true;
}

bool NetDeviceModel::PassNetworkHasBeenSet() const
{
    return m_passNetworkHasBeenSet;
}

string NetDeviceModel::GetPowerportType() const
{
    return m_powerportType;
}

void NetDeviceModel::SetPowerportType(const string& _powerportType)
{
    m_powerportType = _powerportType;
    m_powerportTypeHasBeenSet = true;
}

bool NetDeviceModel::PowerportTypeHasBeenSet() const
{
    return m_powerportTypeHasBeenSet;
}

string NetDeviceModel::GetPowerModule() const
{
    return m_powerModule;
}

void NetDeviceModel::SetPowerModule(const string& _powerModule)
{
    m_powerModule = _powerModule;
    m_powerModuleHasBeenSet = true;
}

bool NetDeviceModel::PowerModuleHasBeenSet() const
{
    return m_powerModuleHasBeenSet;
}

string NetDeviceModel::GetPowermoduleNum() const
{
    return m_powermoduleNum;
}

void NetDeviceModel::SetPowermoduleNum(const string& _powermoduleNum)
{
    m_powermoduleNum = _powermoduleNum;
    m_powermoduleNumHasBeenSet = true;
}

bool NetDeviceModel::PowermoduleNumHasBeenSet() const
{
    return m_powermoduleNumHasBeenSet;
}

string NetDeviceModel::GetPowermodulePosition() const
{
    return m_powermodulePosition;
}

void NetDeviceModel::SetPowermodulePosition(const string& _powermodulePosition)
{
    m_powermodulePosition = _powermodulePosition;
    m_powermodulePositionHasBeenSet = true;
}

bool NetDeviceModel::PowermodulePositionHasBeenSet() const
{
    return m_powermodulePositionHasBeenSet;
}

string NetDeviceModel::GetHighVoltageAdapt() const
{
    return m_highVoltageAdapt;
}

void NetDeviceModel::SetHighVoltageAdapt(const string& _highVoltageAdapt)
{
    m_highVoltageAdapt = _highVoltageAdapt;
    m_highVoltageAdaptHasBeenSet = true;
}

bool NetDeviceModel::HighVoltageAdaptHasBeenSet() const
{
    return m_highVoltageAdaptHasBeenSet;
}

string NetDeviceModel::GetPowerEnergy() const
{
    return m_powerEnergy;
}

void NetDeviceModel::SetPowerEnergy(const string& _powerEnergy)
{
    m_powerEnergy = _powerEnergy;
    m_powerEnergyHasBeenSet = true;
}

bool NetDeviceModel::PowerEnergyHasBeenSet() const
{
    return m_powerEnergyHasBeenSet;
}

string NetDeviceModel::GetInwindPosition() const
{
    return m_inwindPosition;
}

void NetDeviceModel::SetInwindPosition(const string& _inwindPosition)
{
    m_inwindPosition = _inwindPosition;
    m_inwindPositionHasBeenSet = true;
}

bool NetDeviceModel::InwindPositionHasBeenSet() const
{
    return m_inwindPositionHasBeenSet;
}

string NetDeviceModel::GetOutwindPosition() const
{
    return m_outwindPosition;
}

void NetDeviceModel::SetOutwindPosition(const string& _outwindPosition)
{
    m_outwindPosition = _outwindPosition;
    m_outwindPositionHasBeenSet = true;
}

bool NetDeviceModel::OutwindPositionHasBeenSet() const
{
    return m_outwindPositionHasBeenSet;
}

string NetDeviceModel::GetBusinessPortPosition() const
{
    return m_businessPortPosition;
}

void NetDeviceModel::SetBusinessPortPosition(const string& _businessPortPosition)
{
    m_businessPortPosition = _businessPortPosition;
    m_businessPortPositionHasBeenSet = true;
}

bool NetDeviceModel::BusinessPortPositionHasBeenSet() const
{
    return m_businessPortPositionHasBeenSet;
}

string NetDeviceModel::GetLineManager() const
{
    return m_lineManager;
}

void NetDeviceModel::SetLineManager(const string& _lineManager)
{
    m_lineManager = _lineManager;
    m_lineManagerHasBeenSet = true;
}

bool NetDeviceModel::LineManagerHasBeenSet() const
{
    return m_lineManagerHasBeenSet;
}

uint64_t NetDeviceModel::GetCheckResult() const
{
    return m_checkResult;
}

void NetDeviceModel::SetCheckResult(const uint64_t& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool NetDeviceModel::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string NetDeviceModel::GetDevHeight() const
{
    return m_devHeight;
}

void NetDeviceModel::SetDevHeight(const string& _devHeight)
{
    m_devHeight = _devHeight;
    m_devHeightHasBeenSet = true;
}

bool NetDeviceModel::DevHeightHasBeenSet() const
{
    return m_devHeightHasBeenSet;
}

