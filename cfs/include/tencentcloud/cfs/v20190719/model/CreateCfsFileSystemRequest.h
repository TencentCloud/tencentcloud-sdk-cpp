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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateCfsFileSystem请求参数结构体
                */
                class CreateCfsFileSystemRequest : public AbstractModel
                {
                public:
                    CreateCfsFileSystemRequest();
                    ~CreateCfsFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     * @return Zone 可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     * @param _zone 可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。
                     * @return NetInterface 网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。
                     * 
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。
                     * @param _netInterface 网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。
                     * 
                     */
                    void SetNetInterface(const std::string& _netInterface);

                    /**
                     * 判断参数 NetInterface 是否已赋值
                     * @return NetInterface 是否已赋值
                     * 
                     */
                    bool NetInterfaceHasBeenSet() const;

                    /**
                     * 获取权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取[DescribeCfsPGroups](https://cloud.tencent.com/document/product/582/38157)
                     * @return PGroupId 权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取[DescribeCfsPGroups](https://cloud.tencent.com/document/product/582/38157)
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取[DescribeCfsPGroups](https://cloud.tencent.com/document/product/582/38157)
                     * @param _pGroupId 权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取[DescribeCfsPGroups](https://cloud.tencent.com/document/product/582/38157)
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS
                     * @return Protocol 文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS
                     * @param _protocol 文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * @return StorageType 文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * @param _storageType 文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，
[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)
                     * @return VpcId 私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，
[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，
[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)
                     * @param _vpcId 私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，
[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)
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
                     * 获取子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，
[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)
                     * @return SubnetId 子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，
[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，
[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)
                     * @param _subnetId 子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，
[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)
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
                     * 获取指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定
                     * @return MountIP 指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定
                     * 
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定
                     * @param _mountIP 指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定
                     * 
                     */
                    void SetMountIP(const std::string& _mountIP);

                    /**
                     * 判断参数 MountIP 是否已赋值
                     * @return MountIP 是否已赋值
                     * 
                     */
                    bool MountIPHasBeenSet() const;

                    /**
                     * 获取用户自定义文件系统名称
                     * @return FsName 用户自定义文件系统名称
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置用户自定义文件系统名称
                     * @param _fsName 用户自定义文件系统名称
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取文件系统标签
                     * @return ResourceTags 文件系统标签
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置文件系统标签
                     * @param _resourceTags 文件系统标签
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口
[DescribeCcns](https://cloud.tencent.com/document/product/215/19199)

                     * @return CcnId 云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口
[DescribeCcns](https://cloud.tencent.com/document/product/215/19199)

                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口
[DescribeCcns](https://cloud.tencent.com/document/product/215/19199)

                     * @param _ccnId 云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口
[DescribeCcns](https://cloud.tencent.com/document/product/215/19199)

                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突
                     * @return CidrBlock 云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突
                     * @param _cidrBlock 云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。
                     * @return Capacity 文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。
                     * @param _capacity 文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取文件系统快照ID，通过查询快照列表获取该参数，
[DescribeCfsSnapshots](https://cloud.tencent.com/document/product/582/80206)
                     * @return SnapshotId 文件系统快照ID，通过查询快照列表获取该参数，
[DescribeCfsSnapshots](https://cloud.tencent.com/document/product/582/80206)
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置文件系统快照ID，通过查询快照列表获取该参数，
[DescribeCfsSnapshots](https://cloud.tencent.com/document/product/582/80206)
                     * @param _snapshotId 文件系统快照ID，通过查询快照列表获取该参数，
[DescribeCfsSnapshots](https://cloud.tencent.com/document/product/582/80206)
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取定期快照策略ID，通过查询快照策略信息获取,
[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/product/582/38157)
                     * @return AutoSnapshotPolicyId 定期快照策略ID，通过查询快照策略信息获取,
[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/product/582/38157)
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置定期快照策略ID，通过查询快照策略信息获取,
[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/product/582/38157)
                     * @param _autoSnapshotPolicyId 定期快照策略ID，通过查询快照策略信息获取,
[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/product/582/38157)
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取是否开启默认扩容，仅turbo类型文件存储支持
                     * @return EnableAutoScaleUp 是否开启默认扩容，仅turbo类型文件存储支持
                     * 
                     */
                    bool GetEnableAutoScaleUp() const;

                    /**
                     * 设置是否开启默认扩容，仅turbo类型文件存储支持
                     * @param _enableAutoScaleUp 是否开启默认扩容，仅turbo类型文件存储支持
                     * 
                     */
                    void SetEnableAutoScaleUp(const bool& _enableAutoScaleUp);

                    /**
                     * 判断参数 EnableAutoScaleUp 是否已赋值
                     * @return EnableAutoScaleUp 是否已赋值
                     * 
                     */
                    bool EnableAutoScaleUpHasBeenSet() const;

                    /**
                     * 获取v1.5：创建普通版的通用文件系统；
v3.1：创建增强版的通用文件系统
说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。
                     * @return CfsVersion v1.5：创建普通版的通用文件系统；
v3.1：创建增强版的通用文件系统
说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置v1.5：创建普通版的通用文件系统；
v3.1：创建增强版的通用文件系统
说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。
                     * @param _cfsVersion v1.5：创建普通版的通用文件系统；
v3.1：创建增强版的通用文件系统
说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。
                     * 
                     */
                    void SetCfsVersion(const std::string& _cfsVersion);

                    /**
                     * 判断参数 CfsVersion 是否已赋值
                     * @return CfsVersion 是否已赋值
                     * 
                     */
                    bool CfsVersionHasBeenSet() const;

                    /**
                     * 获取turbo文件系统元数据属性
basic：创建标准型的元数据
enhanced：创建增强型的元数据
                     * @return MetaType turbo文件系统元数据属性
basic：创建标准型的元数据
enhanced：创建增强型的元数据
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置turbo文件系统元数据属性
basic：创建标准型的元数据
enhanced：创建增强型的元数据
                     * @param _metaType turbo文件系统元数据属性
basic：创建标准型的元数据
enhanced：创建增强型的元数据
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                private:

                    /**
                     * 可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * 权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取[DescribeCfsPGroups](https://cloud.tencent.com/document/product/582/38157)
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，
[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，
[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定
                     */
                    std::string m_mountIP;
                    bool m_mountIPHasBeenSet;

                    /**
                     * 用户自定义文件系统名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 文件系统标签
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口
[DescribeCcns](https://cloud.tencent.com/document/product/215/19199)

                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * 文件系统快照ID，通过查询快照列表获取该参数，
[DescribeCfsSnapshots](https://cloud.tencent.com/document/product/582/80206)
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 定期快照策略ID，通过查询快照策略信息获取,
[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/product/582/38157)
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 是否开启默认扩容，仅turbo类型文件存储支持
                     */
                    bool m_enableAutoScaleUp;
                    bool m_enableAutoScaleUpHasBeenSet;

                    /**
                     * v1.5：创建普通版的通用文件系统；
v3.1：创建增强版的通用文件系统
说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                    /**
                     * turbo文件系统元数据属性
basic：创建标准型的元数据
enhanced：创建增强型的元数据
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
