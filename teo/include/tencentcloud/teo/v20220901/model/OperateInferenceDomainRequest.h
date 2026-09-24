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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OPERATEINFERENCEDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OPERATEINFERENCEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * OperateInferenceDomain请求参数结构体
                */
                class OperateInferenceDomainRequest : public AbstractModel
                {
                public:
                    OperateInferenceDomainRequest();
                    ~OperateInferenceDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>推理服务 ID。</p>
                     * @return ServiceId <p>推理服务 ID。</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>推理服务 ID。</p>
                     * @param _serviceId <p>推理服务 ID。</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>推理服务域名。</p>
                     * @return Domain <p>推理服务域名。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>推理服务域名。</p>
                     * @param _domain <p>推理服务域名。</p>
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
                     * 获取<p>操作类型。</p><p>枚举值：</p><ul><li>Resume： 启用域名；</li><li>Stop： 停用域名；</li><li>Delete： 删除域名。</li></ul>
                     * @return Operation <p>操作类型。</p><p>枚举值：</p><ul><li>Resume： 启用域名；</li><li>Stop： 停用域名；</li><li>Delete： 删除域名。</li></ul>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>操作类型。</p><p>枚举值：</p><ul><li>Resume： 启用域名；</li><li>Stop： 停用域名；</li><li>Delete： 删除域名。</li></ul>
                     * @param _operation <p>操作类型。</p><p>枚举值：</p><ul><li>Resume： 启用域名；</li><li>Stop： 停用域名；</li><li>Delete： 删除域名。</li></ul>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>推理服务 ID。</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>推理服务域名。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>操作类型。</p><p>枚举值：</p><ul><li>Resume： 启用域名；</li><li>Stop： 停用域名；</li><li>Delete： 删除域名。</li></ul>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OPERATEINFERENCEDOMAINREQUEST_H_
