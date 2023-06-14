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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEUSRTOKENREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEUSRTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateUsrToken请求参数结构体
                */
                class CreateUsrTokenRequest : public AbstractModel
                {
                public:
                    CreateUsrTokenRequest();
                    ~CreateUsrTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端用户在IoT Video上的唯一标识ID
                     * @return AccessId 终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置终端用户在IoT Video上的唯一标识ID
                     * @param _accessId 终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取终端唯一ID，用于区分同一个用户的多个终端
                     * @return UniqueId 终端唯一ID，用于区分同一个用户的多个终端
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置终端唯一ID，用于区分同一个用户的多个终端
                     * @param _uniqueId 终端唯一ID，用于区分同一个用户的多个终端
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取Token的TTL(time to alive)分钟数
                     * @return TtlMinutes Token的TTL(time to alive)分钟数
                     * 
                     */
                    uint64_t GetTtlMinutes() const;

                    /**
                     * 设置Token的TTL(time to alive)分钟数
                     * @param _ttlMinutes Token的TTL(time to alive)分钟数
                     * 
                     */
                    void SetTtlMinutes(const uint64_t& _ttlMinutes);

                    /**
                     * 判断参数 TtlMinutes 是否已赋值
                     * @return TtlMinutes 是否已赋值
                     * 
                     */
                    bool TtlMinutesHasBeenSet() const;

                    /**
                     * 获取旧的AccessToken。续期Token时，此参数为必须。
                     * @return OldAccessToken 旧的AccessToken。续期Token时，此参数为必须。
                     * 
                     */
                    std::string GetOldAccessToken() const;

                    /**
                     * 设置旧的AccessToken。续期Token时，此参数为必须。
                     * @param _oldAccessToken 旧的AccessToken。续期Token时，此参数为必须。
                     * 
                     */
                    void SetOldAccessToken(const std::string& _oldAccessToken);

                    /**
                     * 判断参数 OldAccessToken 是否已赋值
                     * @return OldAccessToken 是否已赋值
                     * 
                     */
                    bool OldAccessTokenHasBeenSet() const;

                private:

                    /**
                     * 终端用户在IoT Video上的唯一标识ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 终端唯一ID，用于区分同一个用户的多个终端
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * Token的TTL(time to alive)分钟数
                     */
                    uint64_t m_ttlMinutes;
                    bool m_ttlMinutesHasBeenSet;

                    /**
                     * 旧的AccessToken。续期Token时，此参数为必须。
                     */
                    std::string m_oldAccessToken;
                    bool m_oldAccessTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEUSRTOKENREQUEST_H_
