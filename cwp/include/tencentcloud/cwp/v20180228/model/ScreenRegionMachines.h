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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONMACHINES_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONMACHINES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenMachine.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 大屏主机3D图 列表
                */
                class ScreenRegionMachines : public AbstractModel
                {
                public:
                    ScreenRegionMachines();
                    ~ScreenRegionMachines() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所有区域
                     * @return Region 所有区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所有区域
                     * @param _region 所有区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取区域中文描述
                     * @return RegionName 区域中文描述
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域中文描述
                     * @param _regionName 区域中文描述
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取主机列表
                     * @return Machines 主机列表
                     * 
                     */
                    std::vector<ScreenMachine> GetMachines() const;

                    /**
                     * 设置主机列表
                     * @param _machines 主机列表
                     * 
                     */
                    void SetMachines(const std::vector<ScreenMachine>& _machines);

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取此区域的主机总数
                     * @return TotalCount 此区域的主机总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置此区域的主机总数
                     * @param _totalCount 此区域的主机总数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取风险主机数量
                     * @return RiskCnt 风险主机数量
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置风险主机数量
                     * @param _riskCnt 风险主机数量
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取潜在风险主机数
                     * @return AttackCnt 潜在风险主机数
                     * 
                     */
                    uint64_t GetAttackCnt() const;

                    /**
                     * 设置潜在风险主机数
                     * @param _attackCnt 潜在风险主机数
                     * 
                     */
                    void SetAttackCnt(const uint64_t& _attackCnt);

                    /**
                     * 判断参数 AttackCnt 是否已赋值
                     * @return AttackCnt 是否已赋值
                     * 
                     */
                    bool AttackCntHasBeenSet() const;

                    /**
                     * 获取无风险主机数
                     * @return SafetyCnt 无风险主机数
                     * 
                     */
                    uint64_t GetSafetyCnt() const;

                    /**
                     * 设置无风险主机数
                     * @param _safetyCnt 无风险主机数
                     * 
                     */
                    void SetSafetyCnt(const uint64_t& _safetyCnt);

                    /**
                     * 判断参数 SafetyCnt 是否已赋值
                     * @return SafetyCnt 是否已赋值
                     * 
                     */
                    bool SafetyCntHasBeenSet() const;

                    /**
                     * 获取离线/未安装主机数
                     * @return UnAgentOfflineCnt 离线/未安装主机数
                     * 
                     */
                    uint64_t GetUnAgentOfflineCnt() const;

                    /**
                     * 设置离线/未安装主机数
                     * @param _unAgentOfflineCnt 离线/未安装主机数
                     * 
                     */
                    void SetUnAgentOfflineCnt(const uint64_t& _unAgentOfflineCnt);

                    /**
                     * 判断参数 UnAgentOfflineCnt 是否已赋值
                     * @return UnAgentOfflineCnt 是否已赋值
                     * 
                     */
                    bool UnAgentOfflineCntHasBeenSet() const;

                    /**
                     * 获取省略展示多少主机，等于0时没有省略展示
                     * @return IgnoreCnt 省略展示多少主机，等于0时没有省略展示
                     * 
                     */
                    uint64_t GetIgnoreCnt() const;

                    /**
                     * 设置省略展示多少主机，等于0时没有省略展示
                     * @param _ignoreCnt 省略展示多少主机，等于0时没有省略展示
                     * 
                     */
                    void SetIgnoreCnt(const uint64_t& _ignoreCnt);

                    /**
                     * 判断参数 IgnoreCnt 是否已赋值
                     * @return IgnoreCnt 是否已赋值
                     * 
                     */
                    bool IgnoreCntHasBeenSet() const;

                private:

                    /**
                     * 所有区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域中文描述
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 主机列表
                     */
                    std::vector<ScreenMachine> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * 此区域的主机总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 风险主机数量
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 潜在风险主机数
                     */
                    uint64_t m_attackCnt;
                    bool m_attackCntHasBeenSet;

                    /**
                     * 无风险主机数
                     */
                    uint64_t m_safetyCnt;
                    bool m_safetyCntHasBeenSet;

                    /**
                     * 离线/未安装主机数
                     */
                    uint64_t m_unAgentOfflineCnt;
                    bool m_unAgentOfflineCntHasBeenSet;

                    /**
                     * 省略展示多少主机，等于0时没有省略展示
                     */
                    uint64_t m_ignoreCnt;
                    bool m_ignoreCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONMACHINES_H_
