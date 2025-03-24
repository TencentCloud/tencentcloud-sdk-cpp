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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_NETDEVICEMODEL_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_NETDEVICEMODEL_H_

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
                * 网络设备型号详情
                */
                class NetDeviceModel : public AbstractModel
                {
                public:
                    NetDeviceModel();
                    ~NetDeviceModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取型号名
                     * @return DevModel 型号名
                     * 
                     */
                    std::string GetDevModel() const;

                    /**
                     * 设置型号名
                     * @param _devModel 型号名
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
                     * 获取是否携带挂耳
                     * @return MountEar 是否携带挂耳
                     * 
                     */
                    std::string GetMountEar() const;

                    /**
                     * 设置是否携带挂耳
                     * @param _mountEar 是否携带挂耳
                     * 
                     */
                    void SetMountEar(const std::string& _mountEar);

                    /**
                     * 判断参数 MountEar 是否已赋值
                     * @return MountEar 是否已赋值
                     * 
                     */
                    bool MountEarHasBeenSet() const;

                    /**
                     * 获取是否符合CCC认证
                     * @return AccordCCC 是否符合CCC认证
                     * 
                     */
                    std::string GetAccordCCC() const;

                    /**
                     * 设置是否符合CCC认证
                     * @param _accordCCC 是否符合CCC认证
                     * 
                     */
                    void SetAccordCCC(const std::string& _accordCCC);

                    /**
                     * 判断参数 AccordCCC 是否已赋值
                     * @return AccordCCC 是否已赋值
                     * 
                     */
                    bool AccordCCCHasBeenSet() const;

                    /**
                     * 获取是否通过入网许可认证
                     * @return PassNetwork 是否通过入网许可认证
                     * 
                     */
                    std::string GetPassNetwork() const;

                    /**
                     * 设置是否通过入网许可认证
                     * @param _passNetwork 是否通过入网许可认证
                     * 
                     */
                    void SetPassNetwork(const std::string& _passNetwork);

                    /**
                     * 判断参数 PassNetwork 是否已赋值
                     * @return PassNetwork 是否已赋值
                     * 
                     */
                    bool PassNetworkHasBeenSet() const;

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
                     * 获取高压直流自适应
                     * @return HighVoltageAdapt 高压直流自适应
                     * 
                     */
                    std::string GetHighVoltageAdapt() const;

                    /**
                     * 设置高压直流自适应
                     * @param _highVoltageAdapt 高压直流自适应
                     * 
                     */
                    void SetHighVoltageAdapt(const std::string& _highVoltageAdapt);

                    /**
                     * 判断参数 HighVoltageAdapt 是否已赋值
                     * @return HighVoltageAdapt 是否已赋值
                     * 
                     */
                    bool HighVoltageAdaptHasBeenSet() const;

                    /**
                     * 获取实际工作功耗(W)
                     * @return PowerEnergy 实际工作功耗(W)
                     * 
                     */
                    std::string GetPowerEnergy() const;

                    /**
                     * 设置实际工作功耗(W)
                     * @param _powerEnergy 实际工作功耗(W)
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
                     * 获取业务端口位置
                     * @return BusinessPortPosition 业务端口位置
                     * 
                     */
                    std::string GetBusinessPortPosition() const;

                    /**
                     * 设置业务端口位置
                     * @param _businessPortPosition 业务端口位置
                     * 
                     */
                    void SetBusinessPortPosition(const std::string& _businessPortPosition);

                    /**
                     * 判断参数 BusinessPortPosition 是否已赋值
                     * @return BusinessPortPosition 是否已赋值
                     * 
                     */
                    bool BusinessPortPositionHasBeenSet() const;

                    /**
                     * 获取带有理线器
                     * @return LineManager 带有理线器
                     * 
                     */
                    std::string GetLineManager() const;

                    /**
                     * 设置带有理线器
                     * @param _lineManager 带有理线器
                     * 
                     */
                    void SetLineManager(const std::string& _lineManager);

                    /**
                     * 判断参数 LineManager 是否已赋值
                     * @return LineManager 是否已赋值
                     * 
                     */
                    bool LineManagerHasBeenSet() const;

                    /**
                     * 获取0 代表在当前园区没评估过，1 代表完全满足IDC准入标准  2 代表存在托管风险  3 代表不满足IDC准入标准
                     * @return CheckResult 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准  2 代表存在托管风险  3 代表不满足IDC准入标准
                     * 
                     */
                    uint64_t GetCheckResult() const;

                    /**
                     * 设置0 代表在当前园区没评估过，1 代表完全满足IDC准入标准  2 代表存在托管风险  3 代表不满足IDC准入标准
                     * @param _checkResult 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准  2 代表存在托管风险  3 代表不满足IDC准入标准
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

                private:

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

                    /**
                     * 型号名
                     */
                    std::string m_devModel;
                    bool m_devModelHasBeenSet;

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
                     * 是否携带挂耳
                     */
                    std::string m_mountEar;
                    bool m_mountEarHasBeenSet;

                    /**
                     * 是否符合CCC认证
                     */
                    std::string m_accordCCC;
                    bool m_accordCCCHasBeenSet;

                    /**
                     * 是否通过入网许可认证
                     */
                    std::string m_passNetwork;
                    bool m_passNetworkHasBeenSet;

                    /**
                     * 电源接口型号
                     */
                    std::string m_powerportType;
                    bool m_powerportTypeHasBeenSet;

                    /**
                     * 电源模块
                     */
                    std::string m_powerModule;
                    bool m_powerModuleHasBeenSet;

                    /**
                     * 电源模块数量
                     */
                    std::string m_powermoduleNum;
                    bool m_powermoduleNumHasBeenSet;

                    /**
                     * 电源模块位置
                     */
                    std::string m_powermodulePosition;
                    bool m_powermodulePositionHasBeenSet;

                    /**
                     * 高压直流自适应
                     */
                    std::string m_highVoltageAdapt;
                    bool m_highVoltageAdaptHasBeenSet;

                    /**
                     * 实际工作功耗(W)
                     */
                    std::string m_powerEnergy;
                    bool m_powerEnergyHasBeenSet;

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
                     * 业务端口位置
                     */
                    std::string m_businessPortPosition;
                    bool m_businessPortPositionHasBeenSet;

                    /**
                     * 带有理线器
                     */
                    std::string m_lineManager;
                    bool m_lineManagerHasBeenSet;

                    /**
                     * 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准  2 代表存在托管风险  3 代表不满足IDC准入标准
                     */
                    uint64_t m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 设备高度
                     */
                    std::string m_devHeight;
                    bool m_devHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_NETDEVICEMODEL_H_
