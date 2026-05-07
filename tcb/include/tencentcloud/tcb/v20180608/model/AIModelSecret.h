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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELSECRET_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AI模型密钥信息
                */
                class AIModelSecret : public AbstractModel
                {
                public:
                    AIModelSecret();
                    ~AIModelSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥来源
                     * @return SecretSource 密钥来源
                     * 
                     */
                    std::string GetSecretSource() const;

                    /**
                     * 设置密钥来源
                     * @param _secretSource 密钥来源
                     * 
                     */
                    void SetSecretSource(const std::string& _secretSource);

                    /**
                     * 判断参数 SecretSource 是否已赋值
                     * @return SecretSource 是否已赋值
                     * 
                     */
                    bool SecretSourceHasBeenSet() const;

                    /**
                     * 获取密钥ID, 和SecretKey一一对应
                     * @return SecretId 密钥ID, 和SecretKey一一对应
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置密钥ID, 和SecretKey一一对应
                     * @param _secretId 密钥ID, 和SecretKey一一对应
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取密钥Key, 和SecretId一一对应
                     * @return SecretKey 密钥Key, 和SecretId一一对应
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置密钥Key, 和SecretId一一对应
                     * @param _secretKey 密钥Key, 和SecretId一一对应
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取ApiKey,SecretKey和ApiKey二选一
                     * @return ApiKey ApiKey,SecretKey和ApiKey二选一
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置ApiKey,SecretKey和ApiKey二选一
                     * @param _apiKey ApiKey,SecretKey和ApiKey二选一
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                private:

                    /**
                     * 密钥来源
                     */
                    std::string m_secretSource;
                    bool m_secretSourceHasBeenSet;

                    /**
                     * 密钥ID, 和SecretKey一一对应
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 密钥Key, 和SecretId一一对应
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * ApiKey,SecretKey和ApiKey二选一
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELSECRET_H_
