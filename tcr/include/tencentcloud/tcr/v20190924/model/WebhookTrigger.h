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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/WebhookTarget.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Webhook 触发器
                */
                class WebhookTrigger : public AbstractModel
                {
                public:
                    WebhookTrigger();
                    ~WebhookTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发器名称</p>
                     * @return Name <p>触发器名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>触发器名称</p>
                     * @param _name <p>触发器名称</p>
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
                     * 获取<p>触发器目标</p>
                     * @return Targets <p>触发器目标</p>
                     * 
                     */
                    std::vector<WebhookTarget> GetTargets() const;

                    /**
                     * 设置<p>触发器目标</p>
                     * @param _targets <p>触发器目标</p>
                     * 
                     */
                    void SetTargets(const std::vector<WebhookTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>触发动作</p>
                     * @return EventTypes <p>触发动作</p>
                     * 
                     */
                    std::vector<std::string> GetEventTypes() const;

                    /**
                     * 设置<p>触发动作</p>
                     * @param _eventTypes <p>触发动作</p>
                     * 
                     */
                    void SetEventTypes(const std::vector<std::string>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     * 
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取<p>触发规则</p>
                     * @return Condition <p>触发规则</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>触发规则</p>
                     * @param _condition <p>触发规则</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>启用触发器</p>
                     * @return Enabled <p>启用触发器</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>启用触发器</p>
                     * @param _enabled <p>启用触发器</p>
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
                     * 获取<p>触发器Id</p>
                     * @return Id <p>触发器Id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>触发器Id</p>
                     * @param _id <p>触发器Id</p>
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
                     * 获取<p>触发器描述</p>
                     * @return Description <p>触发器描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>触发器描述</p>
                     * @param _description <p>触发器描述</p>
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
                     * 获取<p>触发器所属命名空间 Id</p>
                     * @return NamespaceId <p>触发器所属命名空间 Id</p>
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置<p>触发器所属命名空间 Id</p>
                     * @param _namespaceId <p>触发器所属命名空间 Id</p>
                     * 
                     */
                    void SetNamespaceId(const int64_t& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取<p>触发器所属命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName <p>触发器所属命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>触发器所属命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceName <p>触发器所属命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                private:

                    /**
                     * <p>触发器名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>触发器目标</p>
                     */
                    std::vector<WebhookTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>触发动作</p>
                     */
                    std::vector<std::string> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * <p>触发规则</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>启用触发器</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>触发器Id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>触发器描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>触发器所属命名空间 Id</p>
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>触发器所属命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_
