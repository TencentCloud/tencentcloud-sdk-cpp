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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINCUSTOMLINEREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINCUSTOMLINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyDomainCustomLine请求参数结构体
                */
                class ModifyDomainCustomLineRequest : public AbstractModel
                {
                public:
                    ModifyDomainCustomLineRequest();
                    ~ModifyDomainCustomLineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取修改后的自定义线路名称，如果不修改名称，需要和PreName保持一致
                     * @return Name 修改后的自定义线路名称，如果不修改名称，需要和PreName保持一致
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改后的自定义线路名称，如果不修改名称，需要和PreName保持一致
                     * @param _name 修改后的自定义线路名称，如果不修改名称，需要和PreName保持一致
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
                     * 获取自定义线路IP段，用-分割
                     * @return Area 自定义线路IP段，用-分割
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置自定义线路IP段，用-分割
                     * @param _area 自定义线路IP段，用-分割
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取修改前的自定义线路名称
                     * @return PreName 修改前的自定义线路名称
                     * 
                     */
                    std::string GetPreName() const;

                    /**
                     * 设置修改前的自定义线路名称
                     * @param _preName 修改前的自定义线路名称
                     * 
                     */
                    void SetPreName(const std::string& _preName);

                    /**
                     * 判断参数 PreName 是否已赋值
                     * @return PreName 是否已赋值
                     * 
                     */
                    bool PreNameHasBeenSet() const;

                    /**
                     * 获取域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * @return DomainId 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * @param _domainId 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 修改后的自定义线路名称，如果不修改名称，需要和PreName保持一致
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义线路IP段，用-分割
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 修改前的自定义线路名称
                     */
                    std::string m_preName;
                    bool m_preNameHasBeenSet;

                    /**
                     * 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINCUSTOMLINEREQUEST_H_
