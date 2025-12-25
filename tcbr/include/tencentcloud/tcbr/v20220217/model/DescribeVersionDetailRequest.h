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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeVersionDetail请求参数结构体
                */
                class DescribeVersionDetailRequest : public AbstractModel
                {
                public:
                    DescribeVersionDetailRequest();
                    ~DescribeVersionDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境Id</p>
                     * @return EnvId <p>环境Id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境Id</p>
                     * @param _envId <p>环境Id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>服务名</p>
                     * @return ServerName <p>服务名</p>
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serverName <p>服务名</p>
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取<p>版本名</p>
                     * @return VersionName <p>版本名</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>版本名</p>
                     * @param _versionName <p>版本名</p>
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>channel</p>
                     * @return Channel <p>channel</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>channel</p>
                     * @param _channel <p>channel</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * <p>环境Id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * <p>版本名</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>channel</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILREQUEST_H_
