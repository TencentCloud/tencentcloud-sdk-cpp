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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_SERVERMODEL_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_SERVERMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 服务器设备型号
                */
                class ServerModel : public AbstractModel
                {
                public:
                    ServerModel();
                    ~ServerModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取型号名称
                     * @return DevModel 型号名称
                     * 
                     */
                    std::string GetDevModel() const;

                    /**
                     * 设置型号名称
                     * @param _devModel 型号名称
                     * 
                     */
                    void SetDevModel(const std::string& _devModel);

                    /**
                     * 判断参数 DevModel 是否已赋值
                     * @return DevModel 是否已赋值
                     * 
                     */
                    bool DevModelHasBeenSet() const;

                    /**
                     * 获取节点数
                     * @return DevNode 节点数
                     * 
                     */
                    std::string GetDevNode() const;

                    /**
                     * 设置节点数
                     * @param _devNode 节点数
                     * 
                     */
                    void SetDevNode(const std::string& _devNode);

                    /**
                     * 判断参数 DevNode 是否已赋值
                     * @return DevNode 是否已赋值
                     * 
                     */
                    bool DevNodeHasBeenSet() const;

                    /**
                     * 获取设备高度
                     * @return DevHeight 设备高度
                     * 
                     */
                    std::string GetDevHeight() const;

                    /**
                     * 设置设备高度
                     * @param _devHeight 设备高度
                     * 
                     */
                    void SetDevHeight(const std::string& _devHeight);

                    /**
                     * 判断参数 DevHeight 是否已赋值
                     * @return DevHeight 是否已赋值
                     * 
                     */
                    bool DevHeightHasBeenSet() const;

                    /**
                     * 获取功耗
                     * @return PowerEnergy 功耗
                     * 
                     */
                    std::string GetPowerEnergy() const;

                    /**
                     * 设置功耗
                     * @param _powerEnergy 功耗
                     * 
                     */
                    void SetPowerEnergy(const std::string& _powerEnergy);

                    /**
                     * 判断参数 PowerEnergy 是否已赋值
                     * @return PowerEnergy 是否已赋值
                     * 
                     */
                    bool PowerEnergyHasBeenSet() const;

                    /**
                     * 获取电源接口型号
                     * @return PowerportType 电源接口型号
                     * 
                     */
                    std::string GetPowerportType() const;

                    /**
                     * 设置电源接口型号
                     * @param _powerportType 电源接口型号
                     * 
                     */
                    void SetPowerportType(const std::string& _powerportType);

                    /**
                     * 判断参数 PowerportType 是否已赋值
                     * @return PowerportType 是否已赋值
                     * 
                     */
                    bool PowerportTypeHasBeenSet() const;

                    /**
                     * 获取电源模块数量
                     * @return PowermoduleNum 电源模块数量
                     * 
                     */
                    std::string GetPowermoduleNum() const;

                    /**
                     * 设置电源模块数量
                     * @param _powermoduleNum 电源模块数量
                     * 
                     */
                    void SetPowermoduleNum(const std::string& _powermoduleNum);

                    /**
                     * 判断参数 PowermoduleNum 是否已赋值
                     * @return PowermoduleNum 是否已赋值
                     * 
                     */
                    bool PowermoduleNumHasBeenSet() const;

                    /**
                     * 获取进风口位置
                     * @return InwindPosition 进风口位置
                     * 
                     */
                    std::string GetInwindPosition() const;

                    /**
                     * 设置进风口位置
                     * @param _inwindPosition 进风口位置
                     * 
                     */
                    void SetInwindPosition(const std::string& _inwindPosition);

                    /**
                     * 判断参数 InwindPosition 是否已赋值
                     * @return InwindPosition 是否已赋值
                     * 
                     */
                    bool InwindPositionHasBeenSet() const;

                    /**
                     * 获取出风口位置
                     * @return OutwindPosition 出风口位置
                     * 
                     */
                    std::string GetOutwindPosition() const;

                    /**
                     * 设置出风口位置
                     * @param _outwindPosition 出风口位置
                     * 
                     */
                    void SetOutwindPosition(const std::string& _outwindPosition);

                    /**
                     * 判断参数 OutwindPosition 是否已赋值
                     * @return OutwindPosition 是否已赋值
                     * 
                     */
                    bool OutwindPositionHasBeenSet() const;

                    /**
                     * 获取网卡接口位置
                     * @return NetportPosition 网卡接口位置
                     * 
                     */
                    std::string GetNetportPosition() const;

                    /**
                     * 设置网卡接口位置
                     * @param _netportPosition 网卡接口位置
                     * 
                     */
                    void SetNetportPosition(const std::string& _netportPosition);

                    /**
                     * 判断参数 NetportPosition 是否已赋值
                     * @return NetportPosition 是否已赋值
                     * 
                     */
                    bool NetportPositionHasBeenSet() const;

                    /**
                     * 获取宽度
                     * @return DevWidth 宽度
                     * 
                     */
                    std::string GetDevWidth() const;

                    /**
                     * 设置宽度
                     * @param _devWidth 宽度
                     * 
                     */
                    void SetDevWidth(const std::string& _devWidth);

                    /**
                     * 判断参数 DevWidth 是否已赋值
                     * @return DevWidth 是否已赋值
                     * 
                     */
                    bool DevWidthHasBeenSet() const;

                    /**
                     * 获取深度
                     * @return DevDepth 深度
                     * 
                     */
                    std::string GetDevDepth() const;

                    /**
                     * 设置深度
                     * @param _devDepth 深度
                     * 
                     */
                    void SetDevDepth(const std::string& _devDepth);

                    /**
                     * 判断参数 DevDepth 是否已赋值
                     * @return DevDepth 是否已赋值
                     * 
                     */
                    bool DevDepthHasBeenSet() const;

                    /**
                     * 获取重量
                     * @return DevWeight 重量
                     * 
                     */
                    std::string GetDevWeight() const;

                    /**
                     * 设置重量
                     * @param _devWeight 重量
                     * 
                     */
                    void SetDevWeight(const std::string& _devWeight);

                    /**
                     * 判断参数 DevWeight 是否已赋值
                     * @return DevWeight 是否已赋值
                     * 
                     */
                    bool DevWeightHasBeenSet() const;

                    /**
                     * 获取电源模块
                     * @return PowerModule 电源模块
                     * 
                     */
                    std::string GetPowerModule() const;

                    /**
                     * 设置电源模块
                     * @param _powerModule 电源模块
                     * 
                     */
                    void SetPowerModule(const std::string& _powerModule);

                    /**
                     * 判断参数 PowerModule 是否已赋值
                     * @return PowerModule 是否已赋值
                     * 
                     */
                    bool PowerModuleHasBeenSet() const;

                    /**
                     * 获取电源模块位置
                     * @return PowermodulePosition 电源模块位置
                     * 
                     */
                    std::string GetPowermodulePosition() const;

                    /**
                     * 设置电源模块位置
                     * @param _powermodulePosition 电源模块位置
                     * 
                     */
                    void SetPowermodulePosition(const std::string& _powermodulePosition);

                    /**
                     * 判断参数 PowermodulePosition 是否已赋值
                     * @return PowermodulePosition 是否已赋值
                     * 
                     */
                    bool PowermodulePositionHasBeenSet() const;

                    /**
                     * 获取网络接口类型
                     * @return NetportType 网络接口类型
                     * 
                     */
                    std::string GetNetportType() const;

                    /**
                     * 设置网络接口类型
                     * @param _netportType 网络接口类型
                     * 
                     */
                    void SetNetportType(const std::string& _netportType);

                    /**
                     * 判断参数 NetportType 是否已赋值
                     * @return NetportType 是否已赋值
                     * 
                     */
                    bool NetportTypeHasBeenSet() const;

                    /**
                     * 获取网卡速率
                     * @return NetSpeed 网卡速率
                     * 
                     */
                    std::string GetNetSpeed() const;

                    /**
                     * 设置网卡速率
                     * @param _netSpeed 网卡速率
                     * 
                     */
                    void SetNetSpeed(const std::string& _netSpeed);

                    /**
                     * 判断参数 NetSpeed 是否已赋值
                     * @return NetSpeed 是否已赋值
                     * 
                     */
                    bool NetSpeedHasBeenSet() const;

                    /**
                     * 获取0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * @return CheckResult 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * 
                     */
                    uint64_t GetCheckResult() const;

                    /**
                     * 设置0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * @param _checkResult 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * 
                     */
                    void SetCheckResult(const uint64_t& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
                     * @param _version 版本号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取型号和版本的组合名称
                     * @return ModelVersion 型号和版本的组合名称
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置型号和版本的组合名称
                     * @param _modelVersion 型号和版本的组合名称
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                private:

                    /**
                     * 型号名称
                     */
                    std::string m_devModel;
                    bool m_devModelHasBeenSet;

                    /**
                     * 节点数
                     */
                    std::string m_devNode;
                    bool m_devNodeHasBeenSet;

                    /**
                     * 设备高度
                     */
                    std::string m_devHeight;
                    bool m_devHeightHasBeenSet;

                    /**
                     * 功耗
                     */
                    std::string m_powerEnergy;
                    bool m_powerEnergyHasBeenSet;

                    /**
                     * 电源接口型号
                     */
                    std::string m_powerportType;
                    bool m_powerportTypeHasBeenSet;

                    /**
                     * 电源模块数量
                     */
                    std::string m_powermoduleNum;
                    bool m_powermoduleNumHasBeenSet;

                    /**
                     * 进风口位置
                     */
                    std::string m_inwindPosition;
                    bool m_inwindPositionHasBeenSet;

                    /**
                     * 出风口位置
                     */
                    std::string m_outwindPosition;
                    bool m_outwindPositionHasBeenSet;

                    /**
                     * 网卡接口位置
                     */
                    std::string m_netportPosition;
                    bool m_netportPositionHasBeenSet;

                    /**
                     * 宽度
                     */
                    std::string m_devWidth;
                    bool m_devWidthHasBeenSet;

                    /**
                     * 深度
                     */
                    std::string m_devDepth;
                    bool m_devDepthHasBeenSet;

                    /**
                     * 重量
                     */
                    std::string m_devWeight;
                    bool m_devWeightHasBeenSet;

                    /**
                     * 电源模块
                     */
                    std::string m_powerModule;
                    bool m_powerModuleHasBeenSet;

                    /**
                     * 电源模块位置
                     */
                    std::string m_powermodulePosition;
                    bool m_powermodulePositionHasBeenSet;

                    /**
                     * 网络接口类型
                     */
                    std::string m_netportType;
                    bool m_netportTypeHasBeenSet;

                    /**
                     * 网卡速率
                     */
                    std::string m_netSpeed;
                    bool m_netSpeedHasBeenSet;

                    /**
                     * 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     */
                    uint64_t m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 型号和版本的组合名称
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_SERVERMODEL_H_
