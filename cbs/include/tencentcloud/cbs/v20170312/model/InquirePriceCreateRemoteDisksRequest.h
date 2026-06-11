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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIREPRICECREATEREMOTEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIREPRICECREATEREMOTEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/RemoteDiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquirePriceCreateRemoteDisks请求参数结构体
                */
                class InquirePriceCreateRemoteDisksRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateRemoteDisksRequest();
                    ~InquirePriceCreateRemoteDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @return DiskChargeType <p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置<p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @param _diskChargeType <p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘大小，单位为GiB。</p><p>取值范围：[2000, 7000]</p>
                     * @return DiskSize <p>单副本SSD硬盘大小，单位为GiB。</p><p>取值范围：[2000, 7000]</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>单副本SSD硬盘大小，单位为GiB。</p><p>取值范围：[2000, 7000]</p>
                     * @param _diskSize <p>单副本SSD硬盘大小，单位为GiB。</p><p>取值范围：[2000, 7000]</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。 创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。</p>
                     * @return DiskChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。 创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。</p>
                     * 
                     */
                    RemoteDiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。 创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。</p>
                     * @param _diskChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。 创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。</p>
                     * 
                     */
                    void SetDiskChargePrepaid(const RemoteDiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>购买单副本SSD硬盘的数量。不填则默认为1。</p>
                     * @return DiskCount <p>购买单副本SSD硬盘的数量。不填则默认为1。</p>
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置<p>购买单副本SSD硬盘的数量。不填则默认为1。</p>
                     * @param _diskCount <p>购买单副本SSD硬盘的数量。不填则默认为1。</p>
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                private:

                    /**
                     * <p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘大小，单位为GiB。</p><p>取值范围：[2000, 7000]</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。 创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。</p>
                     */
                    RemoteDiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * <p>购买单副本SSD硬盘的数量。不填则默认为1。</p>
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIREPRICECREATEREMOTEDISKSREQUEST_H_
