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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_REPLACEACTIVITYRECORDREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_REPLACEACTIVITYRECORDREQUEST_H_

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
                * ReplaceActivityRecord请求参数结构体
                */
                class ReplaceActivityRecordRequest : public AbstractModel
                {
                public:
                    ReplaceActivityRecordRequest();
                    ~ReplaceActivityRecordRequest() = default;
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
                     * 获取状态码
                     * @return Status 状态码
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态码
                     * @param _status 状态码
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
                     * 获取自定义子状态
                     * @return SubStatus 自定义子状态
                     * 
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 设置自定义子状态
                     * @param _subStatus 自定义子状态
                     * 
                     */
                    void SetSubStatus(const std::string& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取鉴权token
                     * @return ChannelToken 鉴权token
                     * 
                     */
                    std::string GetChannelToken() const;

                    /**
                     * 设置鉴权token
                     * @param _channelToken 鉴权token
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
                     * 获取渠道名，不同渠道对应不同secretKey
                     * @return Channel 渠道名，不同渠道对应不同secretKey
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道名，不同渠道对应不同secretKey
                     * @param _channel 渠道名，不同渠道对应不同secretKey
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 活动id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 状态码
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 自定义子状态
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 鉴权token
                     */
                    std::string m_channelToken;
                    bool m_channelTokenHasBeenSet;

                    /**
                     * 渠道名，不同渠道对应不同secretKey
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_REPLACEACTIVITYRECORDREQUEST_H_
