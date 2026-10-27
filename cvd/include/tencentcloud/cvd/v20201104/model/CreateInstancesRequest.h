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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Disk.h>
#include <tencentcloud/cvd/v20201104/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvd/v20201104/model/ChargePrepaid.h>
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
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li>
                     * @return InstanceType 实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li>
                     * @param _instanceType 实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li>
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
                     * 获取系统盘信息
                     * @return SystemDisk 系统盘信息
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置系统盘信息
                     * @param _systemDisk 系统盘信息
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
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
                     * 获取私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * @return VirtualPrivateCloud 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * @param _virtualPrivateCloud 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
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
                     * 获取实例显示名称。
<li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li>
<li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li>
<li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li>
<li> 最多支持60个字符（包含模式串）。</li>
                     * @return InstanceName 实例显示名称。
<li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li>
<li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li>
<li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li>
<li> 最多支持60个字符（包含模式串）。</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例显示名称。
<li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li>
<li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li>
<li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li>
<li> 最多支持60个字符（包含模式串）。</li>
                     * @param _instanceName 实例显示名称。
<li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li>
<li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li>
<li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li>
<li> 最多支持60个字符（包含模式串）。</li>
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
                     * 获取购买实例数量。取值范围[1,50]。默认为1
                     * @return InstanceCount 购买实例数量。取值范围[1,50]。默认为1
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置购买实例数量。取值范围[1,50]。默认为1
                     * @param _instanceCount 购买实例数量。取值范围[1,50]。默认为1
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取数据盘信息。目前只支持一块数据盘。
                     * @return DataDisks 数据盘信息。目前只支持一块数据盘。
                     * 
                     */
                    std::vector<Disk> GetDataDisks() const;

                    /**
                     * 设置数据盘信息。目前只支持一块数据盘。
                     * @param _dataDisks 数据盘信息。目前只支持一块数据盘。
                     * 
                     */
                    void SetDataDisks(const std::vector<Disk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取实例计费类型。
<li> PREPAID：预付费，即包年包月</li>
<li> POSTPAID_BY_HOUR：按小时后付费</li>
默认为PREPAID
                     * @return ChargeType 实例计费类型。
<li> PREPAID：预付费，即包年包月</li>
<li> POSTPAID_BY_HOUR：按小时后付费</li>
默认为PREPAID
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置实例计费类型。
<li> PREPAID：预付费，即包年包月</li>
<li> POSTPAID_BY_HOUR：按小时后付费</li>
默认为PREPAID
                     * @param _chargeType 实例计费类型。
<li> PREPAID：预付费，即包年包月</li>
<li> POSTPAID_BY_HOUR：按小时后付费</li>
默认为PREPAID
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
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return ChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    ChargePrepaid GetChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _chargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    void SetChargePrepaid(const ChargePrepaid& _chargePrepaid);

                    /**
                     * 判断参数 ChargePrepaid 是否已赋值
                     * @return ChargePrepaid 是否已赋值
                     * 
                     */
                    bool ChargePrepaidHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。
<li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li>
<li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * @return DryRun 是否只预检此次请求。
<li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li>
<li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。
<li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li>
<li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * @param _dryRun 是否只预检此次请求。
<li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li>
<li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取允许绑定用户前的匿名访问。默认值：false。
                     * @return AnonymousAccess 允许绑定用户前的匿名访问。默认值：false。
                     * 
                     */
                    bool GetAnonymousAccess() const;

                    /**
                     * 设置允许绑定用户前的匿名访问。默认值：false。
                     * @param _anonymousAccess 允许绑定用户前的匿名访问。默认值：false。
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
                     * 获取关联的安全组ID列表
                     * @return SecurityGroups 关联的安全组ID列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置关联的安全组ID列表
                     * @param _securityGroups 关联的安全组ID列表
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
                     * 获取桌面池ID
                     * @return PoolId 桌面池ID
                     * 
                     */
                    std::string GetPoolId() const;

                    /**
                     * 设置桌面池ID
                     * @param _poolId 桌面池ID
                     * 
                     */
                    void SetPoolId(const std::string& _poolId);

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                    /**
                     * 获取域名管控策略ID
                     * @return DomainControlPolicies 域名管控策略ID
                     * 
                     */
                    std::vector<std::string> GetDomainControlPolicies() const;

                    /**
                     * 设置域名管控策略ID
                     * @param _domainControlPolicies 域名管控策略ID
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
                     * 获取标签，最多10个
                     * @return Tags 标签，最多10个
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签，最多10个
                     * @param _tags 标签，最多10个
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 系统盘信息
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 实例显示名称。
<li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li>
<li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li>
<li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li>
<li> 最多支持60个字符（包含模式串）。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 购买实例数量。取值范围[1,50]。默认为1
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 数据盘信息。目前只支持一块数据盘。
                     */
                    std::vector<Disk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 实例计费类型。
<li> PREPAID：预付费，即包年包月</li>
<li> POSTPAID_BY_HOUR：按小时后付费</li>
默认为PREPAID
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    ChargePrepaid m_chargePrepaid;
                    bool m_chargePrepaidHasBeenSet;

                    /**
                     * 是否只预检此次请求。
<li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li>
<li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 允许绑定用户前的匿名访问。默认值：false。
                     */
                    bool m_anonymousAccess;
                    bool m_anonymousAccessHasBeenSet;

                    /**
                     * 关联的安全组ID列表
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * 桌面池ID
                     */
                    std::string m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * 域名管控策略ID
                     */
                    std::vector<std::string> m_domainControlPolicies;
                    bool m_domainControlPoliciesHasBeenSet;

                    /**
                     * 标签，最多10个
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATEINSTANCESREQUEST_H_
