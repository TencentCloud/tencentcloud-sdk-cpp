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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPREQUEST_H_

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
                * CreateRocketMQGroup请求参数结构体
                */
                class CreateRocketMQGroupRequest : public AbstractModel
                {
                public:
                    CreateRocketMQGroupRequest();
                    ~CreateRocketMQGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group名称，8~64个字符
                     * @return GroupId Group名称，8~64个字符
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group名称，8~64个字符
                     * @param _groupId Group名称，8~64个字符
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
                     * 获取命名空间，目前只支持单个命名空间
                     * @return Namespaces 命名空间，目前只支持单个命名空间
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置命名空间，目前只支持单个命名空间
                     * @param _namespaces 命名空间，目前只支持单个命名空间
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

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
                     * 获取Group类型（TCP/HTTP）
                     * @return GroupType Group类型（TCP/HTTP）
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Group类型（TCP/HTTP）
                     * @param _groupType Group类型（TCP/HTTP）
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取Group最大重试次数
                     * @return RetryMaxTimes Group最大重试次数
                     * 
                     */
                    uint64_t GetRetryMaxTimes() const;

                    /**
                     * 设置Group最大重试次数
                     * @param _retryMaxTimes Group最大重试次数
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
                     * Group名称，8~64个字符
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 命名空间，目前只支持单个命名空间
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

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
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 说明信息，最长128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Group类型（TCP/HTTP）
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Group最大重试次数
                     */
                    uint64_t m_retryMaxTimes;
                    bool m_retryMaxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPREQUEST_H_
