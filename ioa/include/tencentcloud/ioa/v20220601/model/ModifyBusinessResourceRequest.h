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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYBUSINESSRESOURCEREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYBUSINESSRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyBusinessResource请求参数结构体
                */
                class ModifyBusinessResourceRequest : public AbstractModel
                {
                public:
                    ModifyBusinessResourceRequest();
                    ~ModifyBusinessResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)
                     * @return AreaId 业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)
                     * @param _areaId 业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)
                     * @return Protocol 业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)
                     * 
                     */
                    int64_t GetProtocol() const;

                    /**
                     * 设置业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)
                     * @param _protocol 业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)
                     * 
                     */
                    void SetProtocol(const int64_t& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取业务资源名称，同一个资源模块下面不可重复
                     * @return ServiceName 业务资源名称，同一个资源模块下面不可重复
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置业务资源名称，同一个资源模块下面不可重复
                     * @param _serviceName 业务资源名称，同一个资源模块下面不可重复
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取业务资源优先级 1-65535(只支持32位)
                     * @return Levels 业务资源优先级 1-65535(只支持32位)
                     * 
                     */
                    int64_t GetLevels() const;

                    /**
                     * 设置业务资源优先级 1-65535(只支持32位)
                     * @param _levels 业务资源优先级 1-65535(只支持32位)
                     * 
                     */
                    void SetLevels(const int64_t& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取业务资源类型:ip,domain,ip_section，对应ip、域名、ip段
                     * @return ServiceType 业务资源类型:ip,domain,ip_section，对应ip、域名、ip段
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置业务资源类型:ip,domain,ip_section，对应ip、域名、ip段
                     * @param _serviceType 业务资源类型:ip,domain,ip_section，对应ip、域名、ip段
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取业务资源端口 all,1-65535
                     * @return ServicePort 业务资源端口 all,1-65535
                     * 
                     */
                    std::string GetServicePort() const;

                    /**
                     * 设置业务资源端口 all,1-65535
                     * @param _servicePort 业务资源端口 all,1-65535
                     * 
                     */
                    void SetServicePort(const std::string& _servicePort);

                    /**
                     * 判断参数 ServicePort 是否已赋值
                     * @return ServicePort 是否已赋值
                     * 
                     */
                    bool ServicePortHasBeenSet() const;

                    /**
                     * 获取修改业务资源的id(只支持32位)
                     * @return ServiceId 修改业务资源的id(只支持32位)
                     * 
                     */
                    int64_t GetServiceId() const;

                    /**
                     * 设置修改业务资源的id(只支持32位)
                     * @param _serviceId 修改业务资源的id(只支持32位)
                     * 
                     */
                    void SetServiceId(const int64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取业务资源地址(ip、域名、ip段)
                     * @return ServiceAddress 业务资源地址(ip、域名、ip段)
                     * 
                     */
                    std::string GetServiceAddress() const;

                    /**
                     * 设置业务资源地址(ip、域名、ip段)
                     * @param _serviceAddress 业务资源地址(ip、域名、ip段)
                     * 
                     */
                    void SetServiceAddress(const std::string& _serviceAddress);

                    /**
                     * 判断参数 ServiceAddress 是否已赋值
                     * @return ServiceAddress 是否已赋值
                     * 
                     */
                    bool ServiceAddressHasBeenSet() const;

                    /**
                     * 获取是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)
                     * @return DirectConn 是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)
                     * 
                     */
                    int64_t GetDirectConn() const;

                    /**
                     * 设置是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)
                     * @param _directConn 是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)
                     * 
                     */
                    void SetDirectConn(const int64_t& _directConn);

                    /**
                     * 判断参数 DirectConn 是否已赋值
                     * @return DirectConn 是否已赋值
                     * 
                     */
                    bool DirectConnHasBeenSet() const;

                private:

                    /**
                     * 业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)
                     */
                    int64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 业务资源名称，同一个资源模块下面不可重复
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 业务资源优先级 1-65535(只支持32位)
                     */
                    int64_t m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * 业务资源类型:ip,domain,ip_section，对应ip、域名、ip段
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 业务资源端口 all,1-65535
                     */
                    std::string m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * 修改业务资源的id(只支持32位)
                     */
                    int64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 业务资源地址(ip、域名、ip段)
                     */
                    std::string m_serviceAddress;
                    bool m_serviceAddressHasBeenSet;

                    /**
                     * 是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)
                     */
                    int64_t m_directConn;
                    bool m_directConnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYBUSINESSRESOURCEREQUEST_H_
