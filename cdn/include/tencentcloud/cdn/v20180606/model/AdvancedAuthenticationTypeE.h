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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 时间戳防盗链高级版模式E配置。
                */
                class AdvancedAuthenticationTypeE : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeE();
                    ~AdvancedAuthenticationTypeE() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于计算签名的密钥，只允许字母和数字，长度6-32字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置用于计算签名的密钥，只允许字母和数字，长度6-32字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignParam uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signParam uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     * 
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取uri串中Acl签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AclSignParam uri串中Acl签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAclSignParam() const;

                    /**
                     * 设置uri串中Acl签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aclSignParam uri串中Acl签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAclSignParam(const std::string& _aclSignParam);

                    /**
                     * 判断参数 AclSignParam 是否已赋值
                     * @return AclSignParam 是否已赋值
                     * 
                     */
                    bool AclSignParamHasBeenSet() const;

                    /**
                     * 获取uri串中开始时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimeParam uri串中开始时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTimeParam() const;

                    /**
                     * 设置uri串中开始时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTimeParam uri串中开始时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTimeParam(const std::string& _startTimeParam);

                    /**
                     * 判断参数 StartTimeParam 是否已赋值
                     * @return StartTimeParam 是否已赋值
                     * 
                     */
                    bool StartTimeParamHasBeenSet() const;

                    /**
                     * 获取uri串中过期时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTimeParam uri串中过期时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTimeParam() const;

                    /**
                     * 设置uri串中过期时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTimeParam uri串中过期时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTimeParam(const std::string& _expireTimeParam);

                    /**
                     * 判断参数 ExpireTimeParam 是否已赋值
                     * @return ExpireTimeParam 是否已赋值
                     * 
                     */
                    bool ExpireTimeParamHasBeenSet() const;

                    /**
                     * 获取时间格式，dec
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeFormat 时间格式，dec
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间格式，dec
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeFormat 时间格式，dec
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * uri串中Acl签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aclSignParam;
                    bool m_aclSignParamHasBeenSet;

                    /**
                     * uri串中开始时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTimeParam;
                    bool m_startTimeParamHasBeenSet;

                    /**
                     * uri串中过期时间字段名，字母，数字或下划线构成，同时必须以字母开头。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTimeParam;
                    bool m_expireTimeParamHasBeenSet;

                    /**
                     * 时间格式，dec
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEE_H_
