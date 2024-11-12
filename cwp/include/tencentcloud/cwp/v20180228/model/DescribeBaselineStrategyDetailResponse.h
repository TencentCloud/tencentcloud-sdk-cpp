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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILRESPONSE_H_

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
                * DescribeBaselineStrategyDetail返回参数结构体
                */
                class DescribeBaselineStrategyDetailResponse : public AbstractModel
                {
                public:
                    DescribeBaselineStrategyDetailResponse();
                    ~DescribeBaselineStrategyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略扫描通过率
                     * @return PassRate 策略扫描通过率
                     * 
                     */
                    uint64_t GetPassRate() const;

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取策略名
                     * @return StrategyName 策略名
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取策略扫描周期(天)
                     * @return ScanCycle 策略扫描周期(天)
                     * 
                     */
                    std::string GetScanCycle() const;

                    /**
                     * 判断参数 ScanCycle 是否已赋值
                     * @return ScanCycle 是否已赋值
                     * 
                     */
                    bool ScanCycleHasBeenSet() const;

                    /**
                     * 获取定期检测时间, 该时间下发扫描
                     * @return ScanAt 定期检测时间, 该时间下发扫描
                     * 
                     */
                    std::string GetScanAt() const;

                    /**
                     * 判断参数 ScanAt 是否已赋值
                     * @return ScanAt 是否已赋值
                     * 
                     */
                    bool ScanAtHasBeenSet() const;

                    /**
                     * 获取扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     * @return IsGlobal 扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取云服务器类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh: 轻量应用服务器
ohter: 混合云机器
                     * @return MachineType 云服务器类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh: 轻量应用服务器
ohter: 混合云机器
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取主机地域
                     * @return Region 主机地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取用户该策略下的所有主机id
                     * @return Quuids 用户该策略下的所有主机id
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取用户该策略下所有的基线id
                     * @return CategoryIds 用户该策略下所有的基线id
                     * 
                     */
                    std::vector<std::string> GetCategoryIds() const;

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取1 表示扫描过, 0没扫描过
                     * @return IfScanned 1 表示扫描过, 0没扫描过
                     * 
                     */
                    uint64_t GetIfScanned() const;

                    /**
                     * 判断参数 IfScanned 是否已赋值
                     * @return IfScanned 是否已赋值
                     * 
                     */
                    bool IfScannedHasBeenSet() const;

                private:

                    /**
                     * 策略扫描通过率
                     */
                    uint64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略扫描周期(天)
                     */
                    std::string m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * 定期检测时间, 该时间下发扫描
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * 扫描范围是否全部服务器, 1:是  0:否, 为1则为全部专业版主机
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 云服务器类型：
cvm：腾讯云服务器
bm：裸金属
ecm：边缘计算主机
lh: 轻量应用服务器
ohter: 混合云机器
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 主机地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用户该策略下的所有主机id
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 用户该策略下所有的基线id
                     */
                    std::vector<std::string> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * 1 表示扫描过, 0没扫描过
                     */
                    uint64_t m_ifScanned;
                    bool m_ifScannedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILRESPONSE_H_
