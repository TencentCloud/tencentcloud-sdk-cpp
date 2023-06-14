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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYRECORDREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeActivityRecord请求参数结构体
                */
                class DescribeActivityRecordRequest : public AbstractModel
                {
                public:
                    DescribeActivityRecordRequest();
                    ~DescribeActivityRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道加密token
                     * @return ChannelToken 渠道加密token
                     * 
                     */
                    std::string GetChannelToken() const;

                    /**
                     * 设置渠道加密token
                     * @param _channelToken 渠道加密token
                     * 
                     */
                    void SetChannelToken(const std::string& _channelToken);

                    /**
                     * 判断参数 ChannelToken 是否已赋值
                     * @return ChannelToken 是否已赋值
                     * 
                     */
                    bool ChannelTokenHasBeenSet() const;

                    /**
                     * 获取渠道来源，每个来源对应不同secretKey
                     * @return Channel 渠道来源，每个来源对应不同secretKey
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道来源，每个来源对应不同secretKey
                     * @param _channel 渠道来源，每个来源对应不同secretKey
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取活动id列表
                     * @return ActivityIdList 活动id列表
                     * 
                     */
                    std::vector<int64_t> GetActivityIdList() const;

                    /**
                     * 设置活动id列表
                     * @param _activityIdList 活动id列表
                     * 
                     */
                    void SetActivityIdList(const std::vector<int64_t>& _activityIdList);

                    /**
                     * 判断参数 ActivityIdList 是否已赋值
                     * @return ActivityIdList 是否已赋值
                     * 
                     */
                    bool ActivityIdListHasBeenSet() const;

                    /**
                     * 获取过滤状态码，已废弃
                     * @return Status 过滤状态码，已废弃
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置过滤状态码，已废弃
                     * @param _status 过滤状态码，已废弃
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态码过滤数组，空数组时不过滤
                     * @return Statuses 状态码过滤数组，空数组时不过滤
                     * 
                     */
                    std::vector<int64_t> GetStatuses() const;

                    /**
                     * 设置状态码过滤数组，空数组时不过滤
                     * @param _statuses 状态码过滤数组，空数组时不过滤
                     * 
                     */
                    void SetStatuses(const std::vector<int64_t>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取根据是否软删除进行过滤，[0]未删除, [1] 删除，不传不过滤
                     * @return IsDeletedList 根据是否软删除进行过滤，[0]未删除, [1] 删除，不传不过滤
                     * 
                     */
                    std::vector<int64_t> GetIsDeletedList() const;

                    /**
                     * 设置根据是否软删除进行过滤，[0]未删除, [1] 删除，不传不过滤
                     * @param _isDeletedList 根据是否软删除进行过滤，[0]未删除, [1] 删除，不传不过滤
                     * 
                     */
                    void SetIsDeletedList(const std::vector<int64_t>& _isDeletedList);

                    /**
                     * 判断参数 IsDeletedList 是否已赋值
                     * @return IsDeletedList 是否已赋值
                     * 
                     */
                    bool IsDeletedListHasBeenSet() const;

                private:

                    /**
                     * 渠道加密token
                     */
                    std::string m_channelToken;
                    bool m_channelTokenHasBeenSet;

                    /**
                     * 渠道来源，每个来源对应不同secretKey
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 活动id列表
                     */
                    std::vector<int64_t> m_activityIdList;
                    bool m_activityIdListHasBeenSet;

                    /**
                     * 过滤状态码，已废弃
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态码过滤数组，空数组时不过滤
                     */
                    std::vector<int64_t> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * 根据是否软删除进行过滤，[0]未删除, [1] 删除，不传不过滤
                     */
                    std::vector<int64_t> m_isDeletedList;
                    bool m_isDeletedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYRECORDREQUEST_H_
