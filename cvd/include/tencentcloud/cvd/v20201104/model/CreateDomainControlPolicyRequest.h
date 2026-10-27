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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATEDOMAINCONTROLPOLICYREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATEDOMAINCONTROLPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/DomainControlDetail.h>
#include <tencentcloud/cvd/v20201104/model/IpControlDetail.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * CreateDomainControlPolicy请求参数结构体
                */
                class CreateDomainControlPolicyRequest : public AbstractModel
                {
                public:
                    CreateDomainControlPolicyRequest();
                    ~CreateDomainControlPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>策略类型，取值范围[&quot;WHITE&quot;,&quot;BLACK&quot;]，WHITE - 白名单策略；BLACK - 黑名单策略；默认 值为BLACK</p>
                     * @return Type <p>策略类型，取值范围[&quot;WHITE&quot;,&quot;BLACK&quot;]，WHITE - 白名单策略；BLACK - 黑名单策略；默认 值为BLACK</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>策略类型，取值范围[&quot;WHITE&quot;,&quot;BLACK&quot;]，WHITE - 白名单策略；BLACK - 黑名单策略；默认 值为BLACK</p>
                     * @param _type <p>策略类型，取值范围[&quot;WHITE&quot;,&quot;BLACK&quot;]，WHITE - 白名单策略；BLACK - 黑名单策略；默认 值为BLACK</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>域名控制规则详情</p>
                     * @return DetailSet <p>域名控制规则详情</p>
                     * 
                     */
                    std::vector<DomainControlDetail> GetDetailSet() const;

                    /**
                     * 设置<p>域名控制规则详情</p>
                     * @param _detailSet <p>域名控制规则详情</p>
                     * 
                     */
                    void SetDetailSet(const std::vector<DomainControlDetail>& _detailSet);

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                    /**
                     * 获取<p>IP控制规则详情</p>
                     * @return IpDetailSet <p>IP控制规则详情</p>
                     * 
                     */
                    std::vector<IpControlDetail> GetIpDetailSet() const;

                    /**
                     * 设置<p>IP控制规则详情</p>
                     * @param _ipDetailSet <p>IP控制规则详情</p>
                     * 
                     */
                    void SetIpDetailSet(const std::vector<IpControlDetail>& _ipDetailSet);

                    /**
                     * 判断参数 IpDetailSet 是否已赋值
                     * @return IpDetailSet 是否已赋值
                     * 
                     */
                    bool IpDetailSetHasBeenSet() const;

                    /**
                     * 获取<p>作用到的实例列表</p>
                     * @return InstanceIds <p>作用到的实例列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>作用到的实例列表</p>
                     * @param _instanceIds <p>作用到的实例列表</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>策略类型，取值范围[&quot;WHITE&quot;,&quot;BLACK&quot;]，WHITE - 白名单策略；BLACK - 黑名单策略；默认 值为BLACK</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>域名控制规则详情</p>
                     */
                    std::vector<DomainControlDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                    /**
                     * <p>IP控制规则详情</p>
                     */
                    std::vector<IpControlDetail> m_ipDetailSet;
                    bool m_ipDetailSetHasBeenSet;

                    /**
                     * <p>作用到的实例列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATEDOMAINCONTROLPOLICYREQUEST_H_
