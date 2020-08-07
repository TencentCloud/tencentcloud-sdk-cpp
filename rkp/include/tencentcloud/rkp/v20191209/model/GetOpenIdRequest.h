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

#ifndef TENCENTCLOUD_RKP_V20191209_MODEL_GETOPENIDREQUEST_H_
#define TENCENTCLOUD_RKP_V20191209_MODEL_GETOPENIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            namespace Model
            {
                /**
                * GetOpenId请求参数结构体
                */
                class GetOpenIdRequest : public AbstractModel
                {
                public:
                    GetOpenIdRequest();
                    ~GetOpenIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dev临时token，通过sdk接口获取
                     * @return DeviceToken dev临时token，通过sdk接口获取
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置dev临时token，通过sdk接口获取
                     * @param DeviceToken dev临时token，通过sdk接口获取
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取业务ID
                     * @return BusinessId 业务ID
                     */
                    int64_t GetBusinessId() const;

                    /**
                     * 设置业务ID
                     * @param BusinessId 业务ID
                     */
                    void SetBusinessId(const int64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取业务侧账号体系下的用户ID
                     * @return BusinessUserId 业务侧账号体系下的用户ID
                     */
                    std::string GetBusinessUserId() const;

                    /**
                     * 设置业务侧账号体系下的用户ID
                     * @param BusinessUserId 业务侧账号体系下的用户ID
                     */
                    void SetBusinessUserId(const std::string& _businessUserId);

                    /**
                     * 判断参数 BusinessUserId 是否已赋值
                     * @return BusinessUserId 是否已赋值
                     */
                    bool BusinessUserIdHasBeenSet() const;

                    /**
                     * 获取平台：0-Android， 1-iOS， 2-web
                     * @return Platform 平台：0-Android， 1-iOS， 2-web
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置平台：0-Android， 1-iOS， 2-web
                     * @param Platform 平台：0-Android， 1-iOS， 2-web
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取选项
                     * @return Option 选项
                     */
                    std::string GetOption() const;

                    /**
                     * 设置选项
                     * @param Option 选项
                     */
                    void SetOption(const std::string& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * dev临时token，通过sdk接口获取
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * 业务ID
                     */
                    int64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 业务侧账号体系下的用户ID
                     */
                    std::string m_businessUserId;
                    bool m_businessUserIdHasBeenSet;

                    /**
                     * 平台：0-Android， 1-iOS， 2-web
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 选项
                     */
                    std::string m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_MODEL_GETOPENIDREQUEST_H_
