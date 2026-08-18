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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>
#include <tencentcloud/csip/v20221121/model/VPRExplainInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 已修复漏洞信息
                */
                class VulFixedItem : public AbstractModel
                {
                public:
                    VulFixedItem();
                    ~VulFixedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>漏洞ID</p>
                     * @return VulId <p>漏洞ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>漏洞ID</p>
                     * @param _vulId <p>漏洞ID</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名称</p>
                     * @return VulName <p>漏洞名称</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>漏洞名称</p>
                     * @param _vulName <p>漏洞名称</p>
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>漏洞等级<br>枚举值：<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * @return Level <p>漏洞等级<br>枚举值：<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>漏洞等级<br>枚举值：<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * @param _level <p>漏洞等级<br>枚举值：<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致</p>
                     * @return VRPRatingInfo <p>VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致</p>
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 设置<p>VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致</p>
                     * @param _vRPRatingInfo <p>VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致</p>
                     * 
                     */
                    void SetVRPRatingInfo(const VPRRatingInfo& _vRPRatingInfo);

                    /**
                     * 判断参数 VRPRatingInfo 是否已赋值
                     * @return VRPRatingInfo 是否已赋值
                     * 
                     */
                    bool VRPRatingInfoHasBeenSet() const;

                    /**
                     * 获取<p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞<br>EMERGENCY：应急漏洞</p>
                     * @return VulCategory <p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞<br>EMERGENCY：应急漏洞</p>
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 设置<p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞<br>EMERGENCY：应急漏洞</p>
                     * @param _vulCategory <p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞<br>EMERGENCY：应急漏洞</p>
                     * 
                     */
                    void SetVulCategory(const std::string& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>CVE编号</p>
                     * @return CveId <p>CVE编号</p>
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置<p>CVE编号</p>
                     * @param _cveId <p>CVE编号</p>
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取<p>修复主机名称</p>
                     * @return MachineName <p>修复主机名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>修复主机名称</p>
                     * @param _machineName <p>修复主机名称</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>修复主机实例ID</p>
                     * @return InstanceId <p>修复主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>修复主机实例ID</p>
                     * @param _instanceId <p>修复主机实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>关联组件&amp;路径数量</p>
                     * @return ComponentCount <p>关联组件&amp;路径数量</p>
                     * 
                     */
                    int64_t GetComponentCount() const;

                    /**
                     * 设置<p>关联组件&amp;路径数量</p>
                     * @param _componentCount <p>关联组件&amp;路径数量</p>
                     * 
                     */
                    void SetComponentCount(const int64_t& _componentCount);

                    /**
                     * 判断参数 ComponentCount 是否已赋值
                     * @return ComponentCount 是否已赋值
                     * 
                     */
                    bool ComponentCountHasBeenSet() const;

                    /**
                     * 获取<p>关联组件&amp;路径列表</p>
                     * @return Components <p>关联组件&amp;路径列表</p>
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置<p>关联组件&amp;路径列表</p>
                     * @param _components <p>关联组件&amp;路径列表</p>
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return LatestFixTime <p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置<p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _latestFixTime <p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                    /**
                     * 获取<p>VPR评级依据</p>
                     * @return VPRExplainInfo <p>VPR评级依据</p>
                     * 
                     */
                    VPRExplainInfo GetVPRExplainInfo() const;

                    /**
                     * 设置<p>VPR评级依据</p>
                     * @param _vPRExplainInfo <p>VPR评级依据</p>
                     * 
                     */
                    void SetVPRExplainInfo(const VPRExplainInfo& _vPRExplainInfo);

                    /**
                     * 判断参数 VPRExplainInfo 是否已赋值
                     * @return VPRExplainInfo 是否已赋值
                     * 
                     */
                    bool VPRExplainInfoHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>漏洞名称</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>漏洞等级<br>枚举值：<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致</p>
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                    /**
                     * <p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞<br>EMERGENCY：应急漏洞</p>
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>CVE编号</p>
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * <p>修复主机名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>修复主机实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>关联组件&amp;路径数量</p>
                     */
                    int64_t m_componentCount;
                    bool m_componentCountHasBeenSet;

                    /**
                     * <p>关联组件&amp;路径列表</p>
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * <p>VPR评级依据</p>
                     */
                    VPRExplainInfo m_vPRExplainInfo;
                    bool m_vPRExplainInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_
