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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewDiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceRenewDisks请求参数结构体
                */
                class InquirePriceRenewDisksRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewDisksRequest();
                    ~InquirePriceRenewDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘ID列表。每次批量请求云硬盘的上限为 1。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值中的DiskId获取。
                     * @return DiskIds 云硬盘ID列表。每次批量请求云硬盘的上限为 1。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值中的DiskId获取。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置云硬盘ID列表。每次批量请求云硬盘的上限为 1。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值中的DiskId获取。
                     * @param _diskIds 云硬盘ID列表。每次批量请求云硬盘的上限为 1。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值中的DiskId获取。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取续费云硬盘包年包月相关参数设置。
                     * @return RenewDiskChargePrepaid 续费云硬盘包年包月相关参数设置。
                     * 
                     */
                    RenewDiskChargePrepaid GetRenewDiskChargePrepaid() const;

                    /**
                     * 设置续费云硬盘包年包月相关参数设置。
                     * @param _renewDiskChargePrepaid 续费云硬盘包年包月相关参数设置。
                     * 
                     */
                    void SetRenewDiskChargePrepaid(const RenewDiskChargePrepaid& _renewDiskChargePrepaid);

                    /**
                     * 判断参数 RenewDiskChargePrepaid 是否已赋值
                     * @return RenewDiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool RenewDiskChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID列表。每次批量请求云硬盘的上限为 1。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值中的DiskId获取。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 续费云硬盘包年包月相关参数设置。
                     */
                    RenewDiskChargePrepaid m_renewDiskChargePrepaid;
                    bool m_renewDiskChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWDISKSREQUEST_H_
