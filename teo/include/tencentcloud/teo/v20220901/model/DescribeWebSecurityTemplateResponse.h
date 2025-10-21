/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeWebSecurityTemplate返回参数结构体
                */
                class DescribeWebSecurityTemplateResponse : public AbstractModel
                {
                public:
                    DescribeWebSecurityTemplateResponse();
                    ~DescribeWebSecurityTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全策略模板配置内容，Bot 配置暂不支持，正在开发中。
                     * @return SecurityPolicy 安全策略模板配置内容，Bot 配置暂不支持，正在开发中。
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                private:

                    /**
                     * 安全策略模板配置内容，Bot 配置暂不支持，正在开发中。
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATERESPONSE_H_
