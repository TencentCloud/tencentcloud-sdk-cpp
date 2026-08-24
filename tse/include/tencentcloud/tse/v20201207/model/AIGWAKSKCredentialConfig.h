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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWAKSKCREDENTIALCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWAKSKCREDENTIALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * aksk类型密钥
                */
                class AIGWAKSKCredentialConfig : public AbstractModel
                {
                public:
                    AIGWAKSKCredentialConfig();
                    ~AIGWAKSKCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AccessKeyId</p>
                     * @return AccessKeyId <p>AccessKeyId</p>
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置<p>AccessKeyId</p>
                     * @param _accessKeyId <p>AccessKeyId</p>
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>SecretAccessKey</p>
                     * @return SecretAccessKey <p>SecretAccessKey</p>
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置<p>SecretAccessKey</p>
                     * @param _secretAccessKey <p>SecretAccessKey</p>
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                private:

                    /**
                     * <p>AccessKeyId</p>
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * <p>SecretAccessKey</p>
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWAKSKCREDENTIALCONFIG_H_
