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
                     * 获取<p>可用区名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/213/15707?">查询可用区列表</a></p>
                     * @return Zone <p>可用区名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/213/15707?">查询可用区列表</a></p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/213/15707?">查询可用区列表</a></p>
                     * @param _zone <p>可用区名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/213/15707?">查询可用区列表</a></p>
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
                     * 获取<p>网络类型</p><p>枚举值：</p><ul><li><p>VPC： 私有网络</p></li><li><p>CCN： 云联网</p></li><li><p>通用标准型/性能型（含增强型）、吞吐型请选择VPC</p></li><li><p>Turbo标准型/性能型可选VPC或CCN</p></li><li><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS时无需传入，传入将被忽略。</p></li></ul>
                     * @return NetInterface <p>网络类型</p><p>枚举值：</p><ul><li><p>VPC： 私有网络</p></li><li><p>CCN： 云联网</p></li><li><p>通用标准型/性能型（含增强型）、吞吐型请选择VPC</p></li><li><p>Turbo标准型/性能型可选VPC或CCN</p></li><li><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS时无需传入，传入将被忽略。</p></li></ul>
                     * 
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置<p>网络类型</p><p>枚举值：</p><ul><li><p>VPC： 私有网络</p></li><li><p>CCN： 云联网</p></li><li><p>通用标准型/性能型（含增强型）、吞吐型请选择VPC</p></li><li><p>Turbo标准型/性能型可选VPC或CCN</p></li><li><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS时无需传入，传入将被忽略。</p></li></ul>
                     * @param _netInterface <p>网络类型</p><p>枚举值：</p><ul><li><p>VPC： 私有网络</p></li><li><p>CCN： 云联网</p></li><li><p>通用标准型/性能型（含增强型）、吞吐型请选择VPC</p></li><li><p>Turbo标准型/性能型可选VPC或CCN</p></li><li><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS时无需传入，传入将被忽略。</p></li></ul>
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
                     * 获取<p>权限组 ID。权限组规定了一组可来访白名单及操作权限。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/38157">DescribeCfsPGroups</a></p><ul><li>pgroupbasic 为【默认权限组】，【默认权限组】允许所有IP地址访问及读写权限。 </li><li>注意：当 Scenario=AgentSandbox 时，即创建 AgentCFS ，必须传入 pgroupbasic【默认权限组】，传其他值报错。</li></ul>
                     * @return PGroupId <p>权限组 ID。权限组规定了一组可来访白名单及操作权限。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/38157">DescribeCfsPGroups</a></p><ul><li>pgroupbasic 为【默认权限组】，【默认权限组】允许所有IP地址访问及读写权限。 </li><li>注意：当 Scenario=AgentSandbox 时，即创建 AgentCFS ，必须传入 pgroupbasic【默认权限组】，传其他值报错。</li></ul>
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置<p>权限组 ID。权限组规定了一组可来访白名单及操作权限。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/38157">DescribeCfsPGroups</a></p><ul><li>pgroupbasic 为【默认权限组】，【默认权限组】允许所有IP地址访问及读写权限。 </li><li>注意：当 Scenario=AgentSandbox 时，即创建 AgentCFS ，必须传入 pgroupbasic【默认权限组】，传其他值报错。</li></ul>
                     * @param _pGroupId <p>权限组 ID。权限组规定了一组可来访白名单及操作权限。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/38157">DescribeCfsPGroups</a></p><ul><li>pgroupbasic 为【默认权限组】，【默认权限组】允许所有IP地址访问及读写权限。 </li><li>注意：当 Scenario=AgentSandbox 时，即创建 AgentCFS ，必须传入 pgroupbasic【默认权限组】，传其他值报错。</li></ul>
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
                     * 获取<p>文件系统协议类型</p><p>枚举值：</p><ul><li>NFS： 通用标准型（含增强型）、通用性能型（含增强型）支持创建此协议的实例</li><li>CIFS： 即SMB协议，仅部分可用区的通用标准型、吞吐型支持此协议。</li><li>TURBO： Turbo标准型/Turbo性能型/AgentCFS是支持创建此协议的实例</li></ul><p>默认值：NFS</p>
                     * @return Protocol <p>文件系统协议类型</p><p>枚举值：</p><ul><li>NFS： 通用标准型（含增强型）、通用性能型（含增强型）支持创建此协议的实例</li><li>CIFS： 即SMB协议，仅部分可用区的通用标准型、吞吐型支持此协议。</li><li>TURBO： Turbo标准型/Turbo性能型/AgentCFS是支持创建此协议的实例</li></ul><p>默认值：NFS</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>文件系统协议类型</p><p>枚举值：</p><ul><li>NFS： 通用标准型（含增强型）、通用性能型（含增强型）支持创建此协议的实例</li><li>CIFS： 即SMB协议，仅部分可用区的通用标准型、吞吐型支持此协议。</li><li>TURBO： Turbo标准型/Turbo性能型/AgentCFS是支持创建此协议的实例</li></ul><p>默认值：NFS</p>
                     * @param _protocol <p>文件系统协议类型</p><p>枚举值：</p><ul><li>NFS： 通用标准型（含增强型）、通用性能型（含增强型）支持创建此协议的实例</li><li>CIFS： 即SMB协议，仅部分可用区的通用标准型、吞吐型支持此协议。</li><li>TURBO： Turbo标准型/Turbo性能型/AgentCFS是支持创建此协议的实例</li></ul><p>默认值：NFS</p>
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
                     * 获取<p>文件系统存储类型其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p><p>枚举值：</p><ul><li>SD： 通用标准型（含增强型）。通用标准型 version = v1.5，通用标准型（增强型） version = v3.1。</li><li>HP： 通用性能型（含增强型）。通用性能型 version = v1.5，通用性能型（增强型） version = v3.1。</li><li>TB： Turbo标准型</li><li>TP： Turbo性能型</li><li>THP： 吞吐型</li></ul><p>默认值：SD</p>
                     * @return StorageType <p>文件系统存储类型其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p><p>枚举值：</p><ul><li>SD： 通用标准型（含增强型）。通用标准型 version = v1.5，通用标准型（增强型） version = v3.1。</li><li>HP： 通用性能型（含增强型）。通用性能型 version = v1.5，通用性能型（增强型） version = v3.1。</li><li>TB： Turbo标准型</li><li>TP： Turbo性能型</li><li>THP： 吞吐型</li></ul><p>默认值：SD</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>文件系统存储类型其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p><p>枚举值：</p><ul><li>SD： 通用标准型（含增强型）。通用标准型 version = v1.5，通用标准型（增强型） version = v3.1。</li><li>HP： 通用性能型（含增强型）。通用性能型 version = v1.5，通用性能型（增强型） version = v3.1。</li><li>TB： Turbo标准型</li><li>TP： Turbo性能型</li><li>THP： 吞吐型</li></ul><p>默认值：SD</p>
                     * @param _storageType <p>文件系统存储类型其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p><p>枚举值：</p><ul><li>SD： 通用标准型（含增强型）。通用标准型 version = v1.5，通用标准型（增强型） version = v3.1。</li><li>HP： 通用性能型（含增强型）。通用性能型 version = v1.5，通用性能型（增强型） version = v3.1。</li><li>TB： Turbo标准型</li><li>TP： Turbo性能型</li><li>THP： 吞吐型</li></ul><p>默认值：SD</p>
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
                     * 获取<p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15778">查询VPC列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     * @return VpcId <p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15778">查询VPC列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15778">查询VPC列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     * @param _vpcId <p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15778">查询VPC列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
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
                     * 获取<p>子网 ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15784">查询子网列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     * @return SubnetId <p>子网 ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15784">查询子网列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15784">查询子网列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     * @param _subnetId <p>子网 ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15784">查询子网列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
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
                     * 获取<p>云联网ID， 若网络类型选择的是CCN，该字段为必填</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/19199">查询CCN列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     * @return CcnId <p>云联网ID， 若网络类型选择的是CCN，该字段为必填</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/19199">查询CCN列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网ID， 若网络类型选择的是CCN，该字段为必填</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/19199">查询CCN列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     * @param _ccnId <p>云联网ID， 若网络类型选择的是CCN，该字段为必填</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/19199">查询CCN列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
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
                     * 获取<p>云联网中CFS使用的网段， 若网络类型选择的是CCN，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     * @return CidrBlock <p>云联网中CFS使用的网段， 若网络类型选择的是CCN，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>云联网中CFS使用的网段， 若网络类型选择的是CCN，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     * @param _cidrBlock <p>云联网中CFS使用的网段， 若网络类型选择的是CCN，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
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
                     * 获取<p>文件系统容量，turbo系列必填</p><p>单位：GiB</p><p>Turbo标准型起售20TiB，即20480 GiB，扩容步长10TiB，即10240 GiB。Turbo性能型起售10TiB，即10240 GiB，扩容步长10TiB，即10240 GiB。</p>
                     * @return Capacity <p>文件系统容量，turbo系列必填</p><p>单位：GiB</p><p>Turbo标准型起售20TiB，即20480 GiB，扩容步长10TiB，即10240 GiB。Turbo性能型起售10TiB，即10240 GiB，扩容步长10TiB，即10240 GiB。</p>
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置<p>文件系统容量，turbo系列必填</p><p>单位：GiB</p><p>Turbo标准型起售20TiB，即20480 GiB，扩容步长10TiB，即10240 GiB。Turbo性能型起售10TiB，即10240 GiB，扩容步长10TiB，即10240 GiB。</p>
                     * @param _capacity <p>文件系统容量，turbo系列必填</p><p>单位：GiB</p><p>Turbo标准型起售20TiB，即20480 GiB，扩容步长10TiB，即10240 GiB。Turbo性能型起售10TiB，即10240 GiB，扩容步长10TiB，即10240 GiB。</p>
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
                     * 获取<p>文件系统快照 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80206">DescribeCfsSnapshots</a></p>
                     * @return SnapshotId <p>文件系统快照 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80206">DescribeCfsSnapshots</a></p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>文件系统快照 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80206">DescribeCfsSnapshots</a></p>
                     * @param _snapshotId <p>文件系统快照 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80206">DescribeCfsSnapshots</a></p>
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
                     * 获取<p>定期快照策略 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80208">DescribeAutoSnapshotPolicies</a></p>
                     * @return AutoSnapshotPolicyId <p>定期快照策略 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80208">DescribeAutoSnapshotPolicies</a></p>
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置<p>定期快照策略 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80208">DescribeAutoSnapshotPolicies</a></p>
                     * @param _autoSnapshotPolicyId <p>定期快照策略 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80208">DescribeAutoSnapshotPolicies</a></p>
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
                     * 获取<p>是否开启自动扩容策略，仅turbo类型文件存储支持</p>
                     * @return EnableAutoScaleUp <p>是否开启自动扩容策略，仅turbo类型文件存储支持</p>
                     * 
                     */
                    bool GetEnableAutoScaleUp() const;

                    /**
                     * 设置<p>是否开启自动扩容策略，仅turbo类型文件存储支持</p>
                     * @param _enableAutoScaleUp <p>是否开启自动扩容策略，仅turbo类型文件存储支持</p>
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
                     * 获取<p>文件系统版本号。</p><p>枚举值：</p><ul><li>v1.5： 创建通用标准型/通用性能型文件系统</li><li>v3.1： 创建通用标准型（增强型）/通用性能型（增强型）文件系统，如需创建增强型，此为必填项。</li><li>v4.0： 创建Turbo标准型、Turbo性能型、吞吐型文件系统，非必填项</li></ul><p>创建通用标准型（增强型）、通用性能型（增强型）须加白主账号，如需使用请联系我们。</p>
                     * @return CfsVersion <p>文件系统版本号。</p><p>枚举值：</p><ul><li>v1.5： 创建通用标准型/通用性能型文件系统</li><li>v3.1： 创建通用标准型（增强型）/通用性能型（增强型）文件系统，如需创建增强型，此为必填项。</li><li>v4.0： 创建Turbo标准型、Turbo性能型、吞吐型文件系统，非必填项</li></ul><p>创建通用标准型（增强型）、通用性能型（增强型）须加白主账号，如需使用请联系我们。</p>
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置<p>文件系统版本号。</p><p>枚举值：</p><ul><li>v1.5： 创建通用标准型/通用性能型文件系统</li><li>v3.1： 创建通用标准型（增强型）/通用性能型（增强型）文件系统，如需创建增强型，此为必填项。</li><li>v4.0： 创建Turbo标准型、Turbo性能型、吞吐型文件系统，非必填项</li></ul><p>创建通用标准型（增强型）、通用性能型（增强型）须加白主账号，如需使用请联系我们。</p>
                     * @param _cfsVersion <p>文件系统版本号。</p><p>枚举值：</p><ul><li>v1.5： 创建通用标准型/通用性能型文件系统</li><li>v3.1： 创建通用标准型（增强型）/通用性能型（增强型）文件系统，如需创建增强型，此为必填项。</li><li>v4.0： 创建Turbo标准型、Turbo性能型、吞吐型文件系统，非必填项</li></ul><p>创建通用标准型（增强型）、通用性能型（增强型）须加白主账号，如需使用请联系我们。</p>
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
                     * 获取<p>turbo文件系统元数据类型</p><p>枚举值：</p><ul><li>basic： 创建标准版元数据。</li><li>enhanced： 创建增强版元数据</li></ul><p>详情参见<a href="https://cloud.tencent.com/document/product/582/116836">Turbo 文件系统元数据类型</a></p>
                     * @return MetaType <p>turbo文件系统元数据类型</p><p>枚举值：</p><ul><li>basic： 创建标准版元数据。</li><li>enhanced： 创建增强版元数据</li></ul><p>详情参见<a href="https://cloud.tencent.com/document/product/582/116836">Turbo 文件系统元数据类型</a></p>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>turbo文件系统元数据类型</p><p>枚举值：</p><ul><li>basic： 创建标准版元数据。</li><li>enhanced： 创建增强版元数据</li></ul><p>详情参见<a href="https://cloud.tencent.com/document/product/582/116836">Turbo 文件系统元数据类型</a></p>
                     * @param _metaType <p>turbo文件系统元数据类型</p><p>枚举值：</p><ul><li>basic： 创建标准版元数据。</li><li>enhanced： 创建增强版元数据</li></ul><p>详情参见<a href="https://cloud.tencent.com/document/product/582/116836">Turbo 文件系统元数据类型</a></p>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS 时必传</li></ul>
                     * @return Scenario <p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS 时必传</li></ul>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS 时必传</li></ul>
                     * @param _scenario <p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS 时必传</li></ul>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                private:

                    /**
                     * <p>可用区名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/213/15707?">查询可用区列表</a></p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>网络类型</p><p>枚举值：</p><ul><li><p>VPC： 私有网络</p></li><li><p>CCN： 云联网</p></li><li><p>通用标准型/性能型（含增强型）、吞吐型请选择VPC</p></li><li><p>Turbo标准型/性能型可选VPC或CCN</p></li><li><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS时无需传入，传入将被忽略。</p></li></ul>
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * <p>权限组 ID。权限组规定了一组可来访白名单及操作权限。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/38157">DescribeCfsPGroups</a></p><ul><li>pgroupbasic 为【默认权限组】，【默认权限组】允许所有IP地址访问及读写权限。 </li><li>注意：当 Scenario=AgentSandbox 时，即创建 AgentCFS ，必须传入 pgroupbasic【默认权限组】，传其他值报错。</li></ul>
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * <p>文件系统协议类型</p><p>枚举值：</p><ul><li>NFS： 通用标准型（含增强型）、通用性能型（含增强型）支持创建此协议的实例</li><li>CIFS： 即SMB协议，仅部分可用区的通用标准型、吞吐型支持此协议。</li><li>TURBO： Turbo标准型/Turbo性能型/AgentCFS是支持创建此协议的实例</li></ul><p>默认值：NFS</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>文件系统存储类型其中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p><p>枚举值：</p><ul><li>SD： 通用标准型（含增强型）。通用标准型 version = v1.5，通用标准型（增强型） version = v3.1。</li><li>HP： 通用性能型（含增强型）。通用性能型 version = v1.5，通用性能型（增强型） version = v3.1。</li><li>TB： Turbo标准型</li><li>TP： Turbo性能型</li><li>THP： 吞吐型</li></ul><p>默认值：SD</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15778">查询VPC列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID，若网络类型选择的是VPC，该字段为必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/15784">查询子网列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略。</p>
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
                     * <p>云联网ID， 若网络类型选择的是CCN，该字段为必填</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/215/19199">查询CCN列表</a></p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>云联网中CFS使用的网段， 若网络类型选择的是CCN，该字段为必填，且不能和Ccn中已经绑定的网段冲突</p><p>当 Scenario=AgentSandbox 时，即创建 AgentCFS 时无需传入，传入将被忽略</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>文件系统容量，turbo系列必填</p><p>单位：GiB</p><p>Turbo标准型起售20TiB，即20480 GiB，扩容步长10TiB，即10240 GiB。Turbo性能型起售10TiB，即10240 GiB，扩容步长10TiB，即10240 GiB。</p>
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>文件系统快照 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80206">DescribeCfsSnapshots</a></p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>定期快照策略 ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/582/80208">DescribeAutoSnapshotPolicies</a></p>
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * <p>是否开启自动扩容策略，仅turbo类型文件存储支持</p>
                     */
                    bool m_enableAutoScaleUp;
                    bool m_enableAutoScaleUpHasBeenSet;

                    /**
                     * <p>文件系统版本号。</p><p>枚举值：</p><ul><li>v1.5： 创建通用标准型/通用性能型文件系统</li><li>v3.1： 创建通用标准型（增强型）/通用性能型（增强型）文件系统，如需创建增强型，此为必填项。</li><li>v4.0： 创建Turbo标准型、Turbo性能型、吞吐型文件系统，非必填项</li></ul><p>创建通用标准型（增强型）、通用性能型（增强型）须加白主账号，如需使用请联系我们。</p>
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                    /**
                     * <p>turbo文件系统元数据类型</p><p>枚举值：</p><ul><li>basic： 创建标准版元数据。</li><li>enhanced： 创建增强版元数据</li></ul><p>详情参见<a href="https://cloud.tencent.com/document/product/582/116836">Turbo 文件系统元数据类型</a></p>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS 时必传</li></ul>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
