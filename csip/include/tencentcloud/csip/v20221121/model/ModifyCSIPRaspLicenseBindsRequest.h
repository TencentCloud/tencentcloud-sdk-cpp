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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCSIPRaspLicenseBinds请求参数结构体
                */
                class ModifyCSIPRaspLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyCSIPRaspLicenseBindsRequest();
                    ~ModifyCSIPRaspLicenseBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源ID（指定绑定到哪个订单）</p>
                     * @return ResourceId <p>资源ID（指定绑定到哪个订单）</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID（指定绑定到哪个订单）</p>
                     * @param _resourceId <p>资源ID（指定绑定到哪个订单）</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>授权类型。枚举值：rasp(RASP) / enterprise_hp(旗舰版)。为空默认 rasp</p>
                     * @return LicenseType <p>授权类型。枚举值：rasp(RASP) / enterprise_hp(旗舰版)。为空默认 rasp</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>授权类型。枚举值：rasp(RASP) / enterprise_hp(旗舰版)。为空默认 rasp</p>
                     * @param _licenseType <p>授权类型。枚举值：rasp(RASP) / enterprise_hp(旗舰版)。为空默认 rasp</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产类型。枚举值：host(主机) / cluster(容器节点) / eks(EKS超级节点)。为空默认 host</p>
                     * @return AssetType <p>资产类型。枚举值：host(主机) / cluster(容器节点) / eks(EKS超级节点)。为空默认 host</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型。枚举值：host(主机) / cluster(容器节点) / eks(EKS超级节点)。为空默认 host</p>
                     * @param _assetType <p>资产类型。枚举值：host(主机) / cluster(容器节点) / eks(EKS超级节点)。为空默认 host</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * @return InstanceIDs <p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * @param _instanceIDs <p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * @return IsAll <p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * @param _isAll <p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                private:

                    /**
                     * <p>资源ID（指定绑定到哪个订单）</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>授权类型。枚举值：rasp(RASP) / enterprise_hp(旗舰版)。为空默认 rasp</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>资产类型。枚举值：host(主机) / cluster(容器节点) / eks(EKS超级节点)。为空默认 host</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEBINDSREQUEST_H_
