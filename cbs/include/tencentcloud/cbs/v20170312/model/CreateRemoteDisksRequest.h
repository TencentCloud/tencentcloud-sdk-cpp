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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATEREMOTEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATEREMOTEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>
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
                * CreateRemoteDisks请求参数结构体
                */
                class CreateRemoteDisksRequest : public AbstractModel
                {
                public:
                    CreateRemoteDisksRequest();
                    ~CreateRemoteDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>单副本SSD硬盘计费类型。 </p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @return DiskChargeType <p>单副本SSD硬盘计费类型。 </p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置<p>单副本SSD硬盘计费类型。 </p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @param _diskChargeType <p>单副本SSD硬盘计费类型。 </p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
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
                     * 获取<p>待挂载单副本SSD硬盘的CVM实例ID。</p>
                     * @return InstanceId <p>待挂载单副本SSD硬盘的CVM实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>待挂载单副本SSD硬盘的CVM实例ID。</p>
                     * @param _instanceId <p>待挂载单副本SSD硬盘的CVM实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。</p>
                     * @return Placement <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。</p>
                     * @param _placement <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月单副本SSD硬盘的购买时长、是否设置自动续费等属性。 创建预付费单副本SSD硬盘该参数必传，创建按小时后付费单副本SSD硬盘无需传该参数。</p>
                     * @return DiskChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月单副本SSD硬盘的购买时长、是否设置自动续费等属性。 创建预付费单副本SSD硬盘该参数必传，创建按小时后付费单副本SSD硬盘无需传该参数。</p>
                     * 
                     */
                    RemoteDiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月单副本SSD硬盘的购买时长、是否设置自动续费等属性。 创建预付费单副本SSD硬盘该参数必传，创建按小时后付费单副本SSD硬盘无需传该参数。</p>
                     * @param _diskChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月单副本SSD硬盘的购买时长、是否设置自动续费等属性。 创建预付费单副本SSD硬盘该参数必传，创建按小时后付费单副本SSD硬盘无需传该参数。</p>
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
                     * 获取<p>创建单副本SSD硬盘数量，不传则默认为1。</p>
                     * @return DiskCount <p>创建单副本SSD硬盘数量，不传则默认为1。</p>
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置<p>创建单副本SSD硬盘数量，不传则默认为1。</p>
                     * @param _diskCount <p>创建单副本SSD硬盘数量，不传则默认为1。</p>
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD的显示名称。</p>
                     * @return DiskName <p>单副本SSD的显示名称。</p>
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置<p>单副本SSD的显示名称。</p>
                     * @param _diskName <p>单副本SSD的显示名称。</p>
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                private:

                    /**
                     * <p>单副本SSD硬盘计费类型。 </p><p>枚举值：</p><ul><li>PREPAID： 预付费，即包年包月</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘大小，单位为GiB。</p><p>取值范围：[2000, 7000]</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>待挂载单副本SSD硬盘的CVM实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数指定包年包月单副本SSD硬盘的购买时长、是否设置自动续费等属性。 创建预付费单副本SSD硬盘该参数必传，创建按小时后付费单副本SSD硬盘无需传该参数。</p>
                     */
                    RemoteDiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * <p>创建单副本SSD硬盘数量，不传则默认为1。</p>
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * <p>单副本SSD的显示名称。</p>
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEREMOTEDISKSREQUEST_H_
