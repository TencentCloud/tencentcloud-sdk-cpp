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

#ifndef TENCENTCLOUD_BA_V20200720_MODEL_CREATEWEAPPQRURLREQUEST_H_
#define TENCENTCLOUD_BA_V20200720_MODEL_CREATEWEAPPQRURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ba
    {
        namespace V20200720
        {
            namespace Model
            {
                /**
                * CreateWeappQRUrl请求参数结构体
                */
                class CreateWeappQRUrlRequest : public AbstractModel
                {
                public:
                    CreateWeappQRUrlRequest();
                    ~CreateWeappQRUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理角色临时密钥的Token
                     * @return SessionKey 代理角色临时密钥的Token
                     * 
                     */
                    std::string GetSessionKey() const;

                    /**
                     * 设置代理角色临时密钥的Token
                     * @param _sessionKey 代理角色临时密钥的Token
                     * 
                     */
                    void SetSessionKey(const std::string& _sessionKey);

                    /**
                     * 判断参数 SessionKey 是否已赋值
                     * @return SessionKey 是否已赋值
                     * 
                     */
                    bool SessionKeyHasBeenSet() const;

                private:

                    /**
                     * 代理角色临时密钥的Token
                     */
                    std::string m_sessionKey;
                    bool m_sessionKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BA_V20200720_MODEL_CREATEWEAPPQRURLREQUEST_H_
