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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTLIMITREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeHostLimit请求参数结构体
                */
                class DescribeHostLimitRequest : public AbstractModel
                {
                public:
                    DescribeHostLimitRequest();
                    ~DescribeHostLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取添加的域名
                     * @return Domain 添加的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置添加的域名
                     * @param _domain 添加的域名
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
                     * 获取实例id
                     * @return InstanceID 实例id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id
                     * @param _instanceID 实例id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取流量来源
                     * @return AlbType 流量来源
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置流量来源
                     * @param _albType 流量来源
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                private:

                    /**
                     * 添加的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 流量来源
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTLIMITREQUEST_H_
