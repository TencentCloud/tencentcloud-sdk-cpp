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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATEPAIINSTANCEREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATEPAIINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreatePaiInstance请求参数结构体
                */
                class CreatePaiInstanceRequest : public AbstractModel
                {
                public:
                    CreatePaiInstanceRequest();
                    ~CreatePaiInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取PAI实例的域名。
                     * @return DomainName PAI实例的域名。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置PAI实例的域名。
                     * @param DomainName PAI实例的域名。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置。
                     * @return InternetAccessible 公网带宽相关信息设置。
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置。
                     * @param InternetAccessible 公网带宽相关信息设置。
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取启动脚本的base64编码字符串。
                     * @return InitScript 启动脚本的base64编码字符串。
                     */
                    std::string GetInitScript() const;

                    /**
                     * 设置启动脚本的base64编码字符串。
                     * @param InitScript 启动脚本的base64编码字符串。
                     */
                    void SetInitScript(const std::string& _initScript);

                    /**
                     * 判断参数 InitScript 是否已赋值
                     * @return InitScript 是否已赋值
                     */
                    bool InitScriptHasBeenSet() const;

                    /**
                     * 获取可用区列表。
                     * @return Zones 可用区列表。
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区列表。
                     * @param Zones 可用区列表。
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取VpcId。
                     * @return VpcId VpcId。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId。
                     * @param VpcId VpcId。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网列表。
                     * @return SubnetIds 子网列表。
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网列表。
                     * @param SubnetIds 子网列表。
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取实例显示名称。
                     * @return InstanceName 实例显示名称。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例显示名称。
                     * @param InstanceName 实例显示名称。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例机型列表。
                     * @return InstanceTypes 实例机型列表。
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置实例机型列表。
                     * @param InstanceTypes 实例机型列表。
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取实例登录设置。
                     * @return LoginSettings 实例登录设置。
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。
                     * @param LoginSettings 实例登录设置。
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取实例计费类型。
                     * @return InstanceChargeType 实例计费类型。
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型。
                     * @param InstanceChargeType 实例计费类型。
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * PAI实例的域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 公网带宽相关信息设置。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 启动脚本的base64编码字符串。
                     */
                    std::string m_initScript;
                    bool m_initScriptHasBeenSet;

                    /**
                     * 可用区列表。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * VpcId。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网列表。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 实例显示名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例机型列表。
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 实例登录设置。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 实例计费类型。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATEPAIINSTANCEREQUEST_H_
