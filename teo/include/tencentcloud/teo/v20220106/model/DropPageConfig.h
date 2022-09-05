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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DROPPAGECONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DROPPAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DropPageDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 拦截页面的总体配置，用于配置各个模块的拦截后行为。
                */
                class DropPageConfig : public AbstractModel
                {
                public:
                    DropPageConfig();
                    ~DropPageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置开关。
1. on 开启
2. off 关闭
                     * @return Switch 配置开关。
1. on 开启
2. off 关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置配置开关。
1. on 开启
2. off 关闭
                     * @param Switch 配置开关。
1. on 开启
2. off 关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Waf(托管规则)模块的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Waf Waf(托管规则)模块的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DropPageDetail GetWaf() const;

                    /**
                     * 设置Waf(托管规则)模块的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Waf Waf(托管规则)模块的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWaf(const DropPageDetail& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取自定义页面的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Acl 自定义页面的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DropPageDetail GetAcl() const;

                    /**
                     * 设置自定义页面的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Acl 自定义页面的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAcl(const DropPageDetail& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     */
                    bool AclHasBeenSet() const;

                private:

                    /**
                     * 配置开关。
1. on 开启
2. off 关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Waf(托管规则)模块的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DropPageDetail m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * 自定义页面的拦截页面配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DropPageDetail m_acl;
                    bool m_aclHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DROPPAGECONFIG_H_
