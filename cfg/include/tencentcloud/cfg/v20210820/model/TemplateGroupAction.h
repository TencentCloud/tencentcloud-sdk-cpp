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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUPACTION_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUPACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务分组动作
                */
                class TemplateGroupAction : public AbstractModel
                {
                public:
                    TemplateGroupAction();
                    ~TemplateGroupAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经验库分组动作ID
                     * @return TemplateGroupActionId 经验库分组动作ID
                     * 
                     */
                    int64_t GetTemplateGroupActionId() const;

                    /**
                     * 设置经验库分组动作ID
                     * @param _templateGroupActionId 经验库分组动作ID
                     * 
                     */
                    void SetTemplateGroupActionId(const int64_t& _templateGroupActionId);

                    /**
                     * 判断参数 TemplateGroupActionId 是否已赋值
                     * @return TemplateGroupActionId 是否已赋值
                     * 
                     */
                    bool TemplateGroupActionIdHasBeenSet() const;

                    /**
                     * 获取动作ID
                     * @return ActionId 动作ID
                     * 
                     */
                    int64_t GetActionId() const;

                    /**
                     * 设置动作ID
                     * @param _actionId 动作ID
                     * 
                     */
                    void SetActionId(const int64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取分组动作顺序
                     * @return Order 分组动作顺序
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置分组动作顺序
                     * @param _order 分组动作顺序
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取分组动作通用配置
                     * @return GeneralConfiguration 分组动作通用配置
                     * 
                     */
                    std::string GetGeneralConfiguration() const;

                    /**
                     * 设置分组动作通用配置
                     * @param _generalConfiguration 分组动作通用配置
                     * 
                     */
                    void SetGeneralConfiguration(const std::string& _generalConfiguration);

                    /**
                     * 判断参数 GeneralConfiguration 是否已赋值
                     * @return GeneralConfiguration 是否已赋值
                     * 
                     */
                    bool GeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取分组动作自定义配置
                     * @return CustomConfiguration 分组动作自定义配置
                     * 
                     */
                    std::string GetCustomConfiguration() const;

                    /**
                     * 设置分组动作自定义配置
                     * @param _customConfiguration 分组动作自定义配置
                     * 
                     */
                    void SetCustomConfiguration(const std::string& _customConfiguration);

                    /**
                     * 判断参数 CustomConfiguration 是否已赋值
                     * @return CustomConfiguration 是否已赋值
                     * 
                     */
                    bool CustomConfigurationHasBeenSet() const;

                    /**
                     * 获取动作分组创建时间
                     * @return CreateTime 动作分组创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置动作分组创建时间
                     * @param _createTime 动作分组创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取动作分组更新时间
                     * @return UpdateTime 动作分组更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置动作分组更新时间
                     * @param _updateTime 动作分组更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取动作名称
                     * @return ActionTitle 动作名称
                     * 
                     */
                    std::string GetActionTitle() const;

                    /**
                     * 设置动作名称
                     * @param _actionTitle 动作名称
                     * 
                     */
                    void SetActionTitle(const std::string& _actionTitle);

                    /**
                     * 判断参数 ActionTitle 是否已赋值
                     * @return ActionTitle 是否已赋值
                     * 
                     */
                    bool ActionTitleHasBeenSet() const;

                    /**
                     * 获取自身随机id
                     * @return RandomId 自身随机id
                     * 
                     */
                    int64_t GetRandomId() const;

                    /**
                     * 设置自身随机id
                     * @param _randomId 自身随机id
                     * 
                     */
                    void SetRandomId(const int64_t& _randomId);

                    /**
                     * 判断参数 RandomId 是否已赋值
                     * @return RandomId 是否已赋值
                     * 
                     */
                    bool RandomIdHasBeenSet() const;

                    /**
                     * 获取恢复动作id
                     * @return RecoverId 恢复动作id
                     * 
                     */
                    int64_t GetRecoverId() const;

                    /**
                     * 设置恢复动作id
                     * @param _recoverId 恢复动作id
                     * 
                     */
                    void SetRecoverId(const int64_t& _recoverId);

                    /**
                     * 判断参数 RecoverId 是否已赋值
                     * @return RecoverId 是否已赋值
                     * 
                     */
                    bool RecoverIdHasBeenSet() const;

                    /**
                     * 获取执行动作id
                     * @return ExecuteId 执行动作id
                     * 
                     */
                    int64_t GetExecuteId() const;

                    /**
                     * 设置执行动作id
                     * @param _executeId 执行动作id
                     * 
                     */
                    void SetExecuteId(const int64_t& _executeId);

                    /**
                     * 判断参数 ExecuteId 是否已赋值
                     * @return ExecuteId 是否已赋值
                     * 
                     */
                    bool ExecuteIdHasBeenSet() const;

                    /**
                     * 获取调用api类型，0:tat, 1:云api
                     * @return ActionApiType 调用api类型，0:tat, 1:云api
                     * 
                     */
                    int64_t GetActionApiType() const;

                    /**
                     * 设置调用api类型，0:tat, 1:云api
                     * @param _actionApiType 调用api类型，0:tat, 1:云api
                     * 
                     */
                    void SetActionApiType(const int64_t& _actionApiType);

                    /**
                     * 判断参数 ActionApiType 是否已赋值
                     * @return ActionApiType 是否已赋值
                     * 
                     */
                    bool ActionApiTypeHasBeenSet() const;

                    /**
                     * 获取1:故障，2:恢复
                     * @return ActionAttribute 1:故障，2:恢复
                     * 
                     */
                    int64_t GetActionAttribute() const;

                    /**
                     * 设置1:故障，2:恢复
                     * @param _actionAttribute 1:故障，2:恢复
                     * 
                     */
                    void SetActionAttribute(const int64_t& _actionAttribute);

                    /**
                     * 判断参数 ActionAttribute 是否已赋值
                     * @return ActionAttribute 是否已赋值
                     * 
                     */
                    bool ActionAttributeHasBeenSet() const;

                    /**
                     * 获取动作类型：平台和自定义
                     * @return ActionType 动作类型：平台和自定义
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型：平台和自定义
                     * @param _actionType 动作类型：平台和自定义
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取动作风险等级，1:低风险 2:中风险 3:高风险
                     * @return ActionRisk 动作风险等级，1:低风险 2:中风险 3:高风险
                     * 
                     */
                    std::string GetActionRisk() const;

                    /**
                     * 设置动作风险等级，1:低风险 2:中风险 3:高风险
                     * @param _actionRisk 动作风险等级，1:低风险 2:中风险 3:高风险
                     * 
                     */
                    void SetActionRisk(const std::string& _actionRisk);

                    /**
                     * 判断参数 ActionRisk 是否已赋值
                     * @return ActionRisk 是否已赋值
                     * 
                     */
                    bool ActionRiskHasBeenSet() const;

                    /**
                     * 获取故障表现
                     * @return FailurePerformance 故障表现
                     * 
                     */
                    std::string GetFailurePerformance() const;

                    /**
                     * 设置故障表现
                     * @param _failurePerformance 故障表现
                     * 
                     */
                    void SetFailurePerformance(const std::string& _failurePerformance);

                    /**
                     * 判断参数 FailurePerformance 是否已赋值
                     * @return FailurePerformance 是否已赋值
                     * 
                     */
                    bool FailurePerformanceHasBeenSet() const;

                private:

                    /**
                     * 经验库分组动作ID
                     */
                    int64_t m_templateGroupActionId;
                    bool m_templateGroupActionIdHasBeenSet;

                    /**
                     * 动作ID
                     */
                    int64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 分组动作顺序
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 分组动作通用配置
                     */
                    std::string m_generalConfiguration;
                    bool m_generalConfigurationHasBeenSet;

                    /**
                     * 分组动作自定义配置
                     */
                    std::string m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                    /**
                     * 动作分组创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 动作分组更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 动作名称
                     */
                    std::string m_actionTitle;
                    bool m_actionTitleHasBeenSet;

                    /**
                     * 自身随机id
                     */
                    int64_t m_randomId;
                    bool m_randomIdHasBeenSet;

                    /**
                     * 恢复动作id
                     */
                    int64_t m_recoverId;
                    bool m_recoverIdHasBeenSet;

                    /**
                     * 执行动作id
                     */
                    int64_t m_executeId;
                    bool m_executeIdHasBeenSet;

                    /**
                     * 调用api类型，0:tat, 1:云api
                     */
                    int64_t m_actionApiType;
                    bool m_actionApiTypeHasBeenSet;

                    /**
                     * 1:故障，2:恢复
                     */
                    int64_t m_actionAttribute;
                    bool m_actionAttributeHasBeenSet;

                    /**
                     * 动作类型：平台和自定义
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 动作风险等级，1:低风险 2:中风险 3:高风险
                     */
                    std::string m_actionRisk;
                    bool m_actionRiskHasBeenSet;

                    /**
                     * 故障表现
                     */
                    std::string m_failurePerformance;
                    bool m_failurePerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUPACTION_H_
