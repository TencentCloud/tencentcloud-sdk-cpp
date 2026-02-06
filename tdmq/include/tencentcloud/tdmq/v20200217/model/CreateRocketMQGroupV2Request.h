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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPV2REQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQGroupV2请求参数结构体
                */
                class CreateRocketMQGroupV2Request : public AbstractModel
                {
                public:
                    CreateRocketMQGroupV2Request();
                    ~CreateRocketMQGroupV2Request() = default;
                    std::string ToJsonString() const;


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
                     * 获取消费组所在的命名空间，4.x 通用集群命名空间固定为: tdmq_default
                     * @return Namespace 消费组所在的命名空间，4.x 通用集群命名空间固定为: tdmq_default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置消费组所在的命名空间，4.x 通用集群命名空间固定为: tdmq_default
                     * @param _namespace 消费组所在的命名空间，4.x 通用集群命名空间固定为: tdmq_default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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

                    /**
                     * 获取标签列表
                     * @return TagList 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置标签列表
                     * @param _tagList 标签列表
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 消费组名称
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 消费组所在的命名空间，4.x 通用集群命名空间固定为: tdmq_default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

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
                     * 备注
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

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPV2REQUEST_H_
