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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCERULERELATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCERULERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm数据识别模板数据项关联关系
                */
                class DspmIdentifyComplianceRuleRelation : public AbstractModel
                {
                public:
                    DspmIdentifyComplianceRuleRelation();
                    ~DspmIdentifyComplianceRuleRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据项ID</p>
                     * @return RuleId <p>数据项ID</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>数据项ID</p>
                     * @param _ruleId <p>数据项ID</p>
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>数据项名称</p>
                     * @return RuleName <p>数据项名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>数据项名称</p>
                     * @param _ruleName <p>数据项名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>级别ID</p>
                     * @return LevelId <p>级别ID</p>
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置<p>级别ID</p>
                     * @param _levelId <p>级别ID</p>
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取<p>级别名称</p>
                     * @return LevelName <p>级别名称</p>
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置<p>级别名称</p>
                     * @param _levelName <p>级别名称</p>
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取<p>级别程度</p><p>单位：分数</p>
                     * @return LevelScore <p>级别程度</p><p>单位：分数</p>
                     * 
                     */
                    uint64_t GetLevelScore() const;

                    /**
                     * 设置<p>级别程度</p><p>单位：分数</p>
                     * @param _levelScore <p>级别程度</p><p>单位：分数</p>
                     * 
                     */
                    void SetLevelScore(const uint64_t& _levelScore);

                    /**
                     * 判断参数 LevelScore 是否已赋值
                     * @return LevelScore 是否已赋值
                     * 
                     */
                    bool LevelScoreHasBeenSet() const;

                    /**
                     * 获取<p>结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * @return StructuredStatus <p>结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * 
                     */
                    uint64_t GetStructuredStatus() const;

                    /**
                     * 设置<p>结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * @param _structuredStatus <p>结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * 
                     */
                    void SetStructuredStatus(const uint64_t& _structuredStatus);

                    /**
                     * 判断参数 StructuredStatus 是否已赋值
                     * @return StructuredStatus 是否已赋值
                     * 
                     */
                    bool StructuredStatusHasBeenSet() const;

                    /**
                     * 获取<p>非结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * @return UnStructuredStatus <p>非结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * 
                     */
                    uint64_t GetUnStructuredStatus() const;

                    /**
                     * 设置<p>非结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * @param _unStructuredStatus <p>非结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     * 
                     */
                    void SetUnStructuredStatus(const uint64_t& _unStructuredStatus);

                    /**
                     * 判断参数 UnStructuredStatus 是否已赋值
                     * @return UnStructuredStatus 是否已赋值
                     * 
                     */
                    bool UnStructuredStatusHasBeenSet() const;

                    /**
                     * 获取<p>数据项开启状态</p><p>枚举值：</p><ul><li>0： 未开启</li><li>1： 已开启</li></ul>
                     * @return Status <p>数据项开启状态</p><p>枚举值：</p><ul><li>0： 未开启</li><li>1： 已开启</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>数据项开启状态</p><p>枚举值：</p><ul><li>0： 未开启</li><li>1： 已开启</li></ul>
                     * @param _status <p>数据项开启状态</p><p>枚举值：</p><ul><li>0： 未开启</li><li>1： 已开启</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>数据项ID</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>数据项名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>级别ID</p>
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * <p>级别名称</p>
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * <p>级别程度</p><p>单位：分数</p>
                     */
                    uint64_t m_levelScore;
                    bool m_levelScoreHasBeenSet;

                    /**
                     * <p>结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     */
                    uint64_t m_structuredStatus;
                    bool m_structuredStatusHasBeenSet;

                    /**
                     * <p>非结构化规则状态</p><p>枚举值：</p><ul><li>0： 未配置</li><li>1： 已配置</li></ul>
                     */
                    uint64_t m_unStructuredStatus;
                    bool m_unStructuredStatusHasBeenSet;

                    /**
                     * <p>数据项开启状态</p><p>枚举值：</p><ul><li>0： 未开启</li><li>1： 已开启</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCERULERELATION_H_
