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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_

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
                * Host Header 重写配置参数。
                */
                class HostHeaderParameters : public AbstractModel
                {
                public:
                    HostHeaderParameters();
                    ~HostHeaderParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行动作，取值有：
<li>followOrigin：跟随源站域名；</li>
<li>custom：自定义。</li>
                     * @return Action 执行动作，取值有：
<li>followOrigin：跟随源站域名；</li>
<li>custom：自定义。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，取值有：
<li>followOrigin：跟随源站域名；</li>
<li>custom：自定义。</li>
                     * @param _action 执行动作，取值有：
<li>followOrigin：跟随源站域名；</li>
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
                     * 获取Host Header 重写，需要填写完整域名。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return ServerName Host Header 重写，需要填写完整域名。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Host Header 重写，需要填写完整域名。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _serverName Host Header 重写，需要填写完整域名。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                private:

                    /**
                     * 执行动作，取值有：
<li>followOrigin：跟随源站域名；</li>
<li>custom：自定义。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Host Header 重写，需要填写完整域名。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_
