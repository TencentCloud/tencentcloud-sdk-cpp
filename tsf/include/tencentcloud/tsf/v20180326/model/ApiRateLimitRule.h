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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIRATELIMITRULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIRATELIMITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关API限流规则
                */
                class ApiRateLimitRule : public AbstractModel
                {
                public:
                    ApiRateLimitRule();
                    ~ApiRateLimitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取rule Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId rule Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置rule Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId rule Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取限流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 限流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置限流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 限流名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取最大限流qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxQps 最大限流qps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxQps() const;

                    /**
                     * 设置最大限流qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxQps 最大限流qps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxQps(const uint64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     * 
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取生效/禁用, enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsableStatus 生效/禁用, enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置生效/禁用, enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usableStatus 生效/禁用, enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsableStatus(const std::string& _usableStatus);

                    /**
                     * 判断参数 UsableStatus 是否已赋值
                     * @return UsableStatus 是否已赋值
                     * 
                     */
                    bool UsableStatusHasBeenSet() const;

                    /**
                     * 获取规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleContent 规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleContent 规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取Tsf Rule ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsfRuleId Tsf Rule ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTsfRuleId() const;

                    /**
                     * 设置Tsf Rule ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tsfRuleId Tsf Rule ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTsfRuleId(const std::string& _tsfRuleId);

                    /**
                     * 判断参数 TsfRuleId 是否已赋值
                     * @return TsfRuleId 是否已赋值
                     * 
                     */
                    bool TsfRuleIdHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取分页参数limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit 分页参数limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit 分页参数limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数offset
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 分页参数offset
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数offset
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 分页参数offset
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * rule Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * API ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 限流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 最大限流qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 生效/禁用, enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                    /**
                     * 规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * Tsf Rule ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tsfRuleId;
                    bool m_tsfRuleIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 分页参数limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数offset
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIRATELIMITRULE_H_
