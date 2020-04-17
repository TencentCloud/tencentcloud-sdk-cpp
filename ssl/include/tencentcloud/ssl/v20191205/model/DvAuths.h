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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（Certificate）返回参数键为 DvAuths 的内容。
                */
                class DvAuths : public AbstractModel
                {
                public:
                    DvAuths();
                    ~DvAuths() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DV 认证密钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthKey DV 认证密钥。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDvAuthKey() const;

                    /**
                     * 设置DV 认证密钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DvAuthKey DV 认证密钥。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDvAuthKey(const std::string& _dvAuthKey);

                    /**
                     * 判断参数 DvAuthKey 是否已赋值
                     * @return DvAuthKey 是否已赋值
                     */
                    bool DvAuthKeyHasBeenSet() const;

                    /**
                     * 获取DV 认证值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthValue DV 认证值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDvAuthValue() const;

                    /**
                     * 设置DV 认证值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DvAuthValue DV 认证值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDvAuthValue(const std::string& _dvAuthValue);

                    /**
                     * 判断参数 DvAuthValue 是否已赋值
                     * @return DvAuthValue 是否已赋值
                     */
                    bool DvAuthValueHasBeenSet() const;

                    /**
                     * 获取DV 认证值域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthDomain DV 认证值域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDvAuthDomain() const;

                    /**
                     * 设置DV 认证值域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DvAuthDomain DV 认证值域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDvAuthDomain(const std::string& _dvAuthDomain);

                    /**
                     * 判断参数 DvAuthDomain 是否已赋值
                     * @return DvAuthDomain 是否已赋值
                     */
                    bool DvAuthDomainHasBeenSet() const;

                    /**
                     * 获取DV 认证值路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthPath DV 认证值路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDvAuthPath() const;

                    /**
                     * 设置DV 认证值路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DvAuthPath DV 认证值路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDvAuthPath(const std::string& _dvAuthPath);

                    /**
                     * 判断参数 DvAuthPath 是否已赋值
                     * @return DvAuthPath 是否已赋值
                     */
                    bool DvAuthPathHasBeenSet() const;

                    /**
                     * 获取DV 认证子域名，
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthSubDomain DV 认证子域名，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDvAuthSubDomain() const;

                    /**
                     * 设置DV 认证子域名，
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DvAuthSubDomain DV 认证子域名，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDvAuthSubDomain(const std::string& _dvAuthSubDomain);

                    /**
                     * 判断参数 DvAuthSubDomain 是否已赋值
                     * @return DvAuthSubDomain 是否已赋值
                     */
                    bool DvAuthSubDomainHasBeenSet() const;

                    /**
                     * 获取DV 认证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthVerifyType DV 认证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDvAuthVerifyType() const;

                    /**
                     * 设置DV 认证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DvAuthVerifyType DV 认证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDvAuthVerifyType(const std::string& _dvAuthVerifyType);

                    /**
                     * 判断参数 DvAuthVerifyType 是否已赋值
                     * @return DvAuthVerifyType 是否已赋值
                     */
                    bool DvAuthVerifyTypeHasBeenSet() const;

                private:

                    /**
                     * DV 认证密钥。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthKey;
                    bool m_dvAuthKeyHasBeenSet;

                    /**
                     * DV 认证值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthValue;
                    bool m_dvAuthValueHasBeenSet;

                    /**
                     * DV 认证值域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthDomain;
                    bool m_dvAuthDomainHasBeenSet;

                    /**
                     * DV 认证值路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthPath;
                    bool m_dvAuthPathHasBeenSet;

                    /**
                     * DV 认证子域名，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthSubDomain;
                    bool m_dvAuthSubDomainHasBeenSet;

                    /**
                     * DV 认证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthVerifyType;
                    bool m_dvAuthVerifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_
