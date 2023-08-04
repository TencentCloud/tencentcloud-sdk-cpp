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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CHECKDOMAINREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CHECKDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CheckDomain请求参数结构体
                */
                class CheckDomainRequest : public AbstractModel
                {
                public:
                    CheckDomainRequest();
                    ~CheckDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放域名
                     * @return PlayDomain 播放域名
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置播放域名
                     * @param _playDomain 播放域名
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取CNAME 记录值
                     * @return InternalDomain CNAME 记录值
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置CNAME 记录值
                     * @param _internalDomain CNAME 记录值
                     * 
                     */
                    void SetInternalDomain(const std::string& _internalDomain);

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                private:

                    /**
                     * 播放域名
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * CNAME 记录值
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CHECKDOMAINREQUEST_H_
