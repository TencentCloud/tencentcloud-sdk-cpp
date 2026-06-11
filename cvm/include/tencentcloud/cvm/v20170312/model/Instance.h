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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>
#include <tencentcloud/cvm/v20170312/model/GPUInfo.h>
#include <tencentcloud/cvm/v20170312/model/Metadata.h>
#include <tencentcloud/cvm/v20170312/model/CpuTopology.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例的信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例所在的位置。</p>
                     * @return Placement <p>实例所在的位置。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>实例所在的位置。</p>
                     * @param _placement <p>实例所在的位置。</p>
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
                     * 获取<p>实例<code>ID</code>。</p>
                     * @return InstanceId <p>实例<code>ID</code>。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例<code>ID</code>。</p>
                     * @param _instanceId <p>实例<code>ID</code>。</p>
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
                     * 获取<p>实例机型。</p>
                     * @return InstanceType <p>实例机型。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例机型。</p>
                     * @param _instanceType <p>实例机型。</p>
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
                     * 获取<p>实例的CPU核数，单位：核。</p>
                     * @return CPU <p>实例的CPU核数，单位：核。</p>
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置<p>实例的CPU核数，单位：核。</p>
                     * @param _cPU <p>实例的CPU核数，单位：核。</p>
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>实例内存容量，单位：<code>GiB</code>。</p>
                     * @return Memory <p>实例内存容量，单位：<code>GiB</code>。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存容量，单位：<code>GiB</code>。</p>
                     * @param _memory <p>实例内存容量，单位：<code>GiB</code>。</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例</li><li>EXPIRED：表示过期的实例</li><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。</li></p>
                     * @return RestrictState <p>实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例</li><li>EXPIRED：表示过期的实例</li><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。</li></p>
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置<p>实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例</li><li>EXPIRED：表示过期的实例</li><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。</li></p>
                     * @param _restrictState <p>实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例</li><li>EXPIRED：表示过期的实例</li><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。</li></p>
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
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
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
                     * 获取<p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。取值范围：<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li></p>
                     * @return InstanceChargeType <p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。取值范围：<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li></p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。取值范围：<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li></p>
                     * @param _instanceChargeType <p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。取值范围：<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li></p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例系统盘信息。</p>
                     * @return SystemDisk <p>实例系统盘信息。</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>实例系统盘信息。</p>
                     * @param _systemDisk <p>实例系统盘信息。</p>
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
                     * 获取<p>实例数据盘信息。</p>
                     * @return DataDisks <p>实例数据盘信息。</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>实例数据盘信息。</p>
                     * @param _dataDisks <p>实例数据盘信息。</p>
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>实例主网卡的内网<code>IP</code>列表。</p>
                     * @return PrivateIpAddresses <p>实例主网卡的内网<code>IP</code>列表。</p>
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置<p>实例主网卡的内网<code>IP</code>列表。</p>
                     * @param _privateIpAddresses <p>实例主网卡的内网<code>IP</code>列表。</p>
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>实例主网卡的公网<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses <p>实例主网卡的公网<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置<p>实例主网卡的公网<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAddresses <p>实例主网卡的公网<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>实例带宽信息。</p>
                     * @return InternetAccessible <p>实例带宽信息。</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>实例带宽信息。</p>
                     * @param _internetAccessible <p>实例带宽信息。</p>
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>实例所属虚拟私有网络信息。</p>
                     * @return VirtualPrivateCloud <p>实例所属虚拟私有网络信息。</p>
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置<p>实例所属虚拟私有网络信息。</p>
                     * @param _virtualPrivateCloud <p>实例所属虚拟私有网络信息。</p>
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
                     * 获取<p>生产实例所使用的镜像<code>ID</code>。</p>
                     * @return ImageId <p>生产实例所使用的镜像<code>ID</code>。</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>生产实例所使用的镜像<code>ID</code>。</p>
                     * @param _imageId <p>生产实例所使用的镜像<code>ID</code>。</p>
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
                     * 获取<p>自动续费标识。取值范围：<br><li><code>NOTIFY_AND_MANUAL_RENEW</code>：表示通知即将过期，但不自动续费</li><li><code>NOTIFY_AND_AUTO_RENEW</code>：表示通知即将过期，而且自动续费</li><li><code>DISABLE_NOTIFY_AND_MANUAL_RENEW</code>：表示不通知即将过期，也不自动续费。</p></li><li>注意：后付费模式本项为null</li>
                     * @return RenewFlag <p>自动续费标识。取值范围：<br><li><code>NOTIFY_AND_MANUAL_RENEW</code>：表示通知即将过期，但不自动续费</li><li><code>NOTIFY_AND_AUTO_RENEW</code>：表示通知即将过期，而且自动续费</li><li><code>DISABLE_NOTIFY_AND_MANUAL_RENEW</code>：表示不通知即将过期，也不自动续费。</p></li><li>注意：后付费模式本项为null</li>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。取值范围：<br><li><code>NOTIFY_AND_MANUAL_RENEW</code>：表示通知即将过期，但不自动续费</li><li><code>NOTIFY_AND_AUTO_RENEW</code>：表示通知即将过期，而且自动续费</li><li><code>DISABLE_NOTIFY_AND_MANUAL_RENEW</code>：表示不通知即将过期，也不自动续费。</p></li><li>注意：后付费模式本项为null</li>
                     * @param _renewFlag <p>自动续费标识。取值范围：<br><li><code>NOTIFY_AND_MANUAL_RENEW</code>：表示通知即将过期，但不自动续费</li><li><code>NOTIFY_AND_AUTO_RENEW</code>：表示通知即将过期，而且自动续费</li><li><code>DISABLE_NOTIFY_AND_MANUAL_RENEW</code>：表示不通知即将过期，也不自动续费。</p></li><li>注意：后付费模式本项为null</li>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * @return CreatedTime <p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * @param _createdTime <p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>到期时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。注意：后付费模式本项为null</p>
                     * @return ExpiredTime <p>到期时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。注意：后付费模式本项为null</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>到期时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。注意：后付费模式本项为null</p>
                     * @param _expiredTime <p>到期时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。注意：后付费模式本项为null</p>
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
                     * 获取<p>操作系统名称。</p>
                     * @return OsName <p>操作系统名称。</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>操作系统名称。</p>
                     * @param _osName <p>操作系统名称。</p>
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
                     * 获取<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。</p>
                     * @return SecurityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。</p>
                     * @param _securityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。</p>
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
                     * 获取<p>实例登录设置。目前只返回实例所关联的密钥。</p>
                     * @return LoginSettings <p>实例登录设置。目前只返回实例所关联的密钥。</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置。目前只返回实例所关联的密钥。</p>
                     * @param _loginSettings <p>实例登录设置。目前只返回实例所关联的密钥。</p>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>实例状态。状态类型详见<a href="https://cloud.tencent.com/document/api/213/15753#InstanceStatus">实例状态表</a></p>
                     * @return InstanceState <p>实例状态。状态类型详见<a href="https://cloud.tencent.com/document/api/213/15753#InstanceStatus">实例状态表</a></p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>实例状态。状态类型详见<a href="https://cloud.tencent.com/document/api/213/15753#InstanceStatus">实例状态表</a></p>
                     * @param _instanceState <p>实例状态。状态类型详见<a href="https://cloud.tencent.com/document/api/213/15753#InstanceStatus">实例状态表</a></p>
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
                     * 获取<p>实例关联的标签列表。</p>
                     * @return Tags <p>实例关联的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>实例关联的标签列表。</p>
                     * @param _tags <p>实例关联的标签列表。</p>
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
                     * 获取<p>实例的关机计费模式。<br>取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件</li></p>
                     * @return StopChargingMode <p>实例的关机计费模式。<br>取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件</li></p>
                     * 
                     */
                    std::string GetStopChargingMode() const;

                    /**
                     * 设置<p>实例的关机计费模式。<br>取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件</li></p>
                     * @param _stopChargingMode <p>实例的关机计费模式。<br>取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件</li></p>
                     * 
                     */
                    void SetStopChargingMode(const std::string& _stopChargingMode);

                    /**
                     * 判断参数 StopChargingMode 是否已赋值
                     * @return StopChargingMode 是否已赋值
                     * 
                     */
                    bool StopChargingModeHasBeenSet() const;

                    /**
                     * 获取<p>实例全局唯一ID</p>
                     * @return Uuid <p>实例全局唯一ID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>实例全局唯一ID</p>
                     * @param _uuid <p>实例全局唯一ID</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>实例的最新操作。例：StopInstances、ResetInstance。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperation <p>实例的最新操作。例：StopInstances、ResetInstance。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置<p>实例的最新操作。例：StopInstances、ResetInstance。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperation <p>实例的最新操作。例：StopInstances、ResetInstance。</p>
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
                     * 获取<p>实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功</li><li>OPERATING：表示操作执行中</li><li>FAILED：表示操作失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationState <p>实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功</li><li>OPERATING：表示操作执行中</li><li>FAILED：表示操作失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置<p>实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功</li><li>OPERATING：表示操作执行中</li><li>FAILED：表示操作失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationState <p>实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功</li><li>OPERATING：表示操作执行中</li><li>FAILED：表示操作失败</li></p>
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
                     * 获取<p>实例最新操作的唯一请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationRequestId <p>实例最新操作的唯一请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置<p>实例最新操作的唯一请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationRequestId <p>实例最新操作的唯一请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     * 
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组ID。</p>
                     * @return DisasterRecoverGroupId <p>分散置放群组ID。</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置<p>分散置放群组ID。</p>
                     * @param _disasterRecoverGroupId <p>分散置放群组ID。</p>
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>实例的IPv6地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6Addresses <p>实例的IPv6地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIPv6Addresses() const;

                    /**
                     * 设置<p>实例的IPv6地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv6Addresses <p>实例的IPv6地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPv6Addresses(const std::vector<std::string>& _iPv6Addresses);

                    /**
                     * 判断参数 IPv6Addresses 是否已赋值
                     * @return IPv6Addresses 是否已赋值
                     * 
                     */
                    bool IPv6AddressesHasBeenSet() const;

                    /**
                     * 获取<p>CAM角色名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CamRoleName <p>CAM角色名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>CAM角色名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _camRoleName <p>CAM角色名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取<p>高性能计算集群<code>ID</code>。</p>
                     * @return HpcClusterId <p>高性能计算集群<code>ID</code>。</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>高性能计算集群<code>ID</code>。</p>
                     * @param _hpcClusterId <p>高性能计算集群<code>ID</code>。</p>
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>高性能计算集群<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RdmaIpAddresses <p>高性能计算集群<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRdmaIpAddresses() const;

                    /**
                     * 设置<p>高性能计算集群<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rdmaIpAddresses <p>高性能计算集群<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRdmaIpAddresses(const std::vector<std::string>& _rdmaIpAddresses);

                    /**
                     * 判断参数 RdmaIpAddresses 是否已赋值
                     * @return RdmaIpAddresses 是否已赋值
                     * 
                     */
                    bool RdmaIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>实例所在的专用集群<code>ID</code>。</p>
                     * @return DedicatedClusterId <p>实例所在的专用集群<code>ID</code>。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>实例所在的专用集群<code>ID</code>。</p>
                     * @param _dedicatedClusterId <p>实例所在的专用集群<code>ID</code>。</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>实例隔离类型。取值范围：<br><li>ARREAR：表示欠费隔离<br></li><li>EXPIRE：表示到期隔离<br></li><li>MANMADE：表示主动退还隔离<br></li><li>NOTISOLATED：表示未隔离<br></li></p>
                     * @return IsolatedSource <p>实例隔离类型。取值范围：<br><li>ARREAR：表示欠费隔离<br></li><li>EXPIRE：表示到期隔离<br></li><li>MANMADE：表示主动退还隔离<br></li><li>NOTISOLATED：表示未隔离<br></li></p>
                     * 
                     */
                    std::string GetIsolatedSource() const;

                    /**
                     * 设置<p>实例隔离类型。取值范围：<br><li>ARREAR：表示欠费隔离<br></li><li>EXPIRE：表示到期隔离<br></li><li>MANMADE：表示主动退还隔离<br></li><li>NOTISOLATED：表示未隔离<br></li></p>
                     * @param _isolatedSource <p>实例隔离类型。取值范围：<br><li>ARREAR：表示欠费隔离<br></li><li>EXPIRE：表示到期隔离<br></li><li>MANMADE：表示主动退还隔离<br></li><li>NOTISOLATED：表示未隔离<br></li></p>
                     * 
                     */
                    void SetIsolatedSource(const std::string& _isolatedSource);

                    /**
                     * 判断参数 IsolatedSource 是否已赋值
                     * @return IsolatedSource 是否已赋值
                     * 
                     */
                    bool IsolatedSourceHasBeenSet() const;

                    /**
                     * 获取<p>GPU信息。如果是gpu类型子机，该值会返回GPU信息，如果是其他类型子机则不返回。</p>
                     * @return GPUInfo <p>GPU信息。如果是gpu类型子机，该值会返回GPU信息，如果是其他类型子机则不返回。</p>
                     * 
                     */
                    GPUInfo GetGPUInfo() const;

                    /**
                     * 设置<p>GPU信息。如果是gpu类型子机，该值会返回GPU信息，如果是其他类型子机则不返回。</p>
                     * @param _gPUInfo <p>GPU信息。如果是gpu类型子机，该值会返回GPU信息，如果是其他类型子机则不返回。</p>
                     * 
                     */
                    void SetGPUInfo(const GPUInfo& _gPUInfo);

                    /**
                     * 判断参数 GPUInfo 是否已赋值
                     * @return GPUInfo 是否已赋值
                     * 
                     */
                    bool GPUInfoHasBeenSet() const;

                    /**
                     * 获取<p>实例的操作系统许可类型，默认为TencentCloud</p>
                     * @return LicenseType <p>实例的操作系统许可类型，默认为TencentCloud</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>实例的操作系统许可类型，默认为TencentCloud</p>
                     * @param _licenseType <p>实例的操作系统许可类型，默认为TencentCloud</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br>默认取值：false。</p>
                     * @return DisableApiTermination <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br>默认取值：false。</p>
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置<p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br>默认取值：false。</p>
                     * @param _disableApiTermination <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br>默认取值：false。</p>
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取<p>默认登录用户。</p>
                     * @return DefaultLoginUser <p>默认登录用户。</p>
                     * 
                     */
                    std::string GetDefaultLoginUser() const;

                    /**
                     * 设置<p>默认登录用户。</p>
                     * @param _defaultLoginUser <p>默认登录用户。</p>
                     * 
                     */
                    void SetDefaultLoginUser(const std::string& _defaultLoginUser);

                    /**
                     * 判断参数 DefaultLoginUser 是否已赋值
                     * @return DefaultLoginUser 是否已赋值
                     * 
                     */
                    bool DefaultLoginUserHasBeenSet() const;

                    /**
                     * 获取<p>默认登录端口。</p>
                     * @return DefaultLoginPort <p>默认登录端口。</p>
                     * 
                     */
                    int64_t GetDefaultLoginPort() const;

                    /**
                     * 设置<p>默认登录端口。</p>
                     * @param _defaultLoginPort <p>默认登录端口。</p>
                     * 
                     */
                    void SetDefaultLoginPort(const int64_t& _defaultLoginPort);

                    /**
                     * 判断参数 DefaultLoginPort 是否已赋值
                     * @return DefaultLoginPort 是否已赋值
                     * 
                     */
                    bool DefaultLoginPortHasBeenSet() const;

                    /**
                     * 获取<p>实例的最新操作错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationErrorMsg <p>实例的最新操作错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationErrorMsg() const;

                    /**
                     * 设置<p>实例的最新操作错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationErrorMsg <p>实例的最新操作错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationErrorMsg(const std::string& _latestOperationErrorMsg);

                    /**
                     * 判断参数 LatestOperationErrorMsg 是否已赋值
                     * @return LatestOperationErrorMsg 是否已赋值
                     * 
                     */
                    bool LatestOperationErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>自定义metadata，本参数对应创建 CVM时指定的Metadata 信息。<strong>注：内测中</strong>。</p>
                     * @return Metadata <p>自定义metadata，本参数对应创建 CVM时指定的Metadata 信息。<strong>注：内测中</strong>。</p>
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置<p>自定义metadata，本参数对应创建 CVM时指定的Metadata 信息。<strong>注：内测中</strong>。</p>
                     * @param _metadata <p>自定义metadata，本参数对应创建 CVM时指定的Metadata 信息。<strong>注：内测中</strong>。</p>
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>实例绑定的公网IPv6地址。</p>
                     * @return PublicIPv6Addresses <p>实例绑定的公网IPv6地址。</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIPv6Addresses() const;

                    /**
                     * 设置<p>实例绑定的公网IPv6地址。</p>
                     * @param _publicIPv6Addresses <p>实例绑定的公网IPv6地址。</p>
                     * 
                     */
                    void SetPublicIPv6Addresses(const std::vector<std::string>& _publicIPv6Addresses);

                    /**
                     * 判断参数 PublicIPv6Addresses 是否已赋值
                     * @return PublicIPv6Addresses 是否已赋值
                     * 
                     */
                    bool PublicIPv6AddressesHasBeenSet() const;

                    /**
                     * 获取<p>描述了实例CPU拓扑结构的相关信息。</p>
                     * @return CpuTopology <p>描述了实例CPU拓扑结构的相关信息。</p>
                     * 
                     */
                    CpuTopology GetCpuTopology() const;

                    /**
                     * 设置<p>描述了实例CPU拓扑结构的相关信息。</p>
                     * @param _cpuTopology <p>描述了实例CPU拓扑结构的相关信息。</p>
                     * 
                     */
                    void SetCpuTopology(const CpuTopology& _cpuTopology);

                    /**
                     * 判断参数 CpuTopology 是否已赋值
                     * @return CpuTopology 是否已赋值
                     * 
                     */
                    bool CpuTopologyHasBeenSet() const;

                private:

                    /**
                     * <p>实例所在的位置。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>实例<code>ID</code>。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例机型。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例的CPU核数，单位：核。</p>
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>实例内存容量，单位：<code>GiB</code>。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例</li><li>EXPIRED：表示过期的实例</li><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。</li></p>
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。取值范围：<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li></p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例系统盘信息。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>实例数据盘信息。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>实例主网卡的内网<code>IP</code>列表。</p>
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * <p>实例主网卡的公网<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * <p>实例带宽信息。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>实例所属虚拟私有网络信息。</p>
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * <p>生产实例所使用的镜像<code>ID</code>。</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>自动续费标识。取值范围：<br><li><code>NOTIFY_AND_MANUAL_RENEW</code>：表示通知即将过期，但不自动续费</li><li><code>NOTIFY_AND_AUTO_RENEW</code>：表示通知即将过期，而且自动续费</li><li><code>DISABLE_NOTIFY_AND_MANUAL_RENEW</code>：表示不通知即将过期，也不自动续费。</p></li><li>注意：后付费模式本项为null</li>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>到期时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。注意：后付费模式本项为null</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>操作系统名称。</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>实例登录设置。目前只返回实例所关联的密钥。</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>实例状态。状态类型详见<a href="https://cloud.tencent.com/document/api/213/15753#InstanceStatus">实例状态表</a></p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * <p>实例关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>实例的关机计费模式。<br>取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件</li></p>
                     */
                    std::string m_stopChargingMode;
                    bool m_stopChargingModeHasBeenSet;

                    /**
                     * <p>实例全局唯一ID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>实例的最新操作。例：StopInstances、ResetInstance。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * <p>实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功</li><li>OPERATING：表示操作执行中</li><li>FAILED：表示操作失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * <p>实例最新操作的唯一请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * <p>分散置放群组ID。</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>实例的IPv6地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_iPv6Addresses;
                    bool m_iPv6AddressesHasBeenSet;

                    /**
                     * <p>CAM角色名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>高性能计算集群<code>ID</code>。</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>高性能计算集群<code>IP</code>列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rdmaIpAddresses;
                    bool m_rdmaIpAddressesHasBeenSet;

                    /**
                     * <p>实例所在的专用集群<code>ID</code>。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>实例隔离类型。取值范围：<br><li>ARREAR：表示欠费隔离<br></li><li>EXPIRE：表示到期隔离<br></li><li>MANMADE：表示主动退还隔离<br></li><li>NOTISOLATED：表示未隔离<br></li></p>
                     */
                    std::string m_isolatedSource;
                    bool m_isolatedSourceHasBeenSet;

                    /**
                     * <p>GPU信息。如果是gpu类型子机，该值会返回GPU信息，如果是其他类型子机则不返回。</p>
                     */
                    GPUInfo m_gPUInfo;
                    bool m_gPUInfoHasBeenSet;

                    /**
                     * <p>实例的操作系统许可类型，默认为TencentCloud</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br>默认取值：false。</p>
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * <p>默认登录用户。</p>
                     */
                    std::string m_defaultLoginUser;
                    bool m_defaultLoginUserHasBeenSet;

                    /**
                     * <p>默认登录端口。</p>
                     */
                    int64_t m_defaultLoginPort;
                    bool m_defaultLoginPortHasBeenSet;

                    /**
                     * <p>实例的最新操作错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationErrorMsg;
                    bool m_latestOperationErrorMsgHasBeenSet;

                    /**
                     * <p>自定义metadata，本参数对应创建 CVM时指定的Metadata 信息。<strong>注：内测中</strong>。</p>
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>实例绑定的公网IPv6地址。</p>
                     */
                    std::vector<std::string> m_publicIPv6Addresses;
                    bool m_publicIPv6AddressesHasBeenSet;

                    /**
                     * <p>描述了实例CPU拓扑结构的相关信息。</p>
                     */
                    CpuTopology m_cpuTopology;
                    bool m_cpuTopologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_
