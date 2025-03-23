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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICSUBSCRIBEGROUP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICSUBSCRIBEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/GroupInfoResponse.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeTopicSubscribeGroup接口出参
                */
                class TopicSubscribeGroup : public AbstractModel
                {
                public:
                    TopicSubscribeGroup();
                    ~TopicSubscribeGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取消费分组状态数量信息
                     * @return StatusCountInfo 消费分组状态数量信息
                     * 
                     */
                    std::string GetStatusCountInfo() const;

                    /**
                     * 设置消费分组状态数量信息
                     * @param _statusCountInfo 消费分组状态数量信息
                     * 
                     */
                    void SetStatusCountInfo(const std::string& _statusCountInfo);

                    /**
                     * 判断参数 StatusCountInfo 是否已赋值
                     * @return StatusCountInfo 是否已赋值
                     * 
                     */
                    bool StatusCountInfoHasBeenSet() const;

                    /**
                     * 获取消费分组信息
                     * @return GroupsInfo 消费分组信息
                     * 
                     */
                    std::vector<GroupInfoResponse> GetGroupsInfo() const;

                    /**
                     * 设置消费分组信息
                     * @param _groupsInfo 消费分组信息
                     * 
                     */
                    void SetGroupsInfo(const std::vector<GroupInfoResponse>& _groupsInfo);

                    /**
                     * 判断参数 GroupsInfo 是否已赋值
                     * @return GroupsInfo 是否已赋值
                     * 
                     */
                    bool GroupsInfoHasBeenSet() const;

                    /**
                     * 获取此次请求是否异步的状态。实例里分组较少的会直接返回结果,Status为1。当分组较多时,会异步更新缓存，Status为0时不会返回分组信息，直至Status为1更新完毕返回结果。
                     * @return Status 此次请求是否异步的状态。实例里分组较少的会直接返回结果,Status为1。当分组较多时,会异步更新缓存，Status为0时不会返回分组信息，直至Status为1更新完毕返回结果。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置此次请求是否异步的状态。实例里分组较少的会直接返回结果,Status为1。当分组较多时,会异步更新缓存，Status为0时不会返回分组信息，直至Status为1更新完毕返回结果。
                     * @param _status 此次请求是否异步的状态。实例里分组较少的会直接返回结果,Status为1。当分组较多时,会异步更新缓存，Status为0时不会返回分组信息，直至Status为1更新完毕返回结果。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 消费分组状态数量信息
                     */
                    std::string m_statusCountInfo;
                    bool m_statusCountInfoHasBeenSet;

                    /**
                     * 消费分组信息
                     */
                    std::vector<GroupInfoResponse> m_groupsInfo;
                    bool m_groupsInfoHasBeenSet;

                    /**
                     * 此次请求是否异步的状态。实例里分组较少的会直接返回结果,Status为1。当分组较多时,会异步更新缓存，Status为0时不会返回分组信息，直至Status为1更新完毕返回结果。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICSUBSCRIBEGROUP_H_
