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
                     * 获取<p>rule Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId <p>rule Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>rule Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId <p>rule Id</p>
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
                     * 获取<p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId <p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置<p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId <p>API ID</p>
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
                     * 获取<p>限流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName <p>限流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>限流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName <p>限流名称</p>
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
                     * 获取<p>最大限流qps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxQps <p>最大限流qps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxQps() const;

                    /**
                     * 设置<p>最大限流qps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxQps <p>最大限流qps</p>
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
                     * 获取<p>生效/禁用, enabled/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsableStatus <p>生效/禁用, enabled/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置<p>生效/禁用, enabled/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usableStatus <p>生效/禁用, enabled/disabled</p>
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
                     * 获取<p>规则内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleContent <p>规则内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置<p>规则内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleContent <p>规则内容</p>
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
                     * 获取<p>Tsf Rule ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsfRuleId <p>Tsf Rule ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTsfRuleId() const;

                    /**
                     * 设置<p>Tsf Rule ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tsfRuleId <p>Tsf Rule ID</p>
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
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime <p>更新时间</p>
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
                     * 获取<p>分页参数limit</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit <p>分页参数limit</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页参数limit</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit <p>分页参数limit</p>
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
                     * 获取<p>分页参数offset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset <p>分页参数offset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页参数offset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset <p>分页参数offset</p>
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
                     * 获取<p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>AppId</p>
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

                    /**
                     * 获取<p>旧格式 method 与 path 分开，新格式 path-Method,如 /checkToken-GET，默认为新格式</p>
                     * @return UsePathAndMethodFormat <p>旧格式 method 与 path 分开，新格式 path-Method,如 /checkToken-GET，默认为新格式</p>
                     * 
                     */
                    bool GetUsePathAndMethodFormat() const;

                    /**
                     * 设置<p>旧格式 method 与 path 分开，新格式 path-Method,如 /checkToken-GET，默认为新格式</p>
                     * @param _usePathAndMethodFormat <p>旧格式 method 与 path 分开，新格式 path-Method,如 /checkToken-GET，默认为新格式</p>
                     * 
                     */
                    void SetUsePathAndMethodFormat(const bool& _usePathAndMethodFormat);

                    /**
                     * 判断参数 UsePathAndMethodFormat 是否已赋值
                     * @return UsePathAndMethodFormat 是否已赋值
                     * 
                     */
                    bool UsePathAndMethodFormatHasBeenSet() const;

                private:

                    /**
                     * <p>rule Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * <p>限流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>最大限流qps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * <p>生效/禁用, enabled/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                    /**
                     * <p>规则内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * <p>Tsf Rule ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tsfRuleId;
                    bool m_tsfRuleIdHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>分页参数limit</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页参数offset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>旧格式 method 与 path 分开，新格式 path-Method,如 /checkToken-GET，默认为新格式</p>
                     */
                    bool m_usePathAndMethodFormat;
                    bool m_usePathAndMethodFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIRATELIMITRULE_H_
