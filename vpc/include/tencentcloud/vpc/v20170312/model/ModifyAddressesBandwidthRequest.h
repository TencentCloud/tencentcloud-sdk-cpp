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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAddressesBandwidth请求参数结构体
                */
                class ModifyAddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ModifyAddressesBandwidthRequest();
                    ~ModifyAddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。

                     * @return AddressIds EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。

                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。

                     * @param _addressIds EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。

                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取调整带宽目标值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * @return InternetMaxBandwidthOut 调整带宽目标值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置调整带宽目标值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * @param _internetMaxBandwidthOut 调整带宽目标值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取包月带宽起始时间(已废弃，输入无效)
                     * @return StartTime 包月带宽起始时间(已废弃，输入无效)
                     * @deprecated
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置包月带宽起始时间(已废弃，输入无效)
                     * @param _startTime 包月带宽起始时间(已废弃，输入无效)
                     * @deprecated
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * @deprecated
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取包月带宽结束时间(已废弃，输入无效)
                     * @return EndTime 包月带宽结束时间(已废弃，输入无效)
                     * @deprecated
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置包月带宽结束时间(已废弃，输入无效)
                     * @param _endTime 包月带宽结束时间(已废弃，输入无效)
                     * @deprecated
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * @deprecated
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。

                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * 调整带宽目标值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 包月带宽起始时间(已废弃，输入无效)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 包月带宽结束时间(已废弃，输入无效)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESBANDWIDTHREQUEST_H_
