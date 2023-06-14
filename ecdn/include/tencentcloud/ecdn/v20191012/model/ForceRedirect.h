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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_FORCEREDIRECT_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_FORCEREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 访问协议强制跳转配置。
                */
                class ForceRedirect : public AbstractModel
                {
                public:
                    ForceRedirect();
                    ~ForceRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问协议强制跳转配置开关，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 访问协议强制跳转配置开关，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置访问协议强制跳转配置开关，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 访问协议强制跳转配置开关，on或off。
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
                     * 获取强制跳转访问协议类型，支持http，https，分别表示请求强制跳转http协议，请求强制跳转https协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectType 强制跳转访问协议类型，支持http，https，分别表示请求强制跳转http协议，请求强制跳转https协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRedirectType() const;

                    /**
                     * 设置强制跳转访问协议类型，支持http，https，分别表示请求强制跳转http协议，请求强制跳转https协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectType 强制跳转访问协议类型，支持http，https，分别表示请求强制跳转http协议，请求强制跳转https协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectType(const std::string& _redirectType);

                    /**
                     * 判断参数 RedirectType 是否已赋值
                     * @return RedirectType 是否已赋值
                     * 
                     */
                    bool RedirectTypeHasBeenSet() const;

                    /**
                     * 获取强制跳转开启时返回的http状态码，支持301或302。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectStatusCode 强制跳转开启时返回的http状态码，支持301或302。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置强制跳转开启时返回的http状态码，支持301或302。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectStatusCode 强制跳转开启时返回的http状态码，支持301或302。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectStatusCode(const int64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     * 
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                private:

                    /**
                     * 访问协议强制跳转配置开关，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 强制跳转访问协议类型，支持http，https，分别表示请求强制跳转http协议，请求强制跳转https协议。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectType;
                    bool m_redirectTypeHasBeenSet;

                    /**
                     * 强制跳转开启时返回的http状态码，支持301或302。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_FORCEREDIRECT_H_
