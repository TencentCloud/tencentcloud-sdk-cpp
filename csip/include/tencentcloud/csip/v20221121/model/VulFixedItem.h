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
                     * 获取漏洞ID
                     * @return VulId 漏洞ID
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置漏洞ID
                     * @param _vulId 漏洞ID
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
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
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
                     * 获取漏洞等级
枚举值：
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @return Level 漏洞等级
枚举值：
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置漏洞等级
枚举值：
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @param _level 漏洞等级
枚举值：
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
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
                     * 获取VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致
                     * @return VRPRatingInfo VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 设置VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致
                     * @param _vRPRatingInfo VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致
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
                     * 获取漏洞类型
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @return VulCategory 漏洞类型
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 设置漏洞类型
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @param _vulCategory 漏洞类型
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
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
                     * 获取CVE编号
                     * @return CveId CVE编号
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE编号
                     * @param _cveId CVE编号
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
                     * 获取修复主机名称
                     * @return MachineName 修复主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置修复主机名称
                     * @param _machineName 修复主机名称
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
                     * 获取修复主机实例ID
                     * @return InstanceId 修复主机实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置修复主机实例ID
                     * @param _instanceId 修复主机实例ID
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
                     * 获取关联组件&路径数量
                     * @return ComponentCount 关联组件&路径数量
                     * 
                     */
                    int64_t GetComponentCount() const;

                    /**
                     * 设置关联组件&路径数量
                     * @param _componentCount 关联组件&路径数量
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
                     * 获取关联组件&路径列表
                     * @return Components 关联组件&路径列表
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置关联组件&路径列表
                     * @param _components 关联组件&路径列表
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
                     * 获取最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return LatestFixTime 最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _latestFixTime 最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                private:

                    /**
                     * 漏洞ID
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞等级
枚举值：
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * VPR 评级信息（包含评级结果、说明和分阶段评分），与 DescribeHostVulRiskList 一致
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                    /**
                     * 漏洞类型
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * CVE编号
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 修复主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 修复主机实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 关联组件&路径数量
                     */
                    int64_t m_componentCount;
                    bool m_componentCountHasBeenSet;

                    /**
                     * 关联组件&路径列表
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_
