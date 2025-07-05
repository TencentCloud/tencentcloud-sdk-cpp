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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCECONFIG_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 实例配置详情
                */
                class InstanceConfig : public AbstractModel
                {
                public:
                    InstanceConfig();
                    ~InstanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取业务域名
                     * @return Domain 业务域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置业务域名
                     * @param _domain 业务域名
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
                     * 获取CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * @return AccessType CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * @param _accessType CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取全局记录过期时间	
                     * @return GlobalTtl 全局记录过期时间	
                     * 
                     */
                    int64_t GetGlobalTtl() const;

                    /**
                     * 设置全局记录过期时间	
                     * @param _globalTtl 全局记录过期时间	
                     * 
                     */
                    void SetGlobalTtl(const int64_t& _globalTtl);

                    /**
                     * 判断参数 GlobalTtl 是否已赋值
                     * @return GlobalTtl 是否已赋值
                     * 
                     */
                    bool GlobalTtlHasBeenSet() const;

                    /**
                     * 获取接入主域名，自定义接入域名时必填

                     * @return AccessDomain 接入主域名，自定义接入域名时必填

                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置接入主域名，自定义接入域名时必填

                     * @param _accessDomain 接入主域名，自定义接入域名时必填

                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                    /**
                     * 获取接入子域名，自定义接入域名时必填
                     * @return AccessSubDomain 接入子域名，自定义接入域名时必填
                     * 
                     */
                    std::string GetAccessSubDomain() const;

                    /**
                     * 设置接入子域名，自定义接入域名时必填
                     * @param _accessSubDomain 接入子域名，自定义接入域名时必填
                     * 
                     */
                    void SetAccessSubDomain(const std::string& _accessSubDomain);

                    /**
                     * 判断参数 AccessSubDomain 是否已赋值
                     * @return AccessSubDomain 是否已赋值
                     * 
                     */
                    bool AccessSubDomainHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 业务域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 全局记录过期时间	
                     */
                    int64_t m_globalTtl;
                    bool m_globalTtlHasBeenSet;

                    /**
                     * 接入主域名，自定义接入域名时必填

                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                    /**
                     * 接入子域名，自定义接入域名时必填
                     */
                    std::string m_accessSubDomain;
                    bool m_accessSubDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCECONFIG_H_
