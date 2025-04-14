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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESCHARGETYPEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESCHARGETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstancesChargeType请求参数结构体
                */
                class ModifyInstancesChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesChargeTypeRequest();
                    ~ModifyInstancesChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/213/15728)接口返回值中的`InstanceId`获取。每次请求批量实例的上限为30。
                     * @return InstanceIds 一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/213/15728)接口返回值中的`InstanceId`获取。每次请求批量实例的上限为30。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/213/15728)接口返回值中的`InstanceId`获取。每次请求批量实例的上限为30。
                     * @param _instanceIds 一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/213/15728)接口返回值中的`InstanceId`获取。每次请求批量实例的上限为30。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取修改后实例[计费类型](https://cloud.tencent.com/document/product/213/2180)。<li> PREPAID：预付费，即包年包月。</li><li> POSTPAID_BY_HOUR：后付费，即按量付费。</li>
                     * @return InstanceChargeType 修改后实例[计费类型](https://cloud.tencent.com/document/product/213/2180)。<li> PREPAID：预付费，即包年包月。</li><li> POSTPAID_BY_HOUR：后付费，即按量付费。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置修改后实例[计费类型](https://cloud.tencent.com/document/product/213/2180)。<li> PREPAID：预付费，即包年包月。</li><li> POSTPAID_BY_HOUR：后付费，即按量付费。</li>
                     * @param _instanceChargeType 修改后实例[计费类型](https://cloud.tencent.com/document/product/213/2180)。<li> PREPAID：预付费，即包年包月。</li><li> POSTPAID_BY_HOUR：后付费，即按量付费。</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取修改后预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。<dx-alert infotype="explain" title="">若指定实例的付费模式为预付费则该参数必传。</dx-alert>
                     * @return InstanceChargePrepaid 修改后预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。<dx-alert infotype="explain" title="">若指定实例的付费模式为预付费则该参数必传。</dx-alert>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置修改后预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。<dx-alert infotype="explain" title="">若指定实例的付费模式为预付费则该参数必传。</dx-alert>
                     * @param _instanceChargePrepaid 修改后预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。<dx-alert infotype="explain" title="">若指定实例的付费模式为预付费则该参数必传。</dx-alert>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取是否同时切换弹性数据云盘计费模式。取值范围：<li> true：表示切换弹性数据云盘计费模式</li><li> false：表示不切换弹性数据云盘计费模式</li>默认取值：false。
                     * @return ModifyPortableDataDisk 是否同时切换弹性数据云盘计费模式。取值范围：<li> true：表示切换弹性数据云盘计费模式</li><li> false：表示不切换弹性数据云盘计费模式</li>默认取值：false。
                     * 
                     */
                    bool GetModifyPortableDataDisk() const;

                    /**
                     * 设置是否同时切换弹性数据云盘计费模式。取值范围：<li> true：表示切换弹性数据云盘计费模式</li><li> false：表示不切换弹性数据云盘计费模式</li>默认取值：false。
                     * @param _modifyPortableDataDisk 是否同时切换弹性数据云盘计费模式。取值范围：<li> true：表示切换弹性数据云盘计费模式</li><li> false：表示不切换弹性数据云盘计费模式</li>默认取值：false。
                     * 
                     */
                    void SetModifyPortableDataDisk(const bool& _modifyPortableDataDisk);

                    /**
                     * 判断参数 ModifyPortableDataDisk 是否已赋值
                     * @return ModifyPortableDataDisk 是否已赋值
                     * 
                     */
                    bool ModifyPortableDataDiskHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/213/15728)接口返回值中的`InstanceId`获取。每次请求批量实例的上限为30。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 修改后实例[计费类型](https://cloud.tencent.com/document/product/213/2180)。<li> PREPAID：预付费，即包年包月。</li><li> POSTPAID_BY_HOUR：后付费，即按量付费。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 修改后预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。<dx-alert infotype="explain" title="">若指定实例的付费模式为预付费则该参数必传。</dx-alert>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 是否同时切换弹性数据云盘计费模式。取值范围：<li> true：表示切换弹性数据云盘计费模式</li><li> false：表示不切换弹性数据云盘计费模式</li>默认取值：false。
                     */
                    bool m_modifyPortableDataDisk;
                    bool m_modifyPortableDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESCHARGETYPEREQUEST_H_
