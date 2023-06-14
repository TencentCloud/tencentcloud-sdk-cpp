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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_CREDENTIALS_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_CREDENTIALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * 临时证书
                */
                class Credentials : public AbstractModel
                {
                public:
                    Credentials();
                    ~Credentials() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取token。token长度和绑定的策略有关，最长不超过4096字节。
                     * @return Token token。token长度和绑定的策略有关，最长不超过4096字节。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置token。token长度和绑定的策略有关，最长不超过4096字节。
                     * @param _token token。token长度和绑定的策略有关，最长不超过4096字节。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取临时证书密钥ID。最长不超过1024字节。
                     * @return TmpSecretId 临时证书密钥ID。最长不超过1024字节。
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时证书密钥ID。最长不超过1024字节。
                     * @param _tmpSecretId 临时证书密钥ID。最长不超过1024字节。
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取临时证书密钥Key。最长不超过1024字节。
                     * @return TmpSecretKey 临时证书密钥Key。最长不超过1024字节。
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时证书密钥Key。最长不超过1024字节。
                     * @param _tmpSecretKey 临时证书密钥Key。最长不超过1024字节。
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                private:

                    /**
                     * token。token长度和绑定的策略有关，最长不超过4096字节。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 临时证书密钥ID。最长不超过1024字节。
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时证书密钥Key。最长不超过1024字节。
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_CREDENTIALS_H_
