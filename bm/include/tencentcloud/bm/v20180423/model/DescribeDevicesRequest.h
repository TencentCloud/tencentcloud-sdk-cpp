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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/Tag.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDevices请求参数结构体
                */
                class DescribeDevicesRequest : public AbstractModel
                {
                public:
                    DescribeDevicesRequest();
                    ~DescribeDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取机型ID，通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询
                     * @return DeviceClassCode 机型ID，通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置机型ID，通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询
                     * @param _deviceClassCode 机型ID，通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取设备ID数组
                     * @return InstanceIds 设备ID数组
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置设备ID数组
                     * @param _instanceIds 设备ID数组
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
                     * 获取外网IP数组
                     * @return WanIps 外网IP数组
                     * 
                     */
                    std::vector<std::string> GetWanIps() const;

                    /**
                     * 设置外网IP数组
                     * @param _wanIps 外网IP数组
                     * 
                     */
                    void SetWanIps(const std::vector<std::string>& _wanIps);

                    /**
                     * 判断参数 WanIps 是否已赋值
                     * @return WanIps 是否已赋值
                     * 
                     */
                    bool WanIpsHasBeenSet() const;

                    /**
                     * 获取内网IP数组
                     * @return LanIps 内网IP数组
                     * 
                     */
                    std::vector<std::string> GetLanIps() const;

                    /**
                     * 设置内网IP数组
                     * @param _lanIps 内网IP数组
                     * 
                     */
                    void SetLanIps(const std::vector<std::string>& _lanIps);

                    /**
                     * 判断参数 LanIps 是否已赋值
                     * @return LanIps 是否已赋值
                     * 
                     */
                    bool LanIpsHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return Alias 设备名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置设备名称
                     * @param _alias 设备名称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取模糊IP查询
                     * @return VagueIp 模糊IP查询
                     * 
                     */
                    std::string GetVagueIp() const;

                    /**
                     * 设置模糊IP查询
                     * @param _vagueIp 模糊IP查询
                     * 
                     */
                    void SetVagueIp(const std::string& _vagueIp);

                    /**
                     * 判断参数 VagueIp 是否已赋值
                     * @return VagueIp 是否已赋值
                     * 
                     */
                    bool VagueIpHasBeenSet() const;

                    /**
                     * 获取设备到期时间查询的起始时间
                     * @return DeadlineStartTime 设备到期时间查询的起始时间
                     * 
                     */
                    std::string GetDeadlineStartTime() const;

                    /**
                     * 设置设备到期时间查询的起始时间
                     * @param _deadlineStartTime 设备到期时间查询的起始时间
                     * 
                     */
                    void SetDeadlineStartTime(const std::string& _deadlineStartTime);

                    /**
                     * 判断参数 DeadlineStartTime 是否已赋值
                     * @return DeadlineStartTime 是否已赋值
                     * 
                     */
                    bool DeadlineStartTimeHasBeenSet() const;

                    /**
                     * 获取设备到期时间查询的结束时间
                     * @return DeadlineEndTime 设备到期时间查询的结束时间
                     * 
                     */
                    std::string GetDeadlineEndTime() const;

                    /**
                     * 设置设备到期时间查询的结束时间
                     * @param _deadlineEndTime 设备到期时间查询的结束时间
                     * 
                     */
                    void SetDeadlineEndTime(const std::string& _deadlineEndTime);

                    /**
                     * 判断参数 DeadlineEndTime 是否已赋值
                     * @return DeadlineEndTime 是否已赋值
                     * 
                     */
                    bool DeadlineEndTimeHasBeenSet() const;

                    /**
                     * 获取自动续费标志 0:不自动续费，1:自动续费
                     * @return AutoRenewFlag 自动续费标志 0:不自动续费，1:自动续费
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志 0:不自动续费，1:自动续费
                     * @param _autoRenewFlag 自动续费标志 0:不自动续费，1:自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取私有网络唯一ID
                     * @return VpcId 私有网络唯一ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络唯一ID
                     * @param _vpcId 私有网络唯一ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网唯一ID
                     * @return SubnetId 子网唯一ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一ID
                     * @param _subnetId 子网唯一ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取设备类型，取值有: compute(计算型), standard(标准型), storage(存储型) 等
                     * @return DeviceType 设备类型，取值有: compute(计算型), standard(标准型), storage(存储型) 等
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，取值有: compute(计算型), standard(标准型), storage(存储型) 等
                     * @param _deviceType 设备类型，取值有: compute(计算型), standard(标准型), storage(存储型) 等
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取竞价实例机器的过滤。如果未指定此参数，则不做过滤。0: 查询非竞价实例的机器; 1: 查询竞价实例的机器。
                     * @return IsLuckyDevice 竞价实例机器的过滤。如果未指定此参数，则不做过滤。0: 查询非竞价实例的机器; 1: 查询竞价实例的机器。
                     * 
                     */
                    uint64_t GetIsLuckyDevice() const;

                    /**
                     * 设置竞价实例机器的过滤。如果未指定此参数，则不做过滤。0: 查询非竞价实例的机器; 1: 查询竞价实例的机器。
                     * @param _isLuckyDevice 竞价实例机器的过滤。如果未指定此参数，则不做过滤。0: 查询非竞价实例的机器; 1: 查询竞价实例的机器。
                     * 
                     */
                    void SetIsLuckyDevice(const uint64_t& _isLuckyDevice);

                    /**
                     * 判断参数 IsLuckyDevice 是否已赋值
                     * @return IsLuckyDevice 是否已赋值
                     * 
                     */
                    bool IsLuckyDeviceHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderField 排序字段
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段
                     * @param _orderField 排序字段
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式，取值：0:增序(默认)，1:降序
                     * @return Order 排序方式，取值：0:增序(默认)，1:降序
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式，取值：0:增序(默认)，1:降序
                     * @param _order 排序方式，取值：0:增序(默认)，1:降序
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取按照维保方式过滤。可取值为 Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
                     * @return MaintainStatus 按照维保方式过滤。可取值为 Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
                     * 
                     */
                    std::string GetMaintainStatus() const;

                    /**
                     * 设置按照维保方式过滤。可取值为 Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
                     * @param _maintainStatus 按照维保方式过滤。可取值为 Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
                     * 
                     */
                    void SetMaintainStatus(const std::string& _maintainStatus);

                    /**
                     * 判断参数 MaintainStatus 是否已赋值
                     * @return MaintainStatus 是否已赋值
                     * 
                     */
                    bool MaintainStatusHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 机型ID，通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 设备ID数组
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 外网IP数组
                     */
                    std::vector<std::string> m_wanIps;
                    bool m_wanIpsHasBeenSet;

                    /**
                     * 内网IP数组
                     */
                    std::vector<std::string> m_lanIps;
                    bool m_lanIpsHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 模糊IP查询
                     */
                    std::string m_vagueIp;
                    bool m_vagueIpHasBeenSet;

                    /**
                     * 设备到期时间查询的起始时间
                     */
                    std::string m_deadlineStartTime;
                    bool m_deadlineStartTimeHasBeenSet;

                    /**
                     * 设备到期时间查询的结束时间
                     */
                    std::string m_deadlineEndTime;
                    bool m_deadlineEndTimeHasBeenSet;

                    /**
                     * 自动续费标志 0:不自动续费，1:自动续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 私有网络唯一ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网唯一ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 设备类型，取值有: compute(计算型), standard(标准型), storage(存储型) 等
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 竞价实例机器的过滤。如果未指定此参数，则不做过滤。0: 查询非竞价实例的机器; 1: 查询竞价实例的机器。
                     */
                    uint64_t m_isLuckyDevice;
                    bool m_isLuckyDeviceHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式，取值：0:增序(默认)，1:降序
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 按照维保方式过滤。可取值为 Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
                     */
                    std::string m_maintainStatus;
                    bool m_maintainStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICESREQUEST_H_
