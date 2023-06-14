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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQGROUPREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQGROUPREQUEST_H_

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
                * ModifyRocketMQGroup请求参数结构体
                */
                class ModifyRocketMQGroupRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQGroupRequest();
                    ~ModifyRocketMQGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return NamespaceId 命名空间
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间
                     * @param _namespaceId 命名空间
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取消费组名称
                     * @return GroupId 消费组名称
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置消费组名称
                     * @param _groupId 消费组名称
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取说明信息，最长128个字符
                     * @return Remark 说明信息，最长128个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息，最长128个字符
                     * @param _remark 说明信息，最长128个字符
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
                     * 获取是否开启消费
                     * @return ReadEnable 是否开启消费
                     * 
                     */
                    bool GetReadEnable() const;

                    /**
                     * 设置是否开启消费
                     * @param _readEnable 是否开启消费
                     * 
                     */
                    void SetReadEnable(const bool& _readEnable);

                    /**
                     * 判断参数 ReadEnable 是否已赋值
                     * @return ReadEnable 是否已赋值
                     * 
                     */
                    bool ReadEnableHasBeenSet() const;

                    /**
                     * 获取是否开启广播消费
                     * @return BroadcastEnable 是否开启广播消费
                     * 
                     */
                    bool GetBroadcastEnable() const;

                    /**
                     * 设置是否开启广播消费
                     * @param _broadcastEnable 是否开启广播消费
                     * 
                     */
                    void SetBroadcastEnable(const bool& _broadcastEnable);

                    /**
                     * 判断参数 BroadcastEnable 是否已赋值
                     * @return BroadcastEnable 是否已赋值
                     * 
                     */
                    bool BroadcastEnableHasBeenSet() const;

                    /**
                     * 获取最大重试次数
                     * @return RetryMaxTimes 最大重试次数
                     * 
                     */
                    uint64_t GetRetryMaxTimes() const;

                    /**
                     * 设置最大重试次数
                     * @param _retryMaxTimes 最大重试次数
                     * 
                     */
                    void SetRetryMaxTimes(const uint64_t& _retryMaxTimes);

                    /**
                     * 判断参数 RetryMaxTimes 是否已赋值
                     * @return RetryMaxTimes 是否已赋值
                     * 
                     */
                    bool RetryMaxTimesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 说明信息，最长128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_readEnable;
                    bool m_readEnableHasBeenSet;

                    /**
                     * 是否开启广播消费
                     */
                    bool m_broadcastEnable;
                    bool m_broadcastEnableHasBeenSet;

                    /**
                     * 最大重试次数
                     */
                    uint64_t m_retryMaxTimes;
                    bool m_retryMaxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQGROUPREQUEST_H_
