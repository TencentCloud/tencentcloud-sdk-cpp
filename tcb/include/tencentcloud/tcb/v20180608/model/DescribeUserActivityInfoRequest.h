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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERACTIVITYINFOREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERACTIVITYINFOREQUEST_H_

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
                * DescribeUserActivityInfo请求参数结构体
                */
                class DescribeUserActivityInfoRequest : public AbstractModel
                {
                public:
                    DescribeUserActivityInfoRequest();
                    ~DescribeUserActivityInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动id
                     * @return ActivityId 活动id
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param _activityId 活动id
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

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
                     * 获取团id, 1元钱裂变中活动团id不为空时根据团id来查询记录，为空时查询uin最新记录
                     * @return GroupId 团id, 1元钱裂变中活动团id不为空时根据团id来查询记录，为空时查询uin最新记录
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置团id, 1元钱裂变中活动团id不为空时根据团id来查询记录，为空时查询uin最新记录
                     * @param _groupId 团id, 1元钱裂变中活动团id不为空时根据团id来查询记录，为空时查询uin最新记录
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 活动id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

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
                     * 团id, 1元钱裂变中活动团id不为空时根据团id来查询记录，为空时查询uin最新记录
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERACTIVITYINFOREQUEST_H_
