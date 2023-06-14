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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/OriginAuthenticationTypeA.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 回源鉴权高级配置
                */
                class OriginAuthentication : public AbstractModel
                {
                public:
                    OriginAuthentication();
                    ~OriginAuthentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源鉴权高级配置开关，取值有：
on：开启
off：关闭

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 回源鉴权高级配置开关，取值有：
on：开启
off：关闭

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置回源鉴权高级配置开关，取值有：
on：开启
off：关闭

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 回源鉴权高级配置开关，取值有：
on：开启
off：关闭

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取鉴权类型A配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeA 鉴权类型A配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginAuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置鉴权类型A配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeA 鉴权类型A配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeA(const OriginAuthenticationTypeA& _typeA);

                    /**
                     * 判断参数 TypeA 是否已赋值
                     * @return TypeA 是否已赋值
                     * 
                     */
                    bool TypeAHasBeenSet() const;

                private:

                    /**
                     * 回源鉴权高级配置开关，取值有：
on：开启
off：关闭

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 鉴权类型A配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginAuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATION_H_
