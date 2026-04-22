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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPDOMAININFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/InstanceBriefInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 防护对象组的域名详情
                */
                class ProtectGroupDomainInfo : public AbstractModel
                {
                public:
                    ProtectGroupDomainInfo();
                    ~ProtectGroupDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防护对象组中绑定的域名
                     * @return Domain 防护对象组中绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置防护对象组中绑定的域名
                     * @param _domain 防护对象组中绑定的域名
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
                     * 获取防护对象组中绑定的域名对应所属的实例信息，一个域名可能存在多个实例中
                     * @return Instances 防护对象组中绑定的域名对应所属的实例信息，一个域名可能存在多个实例中
                     * 
                     */
                    std::vector<InstanceBriefInfo> GetInstances() const;

                    /**
                     * 设置防护对象组中绑定的域名对应所属的实例信息，一个域名可能存在多个实例中
                     * @param _instances 防护对象组中绑定的域名对应所属的实例信息，一个域名可能存在多个实例中
                     * 
                     */
                    void SetInstances(const std::vector<InstanceBriefInfo>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 防护对象组中绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 防护对象组中绑定的域名对应所属的实例信息，一个域名可能存在多个实例中
                     */
                    std::vector<InstanceBriefInfo> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPDOMAININFO_H_
