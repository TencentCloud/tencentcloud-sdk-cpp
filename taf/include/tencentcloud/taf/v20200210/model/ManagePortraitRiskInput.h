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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEPORTRAITRISKINPUT_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEPORTRAITRISKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务入参
                */
                class ManagePortraitRiskInput : public AbstractModel
                {
                public:
                    ManagePortraitRiskInput();
                    ~ManagePortraitRiskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求时间戳秒
                     * @return PostTime 请求时间戳秒
                     * 
                     */
                    int64_t GetPostTime() const;

                    /**
                     * 设置请求时间戳秒
                     * @param _postTime 请求时间戳秒
                     * 
                     */
                    void SetPostTime(const int64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取用户公网ip（仅支持IPv4）
                     * @return UserIp 用户公网ip（仅支持IPv4）
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户公网ip（仅支持IPv4）
                     * @param _userIp 用户公网ip（仅支持IPv4）
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取渠道号
                     * @return Channel 渠道号
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置渠道号
                     * @param _channel 渠道号
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 请求时间戳秒
                     */
                    int64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 用户公网ip（仅支持IPv4）
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 渠道号
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEPORTRAITRISKINPUT_H_
