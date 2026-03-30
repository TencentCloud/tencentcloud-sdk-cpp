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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESOURCEPOOLPACKSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESOURCEPOOLPACKSREQUEST_H_

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
                * PurchaseResourcePoolPacks请求参数结构体
                */
                class PurchaseResourcePoolPacksRequest : public AbstractModel
                {
                public:
                    PurchaseResourcePoolPacksRequest();
                    ~PurchaseResourcePoolPacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * @return Zone 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * @param _zone 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * @return InstanceType 实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * @param _instanceType 实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例资源池预扣包的数量。1个数量代表1个半整机/整机资源池。取值范围：1-100。
                     * @return InstanceCount 实例资源池预扣包的数量。1个数量代表1个半整机/整机资源池。取值范围：1-100。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置实例资源池预扣包的数量。1个数量代表1个半整机/整机资源池。取值范围：1-100。
                     * @param _instanceCount 实例资源池预扣包的数量。1个数量代表1个半整机/整机资源池。取值范围：1-100。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取实例资源池预扣包的时长，单位：月。取值范围：1-60。
                     * @return Period 实例资源池预扣包的时长，单位：月。取值范围：1-60。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置实例资源池预扣包的时长，单位：月。取值范围：1-60。
                     * @param _period 实例资源池预扣包的时长，单位：月。取值范围：1-60。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取实例资源池类型。取值范围：
<li>EXCLUSIVE：独享（默认值）</li>
<li>SHARED：共享</li>
注意：第一期仅支持EXCLUSIVE类型。
                     * @return ResourcePoolPackType 实例资源池类型。取值范围：
<li>EXCLUSIVE：独享（默认值）</li>
<li>SHARED：共享</li>
注意：第一期仅支持EXCLUSIVE类型。
                     * 
                     */
                    std::string GetResourcePoolPackType() const;

                    /**
                     * 设置实例资源池类型。取值范围：
<li>EXCLUSIVE：独享（默认值）</li>
<li>SHARED：共享</li>
注意：第一期仅支持EXCLUSIVE类型。
                     * @param _resourcePoolPackType 实例资源池类型。取值范围：
<li>EXCLUSIVE：独享（默认值）</li>
<li>SHARED：共享</li>
注意：第一期仅支持EXCLUSIVE类型。
                     * 
                     */
                    void SetResourcePoolPackType(const std::string& _resourcePoolPackType);

                    /**
                     * 判断参数 ResourcePoolPackType 是否已赋值
                     * @return ResourcePoolPackType 是否已赋值
                     * 
                     */
                    bool ResourcePoolPackTypeHasBeenSet() const;

                    /**
                     * 获取自动放置开关，默认开启（true）。
<li>开启：在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。</li>
<li>关闭：在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。</li>
                     * @return AutoPlacement 自动放置开关，默认开启（true）。
<li>开启：在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。</li>
<li>关闭：在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。</li>
                     * 
                     */
                    bool GetAutoPlacement() const;

                    /**
                     * 设置自动放置开关，默认开启（true）。
<li>开启：在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。</li>
<li>关闭：在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。</li>
                     * @param _autoPlacement 自动放置开关，默认开启（true）。
<li>开启：在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。</li>
<li>关闭：在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。</li>
                     * 
                     */
                    void SetAutoPlacement(const bool& _autoPlacement);

                    /**
                     * 判断参数 AutoPlacement 是否已赋值
                     * @return AutoPlacement 是否已赋值
                     * 
                     */
                    bool AutoPlacementHasBeenSet() const;

                    /**
                     * 获取实例资源池的名称。长度限制：1-60个字符，支持中文、英文、数字、连接线"-"、下划线"_"。
                     * @return DedicatedResourcePoolPackName 实例资源池的名称。长度限制：1-60个字符，支持中文、英文、数字、连接线"-"、下划线"_"。
                     * 
                     */
                    std::string GetDedicatedResourcePoolPackName() const;

                    /**
                     * 设置实例资源池的名称。长度限制：1-60个字符，支持中文、英文、数字、连接线"-"、下划线"_"。
                     * @param _dedicatedResourcePoolPackName 实例资源池的名称。长度限制：1-60个字符，支持中文、英文、数字、连接线"-"、下划线"_"。
                     * 
                     */
                    void SetDedicatedResourcePoolPackName(const std::string& _dedicatedResourcePoolPackName);

                    /**
                     * 判断参数 DedicatedResourcePoolPackName 是否已赋值
                     * @return DedicatedResourcePoolPackName 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePoolPackNameHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（默认值）</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * @return RenewFlag 自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（默认值）</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（默认值）</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * @param _renewFlag 自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（默认值）</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取试运行，用于校验请求参数是否正确。默认为false。
<li>true：发送检查请求，不会创建实例资源池。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId。</li>
<li>false（默认值）：发送正常请求，通过检查后直接创建实例资源池。</li>
                     * @return DryRun 试运行，用于校验请求参数是否正确。默认为false。
<li>true：发送检查请求，不会创建实例资源池。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId。</li>
<li>false（默认值）：发送正常请求，通过检查后直接创建实例资源池。</li>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置试运行，用于校验请求参数是否正确。默认为false。
<li>true：发送检查请求，不会创建实例资源池。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId。</li>
<li>false（默认值）：发送正常请求，通过检查后直接创建实例资源池。</li>
                     * @param _dryRun 试运行，用于校验请求参数是否正确。默认为false。
<li>true：发送检查请求，不会创建实例资源池。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId。</li>
<li>false（默认值）：发送正常请求，通过检查后直接创建实例资源池。</li>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例资源池预扣包的数量。1个数量代表1个半整机/整机资源池。取值范围：1-100。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 实例资源池预扣包的时长，单位：月。取值范围：1-60。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 实例资源池类型。取值范围：
<li>EXCLUSIVE：独享（默认值）</li>
<li>SHARED：共享</li>
注意：第一期仅支持EXCLUSIVE类型。
                     */
                    std::string m_resourcePoolPackType;
                    bool m_resourcePoolPackTypeHasBeenSet;

                    /**
                     * 自动放置开关，默认开启（true）。
<li>开启：在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。</li>
<li>关闭：在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。</li>
                     */
                    bool m_autoPlacement;
                    bool m_autoPlacementHasBeenSet;

                    /**
                     * 实例资源池的名称。长度限制：1-60个字符，支持中文、英文、数字、连接线"-"、下划线"_"。
                     */
                    std::string m_dedicatedResourcePoolPackName;
                    bool m_dedicatedResourcePoolPackNameHasBeenSet;

                    /**
                     * 自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（默认值）</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 试运行，用于校验请求参数是否正确。默认为false。
<li>true：发送检查请求，不会创建实例资源池。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId。</li>
<li>false（默认值）：发送正常请求，通过检查后直接创建实例资源池。</li>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESOURCEPOOLPACKSREQUEST_H_
