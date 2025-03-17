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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESBUNDLEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESBUNDLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyInstancesBundle请求参数结构体
                */
                class ModifyInstancesBundleRequest : public AbstractModel
                {
                public:
                    ModifyInstancesBundleRequest();
                    ~ModifyInstancesBundleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为15。
                     * @return InstanceIds 实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为15。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为15。
                     * @param _instanceIds 实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为15。
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
                     * 获取待变更的套餐Id。注意不可和当前要升配的实例套餐ID相同。可通过[DescribeBundles](https://cloud.tencent.com/document/api/1207/47575)接口返回值中的BundleId获取。
                     * @return BundleId 待变更的套餐Id。注意不可和当前要升配的实例套餐ID相同。可通过[DescribeBundles](https://cloud.tencent.com/document/api/1207/47575)接口返回值中的BundleId获取。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置待变更的套餐Id。注意不可和当前要升配的实例套餐ID相同。可通过[DescribeBundles](https://cloud.tencent.com/document/api/1207/47575)接口返回值中的BundleId获取。
                     * @param _bundleId 待变更的套餐Id。注意不可和当前要升配的实例套餐ID相同。可通过[DescribeBundles](https://cloud.tencent.com/document/api/1207/47575)接口返回值中的BundleId获取。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取是否自动抵扣代金券。取值范围：
true：表示自动抵扣代金券
false：表示不自动抵扣代金券
默认取值：false。
                     * @return AutoVoucher 是否自动抵扣代金券。取值范围：
true：表示自动抵扣代金券
false：表示不自动抵扣代金券
默认取值：false。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动抵扣代金券。取值范围：
true：表示自动抵扣代金券
false：表示不自动抵扣代金券
默认取值：false。
                     * @param _autoVoucher 是否自动抵扣代金券。取值范围：
true：表示自动抵扣代金券
false：表示不自动抵扣代金券
默认取值：false。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为15。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 待变更的套餐Id。注意不可和当前要升配的实例套餐ID相同。可通过[DescribeBundles](https://cloud.tencent.com/document/api/1207/47575)接口返回值中的BundleId获取。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 是否自动抵扣代金券。取值范围：
true：表示自动抵扣代金券
false：表示不自动抵扣代金券
默认取值：false。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESBUNDLEREQUEST_H_
