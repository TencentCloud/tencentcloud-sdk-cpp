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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeA.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeB.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeC.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeD.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeE.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeF.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 时间戳防盗链高级版配置，白名单功能
                */
                class AdvancedAuthentication : public AbstractModel
                {
                public:
                    AdvancedAuthentication();
                    ~AdvancedAuthentication() = default;
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
                     * 获取时间戳防盗链高级版模式A配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeA 时间戳防盗链高级版模式A配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置时间戳防盗链高级版模式A配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeA 时间戳防盗链高级版模式A配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeA(const AdvancedAuthenticationTypeA& _typeA);

                    /**
                     * 判断参数 TypeA 是否已赋值
                     * @return TypeA 是否已赋值
                     * 
                     */
                    bool TypeAHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级版模式B配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeB 时间戳防盗链高级版模式B配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置时间戳防盗链高级版模式B配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeB 时间戳防盗链高级版模式B配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeB(const AdvancedAuthenticationTypeB& _typeB);

                    /**
                     * 判断参数 TypeB 是否已赋值
                     * @return TypeB 是否已赋值
                     * 
                     */
                    bool TypeBHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级版模式C配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeC 时间戳防盗链高级版模式C配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置时间戳防盗链高级版模式C配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeC 时间戳防盗链高级版模式C配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeC(const AdvancedAuthenticationTypeC& _typeC);

                    /**
                     * 判断参数 TypeC 是否已赋值
                     * @return TypeC 是否已赋值
                     * 
                     */
                    bool TypeCHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级版模式D配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeD 时间戳防盗链高级版模式D配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置时间戳防盗链高级版模式D配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeD 时间戳防盗链高级版模式D配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeD(const AdvancedAuthenticationTypeD& _typeD);

                    /**
                     * 判断参数 TypeD 是否已赋值
                     * @return TypeD 是否已赋值
                     * 
                     */
                    bool TypeDHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级版模式E配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeE 时间戳防盗链高级版模式E配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthenticationTypeE GetTypeE() const;

                    /**
                     * 设置时间戳防盗链高级版模式E配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeE 时间戳防盗链高级版模式E配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeE(const AdvancedAuthenticationTypeE& _typeE);

                    /**
                     * 判断参数 TypeE 是否已赋值
                     * @return TypeE 是否已赋值
                     * 
                     */
                    bool TypeEHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级版模式F配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeF 时间戳防盗链高级版模式F配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthenticationTypeF GetTypeF() const;

                    /**
                     * 设置时间戳防盗链高级版模式F配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeF 时间戳防盗链高级版模式F配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeF(const AdvancedAuthenticationTypeF& _typeF);

                    /**
                     * 判断参数 TypeF 是否已赋值
                     * @return TypeF 是否已赋值
                     * 
                     */
                    bool TypeFHasBeenSet() const;

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
                     * 时间戳防盗链高级版模式A配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * 时间戳防盗链高级版模式B配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * 时间戳防盗链高级版模式C配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * 时间戳防盗链高级版模式D配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                    /**
                     * 时间戳防盗链高级版模式E配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthenticationTypeE m_typeE;
                    bool m_typeEHasBeenSet;

                    /**
                     * 时间戳防盗链高级版模式F配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthenticationTypeF m_typeF;
                    bool m_typeFHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATION_H_
