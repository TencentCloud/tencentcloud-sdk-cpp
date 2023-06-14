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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_UNBINDLIVEDOMAINCERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_UNBINDLIVEDOMAINCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * UnBindLiveDomainCert请求参数结构体
                */
                class UnBindLiveDomainCertRequest : public AbstractModel
                {
                public:
                    UnBindLiveDomainCertRequest();
                    ~UnBindLiveDomainCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放域名。
                     * @return DomainName 播放域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置播放域名。
                     * @param _domainName 播放域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取枚举值：
gray: 解绑灰度规则
formal(默认): 解绑正式规则

不传则为formal
                     * @return Type 枚举值：
gray: 解绑灰度规则
formal(默认): 解绑正式规则

不传则为formal
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置枚举值：
gray: 解绑灰度规则
formal(默认): 解绑正式规则

不传则为formal
                     * @param _type 枚举值：
gray: 解绑灰度规则
formal(默认): 解绑正式规则

不传则为formal
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 播放域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 枚举值：
gray: 解绑灰度规则
formal(默认): 解绑正式规则

不传则为formal
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_UNBINDLIVEDOMAINCERTREQUEST_H_
