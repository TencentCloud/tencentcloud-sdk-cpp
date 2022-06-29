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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RULEENGINE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RULEENGINE_H_

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
                * 规则引擎配置
                */
                class RuleEngine : public AbstractModel
                {
                public:
                    RuleEngine();
                    ~RuleEngine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则引擎配置开关
on：开启
off：关闭
                     * @return Switch 规则引擎配置开关
on：开启
off：关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置规则引擎配置开关
on：开启
off：关闭
                     * @param Switch 规则引擎配置开关
on：开启
off：关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Content 规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 规则引擎配置开关
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RULEENGINE_H_
