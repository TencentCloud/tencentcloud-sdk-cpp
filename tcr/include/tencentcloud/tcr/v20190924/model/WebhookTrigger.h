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
                     * 获取触发器名称
                     * @return Name 触发器名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置触发器名称
                     * @param _name 触发器名称
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
                     * 获取触发器目标
                     * @return Targets 触发器目标
                     * 
                     */
                    std::vector<WebhookTarget> GetTargets() const;

                    /**
                     * 设置触发器目标
                     * @param _targets 触发器目标
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
                     * 获取触发动作
                     * @return EventTypes 触发动作
                     * 
                     */
                    std::vector<std::string> GetEventTypes() const;

                    /**
                     * 设置触发动作
                     * @param _eventTypes 触发动作
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
                     * 获取触发规则
                     * @return Condition 触发规则
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置触发规则
                     * @param _condition 触发规则
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
                     * 获取启用触发器
                     * @return Enabled 启用触发器
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置启用触发器
                     * @param _enabled 启用触发器
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
                     * 获取触发器Id
                     * @return Id 触发器Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置触发器Id
                     * @param _id 触发器Id
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
                     * 获取触发器描述
                     * @return Description 触发器描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置触发器描述
                     * @param _description 触发器描述
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
                     * 获取触发器所属命名空间 Id
                     * @return NamespaceId 触发器所属命名空间 Id
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置触发器所属命名空间 Id
                     * @param _namespaceId 触发器所属命名空间 Id
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
                     * 获取触发器所属命名空间名称
                     * @return NamespaceName 触发器所属命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置触发器所属命名空间名称
                     * @param _namespaceName 触发器所属命名空间名称
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
                     * 触发器名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 触发器目标
                     */
                    std::vector<WebhookTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 触发动作
                     */
                    std::vector<std::string> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * 触发规则
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 启用触发器
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 触发器Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 触发器描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 触发器所属命名空间 Id
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 触发器所属命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_
