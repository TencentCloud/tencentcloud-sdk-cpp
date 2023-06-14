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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPageRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 状态码重定向配置，默认为关闭状态
                */
                class ErrorPage : public AbstractModel
                {
                public:
                    ErrorPage();
                    ~ErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态码重定向配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 状态码重定向配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置状态码重定向配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 状态码重定向配置开关，取值有：
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
                     * 获取状态码重定向规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageRules 状态码重定向规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ErrorPageRule> GetPageRules() const;

                    /**
                     * 设置状态码重定向规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageRules 状态码重定向规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageRules(const std::vector<ErrorPageRule>& _pageRules);

                    /**
                     * 判断参数 PageRules 是否已赋值
                     * @return PageRules 是否已赋值
                     * 
                     */
                    bool PageRulesHasBeenSet() const;

                private:

                    /**
                     * 状态码重定向配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 状态码重定向规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ErrorPageRule> m_pageRules;
                    bool m_pageRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGE_H_
