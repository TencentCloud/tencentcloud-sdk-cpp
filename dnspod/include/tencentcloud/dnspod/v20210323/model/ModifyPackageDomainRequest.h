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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYPACKAGEDOMAINREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYPACKAGEDOMAINREQUEST_H_

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
                * ModifyPackageDomain请求参数结构体
                */
                class ModifyPackageDomainRequest : public AbstractModel
                {
                public:
                    ModifyPackageDomainRequest();
                    ~ModifyPackageDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型：change: 套餐换域名；unbind: 解绑套餐域名；bind: 套餐绑定域名。
                     * @return Operation 操作类型：change: 套餐换域名；unbind: 解绑套餐域名；bind: 套餐绑定域名。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型：change: 套餐换域名；unbind: 解绑套餐域名；bind: 套餐绑定域名。
                     * @param _operation 操作类型：change: 套餐换域名；unbind: 解绑套餐域名；bind: 套餐绑定域名。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取域名ID。Operation为change时必传，代表更换前的域名。
                     * @return DomainId 域名ID。Operation为change时必传，代表更换前的域名。
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID。Operation为change时必传，代表更换前的域名。
                     * @param _domainId 域名ID。Operation为change时必传，代表更换前的域名。
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名ID。Operation为change或bind时必传，代表更换后或要绑定的域名。
                     * @return NewDomainId 域名ID。Operation为change或bind时必传，代表更换后或要绑定的域名。
                     * 
                     */
                    uint64_t GetNewDomainId() const;

                    /**
                     * 设置域名ID。Operation为change或bind时必传，代表更换后或要绑定的域名。
                     * @param _newDomainId 域名ID。Operation为change或bind时必传，代表更换后或要绑定的域名。
                     * 
                     */
                    void SetNewDomainId(const uint64_t& _newDomainId);

                    /**
                     * 判断参数 NewDomainId 是否已赋值
                     * @return NewDomainId 是否已赋值
                     * 
                     */
                    bool NewDomainIdHasBeenSet() const;

                    /**
                     * 获取套餐资源ID。Operation为bind或unbind时必传，代表将要操作的套餐资源。
                     * @return ResourceId 套餐资源ID。Operation为bind或unbind时必传，代表将要操作的套餐资源。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置套餐资源ID。Operation为bind或unbind时必传，代表将要操作的套餐资源。
                     * @param _resourceId 套餐资源ID。Operation为bind或unbind时必传，代表将要操作的套餐资源。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 操作类型：change: 套餐换域名；unbind: 解绑套餐域名；bind: 套餐绑定域名。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 域名ID。Operation为change时必传，代表更换前的域名。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名ID。Operation为change或bind时必传，代表更换后或要绑定的域名。
                     */
                    uint64_t m_newDomainId;
                    bool m_newDomainIdHasBeenSet;

                    /**
                     * 套餐资源ID。Operation为bind或unbind时必传，代表将要操作的套餐资源。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYPACKAGEDOMAINREQUEST_H_
