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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMODIFYADMINAUTHORIZATIONURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMODIFYADMINAUTHORIZATIONURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateModifyAdminAuthorizationUrl返回参数结构体
                */
                class CreateModifyAdminAuthorizationUrlResponse : public AbstractModel
                {
                public:
                    CreateModifyAdminAuthorizationUrlResponse();
                    ~CreateModifyAdminAuthorizationUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取变更企业超管授权书链接。
没有有效期限制。

注意：
此链接仅能由当时认证企业的认证人使用。
                     * @return Url 变更企业超管授权书链接。
没有有效期限制。

注意：
此链接仅能由当时认证企业的认证人使用。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 变更企业超管授权书链接。
没有有效期限制。

注意：
此链接仅能由当时认证企业的认证人使用。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMODIFYADMINAUTHORIZATIONURLRESPONSE_H_
