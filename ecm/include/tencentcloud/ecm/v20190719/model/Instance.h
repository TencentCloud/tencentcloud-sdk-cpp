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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>
#include <tencentcloud/ecm/v20190719/model/SimpleModule.h>
#include <tencentcloud/ecm/v20190719/model/Position.h>
#include <tencentcloud/ecm/v20190719/model/Internet.h>
#include <tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/DiskInfo.h>
#include <tencentcloud/ecm/v20190719/model/VirtualPrivateCloud.h>
#include <tencentcloud/ecm/v20190719/model/PhysicalPosition.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 用于描述实例相关的信息。
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取实例名称，如ens-34241f3s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称，如ens-34241f3s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，如ens-34241f3s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称，如ens-34241f3s。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例状态。取值范围：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中。
                     * @return InstanceState 实例状态。取值范围：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中。
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态。取值范围：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中。
                     * @param _instanceState 实例状态。取值范围：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中。
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取实例当前使用的镜像的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 实例当前使用的镜像的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 设置实例当前使用的镜像的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 实例当前使用的镜像的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取实例当前所属的模块简要信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimpleModule 实例当前所属的模块简要信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SimpleModule GetSimpleModule() const;

                    /**
                     * 设置实例当前所属的模块简要信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _simpleModule 实例当前所属的模块简要信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimpleModule(const SimpleModule& _simpleModule);

                    /**
                     * 判断参数 SimpleModule 是否已赋值
                     * @return SimpleModule 是否已赋值
                     * 
                     */
                    bool SimpleModuleHasBeenSet() const;

                    /**
                     * 获取实例所在的位置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 实例所在的位置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Position GetPosition() const;

                    /**
                     * 设置实例所在的位置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 实例所在的位置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const Position& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取实例的网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Internet 实例的网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Internet GetInternet() const;

                    /**
                     * 设置实例的网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internet 实例的网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternet(const Internet& _internet);

                    /**
                     * 判断参数 Internet 是否已赋值
                     * @return Internet 是否已赋值
                     * 
                     */
                    bool InternetHasBeenSet() const;

                    /**
                     * 获取实例的配置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTypeConfig 实例的配置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceTypeConfig GetInstanceTypeConfig() const;

                    /**
                     * 设置实例的配置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTypeConfig 实例的配置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig);

                    /**
                     * 判断参数 InstanceTypeConfig 是否已赋值
                     * @return InstanceTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigHasBeenSet() const;

                    /**
                     * 获取实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取实例最后一次操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperation 实例最后一次操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置实例最后一次操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperation 实例最后一次操作。
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
                     * 获取实例最后一次操作结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationState 实例最后一次操作结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置实例最后一次操作结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationState 实例最后一次操作结果。
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
                     * 获取实例业务状态。取值范围：
NORMAL：表示正常状态的实例
EXPIRED：表示过期的实例
PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestrictState 实例业务状态。取值范围：
NORMAL：表示正常状态的实例
EXPIRED：表示过期的实例
PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置实例业务状态。取值范围：
NORMAL：表示正常状态的实例
EXPIRED：表示过期的实例
PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restrictState 实例业务状态。取值范围：
NORMAL：表示正常状态的实例
EXPIRED：表示过期的实例
PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取系统盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDiskSize 系统盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSystemDiskSize() const;

                    /**
                     * 设置系统盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDiskSize 系统盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDiskSize(const int64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取数据盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDiskSize 数据盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置数据盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDiskSize 数据盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取实例UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UUID 实例UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置实例UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uUID 实例UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取付费方式。
    0为后付费。
    1为预付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 付费方式。
    0为后付费。
    1为预付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费方式。
    0为后付费。
    1为预付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 付费方式。
    0为后付费。
    1为预付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取过期时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 隔离时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置隔离时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime 隔离时间。格式为yyyy-mm-dd HH:mm:ss。
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
                     * 获取是否自动续费。
      0为不自动续费。
      1为自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 是否自动续费。
      0为不自动续费。
      1为自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置是否自动续费。
      0为不自动续费。
      1为自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 是否自动续费。
      0为不自动续费。
      1为自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取过期状态。
    NORMAL 表示机器运行正常。
    WILL_EXPIRE 表示即将过期。
    EXPIRED 表示已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireState 过期状态。
    NORMAL 表示机器运行正常。
    WILL_EXPIRE 表示即将过期。
    EXPIRED 表示已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireState() const;

                    /**
                     * 设置过期状态。
    NORMAL 表示机器运行正常。
    WILL_EXPIRE 表示即将过期。
    EXPIRED 表示已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireState 过期状态。
    NORMAL 表示机器运行正常。
    WILL_EXPIRE 表示即将过期。
    EXPIRED 表示已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireState(const std::string& _expireState);

                    /**
                     * 判断参数 ExpireState 是否已赋值
                     * @return ExpireState 是否已赋值
                     * 
                     */
                    bool ExpireStateHasBeenSet() const;

                    /**
                     * 获取系统盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk 系统盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskInfo GetSystemDisk() const;

                    /**
                     * 设置系统盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk 系统盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDisk(const DiskInfo& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks 数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskInfo> GetDataDisks() const;

                    /**
                     * 设置数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks 数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisks(const std::vector<DiskInfo>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取新实例标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewFlag 新实例标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNewFlag() const;

                    /**
                     * 设置新实例标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newFlag 新实例标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewFlag(const int64_t& _newFlag);

                    /**
                     * 判断参数 NewFlag 是否已赋值
                     * @return NewFlag 是否已赋值
                     * 
                     */
                    bool NewFlagHasBeenSet() const;

                    /**
                     * 获取实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupIds 实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroupIds 实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取VPC属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualPrivateCloud VPC属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置VPC属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualPrivateCloud VPC属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取实例运营商字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ISP 实例运营商字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置实例运营商字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iSP 实例运营商字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取物理位置信息。注意该字段目前为保留字段，均为空值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalPosition 物理位置信息。注意该字段目前为保留字段，均为空值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PhysicalPosition GetPhysicalPosition() const;

                    /**
                     * 设置物理位置信息。注意该字段目前为保留字段，均为空值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _physicalPosition 物理位置信息。注意该字段目前为保留字段，均为空值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhysicalPosition(const PhysicalPosition& _physicalPosition);

                    /**
                     * 判断参数 PhysicalPosition 是否已赋值
                     * @return PhysicalPosition 是否已赋值
                     * 
                     */
                    bool PhysicalPositionHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称，如ens-34241f3s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例状态。取值范围：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中。
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 实例当前使用的镜像的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 实例当前所属的模块简要信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SimpleModule m_simpleModule;
                    bool m_simpleModuleHasBeenSet;

                    /**
                     * 实例所在的位置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 实例的网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Internet m_internet;
                    bool m_internetHasBeenSet;

                    /**
                     * 实例的配置相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceTypeConfig m_instanceTypeConfig;
                    bool m_instanceTypeConfigHasBeenSet;

                    /**
                     * 实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 实例最后一次操作。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 实例最后一次操作结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 实例业务状态。取值范围：
NORMAL：表示正常状态的实例
EXPIRED：表示过期的实例
PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * 系统盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * 数据盘大小，单位GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * 实例UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 付费方式。
    0为后付费。
    1为预付费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 过期时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 隔离时间。格式为yyyy-mm-dd HH:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 是否自动续费。
      0为不自动续费。
      1为自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 过期状态。
    NORMAL 表示机器运行正常。
    WILL_EXPIRE 表示即将过期。
    EXPIRED 表示已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireState;
                    bool m_expireStateHasBeenSet;

                    /**
                     * 系统盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskInfo m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskInfo> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 新实例标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_newFlag;
                    bool m_newFlagHasBeenSet;

                    /**
                     * 实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * VPC属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 实例运营商字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * 物理位置信息。注意该字段目前为保留字段，均为空值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PhysicalPosition m_physicalPosition;
                    bool m_physicalPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCE_H_
