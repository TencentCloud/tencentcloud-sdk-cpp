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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_INQUIREPRICERUNINSTANCESREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_INQUIREPRICERUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/SystemDisk.h>
#include <tencentcloud/hai/v20230812/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * InquirePriceRunInstances请求参数结构体
                */
                class InquirePriceRunInstancesRequest : public AbstractModel
                {
                public:
                    InquirePriceRunInstancesRequest();
                    ~InquirePriceRunInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID通过调用接口[DescribeApplications](https://cloud.tencent.com/document/api/1721/101609)获取。
                     * @return ApplicationId 应用ID通过调用接口[DescribeApplications](https://cloud.tencent.com/document/api/1721/101609)获取。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID通过调用接口[DescribeApplications](https://cloud.tencent.com/document/api/1721/101609)获取。
                     * @param _applicationId 应用ID通过调用接口[DescribeApplications](https://cloud.tencent.com/document/api/1721/101609)获取。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取算力套餐类型, 枚举：XL,XL_2X, 3XL, 3XL_2X, 4XL, 24GB_A.
                     * @return BundleType 算力套餐类型, 枚举：XL,XL_2X, 3XL, 3XL_2X, 4XL, 24GB_A.
                     * 
                     */
                    std::string GetBundleType() const;

                    /**
                     * 设置算力套餐类型, 枚举：XL,XL_2X, 3XL, 3XL_2X, 4XL, 24GB_A.
                     * @param _bundleType 算力套餐类型, 枚举：XL,XL_2X, 3XL, 3XL_2X, 4XL, 24GB_A.
                     * 
                     */
                    void SetBundleType(const std::string& _bundleType);

                    /**
                     * 判断参数 BundleType 是否已赋值
                     * @return BundleType 是否已赋值
                     * 
                     */
                    bool BundleTypeHasBeenSet() const;

                    /**
                     * 获取实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * @return SystemDisk 实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * @param _systemDisk 实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取购买实例数量，单次请求实例数量上限为10。
                     * @return InstanceCount 购买实例数量，单次请求实例数量上限为10。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置购买实例数量，单次请求实例数量上限为10。
                     * @param _instanceCount 购买实例数量，单次请求实例数量上限为10。
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
                     * 获取实例显示名称，名称长度限制为128个字符。
                     * @return InstanceName 实例显示名称，名称长度限制为128个字符。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例显示名称，名称长度限制为128个字符。
                     * @param _instanceName 实例显示名称，名称长度限制为128个字符。
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
                     * 获取幂等请求token
                     * @return ClientToken 幂等请求token
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置幂等请求token
                     * @param _clientToken 幂等请求token
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
                     * 获取DryRun为True就是只验接口连通性，默认为False
                     * @return DryRun DryRun为True就是只验接口连通性，默认为False
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置DryRun为True就是只验接口连通性，默认为False
                     * @param _dryRun DryRun为True就是只验接口连通性，默认为False
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
                     * 获取付费方式，POSTPAID_BY_HOUR按量后付费，PREPAID_BY_MONTH预付费按月，PREPAID_BY_DAY预付费按天
                     * @return InstanceChargeType 付费方式，POSTPAID_BY_HOUR按量后付费，PREPAID_BY_MONTH预付费按月，PREPAID_BY_DAY预付费按天
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费方式，POSTPAID_BY_HOUR按量后付费，PREPAID_BY_MONTH预付费按月，PREPAID_BY_DAY预付费按天
                     * @param _instanceChargeType 付费方式，POSTPAID_BY_HOUR按量后付费，PREPAID_BY_MONTH预付费按月，PREPAID_BY_DAY预付费按天
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
                     * 获取预付费参数
                     * @return InstanceChargePrepaid 预付费参数
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费参数
                     * @param _instanceChargePrepaid 预付费参数
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
                     * 应用ID通过调用接口[DescribeApplications](https://cloud.tencent.com/document/api/1721/101609)获取。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 算力套餐类型, 枚举：XL,XL_2X, 3XL, 3XL_2X, 4XL, 24GB_A.
                     */
                    std::string m_bundleType;
                    bool m_bundleTypeHasBeenSet;

                    /**
                     * 实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 购买实例数量，单次请求实例数量上限为10。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 实例显示名称，名称长度限制为128个字符。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 幂等请求token
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * DryRun为True就是只验接口连通性，默认为False
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 付费方式，POSTPAID_BY_HOUR按量后付费，PREPAID_BY_MONTH预付费按月，PREPAID_BY_DAY预付费按天
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 预付费参数
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_INQUIREPRICERUNINSTANCESREQUEST_H_
