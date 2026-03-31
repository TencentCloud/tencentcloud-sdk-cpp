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
                     * 获取<p>可用区名称，例如ap-beijing-1，请参考 <a href="https://cloud.tencent.com/document/product/582/13225">概览</a> 文档中的地域与可用区列表</p>
                     * @return Zone <p>可用区名称，例如ap-beijing-1，请参考 <a href="https://cloud.tencent.com/document/product/582/13225">概览</a> 文档中的地域与可用区列表</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区名称，例如ap-beijing-1，请参考 <a href="https://cloud.tencent.com/document/product/582/13225">概览</a> 文档中的地域与可用区列表</p>
                     * @param _zone <p>可用区名称，例如ap-beijing-1，请参考 <a href="https://cloud.tencent.com/document/product/582/13225">概览</a> 文档中的地域与可用区列表</p>
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
                     * 获取<p>网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。</p>
                     * @return NetInterface <p>网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。</p>
                     * 
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置<p>网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。</p>
                     * @param _netInterface <p>网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。</p>
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
                     * 获取<p>权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取<a href="https://cloud.tencent.com/document/product/582/38157">DescribeCfsPGroups</a></p>
                     * @return PGroupId <p>权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取<a href="https://cloud.tencent.com/document/product/582/38157">DescribeCfsPGroups</a></p>
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置<p>权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取<a href="https://cloud.tencent.com/document/product/582/38157">DescribeCfsPGroups</a></p>
                     * @param _pGroupId <p>权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取<a href="https://cloud.tencent.com/document/product/582/38157">DescribeCfsPGroups</a></p>
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
                     * 获取<p>文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS</p>
                     * @return Protocol <p>文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS</p>
                     * @param _protocol <p>文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS</p>
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
                     * 获取<p>文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * @return StorageType <p>文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * @param _storageType <p>文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
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
                     * 获取<p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a></p>
                     * @return VpcId <p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a></p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a></p>
                     * @param _vpcId <p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a></p>
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
                     * 获取<p>子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a></p>
                     * @return SubnetId <p>子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a></p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a></p>
                     * @param _subnetId <p>子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a></p>
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
                     * 获取<p>指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定</p>
                     * @return MountIP <p>指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定</p>
                     * 
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置<p>指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定</p>
                     * @param _mountIP <p>指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定</p>
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
                     * 获取<p>用户自定义文件系统名称</p>
                     * @return FsName <p>用户自定义文件系统名称</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>用户自定义文件系统名称</p>
                     * @param _fsName <p>用户自定义文件系统名称</p>
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
                     * 获取<p>文件系统是否加密，若留空则默认为不加密</p>
                     * @return Encrypted <p>文件系统是否加密，若留空则默认为不加密</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>文件系统是否加密，若留空则默认为不加密</p>
                     * @param _encrypted <p>文件系统是否加密，若留空则默认为不加密</p>
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取<p>文件系统标签</p>
                     * @return ResourceTags <p>文件系统标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置<p>文件系统标签</p>
                     * @param _resourceTags <p>文件系统标签</p>
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
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。</p>
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
                     * 获取<p>云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口<br><a href="https://cloud.tencent.com/document/product/215/19199">DescribeCcns</a></p>
                     * @return CcnId <p>云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口<br><a href="https://cloud.tencent.com/document/product/215/19199">DescribeCcns</a></p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口<br><a href="https://cloud.tencent.com/document/product/215/19199">DescribeCcns</a></p>
                     * @param _ccnId <p>云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口<br><a href="https://cloud.tencent.com/document/product/215/19199">DescribeCcns</a></p>
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
                     * 获取<p>云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p>
                     * @return CidrBlock <p>云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p>
                     * @param _cidrBlock <p>云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p>
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
                     * 获取<p>文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。</p>
                     * @return Capacity <p>文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。</p>
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置<p>文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。</p>
                     * @param _capacity <p>文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。</p>
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
                     * 获取<p>文件系统快照ID，通过查询快照列表获取该参数，<br><a href="https://cloud.tencent.com/document/product/582/80206">DescribeCfsSnapshots</a></p>
                     * @return SnapshotId <p>文件系统快照ID，通过查询快照列表获取该参数，<br><a href="https://cloud.tencent.com/document/product/582/80206">DescribeCfsSnapshots</a></p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>文件系统快照ID，通过查询快照列表获取该参数，<br><a href="https://cloud.tencent.com/document/product/582/80206">DescribeCfsSnapshots</a></p>
                     * @param _snapshotId <p>文件系统快照ID，通过查询快照列表获取该参数，<br><a href="https://cloud.tencent.com/document/product/582/80206">DescribeCfsSnapshots</a></p>
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
                     * 获取<p>定期快照策略ID，通过查询快照策略信息获取,<br><a href="https://cloud.tencent.com/document/product/582/38157">DescribeAutoSnapshotPolicies</a></p>
                     * @return AutoSnapshotPolicyId <p>定期快照策略ID，通过查询快照策略信息获取,<br><a href="https://cloud.tencent.com/document/product/582/38157">DescribeAutoSnapshotPolicies</a></p>
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置<p>定期快照策略ID，通过查询快照策略信息获取,<br><a href="https://cloud.tencent.com/document/product/582/38157">DescribeAutoSnapshotPolicies</a></p>
                     * @param _autoSnapshotPolicyId <p>定期快照策略ID，通过查询快照策略信息获取,<br><a href="https://cloud.tencent.com/document/product/582/38157">DescribeAutoSnapshotPolicies</a></p>
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
                     * 获取<p>是否开启默认扩容，仅turbo类型文件存储支持</p>
                     * @return EnableAutoScaleUp <p>是否开启默认扩容，仅turbo类型文件存储支持</p>
                     * 
                     */
                    bool GetEnableAutoScaleUp() const;

                    /**
                     * 设置<p>是否开启默认扩容，仅turbo类型文件存储支持</p>
                     * @param _enableAutoScaleUp <p>是否开启默认扩容，仅turbo类型文件存储支持</p>
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
                     * 获取<p>v1.5：创建普通版的通用文件系统；<br>v3.1：创建增强版的通用文件系统<br>说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。</p>
                     * @return CfsVersion <p>v1.5：创建普通版的通用文件系统；<br>v3.1：创建增强版的通用文件系统<br>说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。</p>
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置<p>v1.5：创建普通版的通用文件系统；<br>v3.1：创建增强版的通用文件系统<br>说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。</p>
                     * @param _cfsVersion <p>v1.5：创建普通版的通用文件系统；<br>v3.1：创建增强版的通用文件系统<br>说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。</p>
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
                     * 获取<p>turbo文件系统元数据属性<br>basic：创建标准型的元数据<br>enhanced：创建增强型的元数据</p>
                     * @return MetaType <p>turbo文件系统元数据属性<br>basic：创建标准型的元数据<br>enhanced：创建增强型的元数据</p>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>turbo文件系统元数据属性<br>basic：创建标准型的元数据<br>enhanced：创建增强型的元数据</p>
                     * @param _metaType <p>turbo文件系统元数据属性<br>basic：创建标准型的元数据<br>enhanced：创建增强型的元数据</p>
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
                     * <p>可用区名称，例如ap-beijing-1，请参考 <a href="https://cloud.tencent.com/document/product/582/13225">概览</a> 文档中的地域与可用区列表</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>网络类型，可选值为 VPC，CCN；其中 VPC 为私有网络， CCN 为云联网。通用标准型/性能型请选择VPC，Turbo标准型/性能型请选择CCN。</p>
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * <p>权限组 ID,pgroupbasic 是默认权限组，通过控制查询权限组列表接口获取<a href="https://cloud.tencent.com/document/product/582/38157">DescribeCfsPGroups</a></p>
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * <p>文件系统协议类型， 值为 NFS、CIFS、TURBO ; 若留空则默认为 NFS协议，turbo系列必须选择TURBO，不支持NFS、CIFS</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>文件系统存储类型，默认值为 SD ；其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填.通过查询私有网络接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a></p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID，若网络类型选择的是VPC，该字段为必填。通过查询子网接口获取，<br><a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a></p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP，Turbo系列当前不支持指定</p>
                     */
                    std::string m_mountIP;
                    bool m_mountIPHasBeenSet;

                    /**
                     * <p>用户自定义文件系统名称</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>文件系统是否加密，若留空则默认为不加密</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>文件系统标签</p>
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>云联网ID， 若网络类型选择的是CCN，该字段为必填;通过查询云联网列表接口获取，通过接口<br><a href="https://cloud.tencent.com/document/product/215/19199">DescribeCcns</a></p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>云联网中CFS使用的网段， 若网络类型选择的是Ccn，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>文件系统容量，turbo系列必填，单位为GiB。 turbo标准型单位GB，起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。turbo性能型起售10TiB，即10240 GiB；扩容步长10TiB，10240 GiB。</p>
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>文件系统快照ID，通过查询快照列表获取该参数，<br><a href="https://cloud.tencent.com/document/product/582/80206">DescribeCfsSnapshots</a></p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>定期快照策略ID，通过查询快照策略信息获取,<br><a href="https://cloud.tencent.com/document/product/582/38157">DescribeAutoSnapshotPolicies</a></p>
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * <p>是否开启默认扩容，仅turbo类型文件存储支持</p>
                     */
                    bool m_enableAutoScaleUp;
                    bool m_enableAutoScaleUpHasBeenSet;

                    /**
                     * <p>v1.5：创建普通版的通用文件系统；<br>v3.1：创建增强版的通用文件系统<br>说明：增强版的通用系统需要开通白名单才能使用，如有需要请提交工单与我们联系。</p>
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                    /**
                     * <p>turbo文件系统元数据属性<br>basic：创建标准型的元数据<br>enhanced：创建增强型的元数据</p>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
