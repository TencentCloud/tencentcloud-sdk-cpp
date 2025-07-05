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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HSTS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HSTS_H_

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
                * HSTS 配置。
                */
                class Hsts : public AbstractModel
                {
                public:
                    Hsts();
                    ~Hsts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HSTS 配置开关，取值有：
on：开启
off：关闭
                     * @return Switch HSTS 配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置HSTS 配置开关，取值有：
on：开启
off：关闭
                     * @param _switch HSTS 配置开关，取值有：
on：开启
off：关闭
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
                     * 获取MaxAge数值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge MaxAge数值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置MaxAge数值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAge MaxAge数值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取是否包含子域名，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeSubDomains 是否包含子域名，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置是否包含子域名，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeSubDomains 是否包含子域名，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeSubDomains(const std::string& _includeSubDomains);

                    /**
                     * 判断参数 IncludeSubDomains 是否已赋值
                     * @return IncludeSubDomains 是否已赋值
                     * 
                     */
                    bool IncludeSubDomainsHasBeenSet() const;

                private:

                    /**
                     * HSTS 配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * MaxAge数值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 是否包含子域名，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HSTS_H_
