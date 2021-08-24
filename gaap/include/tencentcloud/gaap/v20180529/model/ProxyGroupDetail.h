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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RegionDetail.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 通道组详情信息
                */
                class ProxyGroupDetail : public AbstractModel
                {
                public:
                    ProxyGroupDetail();
                    ~ProxyGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取通道组中通道数量
                     * @return ProxyNum 通道组中通道数量
                     */
                    int64_t GetProxyNum() const;

                    /**
                     * 设置通道组中通道数量
                     * @param ProxyNum 通道组中通道数量
                     */
                    void SetProxyNum(const int64_t& _proxyNum);

                    /**
                     * 判断参数 ProxyNum 是否已赋值
                     * @return ProxyNum 是否已赋值
                     */
                    bool ProxyNumHasBeenSet() const;

                    /**
                     * 获取通道组状态：
0表示正常运行；
1表示创建中；
4表示销毁中；
11表示迁移中；
                     * @return Status 通道组状态：
0表示正常运行；
1表示创建中；
4表示销毁中；
11表示迁移中；
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置通道组状态：
0表示正常运行；
1表示创建中；
4表示销毁中；
11表示迁移中；
                     * @param Status 通道组状态：
0表示正常运行；
1表示创建中；
4表示销毁中；
11表示迁移中；
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取归属Uin
                     * @return OwnerUin 归属Uin
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置归属Uin
                     * @param OwnerUin 归属Uin
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建Uin
                     * @return CreateUin 创建Uin
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置创建Uin
                     * @param CreateUin 创建Uin
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取通道名称
                     * @return GroupName 通道名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置通道名称
                     * @param GroupName 通道名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取通道组域名解析默认IP
                     * @return DnsDefaultIp 通道组域名解析默认IP
                     */
                    std::string GetDnsDefaultIp() const;

                    /**
                     * 设置通道组域名解析默认IP
                     * @param DnsDefaultIp 通道组域名解析默认IP
                     */
                    void SetDnsDefaultIp(const std::string& _dnsDefaultIp);

                    /**
                     * 判断参数 DnsDefaultIp 是否已赋值
                     * @return DnsDefaultIp 是否已赋值
                     */
                    bool DnsDefaultIpHasBeenSet() const;

                    /**
                     * 获取通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取目标地域
                     * @return RealServerRegionInfo 目标地域
                     */
                    RegionDetail GetRealServerRegionInfo() const;

                    /**
                     * 设置目标地域
                     * @param RealServerRegionInfo 目标地域
                     */
                    void SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo);

                    /**
                     * 判断参数 RealServerRegionInfo 是否已赋值
                     * @return RealServerRegionInfo 是否已赋值
                     */
                    bool RealServerRegionInfoHasBeenSet() const;

                    /**
                     * 获取是否老通道组，2018-08-03之前创建的通道组为老通道组
                     * @return IsOldGroup 是否老通道组，2018-08-03之前创建的通道组为老通道组
                     */
                    bool GetIsOldGroup() const;

                    /**
                     * 设置是否老通道组，2018-08-03之前创建的通道组为老通道组
                     * @param IsOldGroup 是否老通道组，2018-08-03之前创建的通道组为老通道组
                     */
                    void SetIsOldGroup(const bool& _isOldGroup);

                    /**
                     * 判断参数 IsOldGroup 是否已赋值
                     * @return IsOldGroup 是否已赋值
                     */
                    bool IsOldGroupHasBeenSet() const;

                    /**
                     * 获取通道组ID
                     * @return GroupId 通道组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID
                     * @param GroupId 通道组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagSet 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyId 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取通道组版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 通道组版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置通道组版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 通道组版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPMethod 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetClientIPMethod() const;

                    /**
                     * 设置通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientIPMethod 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientIPMethod(const std::vector<int64_t>& _clientIPMethod);

                    /**
                     * 判断参数 ClientIPMethod 是否已赋值
                     * @return ClientIPMethod 是否已赋值
                     */
                    bool ClientIPMethodHasBeenSet() const;

                    /**
                     * 获取IP版本，可取值：IPv4、IPv6，默认值IPv4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPAddressVersion IP版本，可取值：IPv4、IPv6，默认值IPv4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP版本，可取值：IPv4、IPv6，默认值IPv4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IPAddressVersion IP版本，可取值：IPv4、IPv6，默认值IPv4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     */
                    bool IPAddressVersionHasBeenSet() const;

                    /**
                     * 获取通道组类型，可取值：Thunder、Accelerator，默认值Thunder
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 通道组类型，可取值：Thunder、Accelerator，默认值Thunder
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置通道组类型，可取值：Thunder、Accelerator，默认值Thunder
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageType 通道组类型，可取值：Thunder、Accelerator，默认值Thunder
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                private:

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 通道组中通道数量
                     */
                    int64_t m_proxyNum;
                    bool m_proxyNumHasBeenSet;

                    /**
                     * 通道组状态：
0表示正常运行；
1表示创建中；
4表示销毁中；
11表示迁移中；
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 归属Uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建Uin
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 通道名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 通道组域名解析默认IP
                     */
                    std::string m_dnsDefaultIp;
                    bool m_dnsDefaultIpHasBeenSet;

                    /**
                     * 通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 目标地域
                     */
                    RegionDetail m_realServerRegionInfo;
                    bool m_realServerRegionInfoHasBeenSet;

                    /**
                     * 是否老通道组，2018-08-03之前创建的通道组为老通道组
                     */
                    bool m_isOldGroup;
                    bool m_isOldGroupHasBeenSet;

                    /**
                     * 通道组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 通道组版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_clientIPMethod;
                    bool m_clientIPMethodHasBeenSet;

                    /**
                     * IP版本，可取值：IPv4、IPv6，默认值IPv4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * 通道组类型，可取值：Thunder、Accelerator，默认值Thunder
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPDETAIL_H_
