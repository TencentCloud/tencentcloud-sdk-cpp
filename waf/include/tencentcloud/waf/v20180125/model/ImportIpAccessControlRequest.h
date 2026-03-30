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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_IMPORTIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_IMPORTIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/IpAccessControlParam.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ImportIpAccessControl请求参数结构体
                */
                class ImportIpAccessControlRequest : public AbstractModel
                {
                public:
                    ImportIpAccessControlRequest();
                    ~ImportIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入的IP黑白名单列表
                     * @return Data 导入的IP黑白名单列表
                     * 
                     */
                    std::vector<IpAccessControlParam> GetData() const;

                    /**
                     * 设置导入的IP黑白名单列表
                     * @param _data 导入的IP黑白名单列表
                     * 
                     */
                    void SetData(const std::vector<IpAccessControlParam>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取具体域名如：test.qcloudwaf.com
全局域名为：global
                     * @return Domain 具体域名如：test.qcloudwaf.com
全局域名为：global
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置具体域名如：test.qcloudwaf.com
全局域名为：global
                     * @param _domain 具体域名如：test.qcloudwaf.com
全局域名为：global
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取用于按数据来源导入黑白名单记录，必填。 custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护	），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则
                     * @return SourceType 用于按数据来源导入黑白名单记录，必填。 custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护	），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置用于按数据来源导入黑白名单记录，必填。 custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护	），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则
                     * @param _sourceType 用于按数据来源导入黑白名单记录，必填。 custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护	），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 导入的IP黑白名单列表
                     */
                    std::vector<IpAccessControlParam> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 具体域名如：test.qcloudwaf.com
全局域名为：global
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 用于按数据来源导入黑白名单记录，必填。 custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护	），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_IMPORTIPACCESSCONTROLREQUEST_H_
