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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFICATIONPROTECTIONINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFICATIONPROTECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 修改保护状态信息。
                */
                class ModificationProtectionInfo : public AbstractModel
                {
                public:
                    ModificationProtectionInfo();
                    ~ModificationProtectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启修改保护。开启后，可防止实例被意外修改或删除。</p><ul><li>true：开启修改保护</li><li>false：关闭修改保护</li></ul>
                     * @return ModificationProtectionEnabled <p>是否开启修改保护。开启后，可防止实例被意外修改或删除。</p><ul><li>true：开启修改保护</li><li>false：关闭修改保护</li></ul>
                     * 
                     */
                    bool GetModificationProtectionEnabled() const;

                    /**
                     * 设置<p>是否开启修改保护。开启后，可防止实例被意外修改或删除。</p><ul><li>true：开启修改保护</li><li>false：关闭修改保护</li></ul>
                     * @param _modificationProtectionEnabled <p>是否开启修改保护。开启后，可防止实例被意外修改或删除。</p><ul><li>true：开启修改保护</li><li>false：关闭修改保护</li></ul>
                     * 
                     */
                    void SetModificationProtectionEnabled(const bool& _modificationProtectionEnabled);

                    /**
                     * 判断参数 ModificationProtectionEnabled 是否已赋值
                     * @return ModificationProtectionEnabled 是否已赋值
                     * 
                     */
                    bool ModificationProtectionEnabledHasBeenSet() const;

                    /**
                     * 获取<p>1238716123</p>
                     * @return OperatorUin <p>1238716123</p>
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置<p>1238716123</p>
                     * @param _operatorUin <p>1238716123</p>
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取<p>开启修改保护的原因说明。<br>长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * @return Reason <p>开启修改保护的原因说明。<br>长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>开启修改保护的原因说明。<br>长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * @param _reason <p>开启修改保护的原因说明。<br>长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启修改保护。开启后，可防止实例被意外修改或删除。</p><ul><li>true：开启修改保护</li><li>false：关闭修改保护</li></ul>
                     */
                    bool m_modificationProtectionEnabled;
                    bool m_modificationProtectionEnabledHasBeenSet;

                    /**
                     * <p>1238716123</p>
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * <p>开启修改保护的原因说明。<br>长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFICATIONPROTECTIONINFO_H_
