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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTNAME_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 访问 URL 重定向 HostName 配置参数。
                */
                class HostName : public AbstractModel
                {
                public:
                    HostName();
                    ~HostName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标 HostName 配置，取值有：
<li>follow：跟随请求；</li>
<li>custom：自定义。</li>
                     * @return Action 目标 HostName 配置，取值有：
<li>follow：跟随请求；</li>
<li>custom：自定义。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置目标 HostName 配置，取值有：
<li>follow：跟随请求；</li>
<li>custom：自定义。</li>
                     * @param _action 目标 HostName 配置，取值有：
<li>follow：跟随请求；</li>
<li>custom：自定义。</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取目标 HostName 自定义取值，最大长度 1024。<br>注意：当 Action 为 custom 时，此字段必填；当 Action 为 follow 时，此字段不生效。
                     * @return Value 目标 HostName 自定义取值，最大长度 1024。<br>注意：当 Action 为 custom 时，此字段必填；当 Action 为 follow 时，此字段不生效。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置目标 HostName 自定义取值，最大长度 1024。<br>注意：当 Action 为 custom 时，此字段必填；当 Action 为 follow 时，此字段不生效。
                     * @param _value 目标 HostName 自定义取值，最大长度 1024。<br>注意：当 Action 为 custom 时，此字段必填；当 Action 为 follow 时，此字段不生效。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 目标 HostName 配置，取值有：
<li>follow：跟随请求；</li>
<li>custom：自定义。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 目标 HostName 自定义取值，最大长度 1024。<br>注意：当 Action 为 custom 时，此字段必填；当 Action 为 follow 时，此字段不生效。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTNAME_H_
