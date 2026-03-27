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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateApiKey请求参数结构体
                */
                class CreateApiKeyRequest : public AbstractModel
                {
                public:
                    CreateApiKeyRequest();
                    ~CreateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * @return EnvId 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * @param _envId 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取密钥类型。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限，请勿暴露在客户端）、publish_key（客户端使用的公开密钥，权限受限，可安全用于前端或移动端）。
                     * @return KeyType 密钥类型。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限，请勿暴露在客户端）、publish_key（客户端使用的公开密钥，权限受限，可安全用于前端或移动端）。
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置密钥类型。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限，请勿暴露在客户端）、publish_key（客户端使用的公开密钥，权限受限，可安全用于前端或移动端）。
                     * @param _keyType 密钥类型。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限，请勿暴露在客户端）、publish_key（客户端使用的公开密钥，权限受限，可安全用于前端或移动端）。
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取密钥的自定义名称，用于在管理列表中标识和区分不同的密钥，建议填写能体现用途或归属的描述性名称，例如：server-prod、mobile-test
                     * @return KeyName 密钥的自定义名称，用于在管理列表中标识和区分不同的密钥，建议填写能体现用途或归属的描述性名称，例如：server-prod、mobile-test
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置密钥的自定义名称，用于在管理列表中标识和区分不同的密钥，建议填写能体现用途或归属的描述性名称，例如：server-prod、mobile-test
                     * @param _keyName 密钥的自定义名称，用于在管理列表中标识和区分不同的密钥，建议填写能体现用途或归属的描述性名称，例如：server-prod、mobile-test
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取密钥的有效期，单位为秒，最短不得低于 7200 秒。超过有效期后密钥将自动失效。不设置或设置为 0 则表示永不过期，建议根据安全需求合理设置有效期
                     * @return ExpireIn 密钥的有效期，单位为秒，最短不得低于 7200 秒。超过有效期后密钥将自动失效。不设置或设置为 0 则表示永不过期，建议根据安全需求合理设置有效期
                     * 
                     */
                    int64_t GetExpireIn() const;

                    /**
                     * 设置密钥的有效期，单位为秒，最短不得低于 7200 秒。超过有效期后密钥将自动失效。不设置或设置为 0 则表示永不过期，建议根据安全需求合理设置有效期
                     * @param _expireIn 密钥的有效期，单位为秒，最短不得低于 7200 秒。超过有效期后密钥将自动失效。不设置或设置为 0 则表示永不过期，建议根据安全需求合理设置有效期
                     * 
                     */
                    void SetExpireIn(const int64_t& _expireIn);

                    /**
                     * 判断参数 ExpireIn 是否已赋值
                     * @return ExpireIn 是否已赋值
                     * 
                     */
                    bool ExpireInHasBeenSet() const;

                private:

                    /**
                     * 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 密钥类型。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限，请勿暴露在客户端）、publish_key（客户端使用的公开密钥，权限受限，可安全用于前端或移动端）。
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 密钥的自定义名称，用于在管理列表中标识和区分不同的密钥，建议填写能体现用途或归属的描述性名称，例如：server-prod、mobile-test
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 密钥的有效期，单位为秒，最短不得低于 7200 秒。超过有效期后密钥将自动失效。不设置或设置为 0 则表示永不过期，建议根据安全需求合理设置有效期
                     */
                    int64_t m_expireIn;
                    bool m_expireInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEAPIKEYREQUEST_H_
