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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPORT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPORT_H_

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
                * 访问 URL 重定向目标端口配置参数。
                */
                class AccessURLRedirectPort : public AbstractModel
                {
                public:
                    AccessURLRedirectPort();
                    ~AccessURLRedirectPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标端口配置</p><p>枚举值：</p><ul><li>FollowProtocol： 使用目标协议的默认端口。重定向地址中不显式指定端口，由目标协议使用默认端口，HTTP 使用 80，HTTPS 使用 443。</li><li>FollowRequest： 跟随客户端请求的目标端口。请求地址显式携带端口时沿用该端口；未显式携带时，重定向地址中不携带端口。</li><li>Custom： 使用指定的自定义端口。</li></ul>
                     * @return Action <p>目标端口配置</p><p>枚举值：</p><ul><li>FollowProtocol： 使用目标协议的默认端口。重定向地址中不显式指定端口，由目标协议使用默认端口，HTTP 使用 80，HTTPS 使用 443。</li><li>FollowRequest： 跟随客户端请求的目标端口。请求地址显式携带端口时沿用该端口；未显式携带时，重定向地址中不携带端口。</li><li>Custom： 使用指定的自定义端口。</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>目标端口配置</p><p>枚举值：</p><ul><li>FollowProtocol： 使用目标协议的默认端口。重定向地址中不显式指定端口，由目标协议使用默认端口，HTTP 使用 80，HTTPS 使用 443。</li><li>FollowRequest： 跟随客户端请求的目标端口。请求地址显式携带端口时沿用该端口；未显式携带时，重定向地址中不携带端口。</li><li>Custom： 使用指定的自定义端口。</li></ul>
                     * @param _action <p>目标端口配置</p><p>枚举值：</p><ul><li>FollowProtocol： 使用目标协议的默认端口。重定向地址中不显式指定端口，由目标协议使用默认端口，HTTP 使用 80，HTTPS 使用 443。</li><li>FollowRequest： 跟随客户端请求的目标端口。请求地址显式携带端口时沿用该端口；未显式携带时，重定向地址中不携带端口。</li><li>Custom： 使用指定的自定义端口。</li></ul>
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
                     * 获取<p>自定义目标端口。</p><p>取值范围：[1, 65535]</p><p>当 Action 为 Custom 时，此字段必填；当 Action 为 FollowProtocol 或 FollowRequest 时，此字段不生效。</p>
                     * @return Value <p>自定义目标端口。</p><p>取值范围：[1, 65535]</p><p>当 Action 为 Custom 时，此字段必填；当 Action 为 FollowProtocol 或 FollowRequest 时，此字段不生效。</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>自定义目标端口。</p><p>取值范围：[1, 65535]</p><p>当 Action 为 Custom 时，此字段必填；当 Action 为 FollowProtocol 或 FollowRequest 时，此字段不生效。</p>
                     * @param _value <p>自定义目标端口。</p><p>取值范围：[1, 65535]</p><p>当 Action 为 Custom 时，此字段必填；当 Action 为 FollowProtocol 或 FollowRequest 时，此字段不生效。</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>目标端口配置</p><p>枚举值：</p><ul><li>FollowProtocol： 使用目标协议的默认端口。重定向地址中不显式指定端口，由目标协议使用默认端口，HTTP 使用 80，HTTPS 使用 443。</li><li>FollowRequest： 跟随客户端请求的目标端口。请求地址显式携带端口时沿用该端口；未显式携带时，重定向地址中不携带端口。</li><li>Custom： 使用指定的自定义端口。</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>自定义目标端口。</p><p>取值范围：[1, 65535]</p><p>当 Action 为 Custom 时，此字段必填；当 Action 为 FollowProtocol 或 FollowRequest 时，此字段不生效。</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPORT_H_
