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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeOfficialOverview返回参数结构体
                */
                class DescribeOfficialOverviewResponse : public AbstractModel
                {
                public:
                    DescribeOfficialOverviewResponse();
                    ~DescribeOfficialOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云盘实例数量
                     * @return Quantity 云盘实例数量
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取已经使用的总存储量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @return Storage 已经使用的总存储量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取已经分配和使用的总用户数
                     * @return UserCount 已经分配和使用的总用户数
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取本月外网下行流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @return InternetTraffic 本月外网下行流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetInternetTraffic() const;

                    /**
                     * 判断参数 InternetTraffic 是否已赋值
                     * @return InternetTraffic 是否已赋值
                     * 
                     */
                    bool InternetTrafficHasBeenSet() const;

                private:

                    /**
                     * 云盘实例数量
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 已经使用的总存储量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 已经分配和使用的总用户数
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * 本月外网下行流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_internetTraffic;
                    bool m_internetTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALOVERVIEWRESPONSE_H_
