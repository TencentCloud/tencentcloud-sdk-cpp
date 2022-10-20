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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateConsoleLoginUrl返回参数结构体
                */
                class CreateConsoleLoginUrlResponse : public AbstractModel
                {
                public:
                    CreateConsoleLoginUrlResponse();
                    ~CreateConsoleLoginUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子客Web控制台url，此链接5分钟内有效，且只能访问一次。同时需要注意：
1. 此链接仅单次有效，使用后需要再次创建新的链接（部分聊天软件，如企业微信默认会对链接进行解析，此时需要使用类似“代码片段”的方式或者放到txt文件里发送链接）；
2. 创建的链接应避免被转义，如：&被转义为\u0026；如使用Postman请求后，请选择响应类型为 JSON，否则链接将被转义
                     * @return ConsoleUrl 子客Web控制台url，此链接5分钟内有效，且只能访问一次。同时需要注意：
1. 此链接仅单次有效，使用后需要再次创建新的链接（部分聊天软件，如企业微信默认会对链接进行解析，此时需要使用类似“代码片段”的方式或者放到txt文件里发送链接）；
2. 创建的链接应避免被转义，如：&被转义为\u0026；如使用Postman请求后，请选择响应类型为 JSON，否则链接将被转义
                     */
                    std::string GetConsoleUrl() const;

                    /**
                     * 判断参数 ConsoleUrl 是否已赋值
                     * @return ConsoleUrl 是否已赋值
                     */
                    bool ConsoleUrlHasBeenSet() const;

                    /**
                     * 获取渠道子客企业是否已开通腾讯电子签
                     * @return IsActivated 渠道子客企业是否已开通腾讯电子签
                     */
                    bool GetIsActivated() const;

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     */
                    bool IsActivatedHasBeenSet() const;

                private:

                    /**
                     * 子客Web控制台url，此链接5分钟内有效，且只能访问一次。同时需要注意：
1. 此链接仅单次有效，使用后需要再次创建新的链接（部分聊天软件，如企业微信默认会对链接进行解析，此时需要使用类似“代码片段”的方式或者放到txt文件里发送链接）；
2. 创建的链接应避免被转义，如：&被转义为\u0026；如使用Postman请求后，请选择响应类型为 JSON，否则链接将被转义
                     */
                    std::string m_consoleUrl;
                    bool m_consoleUrlHasBeenSet;

                    /**
                     * 渠道子客企业是否已开通腾讯电子签
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLRESPONSE_H_
