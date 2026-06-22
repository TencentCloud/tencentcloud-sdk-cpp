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
                     * 获取<p>专享实例ID</p>
                     * @return InstanceId <p>专享实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>专享实例ID</p>
                     * @param _instanceId <p>专享实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return Name <p>实例名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _name <p>实例名称</p>
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
                     * 获取<p>实例备注信息</p>
                     * @return Remark <p>实例备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>实例备注信息</p>
                     * @param _remark <p>实例备注信息</p>
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
                     * 获取<p>实例消息保留时间，小时为单位</p>
                     * @return MessageRetention <p>实例消息保留时间，小时为单位</p>
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置<p>实例消息保留时间，小时为单位</p>
                     * @param _messageRetention <p>实例消息保留时间，小时为单位</p>
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
                     * 获取<p>是否开启删除保护</p>
                     * @return EnableDeletionProtection <p>是否开启删除保护</p>
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置<p>是否开启删除保护</p>
                     * @param _enableDeletionProtection <p>是否开启删除保护</p>
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
                     * 获取<p>控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5</p>
                     * @return SendReceiveRatio <p>控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5</p>
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置<p>控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5</p>
                     * @param _sendReceiveRatio <p>控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5</p>
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取<p>是否开启ACL</p>
                     * @return AclEnabled <p>是否开启ACL</p>
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置<p>是否开启ACL</p>
                     * @param _aclEnabled <p>是否开启ACL</p>
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>专享实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实例备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>实例消息保留时间，小时为单位</p>
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * <p>是否开启删除保护</p>
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * <p>控制生产和消费消息的 TPS 占比，取值范围0～1，默认值为0.5</p>
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * <p>是否开启ACL</p>
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_
