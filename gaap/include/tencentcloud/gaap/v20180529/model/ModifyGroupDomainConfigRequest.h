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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGROUPDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGROUPDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/AccessRegionDomainConf.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyGroupDomainConfig请求参数结构体
                */
                class ModifyGroupDomainConfigRequest : public AbstractModel
                {
                public:
                    ModifyGroupDomainConfigRequest();
                    ~ModifyGroupDomainConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道组ID。
                     * @return GroupId 通道组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID。
                     * @param _groupId 通道组ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取域名解析默认访问IP或域名。
                     * @return DefaultDnsIp 域名解析默认访问IP或域名。
                     * 
                     */
                    std::string GetDefaultDnsIp() const;

                    /**
                     * 设置域名解析默认访问IP或域名。
                     * @param _defaultDnsIp 域名解析默认访问IP或域名。
                     * 
                     */
                    void SetDefaultDnsIp(const std::string& _defaultDnsIp);

                    /**
                     * 判断参数 DefaultDnsIp 是否已赋值
                     * @return DefaultDnsIp 是否已赋值
                     * 
                     */
                    bool DefaultDnsIpHasBeenSet() const;

                    /**
                     * 获取就近接入区域配置。
                     * @return AccessRegionList 就近接入区域配置。
                     * 
                     */
                    std::vector<AccessRegionDomainConf> GetAccessRegionList() const;

                    /**
                     * 设置就近接入区域配置。
                     * @param _accessRegionList 就近接入区域配置。
                     * 
                     */
                    void SetAccessRegionList(const std::vector<AccessRegionDomainConf>& _accessRegionList);

                    /**
                     * 判断参数 AccessRegionList 是否已赋值
                     * @return AccessRegionList 是否已赋值
                     * 
                     */
                    bool AccessRegionListHasBeenSet() const;

                private:

                    /**
                     * 通道组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 域名解析默认访问IP或域名。
                     */
                    std::string m_defaultDnsIp;
                    bool m_defaultDnsIpHasBeenSet;

                    /**
                     * 就近接入区域配置。
                     */
                    std::vector<AccessRegionDomainConf> m_accessRegionList;
                    bool m_accessRegionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGROUPDOMAINCONFIGREQUEST_H_
