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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RENEWDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RENEWDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * RenewDBInstances请求参数结构体
                */
                class RenewDBInstancesRequest : public AbstractModel
                {
                public:
                    RenewDBInstancesRequest();
                    ~RenewDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定续费的一个或多个待操作的实例ID。
- 可通过[DescribeDBInstances](https://cloud.tencent.com/document/product/240/38568)接口返回值中的**InstanceIds**获取。
- 每次续费请求的实例数量上限为100。
                     * @return InstanceIds 指定续费的一个或多个待操作的实例ID。
- 可通过[DescribeDBInstances](https://cloud.tencent.com/document/product/240/38568)接口返回值中的**InstanceIds**获取。
- 每次续费请求的实例数量上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置指定续费的一个或多个待操作的实例ID。
- 可通过[DescribeDBInstances](https://cloud.tencent.com/document/product/240/38568)接口返回值中的**InstanceIds**获取。
- 每次续费请求的实例数量上限为100。
                     * @param _instanceIds 指定续费的一个或多个待操作的实例ID。
- 可通过[DescribeDBInstances](https://cloud.tencent.com/document/product/240/38568)接口返回值中的**InstanceIds**获取。
- 每次续费请求的实例数量上限为100。
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
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的续费时长、是否设置自动续费等属性。包年包月实例该参数为必传参数。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的续费时长、是否设置自动续费等属性。包年包月实例该参数为必传参数。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的续费时长、是否设置自动续费等属性。包年包月实例该参数为必传参数。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的续费时长、是否设置自动续费等属性。包年包月实例该参数为必传参数。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 指定续费的一个或多个待操作的实例ID。
- 可通过[DescribeDBInstances](https://cloud.tencent.com/document/product/240/38568)接口返回值中的**InstanceIds**获取。
- 每次续费请求的实例数量上限为100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的续费时长、是否设置自动续费等属性。包年包月实例该参数为必传参数。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RENEWDBINSTANCESREQUEST_H_
