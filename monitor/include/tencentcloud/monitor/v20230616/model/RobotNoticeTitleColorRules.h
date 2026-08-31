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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_ROBOTNOTICETITLECOLORRULES_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_ROBOTNOTICETITLECOLORRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 告警通知内容模版自定义标题颜色 key-value 匹配规则
                */
                class RobotNoticeTitleColorRules : public AbstractModel
                {
                public:
                    RobotNoticeTitleColorRules();
                    ~RobotNoticeTitleColorRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>通知内容模版自定义颜色 Label 匹配的 Key</p>
                     * @return Key <p>通知内容模版自定义颜色 Label 匹配的 Key</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>通知内容模版自定义颜色 Label 匹配的 Key</p>
                     * @param _key <p>通知内容模版自定义颜色 Label 匹配的 Key</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>通知内容模版自定义颜色 Label 匹配的 Value</p>
                     * @return Value <p>通知内容模版自定义颜色 Label 匹配的 Value</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>通知内容模版自定义颜色 Label 匹配的 Value</p>
                     * @param _value <p>通知内容模版自定义颜色 Label 匹配的 Value</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>通知内容模版自定义颜色</p>
                     * @return Color <p>通知内容模版自定义颜色</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>通知内容模版自定义颜色</p>
                     * @param _color <p>通知内容模版自定义颜色</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * <p>通知内容模版自定义颜色 Label 匹配的 Key</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>通知内容模版自定义颜色 Label 匹配的 Value</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>通知内容模版自定义颜色</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ROBOTNOTICETITLECOLORRULES_H_
