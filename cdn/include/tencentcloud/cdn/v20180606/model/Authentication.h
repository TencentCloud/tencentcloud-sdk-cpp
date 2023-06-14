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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeA.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeB.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeC.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeD.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 时间戳防盗链配置
                */
                class Authentication : public AbstractModel
                {
                public:
                    Authentication();
                    ~Authentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防盗链配置开关，取值有：
on：开启
off：关闭
开启时必须且只配置一种模式，其余模式需要设置为 null
                     * @return Switch 防盗链配置开关，取值有：
on：开启
off：关闭
开启时必须且只配置一种模式，其余模式需要设置为 null
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置防盗链配置开关，取值有：
on：开启
off：关闭
开启时必须且只配置一种模式，其余模式需要设置为 null
                     * @param _switch 防盗链配置开关，取值有：
on：开启
off：关闭
开启时必须且只配置一种模式，其余模式需要设置为 null
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取鉴权算法，取值有：
md5：按MD5算法取hash值
sha256：按SHA-256算法取hash值
默认为 md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthAlgorithm 鉴权算法，取值有：
md5：按MD5算法取hash值
sha256：按SHA-256算法取hash值
默认为 md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthAlgorithm() const;

                    /**
                     * 设置鉴权算法，取值有：
md5：按MD5算法取hash值
sha256：按SHA-256算法取hash值
默认为 md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authAlgorithm 鉴权算法，取值有：
md5：按MD5算法取hash值
sha256：按SHA-256算法取hash值
默认为 md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthAlgorithm(const std::string& _authAlgorithm);

                    /**
                     * 判断参数 AuthAlgorithm 是否已赋值
                     * @return AuthAlgorithm 是否已赋值
                     * 
                     */
                    bool AuthAlgorithmHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链模式 A 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeA 时间戳防盗链模式 A 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置时间戳防盗链模式 A 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeA 时间戳防盗链模式 A 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeA(const AuthenticationTypeA& _typeA);

                    /**
                     * 判断参数 TypeA 是否已赋值
                     * @return TypeA 是否已赋值
                     * 
                     */
                    bool TypeAHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链模式 B 配置（模式 B 后台升级中，暂时不支持配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeB 时间戳防盗链模式 B 配置（模式 B 后台升级中，暂时不支持配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置时间戳防盗链模式 B 配置（模式 B 后台升级中，暂时不支持配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeB 时间戳防盗链模式 B 配置（模式 B 后台升级中，暂时不支持配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeB(const AuthenticationTypeB& _typeB);

                    /**
                     * 判断参数 TypeB 是否已赋值
                     * @return TypeB 是否已赋值
                     * 
                     */
                    bool TypeBHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链模式 C 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeC 时间戳防盗链模式 C 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置时间戳防盗链模式 C 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeC 时间戳防盗链模式 C 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeC(const AuthenticationTypeC& _typeC);

                    /**
                     * 判断参数 TypeC 是否已赋值
                     * @return TypeC 是否已赋值
                     * 
                     */
                    bool TypeCHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链模式 D 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeD 时间戳防盗链模式 D 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置时间戳防盗链模式 D 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeD 时间戳防盗链模式 D 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeD(const AuthenticationTypeD& _typeD);

                    /**
                     * 判断参数 TypeD 是否已赋值
                     * @return TypeD 是否已赋值
                     * 
                     */
                    bool TypeDHasBeenSet() const;

                private:

                    /**
                     * 防盗链配置开关，取值有：
on：开启
off：关闭
开启时必须且只配置一种模式，其余模式需要设置为 null
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 鉴权算法，取值有：
md5：按MD5算法取hash值
sha256：按SHA-256算法取hash值
默认为 md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authAlgorithm;
                    bool m_authAlgorithmHasBeenSet;

                    /**
                     * 时间戳防盗链模式 A 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * 时间戳防盗链模式 B 配置（模式 B 后台升级中，暂时不支持配置）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * 时间戳防盗链模式 C 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * 时间戳防盗链模式 D 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATION_H_
