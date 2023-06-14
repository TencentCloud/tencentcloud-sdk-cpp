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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEANONYMOUSACCESSTOKENREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEANONYMOUSACCESSTOKENREQUEST_H_

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
                * CreateAnonymousAccessToken请求参数结构体
                */
                class CreateAnonymousAccessTokenRequest : public AbstractModel
                {
                public:
                    CreateAnonymousAccessTokenRequest();
                    ~CreateAnonymousAccessTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Token的TTL(time to alive)分钟数,最大值1440(即24小时)
                     * @return TtlMinutes Token的TTL(time to alive)分钟数,最大值1440(即24小时)
                     * 
                     */
                    int64_t GetTtlMinutes() const;

                    /**
                     * 设置Token的TTL(time to alive)分钟数,最大值1440(即24小时)
                     * @param _ttlMinutes Token的TTL(time to alive)分钟数,最大值1440(即24小时)
                     * 
                     */
                    void SetTtlMinutes(const int64_t& _ttlMinutes);

                    /**
                     * 判断参数 TtlMinutes 是否已赋值
                     * @return TtlMinutes 是否已赋值
                     * 
                     */
                    bool TtlMinutesHasBeenSet() const;

                    /**
                     * 获取设备ID。创建Token时, 此参数为必须项
                     * @return Tid 设备ID。创建Token时, 此参数为必须项
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备ID。创建Token时, 此参数为必须项
                     * @param _tid 设备ID。创建Token时, 此参数为必须项
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取旧的AccessToken。续期Token时，此参数为必须
                     * @return OldAccessToken 旧的AccessToken。续期Token时，此参数为必须
                     * 
                     */
                    std::string GetOldAccessToken() const;

                    /**
                     * 设置旧的AccessToken。续期Token时，此参数为必须
                     * @param _oldAccessToken 旧的AccessToken。续期Token时，此参数为必须
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
                     * Token的TTL(time to alive)分钟数,最大值1440(即24小时)
                     */
                    int64_t m_ttlMinutes;
                    bool m_ttlMinutesHasBeenSet;

                    /**
                     * 设备ID。创建Token时, 此参数为必须项
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 旧的AccessToken。续期Token时，此参数为必须
                     */
                    std::string m_oldAccessToken;
                    bool m_oldAccessTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEANONYMOUSACCESSTOKENREQUEST_H_
