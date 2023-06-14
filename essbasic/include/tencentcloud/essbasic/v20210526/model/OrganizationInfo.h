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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 机构信息
                */
                class OrganizationInfo : public AbstractModel
                {
                public:
                    OrganizationInfo();
                    ~OrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户在渠道的机构编号
                     * @return OrganizationOpenId 用户在渠道的机构编号
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置用户在渠道的机构编号
                     * @param _organizationOpenId 用户在渠道的机构编号
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取机构在平台的编号
                     * @return OrganizationId 机构在平台的编号
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置机构在平台的编号
                     * @param _organizationId 机构在平台的编号
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取用户渠道
                     * @return Channel 用户渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置用户渠道
                     * @param _channel 用户渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取用户真实的IP
                     * @return ClientIp 用户真实的IP
                     * @deprecated
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置用户真实的IP
                     * @param _clientIp 用户真实的IP
                     * @deprecated
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * @deprecated
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取机构的代理IP
                     * @return ProxyIp 机构的代理IP
                     * @deprecated
                     */
                    std::string GetProxyIp() const;

                    /**
                     * 设置机构的代理IP
                     * @param _proxyIp 机构的代理IP
                     * @deprecated
                     */
                    void SetProxyIp(const std::string& _proxyIp);

                    /**
                     * 判断参数 ProxyIp 是否已赋值
                     * @return ProxyIp 是否已赋值
                     * @deprecated
                     */
                    bool ProxyIpHasBeenSet() const;

                private:

                    /**
                     * 用户在渠道的机构编号
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 机构在平台的编号
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 用户渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 用户真实的IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 机构的代理IP
                     */
                    std::string m_proxyIp;
                    bool m_proxyIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONINFO_H_
