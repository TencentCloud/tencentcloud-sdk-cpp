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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_ROBOTNOTICETITLECOLOR_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_ROBOTNOTICETITLECOLOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/RobotNoticeTitleColorRules.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 告警通知内容模版自定义标题颜色
                */
                class RobotNoticeTitleColor : public AbstractModel
                {
                public:
                    RobotNoticeTitleColor();
                    ~RobotNoticeTitleColor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>通知内容模版自定义标题颜色默认颜色</p>
                     * @return Default <p>通知内容模版自定义标题颜色默认颜色</p>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>通知内容模版自定义标题颜色默认颜色</p>
                     * @param _default <p>通知内容模版自定义标题颜色默认颜色</p>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>通知内容模版自定义标题颜色规则，label 匹配设置颜色</p>
                     * @return Rules <p>通知内容模版自定义标题颜色规则，label 匹配设置颜色</p>
                     * 
                     */
                    std::vector<RobotNoticeTitleColorRules> GetRules() const;

                    /**
                     * 设置<p>通知内容模版自定义标题颜色规则，label 匹配设置颜色</p>
                     * @param _rules <p>通知内容模版自定义标题颜色规则，label 匹配设置颜色</p>
                     * 
                     */
                    void SetRules(const std::vector<RobotNoticeTitleColorRules>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>通知内容模版自定义标题颜色默认颜色</p>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>通知内容模版自定义标题颜色规则，label 匹配设置颜色</p>
                     */
                    std::vector<RobotNoticeTitleColorRules> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ROBOTNOTICETITLECOLOR_H_
