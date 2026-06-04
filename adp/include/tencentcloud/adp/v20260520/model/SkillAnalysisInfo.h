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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLANALYSISINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLANALYSISINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillAnalysisInfo Skill 安全扫描信息。
                */
                class SkillAnalysisInfo : public AbstractModel
                {
                public:
                    SkillAnalysisInfo();
                    ~SkillAnalysisInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全检测状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 待检测 |
| 1 | 检测中 |
| 2 | 可用 |
| 3 | 不可用 |
| 4 | 检测失败 |
                     * @return AnalysisStatus 安全检测状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 待检测 |
| 1 | 检测中 |
| 2 | 可用 |
| 3 | 不可用 |
| 4 | 检测失败 |
                     * 
                     */
                    int64_t GetAnalysisStatus() const;

                    /**
                     * 设置安全检测状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 待检测 |
| 1 | 检测中 |
| 2 | 可用 |
| 3 | 不可用 |
| 4 | 检测失败 |
                     * @param _analysisStatus 安全检测状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 待检测 |
| 1 | 检测中 |
| 2 | 可用 |
| 3 | 不可用 |
| 4 | 检测失败 |
                     * 
                     */
                    void SetAnalysisStatus(const int64_t& _analysisStatus);

                    /**
                     * 判断参数 AnalysisStatus 是否已赋值
                     * @return AnalysisStatus 是否已赋值
                     * 
                     */
                    bool AnalysisStatusHasBeenSet() const;

                    /**
                     * 获取风险描述
                     * @return RiskDescription 风险描述
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置风险描述
                     * @param _riskDescription 风险描述
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取风险等级

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 无风险 |
| 1 | 低风险 |
| 2 | 中风险 |
| 3 | 高风险 |
                     * @return RiskLevel 风险等级

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 无风险 |
| 1 | 低风险 |
| 2 | 中风险 |
| 3 | 高风险 |
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 无风险 |
| 1 | 低风险 |
| 2 | 中风险 |
| 3 | 高风险 |
                     * @param _riskLevel 风险等级

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 无风险 |
| 1 | 低风险 |
| 2 | 中风险 |
| 3 | 高风险 |
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取安全报告跳转url;
                     * @return SecurityReportUrl 安全报告跳转url;
                     * 
                     */
                    std::string GetSecurityReportUrl() const;

                    /**
                     * 设置安全报告跳转url;
                     * @param _securityReportUrl 安全报告跳转url;
                     * 
                     */
                    void SetSecurityReportUrl(const std::string& _securityReportUrl);

                    /**
                     * 判断参数 SecurityReportUrl 是否已赋值
                     * @return SecurityReportUrl 是否已赋值
                     * 
                     */
                    bool SecurityReportUrlHasBeenSet() const;

                private:

                    /**
                     * 安全检测状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 待检测 |
| 1 | 检测中 |
| 2 | 可用 |
| 3 | 不可用 |
| 4 | 检测失败 |
                     */
                    int64_t m_analysisStatus;
                    bool m_analysisStatusHasBeenSet;

                    /**
                     * 风险描述
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * 风险等级

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 无风险 |
| 1 | 低风险 |
| 2 | 中风险 |
| 3 | 高风险 |
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 安全报告跳转url;
                     */
                    std::string m_securityReportUrl;
                    bool m_securityReportUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLANALYSISINFO_H_
