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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiSecCustomSensitiveRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * api安全敏感规则列表
                */
                class ApiSecSensitiveRule : public AbstractModel
                {
                public:
                    ApiSecSensitiveRule();
                    ~ApiSecSensitiveRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取身份证号，唯一主键
                     * @return RuleName 身份证号，唯一主键
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置身份证号，唯一主键
                     * @param _ruleName 身份证号，唯一主键
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
                     * 获取表示OS系统内置，"custom"表示客户自定义
                     * @return Source 表示OS系统内置，"custom"表示客户自定义
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置表示OS系统内置，"custom"表示客户自定义
                     * @param _source 表示OS系统内置，"custom"表示客户自定义
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取开关状态，0：表示关，1表示开
                     * @return Status 开关状态，0：表示关，1表示开
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开关状态，0：表示关，1表示开
                     * @param _status 开关状态，0：表示关，1表示开
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取风险等级，100，200,300表示低中高三个等级
                     * @return Level 风险等级，100，200,300表示低中高三个等级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级，100，200,300表示低中高三个等级
                     * @param _level 风险等级，100，200,300表示低中高三个等级
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
                     * 获取修改时间，默认0，表示没有进行修改
                     * @return Timestamp 修改时间，默认0，表示没有进行修改
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置修改时间，默认0，表示没有进行修改
                     * @param _timestamp 修改时间，默认0，表示没有进行修改
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取自定义规则部分
                     * @return CustomRule 自定义规则部分
                     * 
                     */
                    ApiSecCustomSensitiveRule GetCustomRule() const;

                    /**
                     * 设置自定义规则部分
                     * @param _customRule 自定义规则部分
                     * 
                     */
                    void SetCustomRule(const ApiSecCustomSensitiveRule& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取是否泛化 0:不泛化，1:泛化
                     * @return IsPan 是否泛化 0:不泛化，1:泛化
                     * 
                     */
                    int64_t GetIsPan() const;

                    /**
                     * 设置是否泛化 0:不泛化，1:泛化
                     * @param _isPan 是否泛化 0:不泛化，1:泛化
                     * 
                     */
                    void SetIsPan(const int64_t& _isPan);

                    /**
                     * 判断参数 IsPan 是否已赋值
                     * @return IsPan 是否已赋值
                     * 
                     */
                    bool IsPanHasBeenSet() const;

                private:

                    /**
                     * 身份证号，唯一主键
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 表示OS系统内置，"custom"表示客户自定义
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 开关状态，0：表示关，1表示开
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 风险等级，100，200,300表示低中高三个等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 修改时间，默认0，表示没有进行修改
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 自定义规则部分
                     */
                    ApiSecCustomSensitiveRule m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * 是否泛化 0:不泛化，1:泛化
                     */
                    int64_t m_isPan;
                    bool m_isPanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVERULE_H_
