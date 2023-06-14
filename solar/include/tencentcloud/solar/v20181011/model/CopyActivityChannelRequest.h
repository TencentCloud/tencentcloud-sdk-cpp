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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_COPYACTIVITYCHANNELREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_COPYACTIVITYCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * CopyActivityChannel请求参数结构体
                */
                class CopyActivityChannelRequest : public AbstractModel
                {
                public:
                    CopyActivityChannelRequest();
                    ~CopyActivityChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动ID
                     * @return ActivityId 活动ID
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动ID
                     * @param _activityId 活动ID
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取来源渠道ID
                     * @return ChannelFrom 来源渠道ID
                     * 
                     */
                    std::string GetChannelFrom() const;

                    /**
                     * 设置来源渠道ID
                     * @param _channelFrom 来源渠道ID
                     * 
                     */
                    void SetChannelFrom(const std::string& _channelFrom);

                    /**
                     * 判断参数 ChannelFrom 是否已赋值
                     * @return ChannelFrom 是否已赋值
                     * 
                     */
                    bool ChannelFromHasBeenSet() const;

                    /**
                     * 获取目的渠道id
                     * @return ChannelTo 目的渠道id
                     * 
                     */
                    std::vector<std::string> GetChannelTo() const;

                    /**
                     * 设置目的渠道id
                     * @param _channelTo 目的渠道id
                     * 
                     */
                    void SetChannelTo(const std::vector<std::string>& _channelTo);

                    /**
                     * 判断参数 ChannelTo 是否已赋值
                     * @return ChannelTo 是否已赋值
                     * 
                     */
                    bool ChannelToHasBeenSet() const;

                private:

                    /**
                     * 活动ID
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 来源渠道ID
                     */
                    std::string m_channelFrom;
                    bool m_channelFromHasBeenSet;

                    /**
                     * 目的渠道id
                     */
                    std::vector<std::string> m_channelTo;
                    bool m_channelToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_COPYACTIVITYCHANNELREQUEST_H_
