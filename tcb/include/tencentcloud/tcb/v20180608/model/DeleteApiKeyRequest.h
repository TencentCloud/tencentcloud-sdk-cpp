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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEAPIKEYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEAPIKEYREQUEST_H_

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
                * DeleteApiKey请求参数结构体
                */
                class DeleteApiKeyRequest : public AbstractModel
                {
                public:
                    DeleteApiKeyRequest();
                    ~DeleteApiKeyRequest() = default;
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
                     * 获取密钥的唯一标识符，用于精确定位指定的 API 密钥。可通过查询密钥列表接口获取
                     * @return KeyId 密钥的唯一标识符，用于精确定位指定的 API 密钥。可通过查询密钥列表接口获取
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置密钥的唯一标识符，用于精确定位指定的 API 密钥。可通过查询密钥列表接口获取
                     * @param _keyId 密钥的唯一标识符，用于精确定位指定的 API 密钥。可通过查询密钥列表接口获取
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 密钥的唯一标识符，用于精确定位指定的 API 密钥。可通过查询密钥列表接口获取
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEAPIKEYREQUEST_H_
