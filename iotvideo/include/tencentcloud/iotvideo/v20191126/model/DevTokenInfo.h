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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVTOKENINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVTOKENINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 用于终端用户临时访问设备的token授权信息
                */
                class DevTokenInfo : public AbstractModel
                {
                public:
                    DevTokenInfo();
                    ~DevTokenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户的终端用户在IotVideo上的唯一标识id
                     * @return AccessId 客户的终端用户在IotVideo上的唯一标识id
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置客户的终端用户在IotVideo上的唯一标识id
                     * @param _accessId 客户的终端用户在IotVideo上的唯一标识id
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
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
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
                     * 获取IotVideo平台的accessToken
                     * @return AccessToken IotVideo平台的accessToken
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置IotVideo平台的accessToken
                     * @param _accessToken IotVideo平台的accessToken
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取Token的过期时间，单位秒(UTC时间)
                     * @return ExpireTime Token的过期时间，单位秒(UTC时间)
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Token的过期时间，单位秒(UTC时间)
                     * @param _expireTime Token的过期时间，单位秒(UTC时间)
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 客户的终端用户在IotVideo上的唯一标识id
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * IotVideo平台的accessToken
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * Token的过期时间，单位秒(UTC时间)
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVTOKENINFO_H_
