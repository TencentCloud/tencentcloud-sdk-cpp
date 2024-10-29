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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_FORCEREDIRECT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_FORCEREDIRECT_H_

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
                * 访问协议强制跳转配置，默认为关闭状态
                */
                class ForceRedirect : public AbstractModel
                {
                public:
                    ForceRedirect();
                    ~ForceRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问强制跳转配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 访问强制跳转配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置访问强制跳转配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 访问强制跳转配置开关，取值有：
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
                     * 获取访问强制跳转类型
http：强制 http 跳转
https：强制 https 跳转
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectType 访问强制跳转类型
http：强制 http 跳转
https：强制 https 跳转
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRedirectType() const;

                    /**
                     * 设置访问强制跳转类型
http：强制 http 跳转
https：强制 https 跳转
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectType 访问强制跳转类型
http：强制 http 跳转
https：强制 https 跳转
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
                     * 获取强制跳转时返回状态码 
支持 301、302、307、308
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectStatusCode 强制跳转时返回状态码 
支持 301、302、307、308
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置强制跳转时返回状态码 
支持 301、302、307、308
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectStatusCode 强制跳转时返回状态码 
支持 301、302、307、308
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

                    /**
                     * 获取强制跳转时是否返回增加的头部。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CarryHeaders 强制跳转时是否返回增加的头部。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCarryHeaders() const;

                    /**
                     * 设置强制跳转时是否返回增加的头部。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _carryHeaders 强制跳转时是否返回增加的头部。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCarryHeaders(const std::string& _carryHeaders);

                    /**
                     * 判断参数 CarryHeaders 是否已赋值
                     * @return CarryHeaders 是否已赋值
                     * 
                     */
                    bool CarryHeadersHasBeenSet() const;

                private:

                    /**
                     * 访问强制跳转配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 访问强制跳转类型
http：强制 http 跳转
https：强制 https 跳转
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectType;
                    bool m_redirectTypeHasBeenSet;

                    /**
                     * 强制跳转时返回状态码 
支持 301、302、307、308
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                    /**
                     * 强制跳转时是否返回增加的头部。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_carryHeaders;
                    bool m_carryHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_FORCEREDIRECT_H_
