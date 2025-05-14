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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_NAMEDCOMPUTEENV_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_NAMEDCOMPUTEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EnvData.h>
#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>
#include <tencentcloud/batch/v20170312/model/Authentication.h>
#include <tencentcloud/batch/v20170312/model/InputMapping.h>
#include <tencentcloud/batch/v20170312/model/AgentRunningMode.h>
#include <tencentcloud/batch/v20170312/model/Notification.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算环境
                */
                class NamedComputeEnv : public AbstractModel
                {
                public:
                    NamedComputeEnv();
                    ~NamedComputeEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算环境名称
                     * @return EnvName 计算环境名称
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置计算环境名称
                     * @param _envName 计算环境名称
                     * 
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取计算节点期望个数，最大上限2000.
                     * @return DesiredComputeNodeCount 计算节点期望个数，最大上限2000.
                     * 
                     */
                    int64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置计算节点期望个数，最大上限2000.
                     * @param _desiredComputeNodeCount 计算节点期望个数，最大上限2000.
                     * 
                     */
                    void SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     * 
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算环境描述
                     * @return EnvDescription 计算环境描述
                     * 
                     */
                    std::string GetEnvDescription() const;

                    /**
                     * 设置计算环境描述
                     * @param _envDescription 计算环境描述
                     * 
                     */
                    void SetEnvDescription(const std::string& _envDescription);

                    /**
                     * 判断参数 EnvDescription 是否已赋值
                     * @return EnvDescription 是否已赋值
                     * 
                     */
                    bool EnvDescriptionHasBeenSet() const;

                    /**
                     * 获取计算环境管理类型，枚举如下：
MANAGED: 由客户在Batch平台主动创建；
THPC_QUEUE: 由THPC平台创建，关联THPC平台的集群队列。
                     * @return EnvType 计算环境管理类型，枚举如下：
MANAGED: 由客户在Batch平台主动创建；
THPC_QUEUE: 由THPC平台创建，关联THPC平台的集群队列。
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置计算环境管理类型，枚举如下：
MANAGED: 由客户在Batch平台主动创建；
THPC_QUEUE: 由THPC平台创建，关联THPC平台的集群队列。
                     * @param _envType 计算环境管理类型，枚举如下：
MANAGED: 由客户在Batch平台主动创建；
THPC_QUEUE: 由THPC平台创建，关联THPC平台的集群队列。
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取计算环境具体参数
                     * @return EnvData 计算环境具体参数
                     * 
                     */
                    EnvData GetEnvData() const;

                    /**
                     * 设置计算环境具体参数
                     * @param _envData 计算环境具体参数
                     * 
                     */
                    void SetEnvData(const EnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     * 
                     */
                    bool EnvDataHasBeenSet() const;

                    /**
                     * 获取数据盘挂载选项
                     * @return MountDataDisks 数据盘挂载选项
                     * 
                     */
                    std::vector<MountDataDisk> GetMountDataDisks() const;

                    /**
                     * 设置数据盘挂载选项
                     * @param _mountDataDisks 数据盘挂载选项
                     * 
                     */
                    void SetMountDataDisks(const std::vector<MountDataDisk>& _mountDataDisks);

                    /**
                     * 判断参数 MountDataDisks 是否已赋值
                     * @return MountDataDisks 是否已赋值
                     * 
                     */
                    bool MountDataDisksHasBeenSet() const;

                    /**
                     * 获取授权信息
                     * @return Authentications 授权信息
                     * 
                     */
                    std::vector<Authentication> GetAuthentications() const;

                    /**
                     * 设置授权信息
                     * @param _authentications 授权信息
                     * 
                     */
                    void SetAuthentications(const std::vector<Authentication>& _authentications);

                    /**
                     * 判断参数 Authentications 是否已赋值
                     * @return Authentications 是否已赋值
                     * 
                     */
                    bool AuthenticationsHasBeenSet() const;

                    /**
                     * 获取输入映射信息
                     * @return InputMappings 输入映射信息
                     * 
                     */
                    std::vector<InputMapping> GetInputMappings() const;

                    /**
                     * 设置输入映射信息
                     * @param _inputMappings 输入映射信息
                     * 
                     */
                    void SetInputMappings(const std::vector<InputMapping>& _inputMappings);

                    /**
                     * 判断参数 InputMappings 是否已赋值
                     * @return InputMappings 是否已赋值
                     * 
                     */
                    bool InputMappingsHasBeenSet() const;

                    /**
                     * 获取agent运行模式，适用于Windows系统
                     * @return AgentRunningMode agent运行模式，适用于Windows系统
                     * 
                     */
                    AgentRunningMode GetAgentRunningMode() const;

                    /**
                     * 设置agent运行模式，适用于Windows系统
                     * @param _agentRunningMode agent运行模式，适用于Windows系统
                     * 
                     */
                    void SetAgentRunningMode(const AgentRunningMode& _agentRunningMode);

                    /**
                     * 判断参数 AgentRunningMode 是否已赋值
                     * @return AgentRunningMode 是否已赋值
                     * 
                     */
                    bool AgentRunningModeHasBeenSet() const;

                    /**
                     * 获取通知信息
                     * @return Notifications 通知信息
                     * 
                     */
                    std::vector<Notification> GetNotifications() const;

                    /**
                     * 设置通知信息
                     * @param _notifications 通知信息
                     * 
                     */
                    void SetNotifications(const std::vector<Notification>& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     * 
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取非活跃节点处理策略，默认“RECREATE”，即对于实例创建失败或异常退还的计算节点，定期重新创建实例资源。
                     * @return ActionIfComputeNodeInactive 非活跃节点处理策略，默认“RECREATE”，即对于实例创建失败或异常退还的计算节点，定期重新创建实例资源。
                     * 
                     */
                    std::string GetActionIfComputeNodeInactive() const;

                    /**
                     * 设置非活跃节点处理策略，默认“RECREATE”，即对于实例创建失败或异常退还的计算节点，定期重新创建实例资源。
                     * @param _actionIfComputeNodeInactive 非活跃节点处理策略，默认“RECREATE”，即对于实例创建失败或异常退还的计算节点，定期重新创建实例资源。
                     * 
                     */
                    void SetActionIfComputeNodeInactive(const std::string& _actionIfComputeNodeInactive);

                    /**
                     * 判断参数 ActionIfComputeNodeInactive 是否已赋值
                     * @return ActionIfComputeNodeInactive 是否已赋值
                     * 
                     */
                    bool ActionIfComputeNodeInactiveHasBeenSet() const;

                    /**
                     * 获取对于实例创建失败或异常退还的计算节点，定期重新创建实例资源的最大重试次数，最大值100，如果不设置的话，系统会设置一个默认值，当前为7
                     * @return ResourceMaxRetryCount 对于实例创建失败或异常退还的计算节点，定期重新创建实例资源的最大重试次数，最大值100，如果不设置的话，系统会设置一个默认值，当前为7
                     * 
                     */
                    int64_t GetResourceMaxRetryCount() const;

                    /**
                     * 设置对于实例创建失败或异常退还的计算节点，定期重新创建实例资源的最大重试次数，最大值100，如果不设置的话，系统会设置一个默认值，当前为7
                     * @param _resourceMaxRetryCount 对于实例创建失败或异常退还的计算节点，定期重新创建实例资源的最大重试次数，最大值100，如果不设置的话，系统会设置一个默认值，当前为7
                     * 
                     */
                    void SetResourceMaxRetryCount(const int64_t& _resourceMaxRetryCount);

                    /**
                     * 判断参数 ResourceMaxRetryCount 是否已赋值
                     * @return ResourceMaxRetryCount 是否已赋值
                     * 
                     */
                    bool ResourceMaxRetryCountHasBeenSet() const;

                    /**
                     * 获取标签列表。通过指定该参数可以支持绑定标签到计算环境。每个计算环境最多绑定10个标签。
                     * @return Tags 标签列表。通过指定该参数可以支持绑定标签到计算环境。每个计算环境最多绑定10个标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表。通过指定该参数可以支持绑定标签到计算环境。每个计算环境最多绑定10个标签。
                     * @param _tags 标签列表。通过指定该参数可以支持绑定标签到计算环境。每个计算环境最多绑定10个标签。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * @return NotificationTarget 表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * 
                     */
                    std::string GetNotificationTarget() const;

                    /**
                     * 设置表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * @param _notificationTarget 表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * 
                     */
                    void SetNotificationTarget(const std::string& _notificationTarget);

                    /**
                     * 判断参数 NotificationTarget 是否已赋值
                     * @return NotificationTarget 是否已赋值
                     * 
                     */
                    bool NotificationTargetHasBeenSet() const;

                private:

                    /**
                     * 计算环境名称
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 计算节点期望个数，最大上限2000.
                     */
                    int64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * 计算环境描述
                     */
                    std::string m_envDescription;
                    bool m_envDescriptionHasBeenSet;

                    /**
                     * 计算环境管理类型，枚举如下：
MANAGED: 由客户在Batch平台主动创建；
THPC_QUEUE: 由THPC平台创建，关联THPC平台的集群队列。
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 计算环境具体参数
                     */
                    EnvData m_envData;
                    bool m_envDataHasBeenSet;

                    /**
                     * 数据盘挂载选项
                     */
                    std::vector<MountDataDisk> m_mountDataDisks;
                    bool m_mountDataDisksHasBeenSet;

                    /**
                     * 授权信息
                     */
                    std::vector<Authentication> m_authentications;
                    bool m_authenticationsHasBeenSet;

                    /**
                     * 输入映射信息
                     */
                    std::vector<InputMapping> m_inputMappings;
                    bool m_inputMappingsHasBeenSet;

                    /**
                     * agent运行模式，适用于Windows系统
                     */
                    AgentRunningMode m_agentRunningMode;
                    bool m_agentRunningModeHasBeenSet;

                    /**
                     * 通知信息
                     */
                    std::vector<Notification> m_notifications;
                    bool m_notificationsHasBeenSet;

                    /**
                     * 非活跃节点处理策略，默认“RECREATE”，即对于实例创建失败或异常退还的计算节点，定期重新创建实例资源。
                     */
                    std::string m_actionIfComputeNodeInactive;
                    bool m_actionIfComputeNodeInactiveHasBeenSet;

                    /**
                     * 对于实例创建失败或异常退还的计算节点，定期重新创建实例资源的最大重试次数，最大值100，如果不设置的话，系统会设置一个默认值，当前为7
                     */
                    int64_t m_resourceMaxRetryCount;
                    bool m_resourceMaxRetryCountHasBeenSet;

                    /**
                     * 标签列表。通过指定该参数可以支持绑定标签到计算环境。每个计算环境最多绑定10个标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     */
                    std::string m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_NAMEDCOMPUTEENV_H_
