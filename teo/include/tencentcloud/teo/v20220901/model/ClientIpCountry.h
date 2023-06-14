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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPCOUNTRY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPCOUNTRY_H_

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
                * 回源时携带客户端IP所属地域信息，值的格式为ISO-3166-1两位字母代码。
                */
                class ClientIpCountry : public AbstractModel
                {
                public:
                    ClientIpCountry();
                    ~ClientIpCountry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 获取存放客户端 IP 所属地域信息的请求头名称，当 Switch=on 时有效。
为空则使用默认值：EO-Client-IPCountry。
                     * @return HeaderName 存放客户端 IP 所属地域信息的请求头名称，当 Switch=on 时有效。
为空则使用默认值：EO-Client-IPCountry。
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置存放客户端 IP 所属地域信息的请求头名称，当 Switch=on 时有效。
为空则使用默认值：EO-Client-IPCountry。
                     * @param _headerName 存放客户端 IP 所属地域信息的请求头名称，当 Switch=on 时有效。
为空则使用默认值：EO-Client-IPCountry。
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                private:

                    /**
                     * 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 存放客户端 IP 所属地域信息的请求头名称，当 Switch=on 时有效。
为空则使用默认值：EO-Client-IPCountry。
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPCOUNTRY_H_
