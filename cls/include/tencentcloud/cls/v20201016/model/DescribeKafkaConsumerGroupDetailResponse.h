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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/GroupPartitionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeKafkaConsumerGroupDetail返回参数结构体
                */
                class DescribeKafkaConsumerGroupDetailResponse : public AbstractModel
                {
                public:
                    DescribeKafkaConsumerGroupDetailResponse();
                    ~DescribeKafkaConsumerGroupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集id
                     * @return LogsetId 日志集id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取消费组名称
                     * @return Group 消费组名称
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取消费组信息列表
                     * @return PartitionInfos 消费组信息列表
                     * 
                     */
                    std::vector<GroupPartitionInfo> GetPartitionInfos() const;

                    /**
                     * 判断参数 PartitionInfos 是否已赋值
                     * @return PartitionInfos 是否已赋值
                     * 
                     */
                    bool PartitionInfosHasBeenSet() const;

                    /**
                     * 获取Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
Stable：组内成员正常消费，分区分配平衡。正常运行状态
PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
                     * @return State Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
Stable：组内成员正常消费，分区分配平衡。正常运行状态
PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 日志集id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 消费组信息列表
                     */
                    std::vector<GroupPartitionInfo> m_partitionInfos;
                    bool m_partitionInfosHasBeenSet;

                    /**
                     * Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
Stable：组内成员正常消费，分区分配平衡。正常运行状态
PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILRESPONSE_H_
