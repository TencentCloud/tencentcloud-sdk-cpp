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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPRICERUNINSTANCEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPRICERUNINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePriceRunInstance请求参数结构体
                */
                class DescribePriceRunInstanceRequest : public AbstractModel
                {
                public:
                    DescribePriceRunInstanceRequest();
                    ~DescribePriceRunInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的机型信息
                     * @return InstanceType 实例的机型信息
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例的机型信息
                     * @param _instanceType 实例的机型信息
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
                     * 获取系统盘信息
                     * @return SystemDisk 系统盘信息
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置系统盘信息
                     * @param _systemDisk 系统盘信息
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
                     * 获取实例个数
                     * @return InstanceCount 实例个数
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置实例个数
                     * @param _instanceCount 实例个数
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
                     * 获取数据盘信息
                     * @return DataDisk 数据盘信息
                     * 
                     */
                    std::vector<DataDisk> GetDataDisk() const;

                    /**
                     * 设置数据盘信息
                     * @param _dataDisk 数据盘信息
                     * 
                     */
                    void SetDataDisk(const std::vector<DataDisk>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取实例计费类型。其中：
0，按资源维度后付费，计算当日用量峰值，例如CPU，内存，硬盘等，仅适用于非GNR系列机型；
1，按小时后付费，单价：xx元/实例/小时，仅适用于GNR机型，如需开通该计费方式请提工单申请；
2，按月后付费，单价：xx元/实例/月，仅适用于GNR机型；
该字段不填时，非GNR机型会默认选择0；GNR机型默认选择2。
                     * @return InstanceChargeType 实例计费类型。其中：
0，按资源维度后付费，计算当日用量峰值，例如CPU，内存，硬盘等，仅适用于非GNR系列机型；
1，按小时后付费，单价：xx元/实例/小时，仅适用于GNR机型，如需开通该计费方式请提工单申请；
2，按月后付费，单价：xx元/实例/月，仅适用于GNR机型；
该字段不填时，非GNR机型会默认选择0；GNR机型默认选择2。
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型。其中：
0，按资源维度后付费，计算当日用量峰值，例如CPU，内存，硬盘等，仅适用于非GNR系列机型；
1，按小时后付费，单价：xx元/实例/小时，仅适用于GNR机型，如需开通该计费方式请提工单申请；
2，按月后付费，单价：xx元/实例/月，仅适用于GNR机型；
该字段不填时，非GNR机型会默认选择0；GNR机型默认选择2。
                     * @param _instanceChargeType 实例计费类型。其中：
0，按资源维度后付费，计算当日用量峰值，例如CPU，内存，硬盘等，仅适用于非GNR系列机型；
1，按小时后付费，单价：xx元/实例/小时，仅适用于GNR机型，如需开通该计费方式请提工单申请；
2，按月后付费，单价：xx元/实例/月，仅适用于GNR机型；
该字段不填时，非GNR机型会默认选择0；GNR机型默认选择2。
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 实例的机型信息
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 系统盘信息
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 实例个数
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 数据盘信息
                     */
                    std::vector<DataDisk> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 实例计费类型。其中：
0，按资源维度后付费，计算当日用量峰值，例如CPU，内存，硬盘等，仅适用于非GNR系列机型；
1，按小时后付费，单价：xx元/实例/小时，仅适用于GNR机型，如需开通该计费方式请提工单申请；
2，按月后付费，单价：xx元/实例/月，仅适用于GNR机型；
该字段不填时，非GNR机型会默认选择0；GNR机型默认选择2。
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPRICERUNINSTANCEREQUEST_H_
