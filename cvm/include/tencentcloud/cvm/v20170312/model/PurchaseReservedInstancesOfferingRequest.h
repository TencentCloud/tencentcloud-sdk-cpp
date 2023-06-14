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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * PurchaseReservedInstancesOffering请求参数结构体
                */
                class PurchaseReservedInstancesOfferingRequest : public AbstractModel
                {
                public:
                    PurchaseReservedInstancesOfferingRequest();
                    ~PurchaseReservedInstancesOfferingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买预留实例计费数量
                     * @return InstanceCount 购买预留实例计费数量
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置购买预留实例计费数量
                     * @param _instanceCount 购买预留实例计费数量
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取预留实例计费配置ID
                     * @return ReservedInstancesOfferingId 预留实例计费配置ID
                     * 
                     */
                    std::string GetReservedInstancesOfferingId() const;

                    /**
                     * 设置预留实例计费配置ID
                     * @param _reservedInstancesOfferingId 预留实例计费配置ID
                     * 
                     */
                    void SetReservedInstancesOfferingId(const std::string& _reservedInstancesOfferingId);

                    /**
                     * 判断参数 ReservedInstancesOfferingId 是否已赋值
                     * @return ReservedInstancesOfferingId 是否已赋值
                     * 
                     */
                    bool ReservedInstancesOfferingIdHasBeenSet() const;

                    /**
                     * 获取试运行
                     * @return DryRun 试运行
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置试运行
                     * @param _dryRun 试运行
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取预留实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持60个字符（包含模式串）。</li>
                     * @return ReservedInstanceName 预留实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持60个字符（包含模式串）。</li>
                     * 
                     */
                    std::string GetReservedInstanceName() const;

                    /**
                     * 设置预留实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持60个字符（包含模式串）。</li>
                     * @param _reservedInstanceName 预留实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持60个字符（包含模式串）。</li>
                     * 
                     */
                    void SetReservedInstanceName(const std::string& _reservedInstanceName);

                    /**
                     * 判断参数 ReservedInstanceName 是否已赋值
                     * @return ReservedInstanceName 是否已赋值
                     * 
                     */
                    bool ReservedInstanceNameHasBeenSet() const;

                private:

                    /**
                     * 购买预留实例计费数量
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 预留实例计费配置ID
                     */
                    std::string m_reservedInstancesOfferingId;
                    bool m_reservedInstancesOfferingIdHasBeenSet;

                    /**
                     * 试运行
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 预留实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持60个字符（包含模式串）。</li>
                     */
                    std::string m_reservedInstanceName;
                    bool m_reservedInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_
