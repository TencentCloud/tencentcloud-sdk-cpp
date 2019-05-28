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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_VULLIST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_VULLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 漏洞信息
                */
                class VulList : public AbstractModel
                {
                public:
                    VulList();
                    ~VulList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     */
                    std::string GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param VulId 漏洞id
                     */
                    void SetVulId(const std::string& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param VulName 漏洞名称
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞代码
                     * @return VulCode 漏洞代码
                     */
                    std::string GetVulCode() const;

                    /**
                     * 设置漏洞代码
                     * @param VulCode 漏洞代码
                     */
                    void SetVulCode(const std::string& _vulCode);

                    /**
                     * 判断参数 VulCode 是否已赋值
                     * @return VulCode 是否已赋值
                     */
                    bool VulCodeHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return VulDesc 漏洞描述
                     */
                    std::string GetVulDesc() const;

                    /**
                     * 设置漏洞描述
                     * @param VulDesc 漏洞描述
                     */
                    void SetVulDesc(const std::string& _vulDesc);

                    /**
                     * 判断参数 VulDesc 是否已赋值
                     * @return VulDesc 是否已赋值
                     */
                    bool VulDescHasBeenSet() const;

                    /**
                     * 获取漏洞解决方案
                     * @return VulSolution 漏洞解决方案
                     */
                    std::string GetVulSolution() const;

                    /**
                     * 设置漏洞解决方案
                     * @param VulSolution 漏洞解决方案
                     */
                    void SetVulSolution(const std::string& _vulSolution);

                    /**
                     * 判断参数 VulSolution 是否已赋值
                     * @return VulSolution 是否已赋值
                     */
                    bool VulSolutionHasBeenSet() const;

                    /**
                     * 获取漏洞来源类别，0默认自身，1第三方插件
                     * @return VulSrcType 漏洞来源类别，0默认自身，1第三方插件
                     */
                    int64_t GetVulSrcType() const;

                    /**
                     * 设置漏洞来源类别，0默认自身，1第三方插件
                     * @param VulSrcType 漏洞来源类别，0默认自身，1第三方插件
                     */
                    void SetVulSrcType(const int64_t& _vulSrcType);

                    /**
                     * 判断参数 VulSrcType 是否已赋值
                     * @return VulSrcType 是否已赋值
                     */
                    bool VulSrcTypeHasBeenSet() const;

                    /**
                     * 获取漏洞位置
                     * @return VulFilepath 漏洞位置
                     */
                    std::string GetVulFilepath() const;

                    /**
                     * 设置漏洞位置
                     * @param VulFilepath 漏洞位置
                     */
                    void SetVulFilepath(const std::string& _vulFilepath);

                    /**
                     * 判断参数 VulFilepath 是否已赋值
                     * @return VulFilepath 是否已赋值
                     */
                    bool VulFilepathHasBeenSet() const;

                    /**
                     * 获取风险级别：1 低风险 ；2中等风险；3 高风险
                     * @return RiskLevel 风险级别：1 低风险 ；2中等风险；3 高风险
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险级别：1 低风险 ；2中等风险；3 高风险
                     * @param RiskLevel 风险级别：1 低风险 ；2中等风险；3 高风险
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    std::string m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞代码
                     */
                    std::string m_vulCode;
                    bool m_vulCodeHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_vulDesc;
                    bool m_vulDescHasBeenSet;

                    /**
                     * 漏洞解决方案
                     */
                    std::string m_vulSolution;
                    bool m_vulSolutionHasBeenSet;

                    /**
                     * 漏洞来源类别，0默认自身，1第三方插件
                     */
                    int64_t m_vulSrcType;
                    bool m_vulSrcTypeHasBeenSet;

                    /**
                     * 漏洞位置
                     */
                    std::string m_vulFilepath;
                    bool m_vulFilepathHasBeenSet;

                    /**
                     * 风险级别：1 低风险 ；2中等风险；3 高风险
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_VULLIST_H_
