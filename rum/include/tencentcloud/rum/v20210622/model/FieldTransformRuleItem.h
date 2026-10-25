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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_FIELDTRANSFORMRULEITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_FIELDTRANSFORMRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 字段值替换规则
                */
                class FieldTransformRuleItem : public AbstractModel
                {
                public:
                    FieldTransformRuleItem();
                    ~FieldTransformRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则 ID</p>
                     * @return Id <p>规则 ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>规则 ID</p>
                     * @param _id <p>规则 ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
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
                     * 获取<p>规则名称</p>
                     * @return Name <p>规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _name <p>规则名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>目标字段</p>
                     * @return TargetField <p>目标字段</p>
                     * 
                     */
                    std::string GetTargetField() const;

                    /**
                     * 设置<p>目标字段</p>
                     * @param _targetField <p>目标字段</p>
                     * 
                     */
                    void SetTargetField(const std::string& _targetField);

                    /**
                     * 判断参数 TargetField 是否已赋值
                     * @return TargetField 是否已赋值
                     * 
                     */
                    bool TargetFieldHasBeenSet() const;

                    /**
                     * 获取<p>匹配方式：exact / prefix / contains / regex</p>
                     * @return MatchType <p>匹配方式：exact / prefix / contains / regex</p>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>匹配方式：exact / prefix / contains / regex</p>
                     * @param _matchType <p>匹配方式：exact / prefix / contains / regex</p>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>匹配模式</p>
                     * @return MatchPattern <p>匹配模式</p>
                     * 
                     */
                    std::string GetMatchPattern() const;

                    /**
                     * 设置<p>匹配模式</p>
                     * @param _matchPattern <p>匹配模式</p>
                     * 
                     */
                    void SetMatchPattern(const std::string& _matchPattern);

                    /**
                     * 判断参数 MatchPattern 是否已赋值
                     * @return MatchPattern 是否已赋值
                     * 
                     */
                    bool MatchPatternHasBeenSet() const;

                    /**
                     * 获取<p>替换动作：replace / regex_replace / mask</p>
                     * @return TransformAction <p>替换动作：replace / regex_replace / mask</p>
                     * 
                     */
                    std::string GetTransformAction() const;

                    /**
                     * 设置<p>替换动作：replace / regex_replace / mask</p>
                     * @param _transformAction <p>替换动作：replace / regex_replace / mask</p>
                     * 
                     */
                    void SetTransformAction(const std::string& _transformAction);

                    /**
                     * 判断参数 TransformAction 是否已赋值
                     * @return TransformAction 是否已赋值
                     * 
                     */
                    bool TransformActionHasBeenSet() const;

                    /**
                     * 获取<p>替换值</p>
                     * @return ReplaceValue <p>替换值</p>
                     * 
                     */
                    std::string GetReplaceValue() const;

                    /**
                     * 设置<p>替换值</p>
                     * @param _replaceValue <p>替换值</p>
                     * 
                     */
                    void SetReplaceValue(const std::string& _replaceValue);

                    /**
                     * 判断参数 ReplaceValue 是否已赋值
                     * @return ReplaceValue 是否已赋值
                     * 
                     */
                    bool ReplaceValueHasBeenSet() const;

                    /**
                     * 获取<p>优先级</p>
                     * @return Priority <p>优先级</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _priority <p>优先级</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
                     * @return Enabled <p>是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _enabled <p>是否启用</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
                     * @return CreatedBy <p>创建人</p>
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _createdBy <p>创建人</p>
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取<p>更新人</p>
                     * @return UpdatedBy <p>更新人</p>
                     * 
                     */
                    std::string GetUpdatedBy() const;

                    /**
                     * 设置<p>更新人</p>
                     * @param _updatedBy <p>更新人</p>
                     * 
                     */
                    void SetUpdatedBy(const std::string& _updatedBy);

                    /**
                     * 判断参数 UpdatedBy 是否已赋值
                     * @return UpdatedBy 是否已赋值
                     * 
                     */
                    bool UpdatedByHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdatedAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updatedAt <p>更新时间</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>规则 ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>目标字段</p>
                     */
                    std::string m_targetField;
                    bool m_targetFieldHasBeenSet;

                    /**
                     * <p>匹配方式：exact / prefix / contains / regex</p>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * <p>匹配模式</p>
                     */
                    std::string m_matchPattern;
                    bool m_matchPatternHasBeenSet;

                    /**
                     * <p>替换动作：replace / regex_replace / mask</p>
                     */
                    std::string m_transformAction;
                    bool m_transformActionHasBeenSet;

                    /**
                     * <p>替换值</p>
                     */
                    std::string m_replaceValue;
                    bool m_replaceValueHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * <p>更新人</p>
                     */
                    std::string m_updatedBy;
                    bool m_updatedByHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_FIELDTRANSFORMRULEITEM_H_
