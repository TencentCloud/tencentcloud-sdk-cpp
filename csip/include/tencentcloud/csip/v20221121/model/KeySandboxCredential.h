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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KEYSANDBOXCREDENTIAL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KEYSANDBOXCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CredentialEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 凭证数据结构，用于列表查询和详情查询的响应
                */
                class KeySandboxCredential : public AbstractModel
                {
                public:
                    KeySandboxCredential();
                    ~KeySandboxCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭证ID
                     * @return CredentialId 凭证ID
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置凭证ID
                     * @param _credentialId 凭证ID
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取凭证名称
                     * @return CredentialName 凭证名称
                     * 
                     */
                    std::string GetCredentialName() const;

                    /**
                     * 设置凭证名称
                     * @param _credentialName 凭证名称
                     * 
                     */
                    void SetCredentialName(const std::string& _credentialName);

                    /**
                     * 判断参数 CredentialName 是否已赋值
                     * @return CredentialName 是否已赋值
                     * 
                     */
                    bool CredentialNameHasBeenSet() const;

                    /**
                     * 获取凭证类型
枚举值：
access：常规密钥（Key/Value键值对）
sts：STS临时密钥凭据
                     * @return CredentialType 凭证类型
枚举值：
access：常规密钥（Key/Value键值对）
sts：STS临时密钥凭据
                     * 
                     */
                    std::string GetCredentialType() const;

                    /**
                     * 设置凭证类型
枚举值：
access：常规密钥（Key/Value键值对）
sts：STS临时密钥凭据
                     * @param _credentialType 凭证类型
枚举值：
access：常规密钥（Key/Value键值对）
sts：STS临时密钥凭据
                     * 
                     */
                    void SetCredentialType(const std::string& _credentialType);

                    /**
                     * 判断参数 CredentialType 是否已赋值
                     * @return CredentialType 是否已赋值
                     * 
                     */
                    bool CredentialTypeHasBeenSet() const;

                    /**
                     * 获取生效机器范围
                     * @return CredentialEffectScope 生效机器范围
                     * 
                     */
                    CredentialEffectScope GetCredentialEffectScope() const;

                    /**
                     * 设置生效机器范围
                     * @param _credentialEffectScope 生效机器范围
                     * 
                     */
                    void SetCredentialEffectScope(const CredentialEffectScope& _credentialEffectScope);

                    /**
                     * 判断参数 CredentialEffectScope 是否已赋值
                     * @return CredentialEffectScope 是否已赋值
                     * 
                     */
                    bool CredentialEffectScopeHasBeenSet() const;

                    /**
                     * 获取创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return CreateTime 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _createTime 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return UpdateTime 更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _updateTime 更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 凭证ID
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * 凭证名称
                     */
                    std::string m_credentialName;
                    bool m_credentialNameHasBeenSet;

                    /**
                     * 凭证类型
枚举值：
access：常规密钥（Key/Value键值对）
sts：STS临时密钥凭据
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * 生效机器范围
                     */
                    CredentialEffectScope m_credentialEffectScope;
                    bool m_credentialEffectScopeHasBeenSet;

                    /**
                     * 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KEYSANDBOXCREDENTIAL_H_
