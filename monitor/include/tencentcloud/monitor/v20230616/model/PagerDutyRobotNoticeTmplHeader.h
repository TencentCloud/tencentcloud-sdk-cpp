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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGERDUTYROBOTNOTICETMPLHEADER_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGERDUTYROBOTNOTICETMPLHEADER_H_

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
                * 告警通知自定义PagerDutyRobot模板中的请求体头部描述
                */
                class PagerDutyRobotNoticeTmplHeader : public AbstractModel
                {
                public:
                    PagerDutyRobotNoticeTmplHeader();
                    ~PagerDutyRobotNoticeTmplHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http请求中header的key
                     * @return Key http请求中header的key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置http请求中header的key
                     * @param _key http请求中header的key
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
                     * 获取http请求中header的value
                     * @return Values http请求中header的value
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置http请求中header的value
                     * @param _values http请求中header的value
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * http请求中header的key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * http请求中header的value
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGERDUTYROBOTNOTICETMPLHEADER_H_
