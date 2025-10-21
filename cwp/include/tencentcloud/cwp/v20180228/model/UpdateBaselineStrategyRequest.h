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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEBASELINESTRATEGYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEBASELINESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * UpdateBaselineStrategy请求参数结构体
                */
                class UpdateBaselineStrategyRequest : public AbstractModel
                {
                public:
                    UpdateBaselineStrategyRequest();
                    ~UpdateBaselineStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略id
                     * @return StrategyId 策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
                     * @param _strategyId 策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取检测周期
                     * @return ScanCycle 检测周期
                     * 
                     */
                    uint64_t GetScanCycle() const;

                    /**
                     * 设置检测周期
                     * @param _scanCycle 检测周期
                     * 
                     */
                    void SetScanCycle(const uint64_t& _scanCycle);

                    /**
                     * 判断参数 ScanCycle 是否已赋值
                     * @return ScanCycle 是否已赋值
                     * 
                     */
                    bool ScanCycleHasBeenSet() const;

                    /**
                     * 获取定期检测时间，该时间下发扫描
                     * @return ScanAt 定期检测时间，该时间下发扫描
                     * 
                     */
                    std::string GetScanAt() const;

                    /**
                     * 设置定期检测时间，该时间下发扫描
                     * @param _scanAt 定期检测时间，该时间下发扫描
                     * 
                     */
                    void SetScanAt(const std::string& _scanAt);

                    /**
                     * 判断参数 ScanAt 是否已赋值
                     * @return ScanAt 是否已赋值
                     * 
                     */
                    bool ScanAtHasBeenSet() const;

                    /**
                     * 获取该策略下选择的基线id数组
                     * @return CategoryIds 该策略下选择的基线id数组
                     * 
                     */
                    std::vector<std::string> GetCategoryIds() const;

                    /**
                     * 设置该策略下选择的基线id数组
                     * @param _categoryIds 该策略下选择的基线id数组
                     * 
                     */
                    void SetCategoryIds(const std::vector<std::string>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     * @return IsGlobal 扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     * @param _isGlobal 扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取云主机类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh:轻量应用服务器
other:混合云机器
                     * @return MachineType 云主机类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh:轻量应用服务器
other:混合云机器
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置云主机类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh:轻量应用服务器
other:混合云机器
                     * @param _machineType 云主机类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh:轻量应用服务器
other:混合云机器
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取主机地域 ap-guangzhou
                     * @return RegionCode 主机地域 ap-guangzhou
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置主机地域 ap-guangzhou
                     * @param _regionCode 主机地域 ap-guangzhou
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取主机id数组
                     * @return Quuids 主机id数组
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置主机id数组
                     * @param _quuids 主机id数组
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * 策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 检测周期
                     */
                    uint64_t m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * 定期检测时间，该时间下发扫描
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * 该策略下选择的基线id数组
                     */
                    std::vector<std::string> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * 扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 云主机类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh:轻量应用服务器
other:混合云机器
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 主机地域 ap-guangzhou
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 主机id数组
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEBASELINESTRATEGYREQUEST_H_
