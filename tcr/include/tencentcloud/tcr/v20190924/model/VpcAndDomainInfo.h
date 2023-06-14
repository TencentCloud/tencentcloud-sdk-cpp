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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_VPCANDDOMAININFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_VPCANDDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * vpc和domain信息
                */
                class VpcAndDomainInfo : public AbstractModel
                {
                public:
                    VpcAndDomainInfo();
                    ~VpcAndDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tcr实例id
                     * @return InstanceId tcr实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tcr实例id
                     * @param _instanceId tcr实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取私有网络id
                     * @return VpcId 私有网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络id
                     * @param _vpcId 私有网络id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取tcr内网访问链路ip
                     * @return EniLBIp tcr内网访问链路ip
                     * 
                     */
                    std::string GetEniLBIp() const;

                    /**
                     * 设置tcr内网访问链路ip
                     * @param _eniLBIp tcr内网访问链路ip
                     * 
                     */
                    void SetEniLBIp(const std::string& _eniLBIp);

                    /**
                     * 判断参数 EniLBIp 是否已赋值
                     * @return EniLBIp 是否已赋值
                     * 
                     */
                    bool EniLBIpHasBeenSet() const;

                    /**
                     * 获取true：use instance name as subdomain
false: use instancename+"-vpc" as subdomain
                     * @return UsePublicDomain true：use instance name as subdomain
false: use instancename+"-vpc" as subdomain
                     * 
                     */
                    bool GetUsePublicDomain() const;

                    /**
                     * 设置true：use instance name as subdomain
false: use instancename+"-vpc" as subdomain
                     * @param _usePublicDomain true：use instance name as subdomain
false: use instancename+"-vpc" as subdomain
                     * 
                     */
                    void SetUsePublicDomain(const bool& _usePublicDomain);

                    /**
                     * 判断参数 UsePublicDomain 是否已赋值
                     * @return UsePublicDomain 是否已赋值
                     * 
                     */
                    bool UsePublicDomainHasBeenSet() const;

                    /**
                     * 获取解析地域，需要保证和vpc处于同一地域，如果不填则默认为主实例地域
                     * @return RegionName 解析地域，需要保证和vpc处于同一地域，如果不填则默认为主实例地域
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置解析地域，需要保证和vpc处于同一地域，如果不填则默认为主实例地域
                     * @param _regionName 解析地域，需要保证和vpc处于同一地域，如果不填则默认为主实例地域
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * tcr实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 私有网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * tcr内网访问链路ip
                     */
                    std::string m_eniLBIp;
                    bool m_eniLBIpHasBeenSet;

                    /**
                     * true：use instance name as subdomain
false: use instancename+"-vpc" as subdomain
                     */
                    bool m_usePublicDomain;
                    bool m_usePublicDomainHasBeenSet;

                    /**
                     * 解析地域，需要保证和vpc处于同一地域，如果不填则默认为主实例地域
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_VPCANDDOMAININFO_H_
