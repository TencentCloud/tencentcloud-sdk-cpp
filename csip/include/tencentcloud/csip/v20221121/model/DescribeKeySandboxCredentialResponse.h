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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKEYSANDBOXCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKEYSANDBOXCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CredentialEffectScope.h>
#include <tencentcloud/csip/v20221121/model/AccessCredentialOutput.h>
#include <tencentcloud/csip/v20221121/model/STSCredentialOutput.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeKeySandboxCredential返回参数结构体
                */
                class DescribeKeySandboxCredentialResponse : public AbstractModel
                {
                public:
                    DescribeKeySandboxCredentialResponse();
                    ~DescribeKeySandboxCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取凭证ID
                     * @return CredentialId 凭证ID
                     * 
                     */
                    std::string GetCredentialId() const;

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
                     * 判断参数 CredentialName 是否已赋值
                     * @return CredentialName 是否已赋值
                     * 
                     */
                    bool CredentialNameHasBeenSet() const;

                    /**
                     * 获取凭证类型
枚举值：
access：常规密钥
sts：STS临时密钥
                     * @return CredentialType 凭证类型
枚举值：
access：常规密钥
sts：STS临时密钥
                     * 
                     */
                    std::string GetCredentialType() const;

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
                     * 判断参数 CredentialEffectScope 是否已赋值
                     * @return CredentialEffectScope 是否已赋值
                     * 
                     */
                    bool CredentialEffectScopeHasBeenSet() const;

                    /**
                     * 获取常规密钥凭据数据（打码后），CredentialType为access时返回
补充说明：Key为原文，Value为打码后的值（保留前3后4位，中间用***替代）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Access 常规密钥凭据数据（打码后），CredentialType为access时返回
补充说明：Key为原文，Value为打码后的值（保留前3后4位，中间用***替代）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccessCredentialOutput> GetAccess() const;

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取STS凭据数据（打码后），CredentialType为sts时返回
补充说明：System为原文，SecretID和SecretKey为打码后的值（保留前3后4位，中间用***替代）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return STS STS凭据数据（打码后），CredentialType为sts时返回
补充说明：System为原文，SecretID和SecretKey为打码后的值（保留前3后4位，中间用***替代）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    STSCredentialOutput GetSTS() const;

                    /**
                     * 判断参数 STS 是否已赋值
                     * @return STS 是否已赋值
                     * 
                     */
                    bool STSHasBeenSet() const;

                    /**
                     * 获取创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return CreateTime 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetCreateTime() const;

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
access：常规密钥
sts：STS临时密钥
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * 生效机器范围
                     */
                    CredentialEffectScope m_credentialEffectScope;
                    bool m_credentialEffectScopeHasBeenSet;

                    /**
                     * 常规密钥凭据数据（打码后），CredentialType为access时返回
补充说明：Key为原文，Value为打码后的值（保留前3后4位，中间用***替代）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccessCredentialOutput> m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * STS凭据数据（打码后），CredentialType为sts时返回
补充说明：System为原文，SecretID和SecretKey为打码后的值（保留前3后4位，中间用***替代）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    STSCredentialOutput m_sTS;
                    bool m_sTSHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKEYSANDBOXCREDENTIALRESPONSE_H_
