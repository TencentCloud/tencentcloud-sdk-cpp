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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/UrlRedirectRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 访问URL重写配置
                */
                class UrlRedirect : public AbstractModel
                {
                public:
                    UrlRedirect();
                    ~UrlRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问URL重写配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 访问URL重写配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置访问URL重写配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 访问URL重写配置开关，取值有：
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
                     * 获取访问URL重写规则，当Switch为on时必填，规则数量最大为10个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathRules 访问URL重写规则，当Switch为on时必填，规则数量最大为10个。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UrlRedirectRule> GetPathRules() const;

                    /**
                     * 设置访问URL重写规则，当Switch为on时必填，规则数量最大为10个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathRules 访问URL重写规则，当Switch为on时必填，规则数量最大为10个。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathRules(const std::vector<UrlRedirectRule>& _pathRules);

                    /**
                     * 判断参数 PathRules 是否已赋值
                     * @return PathRules 是否已赋值
                     * 
                     */
                    bool PathRulesHasBeenSet() const;

                private:

                    /**
                     * 访问URL重写配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 访问URL重写规则，当Switch为on时必填，规则数量最大为10个。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UrlRedirectRule> m_pathRules;
                    bool m_pathRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECT_H_
