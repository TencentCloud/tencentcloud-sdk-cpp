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

#ifndef TENCENTCLOUD_WSS_V20180426_MODEL_SSLCERTIFICATE_H_
#define TENCENTCLOUD_WSS_V20180426_MODEL_SSLCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wss/v20180426/model/SSLProjectInfo.h>


namespace TencentCloud
{
    namespace Wss
    {
        namespace V20180426
        {
            namespace Model
            {
                /**
                * 获取证书列表（SSLCertificate）返回参数键为 CertificateSet 的内容。
                */
                class SSLCertificate : public AbstractModel
                {
                public:
                    SSLCertificate();
                    ~SSLCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属账户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 所属账户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置所属账户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 所属账户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书来源：trustasia = 亚洲诚信， upload = 用户上传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return From 证书来源：trustasia = 亚洲诚信， upload = 用户上传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置证书来源：trustasia = 亚洲诚信， upload = 用户上传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _from 证书来源：trustasia = 亚洲诚信， upload = 用户上传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取证书类型（目前支持：CA = 客户端证书，SVR = 服务器证书）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertType 证书类型（目前支持：CA = 客户端证书，SVR = 服务器证书）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书类型（目前支持：CA = 客户端证书，SVR = 服务器证书）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certType 证书类型（目前支持：CA = 客户端证书，SVR = 服务器证书）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取证书办法者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductZhName 证书办法者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 设置证书办法者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productZhName 证书办法者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductZhName(const std::string& _productZhName);

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 别名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态值 0：审核中，1：已通过，2：审核失败，3：已过期，4：已添加云解析记录，5：OV/EV 证书，待提交资料，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态值 0：审核中，1：已通过，2：审核失败，3：已过期，4：已添加云解析记录，5：OV/EV 证书，待提交资料，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态值 0：审核中，1：已通过，2：审核失败，3：已过期，4：已添加云解析记录，5：OV/EV 证书，待提交资料，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态值 0：审核中，1：已通过，2：审核失败，3：已过期，4：已添加云解析记录，5：OV/EV 证书，待提交资料，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityStatus 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 设置漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulnerabilityStatus 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulnerabilityStatus(const std::string& _vulnerabilityStatus);

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMsg 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusMsg 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取验证类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyType 验证类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyType 验证类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取证书生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertBeginTime 证书生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置证书生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certBeginTime 证书生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertEndTime 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certEndTime 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidityPeriod 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validityPeriod 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取项目信息，ProjectId：项目ID，OwnerUin：项目所属的 uin（默认项目为0），Name：项目名称，CreatorUin：创建项目的 uin，CreateTime：项目创建时间，Info：项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectInfo 项目信息，ProjectId：项目ID，OwnerUin：项目所属的 uin（默认项目为0），Name：项目名称，CreatorUin：创建项目的 uin，CreateTime：项目创建时间，Info：项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SSLProjectInfo GetProjectInfo() const;

                    /**
                     * 设置项目信息，ProjectId：项目ID，OwnerUin：项目所属的 uin（默认项目为0），Name：项目名称，CreatorUin：创建项目的 uin，CreateTime：项目创建时间，Info：项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectInfo 项目信息，ProjectId：项目ID，OwnerUin：项目所属的 uin（默认项目为0），Name：项目名称，CreatorUin：创建项目的 uin，CreateTime：项目创建时间，Info：项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectInfo(const SSLProjectInfo& _projectInfo);

                    /**
                     * 判断参数 ProjectInfo 是否已赋值
                     * @return ProjectInfo 是否已赋值
                     * 
                     */
                    bool ProjectInfoHasBeenSet() const;

                    /**
                     * 获取证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectAltName 证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subjectAltName 证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取证书类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeName 证书类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置证书类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeName 证书类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取状态名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusName 状态名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置状态名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusName 状态名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取是否为 VIP 客户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVip 是否为 VIP 客户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置是否为 VIP 客户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVip 是否为 VIP 客户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取是否我 DV 版证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDv 是否我 DV 版证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 设置是否我 DV 版证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDv 是否我 DV 版证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDv(const bool& _isDv);

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取是否为泛域名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWildcard 是否为泛域名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 设置是否为泛域名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWildcard 是否为泛域名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsWildcard(const bool& _isWildcard);

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取是否启用了漏洞扫描功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVulnerability 是否启用了漏洞扫描功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 设置是否启用了漏洞扫描功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVulnerability 是否启用了漏洞扫描功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVulnerability(const bool& _isVulnerability);

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cert 证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cert 证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                private:

                    /**
                     * 所属账户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 证书来源：trustasia = 亚洲诚信， upload = 用户上传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 证书类型（目前支持：CA = 客户端证书，SVR = 服务器证书）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书办法者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * 主域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 状态值 0：审核中，1：已通过，2：审核失败，3：已过期，4：已添加云解析记录，5：OV/EV 证书，待提交资料，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * 验证类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 证书生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 项目信息，ProjectId：项目ID，OwnerUin：项目所属的 uin（默认项目为0），Name：项目名称，CreatorUin：创建项目的 uin，CreateTime：项目创建时间，Info：项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SSLProjectInfo m_projectInfo;
                    bool m_projectInfoHasBeenSet;

                    /**
                     * 证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * 证书类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 状态名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * 是否为 VIP 客户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 是否我 DV 版证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * 是否为泛域名证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * 是否启用了漏洞扫描功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * 证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSS_V20180426_MODEL_SSLCERTIFICATE_H_
