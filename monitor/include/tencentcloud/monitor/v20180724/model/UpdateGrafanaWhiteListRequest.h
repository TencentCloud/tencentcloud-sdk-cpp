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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAWHITELISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdateGrafanaWhiteList请求参数结构体
                */
                class UpdateGrafanaWhiteListRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaWhiteListRequest();
                    ~UpdateGrafanaWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Grafana 实例 ID，例如：grafana-abcdefgh
                     * @return InstanceId Grafana 实例 ID，例如：grafana-abcdefgh
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Grafana 实例 ID，例如：grafana-abcdefgh
                     * @param _instanceId Grafana 实例 ID，例如：grafana-abcdefgh
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取白名单数组，输入白名单 IP 或 CIDR，如：127.0.0.1或127.0.0.1/24
如有多个 IP 可换行输入
                     * @return Whitelist 白名单数组，输入白名单 IP 或 CIDR，如：127.0.0.1或127.0.0.1/24
如有多个 IP 可换行输入
                     * 
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置白名单数组，输入白名单 IP 或 CIDR，如：127.0.0.1或127.0.0.1/24
如有多个 IP 可换行输入
                     * @param _whitelist 白名单数组，输入白名单 IP 或 CIDR，如：127.0.0.1或127.0.0.1/24
如有多个 IP 可换行输入
                     * 
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * Grafana 实例 ID，例如：grafana-abcdefgh
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 白名单数组，输入白名单 IP 或 CIDR，如：127.0.0.1或127.0.0.1/24
如有多个 IP 可换行输入
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAWHITELISTREQUEST_H_
