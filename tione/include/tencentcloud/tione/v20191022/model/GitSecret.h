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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_GITSECRET_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_GITSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * Git凭证
                */
                class GitSecret : public AbstractModel
                {
                public:
                    GitSecret();
                    ~GitSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无密钥，默认选项
                     * @return NoSecret 无密钥，默认选项
                     * 
                     */
                    bool GetNoSecret() const;

                    /**
                     * 设置无密钥，默认选项
                     * @param _noSecret 无密钥，默认选项
                     * 
                     */
                    void SetNoSecret(const bool& _noSecret);

                    /**
                     * 判断参数 NoSecret 是否已赋值
                     * @return NoSecret 是否已赋值
                     * 
                     */
                    bool NoSecretHasBeenSet() const;

                    /**
                     * 获取Git用户名密码base64编码后的字符串
编码前的内容应为Json字符串，如
{"UserName": "用户名", "Password":"密码"}
                     * @return Secret Git用户名密码base64编码后的字符串
编码前的内容应为Json字符串，如
{"UserName": "用户名", "Password":"密码"}
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置Git用户名密码base64编码后的字符串
编码前的内容应为Json字符串，如
{"UserName": "用户名", "Password":"密码"}
                     * @param _secret Git用户名密码base64编码后的字符串
编码前的内容应为Json字符串，如
{"UserName": "用户名", "Password":"密码"}
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                private:

                    /**
                     * 无密钥，默认选项
                     */
                    bool m_noSecret;
                    bool m_noSecretHasBeenSet;

                    /**
                     * Git用户名密码base64编码后的字符串
编码前的内容应为Json字符串，如
{"UserName": "用户名", "Password":"密码"}
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_GITSECRET_H_
