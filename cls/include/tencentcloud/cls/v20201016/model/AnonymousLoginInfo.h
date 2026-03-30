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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSLOGININFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSLOGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DataSight内网匿名登录账号信息
                */
                class AnonymousLoginInfo : public AbstractModel
                {
                public:
                    AnonymousLoginInfo();
                    ~AnonymousLoginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匿名登录账号secretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretId <p>匿名登录账号secretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>匿名登录账号secretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretId <p>匿名登录账号secretId</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>匿名登录账号secretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>匿名登录账号secretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>匿名登录账号secretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>匿名登录账号secretKey</p>
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

                private:

                    /**
                     * <p>匿名登录账号secretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>匿名登录账号secretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSLOGININFO_H_
