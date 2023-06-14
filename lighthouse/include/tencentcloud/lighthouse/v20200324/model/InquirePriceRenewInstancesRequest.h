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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceRenewInstances请求参数结构体
                */
                class InquirePriceRenewInstancesRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewInstancesRequest();
                    ~InquirePriceRenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待续费的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573 )接口返回值中的InstanceId获取。每次请求批量实例的上限为50。
                     * @return InstanceIds 待续费的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573 )接口返回值中的InstanceId获取。每次请求批量实例的上限为50。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待续费的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573 )接口返回值中的InstanceId获取。每次请求批量实例的上限为50。
                     * @param _instanceIds 待续费的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573 )接口返回值中的InstanceId获取。每次请求批量实例的上限为50。
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
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
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
                     * 获取是否续费数据盘。默认值: false, 即不续费。
                     * @return RenewDataDisk 是否续费数据盘。默认值: false, 即不续费。
                     * 
                     */
                    bool GetRenewDataDisk() const;

                    /**
                     * 设置是否续费数据盘。默认值: false, 即不续费。
                     * @param _renewDataDisk 是否续费数据盘。默认值: false, 即不续费。
                     * 
                     */
                    void SetRenewDataDisk(const bool& _renewDataDisk);

                    /**
                     * 判断参数 RenewDataDisk 是否已赋值
                     * @return RenewDataDisk 是否已赋值
                     * 
                     */
                    bool RenewDataDiskHasBeenSet() const;

                    /**
                     * 获取数据盘是否对齐实例到期时间。默认值: false, 即不对齐。
                     * @return AlignInstanceExpiredTime 数据盘是否对齐实例到期时间。默认值: false, 即不对齐。
                     * 
                     */
                    bool GetAlignInstanceExpiredTime() const;

                    /**
                     * 设置数据盘是否对齐实例到期时间。默认值: false, 即不对齐。
                     * @param _alignInstanceExpiredTime 数据盘是否对齐实例到期时间。默认值: false, 即不对齐。
                     * 
                     */
                    void SetAlignInstanceExpiredTime(const bool& _alignInstanceExpiredTime);

                    /**
                     * 判断参数 AlignInstanceExpiredTime 是否已赋值
                     * @return AlignInstanceExpiredTime 是否已赋值
                     * 
                     */
                    bool AlignInstanceExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 待续费的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573 )接口返回值中的InstanceId获取。每次请求批量实例的上限为50。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 是否续费数据盘。默认值: false, 即不续费。
                     */
                    bool m_renewDataDisk;
                    bool m_renewDataDiskHasBeenSet;

                    /**
                     * 数据盘是否对齐实例到期时间。默认值: false, 即不对齐。
                     */
                    bool m_alignInstanceExpiredTime;
                    bool m_alignInstanceExpiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_
