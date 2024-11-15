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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * IP 访问限制规则，当前支持配置 IP 黑名单和白名单。
                */
                class IPFilterPolicy : public AbstractModel
                {
                public:
                    IPFilterPolicy();
                    ~IPFilterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP 访问限制状态，可选值：
<li>Enabled：启用；</li>
<li>Disabled：禁用。</li>
                     * @return Status IP 访问限制状态，可选值：
<li>Enabled：启用；</li>
<li>Disabled：禁用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置IP 访问限制状态，可选值：
<li>Enabled：启用；</li>
<li>Disabled：禁用。</li>
                     * @param _status IP 访问限制状态，可选值：
<li>Enabled：启用；</li>
<li>Disabled：禁用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取IP 访问限制类型：  <li>Black：黑名单方式校验。只有来自 IPList 列表中的 IP 请求会被拦截。</li>
<li>White：白名单方式校验。只有来自 IPList 列表中的 IP 请求会被放行。</li>当 Status 取值为 Enabled 时，FilterType  必须赋值。
                     * @return FilterType IP 访问限制类型：  <li>Black：黑名单方式校验。只有来自 IPList 列表中的 IP 请求会被拦截。</li>
<li>White：白名单方式校验。只有来自 IPList 列表中的 IP 请求会被放行。</li>当 Status 取值为 Enabled 时，FilterType  必须赋值。
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP 访问限制类型：  <li>Black：黑名单方式校验。只有来自 IPList 列表中的 IP 请求会被拦截。</li>
<li>White：白名单方式校验。只有来自 IPList 列表中的 IP 请求会被放行。</li>当 Status 取值为 Enabled 时，FilterType  必须赋值。
                     * @param _filterType IP 访问限制类型：  <li>Black：黑名单方式校验。只有来自 IPList 列表中的 IP 请求会被拦截。</li>
<li>White：白名单方式校验。只有来自 IPList 列表中的 IP 请求会被放行。</li>当 Status 取值为 Enabled 时，FilterType  必须赋值。
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取IP 列表，支持 X.X.X.X 格式 IPV4 地址，或 X:X:X:X:X:X:X:X 格式 IPV6 地址，或网段格式 /N（IPV4:1≤N≤32；IPV6:1≤N≤128）；最多可填充 200 个 IP 或网段。当 Status 取值为 Enabled 时，IPList 必须赋值。
                     * @return IPList IP 列表，支持 X.X.X.X 格式 IPV4 地址，或 X:X:X:X:X:X:X:X 格式 IPV6 地址，或网段格式 /N（IPV4:1≤N≤32；IPV6:1≤N≤128）；最多可填充 200 个 IP 或网段。当 Status 取值为 Enabled 时，IPList 必须赋值。
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置IP 列表，支持 X.X.X.X 格式 IPV4 地址，或 X:X:X:X:X:X:X:X 格式 IPV6 地址，或网段格式 /N（IPV4:1≤N≤32；IPV6:1≤N≤128）；最多可填充 200 个 IP 或网段。当 Status 取值为 Enabled 时，IPList 必须赋值。
                     * @param _iPList IP 列表，支持 X.X.X.X 格式 IPV4 地址，或 X:X:X:X:X:X:X:X 格式 IPV6 地址，或网段格式 /N（IPV4:1≤N≤32；IPV6:1≤N≤128）；最多可填充 200 个 IP 或网段。当 Status 取值为 Enabled 时，IPList 必须赋值。
                     * 
                     */
                    void SetIPList(const std::vector<std::string>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                private:

                    /**
                     * IP 访问限制状态，可选值：
<li>Enabled：启用；</li>
<li>Disabled：禁用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * IP 访问限制类型：  <li>Black：黑名单方式校验。只有来自 IPList 列表中的 IP 请求会被拦截。</li>
<li>White：白名单方式校验。只有来自 IPList 列表中的 IP 请求会被放行。</li>当 Status 取值为 Enabled 时，FilterType  必须赋值。
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP 列表，支持 X.X.X.X 格式 IPV4 地址，或 X:X:X:X:X:X:X:X 格式 IPV6 地址，或网段格式 /N（IPV4:1≤N≤32；IPV6:1≤N≤128）；最多可填充 200 个 IP 或网段。当 Status 取值为 Enabled 时，IPList 必须赋值。
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_
