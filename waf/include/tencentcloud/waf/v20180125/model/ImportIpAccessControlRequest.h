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
                     * 获取是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * @return SourceType 是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * @param _sourceType 是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
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
                     * 是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
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
