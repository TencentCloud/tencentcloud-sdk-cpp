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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQInstance请求参数结构体
                */
                class ModifyRocketMQInstanceRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQInstanceRequest();
                    ~ModifyRocketMQInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专享实例ID
                     * @return InstanceId 专享实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置专享实例ID
                     * @param _instanceId 专享实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
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
                     * 获取实例备注信息
                     * @return Remark 实例备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置实例备注信息
                     * @param _remark 实例备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取实例消息保留时间，小时为单位
                     * @return MessageRetention 实例消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置实例消息保留时间，小时为单位
                     * @param _messageRetention 实例消息保留时间，小时为单位
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护
                     * @return EnableDeletionProtection 是否开启删除保护
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置是否开启删除保护
                     * @param _enableDeletionProtection 是否开启删除保护
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5
                     * @return SendReceiveRatio 控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5
                     * @param _sendReceiveRatio 控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                private:

                    /**
                     * 专享实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例消息保留时间，小时为单位
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * 是否开启删除保护
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * 控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_
