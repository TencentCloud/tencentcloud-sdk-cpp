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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_SETFORBIDPLAYCHANNELSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_SETFORBIDPLAYCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/SetForbidplayChannelParam.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * SetForbidPlayChannels请求参数结构体
                */
                class SetForbidPlayChannelsRequest : public AbstractModel
                {
                public:
                    SetForbidPlayChannelsRequest();
                    ~SetForbidPlayChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要禁播的通道参数，一次最多可以设置200个通道
                     * @return Channels 要禁播的通道参数，一次最多可以设置200个通道
                     * 
                     */
                    std::vector<SetForbidplayChannelParam> GetChannels() const;

                    /**
                     * 设置要禁播的通道参数，一次最多可以设置200个通道
                     * @param _channels 要禁播的通道参数，一次最多可以设置200个通道
                     * 
                     */
                    void SetChannels(const std::vector<SetForbidplayChannelParam>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取用户uin，可以是子用户的也可以是主用户的uin
                     * @return UserId 用户uin，可以是子用户的也可以是主用户的uin
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户uin，可以是子用户的也可以是主用户的uin
                     * @param _userId 用户uin，可以是子用户的也可以是主用户的uin
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 要禁播的通道参数，一次最多可以设置200个通道
                     */
                    std::vector<SetForbidplayChannelParam> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * 用户uin，可以是子用户的也可以是主用户的uin
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_SETFORBIDPLAYCHANNELSREQUEST_H_
