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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Disk.h>
#include <tencentcloud/cvd/v20201104/model/Tag.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 云桌面实例详细信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>实例名称</p>
                     * @return Name <p>实例名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _name <p>实例名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>实例状态<br>PENDING：表示创建中<br>LAUNCH_FAILED：表示创建失败<br>RUNNING：表示运行中<br>STOPPED：表示关机<br>STARTING：表示开机中<br>STOPPING：表示关机中<br>REBOOTING：表示重启中<br>SHUTDOWN：表示停止待销毁<br>TERMINATING：表示销毁中<br>DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm侧资源已经不存在了<br>FAILED：表示资源创建失败.这个是业务层面的状态<br>ROLLBACKING：表示回滚中<br>USING：表示使用中<br>RESETTING：表示重置中.</p>
                     * @return Status <p>实例状态<br>PENDING：表示创建中<br>LAUNCH_FAILED：表示创建失败<br>RUNNING：表示运行中<br>STOPPED：表示关机<br>STARTING：表示开机中<br>STOPPING：表示关机中<br>REBOOTING：表示重启中<br>SHUTDOWN：表示停止待销毁<br>TERMINATING：表示销毁中<br>DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm侧资源已经不存在了<br>FAILED：表示资源创建失败.这个是业务层面的状态<br>ROLLBACKING：表示回滚中<br>USING：表示使用中<br>RESETTING：表示重置中.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例状态<br>PENDING：表示创建中<br>LAUNCH_FAILED：表示创建失败<br>RUNNING：表示运行中<br>STOPPED：表示关机<br>STARTING：表示开机中<br>STOPPING：表示关机中<br>REBOOTING：表示重启中<br>SHUTDOWN：表示停止待销毁<br>TERMINATING：表示销毁中<br>DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm侧资源已经不存在了<br>FAILED：表示资源创建失败.这个是业务层面的状态<br>ROLLBACKING：表示回滚中<br>USING：表示使用中<br>RESETTING：表示重置中.</p>
                     * @param _status <p>实例状态<br>PENDING：表示创建中<br>LAUNCH_FAILED：表示创建失败<br>RUNNING：表示运行中<br>STOPPED：表示关机<br>STARTING：表示开机中<br>STOPPING：表示关机中<br>REBOOTING：表示重启中<br>SHUTDOWN：表示停止待销毁<br>TERMINATING：表示销毁中<br>DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm侧资源已经不存在了<br>FAILED：表示资源创建失败.这个是业务层面的状态<br>ROLLBACKING：表示回滚中<br>USING：表示使用中<br>RESETTING：表示重置中.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例拥有者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>实例拥有者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>实例拥有者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>实例拥有者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId <p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId <p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>实例规格<br>S1.LARGE8：4VCPU 2.5GHZ主频 8G内存 无显卡<br>S1.LARGE16：4VCPU 2.5GHZ主频 16G内存 无显卡<br>S2.2XLARGE16：8VCPU 3.2GHZ主频 16G内存 无显卡<br>G1.LARGE16：4VCPU 2.5GHZ主频 16G内存 1/4 NVIDIA T4<br>G1.2XLARGE32：8VCPU 2.5GHZ主频 32G内存 1/2 NVIDIA T4<br>G1.4XLARGE64：16VCPU 2.5GHZ主频 64G内存 1 NVIDIA T4</p>
                     * @return InstanceType <p>实例规格<br>S1.LARGE8：4VCPU 2.5GHZ主频 8G内存 无显卡<br>S1.LARGE16：4VCPU 2.5GHZ主频 16G内存 无显卡<br>S2.2XLARGE16：8VCPU 3.2GHZ主频 16G内存 无显卡<br>G1.LARGE16：4VCPU 2.5GHZ主频 16G内存 1/4 NVIDIA T4<br>G1.2XLARGE32：8VCPU 2.5GHZ主频 32G内存 1/2 NVIDIA T4<br>G1.4XLARGE64：16VCPU 2.5GHZ主频 64G内存 1 NVIDIA T4</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例规格<br>S1.LARGE8：4VCPU 2.5GHZ主频 8G内存 无显卡<br>S1.LARGE16：4VCPU 2.5GHZ主频 16G内存 无显卡<br>S2.2XLARGE16：8VCPU 3.2GHZ主频 16G内存 无显卡<br>G1.LARGE16：4VCPU 2.5GHZ主频 16G内存 1/4 NVIDIA T4<br>G1.2XLARGE32：8VCPU 2.5GHZ主频 32G内存 1/2 NVIDIA T4<br>G1.4XLARGE64：16VCPU 2.5GHZ主频 64G内存 1 NVIDIA T4</p>
                     * @param _instanceType <p>实例规格<br>S1.LARGE8：4VCPU 2.5GHZ主频 8G内存 无显卡<br>S1.LARGE16：4VCPU 2.5GHZ主频 16G内存 无显卡<br>S2.2XLARGE16：8VCPU 3.2GHZ主频 16G内存 无显卡<br>G1.LARGE16：4VCPU 2.5GHZ主频 16G内存 1/4 NVIDIA T4<br>G1.2XLARGE32：8VCPU 2.5GHZ主频 32G内存 1/2 NVIDIA T4<br>G1.4XLARGE64：16VCPU 2.5GHZ主频 64G内存 1 NVIDIA T4</p>
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
                     * 获取<p>系统盘信息</p>
                     * @return SysDisk <p>系统盘信息</p>
                     * 
                     */
                    Disk GetSysDisk() const;

                    /**
                     * 设置<p>系统盘信息</p>
                     * @param _sysDisk <p>系统盘信息</p>
                     * 
                     */
                    void SetSysDisk(const Disk& _sysDisk);

                    /**
                     * 判断参数 SysDisk 是否已赋值
                     * @return SysDisk 是否已赋值
                     * 
                     */
                    bool SysDiskHasBeenSet() const;

                    /**
                     * 获取<p>挂载的数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDiskList <p>挂载的数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Disk> GetDataDiskList() const;

                    /**
                     * 设置<p>挂载的数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDiskList <p>挂载的数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDiskList(const std::vector<Disk>& _dataDiskList);

                    /**
                     * 判断参数 DataDiskList 是否已赋值
                     * @return DataDiskList 是否已赋值
                     * 
                     */
                    bool DataDiskListHasBeenSet() const;

                    /**
                     * 获取<p>桌面实例所在的区域</p>
                     * @return Region <p>桌面实例所在的区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>桌面实例所在的区域</p>
                     * @param _region <p>桌面实例所在的区域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>桌面计费类型</p>
                     * @return ChargeType <p>桌面计费类型</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>桌面计费类型</p>
                     * @param _chargeType <p>桌面计费类型</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。取值范围：<br>NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费<br>NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。</p><p>注意：后付费模式本项为null</p>
                     * @return AutoRenewFlag <p>自动续费标识。取值范围：<br>NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费<br>NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。</p><p>注意：后付费模式本项为null</p>
                     * 
                     */
                    std::string GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。取值范围：<br>NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费<br>NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。</p><p>注意：后付费模式本项为null</p>
                     * @param _autoRenewFlag <p>自动续费标识。取值范围：<br>NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费<br>NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。</p><p>注意：后付费模式本项为null</p>
                     * 
                     */
                    void SetAutoRenewFlag(const std::string& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>桌面创建时间</p>
                     * @return CreateTime <p>桌面创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>桌面创建时间</p>
                     * @param _createTime <p>桌面创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>桌面过期时间</p>
                     * @return ExpiredTime <p>桌面过期时间</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>桌面过期时间</p>
                     * @param _expiredTime <p>桌面过期时间</p>
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>桌面描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>桌面描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>桌面描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>桌面描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>桌面hostname</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName <p>桌面hostname</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>桌面hostname</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostName <p>桌面hostname</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>桌面拥有者显示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName <p>桌面拥有者显示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>桌面拥有者显示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName <p>桌面拥有者显示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>桌面绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindStatus <p>桌面绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置<p>桌面绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindStatus <p>桌面绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建桌面的镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId <p>创建桌面的镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>创建桌面的镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageId <p>创建桌面的镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>用户桌面vpc id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVpcId <p>用户桌面vpc id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVpcId() const;

                    /**
                     * 设置<p>用户桌面vpc id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVpcId <p>用户桌面vpc id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVpcId(const std::string& _userVpcId);

                    /**
                     * 判断参数 UserVpcId 是否已赋值
                     * @return UserVpcId 是否已赋值
                     * 
                     */
                    bool UserVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>用户桌面子网 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSubnetId <p>用户桌面子网 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置<p>用户桌面子网 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userSubnetId <p>用户桌面子网 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>用户桌面ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserPrivateIp <p>用户桌面ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserPrivateIp() const;

                    /**
                     * 设置<p>用户桌面ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userPrivateIp <p>用户桌面ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserPrivateIp(const std::string& _userPrivateIp);

                    /**
                     * 判断参数 UserPrivateIp 是否已赋值
                     * @return UserPrivateIp 是否已赋值
                     * 
                     */
                    bool UserPrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>机器回收站到期时间，只有机器状态为SHUTDOWN该值才有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime <p>机器回收站到期时间，只有机器状态为SHUTDOWN该值才有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>机器回收站到期时间，只有机器状态为SHUTDOWN该值才有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime <p>机器回收站到期时间，只有机器状态为SHUTDOWN该值才有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近一次状态变更原因, AUTO:被动变更,如欠费,如包月实例到期, MANUAL:主动变更,如主动退还实例，当前只有机器处于ISOLATING、SHUTDOWN、TERMINATING、DELETED该字段有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastStatusChangeReason <p>最近一次状态变更原因, AUTO:被动变更,如欠费,如包月实例到期, MANUAL:主动变更,如主动退还实例，当前只有机器处于ISOLATING、SHUTDOWN、TERMINATING、DELETED该字段有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastStatusChangeReason() const;

                    /**
                     * 设置<p>最近一次状态变更原因, AUTO:被动变更,如欠费,如包月实例到期, MANUAL:主动变更,如主动退还实例，当前只有机器处于ISOLATING、SHUTDOWN、TERMINATING、DELETED该字段有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastStatusChangeReason <p>最近一次状态变更原因, AUTO:被动变更,如欠费,如包月实例到期, MANUAL:主动变更,如主动退还实例，当前只有机器处于ISOLATING、SHUTDOWN、TERMINATING、DELETED该字段有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastStatusChangeReason(const std::string& _lastStatusChangeReason);

                    /**
                     * 判断参数 LastStatusChangeReason 是否已赋值
                     * @return LastStatusChangeReason 是否已赋值
                     * 
                     */
                    bool LastStatusChangeReasonHasBeenSet() const;

                    /**
                     * 获取<p>机器最近一次操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperation <p>机器最近一次操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置<p>机器最近一次操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperation <p>机器最近一次操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取<p>机器最近一次操作状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationState <p>机器最近一次操作状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置<p>机器最近一次操作状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationState <p>机器最近一次操作状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取<p>机器最近一次操作请求ReqId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationRequestID <p>机器最近一次操作请求ReqId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationRequestID() const;

                    /**
                     * 设置<p>机器最近一次操作请求ReqId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationRequestID <p>机器最近一次操作请求ReqId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationRequestID(const std::string& _latestOperationRequestID);

                    /**
                     * 判断参数 LatestOperationRequestID 是否已赋值
                     * @return LatestOperationRequestID 是否已赋值
                     * 
                     */
                    bool LatestOperationRequestIDHasBeenSet() const;

                    /**
                     * 获取<p>机器操作系统名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsName <p>机器操作系统名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>机器操作系统名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osName <p>机器操作系统名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>实例逻辑set</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetId <p>实例逻辑set</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置<p>实例逻辑set</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setId <p>实例逻辑set</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取<p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin <p>账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>关联的安全组ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroups <p>关联的安全组ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置<p>关联的安全组ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroups <p>关联的安全组ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取<p>预付费实例降配次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownGradeTimes <p>预付费实例降配次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDownGradeTimes() const;

                    /**
                     * 设置<p>预付费实例降配次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downGradeTimes <p>预付费实例降配次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownGradeTimes(const int64_t& _downGradeTimes);

                    /**
                     * 判断参数 DownGradeTimes 是否已赋值
                     * @return DownGradeTimes 是否已赋值
                     * 
                     */
                    bool DownGradeTimesHasBeenSet() const;

                    /**
                     * 获取<p>桌面绑定的域名策略ID列表，最多五个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainControlPolicies <p>桌面绑定的域名策略ID列表，最多五个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDomainControlPolicies() const;

                    /**
                     * 设置<p>桌面绑定的域名策略ID列表，最多五个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainControlPolicies <p>桌面绑定的域名策略ID列表，最多五个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainControlPolicies(const std::vector<std::string>& _domainControlPolicies);

                    /**
                     * 判断参数 DomainControlPolicies 是否已赋值
                     * @return DomainControlPolicies 是否已赋值
                     * 
                     */
                    bool DomainControlPoliciesHasBeenSet() const;

                    /**
                     * 获取<p>桌面绑定的水印策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaterMarkPolicy <p>桌面绑定的水印策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaterMarkPolicy() const;

                    /**
                     * 设置<p>桌面绑定的水印策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waterMarkPolicy <p>桌面绑定的水印策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaterMarkPolicy(const std::string& _waterMarkPolicy);

                    /**
                     * 判断参数 WaterMarkPolicy 是否已赋值
                     * @return WaterMarkPolicy 是否已赋值
                     * 
                     */
                    bool WaterMarkPolicyHasBeenSet() const;

                    /**
                     * 获取<p>桌面绑定的录屏策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScreenRecordingPolicy <p>桌面绑定的录屏策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScreenRecordingPolicy() const;

                    /**
                     * 设置<p>桌面绑定的录屏策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _screenRecordingPolicy <p>桌面绑定的录屏策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScreenRecordingPolicy(const std::string& _screenRecordingPolicy);

                    /**
                     * 判断参数 ScreenRecordingPolicy 是否已赋值
                     * @return ScreenRecordingPolicy 是否已赋值
                     * 
                     */
                    bool ScreenRecordingPolicyHasBeenSet() const;

                    /**
                     * 获取<p>WHITE --- 白名单策略<br>BLACK --- 黑名单策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainControlPolicyType <p>WHITE --- 白名单策略<br>BLACK --- 黑名单策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainControlPolicyType() const;

                    /**
                     * 设置<p>WHITE --- 白名单策略<br>BLACK --- 黑名单策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainControlPolicyType <p>WHITE --- 白名单策略<br>BLACK --- 黑名单策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainControlPolicyType(const std::string& _domainControlPolicyType);

                    /**
                     * 判断参数 DomainControlPolicyType 是否已赋值
                     * @return DomainControlPolicyType 是否已赋值
                     * 
                     */
                    bool DomainControlPolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>桌面绑定的运行管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunControlPolicy <p>桌面绑定的运行管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunControlPolicy() const;

                    /**
                     * 设置<p>桌面绑定的运行管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runControlPolicy <p>桌面绑定的运行管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunControlPolicy(const std::string& _runControlPolicy);

                    /**
                     * 判断参数 RunControlPolicy 是否已赋值
                     * @return RunControlPolicy 是否已赋值
                     * 
                     */
                    bool RunControlPolicyHasBeenSet() const;

                    /**
                     * 获取<p>桌面绑定的安装管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstallControlPolicy <p>桌面绑定的安装管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstallControlPolicy() const;

                    /**
                     * 设置<p>桌面绑定的安装管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installControlPolicy <p>桌面绑定的安装管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstallControlPolicy(const std::string& _installControlPolicy);

                    /**
                     * 判断参数 InstallControlPolicy 是否已赋值
                     * @return InstallControlPolicy 是否已赋值
                     * 
                     */
                    bool InstallControlPolicyHasBeenSet() const;

                    /**
                     * 获取<p>桌面是否绑定匿名用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnonymousAccess <p>桌面是否绑定匿名用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAnonymousAccess() const;

                    /**
                     * 设置<p>桌面是否绑定匿名用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anonymousAccess <p>桌面是否绑定匿名用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnonymousAccess(const bool& _anonymousAccess);

                    /**
                     * 判断参数 AnonymousAccess 是否已赋值
                     * @return AnonymousAccess 是否已赋值
                     * 
                     */
                    bool AnonymousAccessHasBeenSet() const;

                    /**
                     * 获取<p>实例绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>实例绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>实例绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>实例绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实例状态<br>PENDING：表示创建中<br>LAUNCH_FAILED：表示创建失败<br>RUNNING：表示运行中<br>STOPPED：表示关机<br>STARTING：表示开机中<br>STOPPING：表示关机中<br>REBOOTING：表示重启中<br>SHUTDOWN：表示停止待销毁<br>TERMINATING：表示销毁中<br>DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm侧资源已经不存在了<br>FAILED：表示资源创建失败.这个是业务层面的状态<br>ROLLBACKING：表示回滚中<br>USING：表示使用中<br>RESETTING：表示重置中.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例拥有者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>实例规格<br>S1.LARGE8：4VCPU 2.5GHZ主频 8G内存 无显卡<br>S1.LARGE16：4VCPU 2.5GHZ主频 16G内存 无显卡<br>S2.2XLARGE16：8VCPU 3.2GHZ主频 16G内存 无显卡<br>G1.LARGE16：4VCPU 2.5GHZ主频 16G内存 1/4 NVIDIA T4<br>G1.2XLARGE32：8VCPU 2.5GHZ主频 32G内存 1/2 NVIDIA T4<br>G1.4XLARGE64：16VCPU 2.5GHZ主频 64G内存 1 NVIDIA T4</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>系统盘信息</p>
                     */
                    Disk m_sysDisk;
                    bool m_sysDiskHasBeenSet;

                    /**
                     * <p>挂载的数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Disk> m_dataDiskList;
                    bool m_dataDiskListHasBeenSet;

                    /**
                     * <p>桌面实例所在的区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>桌面计费类型</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>自动续费标识。取值范围：<br>NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费<br>NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。</p><p>注意：后付费模式本项为null</p>
                     */
                    std::string m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>桌面创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>桌面过期时间</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>桌面描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>桌面hostname</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>桌面拥有者显示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>桌面绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * <p>创建桌面的镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>用户桌面vpc id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVpcId;
                    bool m_userVpcIdHasBeenSet;

                    /**
                     * <p>用户桌面子网 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * <p>用户桌面ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userPrivateIp;
                    bool m_userPrivateIpHasBeenSet;

                    /**
                     * <p>机器回收站到期时间，只有机器状态为SHUTDOWN该值才有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>最近一次状态变更原因, AUTO:被动变更,如欠费,如包月实例到期, MANUAL:主动变更,如主动退还实例，当前只有机器处于ISOLATING、SHUTDOWN、TERMINATING、DELETED该字段有意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastStatusChangeReason;
                    bool m_lastStatusChangeReasonHasBeenSet;

                    /**
                     * <p>机器最近一次操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * <p>机器最近一次操作状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * <p>机器最近一次操作请求ReqId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationRequestID;
                    bool m_latestOperationRequestIDHasBeenSet;

                    /**
                     * <p>机器操作系统名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>实例逻辑set</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * <p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>关联的安全组ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * <p>预付费实例降配次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_downGradeTimes;
                    bool m_downGradeTimesHasBeenSet;

                    /**
                     * <p>桌面绑定的域名策略ID列表，最多五个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainControlPolicies;
                    bool m_domainControlPoliciesHasBeenSet;

                    /**
                     * <p>桌面绑定的水印策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waterMarkPolicy;
                    bool m_waterMarkPolicyHasBeenSet;

                    /**
                     * <p>桌面绑定的录屏策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_screenRecordingPolicy;
                    bool m_screenRecordingPolicyHasBeenSet;

                    /**
                     * <p>WHITE --- 白名单策略<br>BLACK --- 黑名单策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainControlPolicyType;
                    bool m_domainControlPolicyTypeHasBeenSet;

                    /**
                     * <p>桌面绑定的运行管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runControlPolicy;
                    bool m_runControlPolicyHasBeenSet;

                    /**
                     * <p>桌面绑定的安装管控策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_installControlPolicy;
                    bool m_installControlPolicyHasBeenSet;

                    /**
                     * <p>桌面是否绑定匿名用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_anonymousAccess;
                    bool m_anonymousAccessHasBeenSet;

                    /**
                     * <p>实例绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_INSTANCEINFO_H_
