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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINSIMPLEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 获取域名基础模板信息
                */
                class DomainSimpleInfo : public AbstractModel
                {
                public:
                    DomainSimpleInfo();
                    ~DomainSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名资源ID。
                     * @return DomainId 域名资源ID。
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名资源ID。
                     * @param _domainId 域名资源ID。
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名名称。
                     * @return DomainName 域名名称。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名名称。
                     * @param _domainName 域名名称。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取域名实名认证状态。
NotUpload：未实名认证
InAudit：实名审核中
Approved：实名审核通过
Reject：实名审核失败
NoAudit: 无需实名认证
                     * @return RealNameAuditStatus 域名实名认证状态。
NotUpload：未实名认证
InAudit：实名审核中
Approved：实名审核通过
Reject：实名审核失败
NoAudit: 无需实名认证
                     * 
                     */
                    std::string GetRealNameAuditStatus() const;

                    /**
                     * 设置域名实名认证状态。
NotUpload：未实名认证
InAudit：实名审核中
Approved：实名审核通过
Reject：实名审核失败
NoAudit: 无需实名认证
                     * @param _realNameAuditStatus 域名实名认证状态。
NotUpload：未实名认证
InAudit：实名审核中
Approved：实名审核通过
Reject：实名审核失败
NoAudit: 无需实名认证
                     * 
                     */
                    void SetRealNameAuditStatus(const std::string& _realNameAuditStatus);

                    /**
                     * 判断参数 RealNameAuditStatus 是否已赋值
                     * @return RealNameAuditStatus 是否已赋值
                     * 
                     */
                    bool RealNameAuditStatusHasBeenSet() const;

                    /**
                     * 获取域名实名认证不通过原因。
                     * @return RealNameAuditUnpassReason 域名实名认证不通过原因。
                     * 
                     */
                    std::string GetRealNameAuditUnpassReason() const;

                    /**
                     * 设置域名实名认证不通过原因。
                     * @param _realNameAuditUnpassReason 域名实名认证不通过原因。
                     * 
                     */
                    void SetRealNameAuditUnpassReason(const std::string& _realNameAuditUnpassReason);

                    /**
                     * 判断参数 RealNameAuditUnpassReason 是否已赋值
                     * @return RealNameAuditUnpassReason 是否已赋值
                     * 
                     */
                    bool RealNameAuditUnpassReasonHasBeenSet() const;

                    /**
                     * 获取域名命名审核状态。
NotAudit：命名审核未上传
Pending：命名审核待上传
Auditing：域名命名审核中
Approved：域名命名审核通过
Rejected：域名命名审核拒绝
                     * @return DomainNameAuditStatus 域名命名审核状态。
NotAudit：命名审核未上传
Pending：命名审核待上传
Auditing：域名命名审核中
Approved：域名命名审核通过
Rejected：域名命名审核拒绝
                     * 
                     */
                    std::string GetDomainNameAuditStatus() const;

                    /**
                     * 设置域名命名审核状态。
NotAudit：命名审核未上传
Pending：命名审核待上传
Auditing：域名命名审核中
Approved：域名命名审核通过
Rejected：域名命名审核拒绝
                     * @param _domainNameAuditStatus 域名命名审核状态。
NotAudit：命名审核未上传
Pending：命名审核待上传
Auditing：域名命名审核中
Approved：域名命名审核通过
Rejected：域名命名审核拒绝
                     * 
                     */
                    void SetDomainNameAuditStatus(const std::string& _domainNameAuditStatus);

                    /**
                     * 判断参数 DomainNameAuditStatus 是否已赋值
                     * @return DomainNameAuditStatus 是否已赋值
                     * 
                     */
                    bool DomainNameAuditStatusHasBeenSet() const;

                    /**
                     * 获取域名命名审核不通过原因。
                     * @return DomainNameAuditUnpassReason 域名命名审核不通过原因。
                     * 
                     */
                    std::string GetDomainNameAuditUnpassReason() const;

                    /**
                     * 设置域名命名审核不通过原因。
                     * @param _domainNameAuditUnpassReason 域名命名审核不通过原因。
                     * 
                     */
                    void SetDomainNameAuditUnpassReason(const std::string& _domainNameAuditUnpassReason);

                    /**
                     * 判断参数 DomainNameAuditUnpassReason 是否已赋值
                     * @return DomainNameAuditUnpassReason 是否已赋值
                     * 
                     */
                    bool DomainNameAuditUnpassReasonHasBeenSet() const;

                    /**
                     * 获取注册时间。
                     * @return CreationDate 注册时间。
                     * 
                     */
                    std::string GetCreationDate() const;

                    /**
                     * 设置注册时间。
                     * @param _creationDate 注册时间。
                     * 
                     */
                    void SetCreationDate(const std::string& _creationDate);

                    /**
                     * 判断参数 CreationDate 是否已赋值
                     * @return CreationDate 是否已赋值
                     * 
                     */
                    bool CreationDateHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpirationDate 到期时间
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置到期时间
                     * @param _expirationDate 到期时间
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取域名状态。
ok：正常
serverHold：注册局暂停解析 
clientHold：注册商暂停解析
pendingTransfer：转移中
renewingPeriod：续费期
redemptionPeriod：偿还期
pendingDelete：删除期
serverTransferProhibited：注册局禁止转移
serverUpdateProhibited：注册局禁止更新
serverDeleteProhibited：注册局禁止删除
clientTransferProhibited：注册商禁止转移
clientUpdateProhibited：注册商禁止更新
clientDeleteProhibited：注册商禁止删除
serverRenewProhibited: 注册局禁止续费
clientRenewProhibited: 注册商禁止续费
                     * @return DomainStatus 域名状态。
ok：正常
serverHold：注册局暂停解析 
clientHold：注册商暂停解析
pendingTransfer：转移中
renewingPeriod：续费期
redemptionPeriod：偿还期
pendingDelete：删除期
serverTransferProhibited：注册局禁止转移
serverUpdateProhibited：注册局禁止更新
serverDeleteProhibited：注册局禁止删除
clientTransferProhibited：注册商禁止转移
clientUpdateProhibited：注册商禁止更新
clientDeleteProhibited：注册商禁止删除
serverRenewProhibited: 注册局禁止续费
clientRenewProhibited: 注册商禁止续费
                     * 
                     */
                    std::vector<std::string> GetDomainStatus() const;

                    /**
                     * 设置域名状态。
ok：正常
serverHold：注册局暂停解析 
clientHold：注册商暂停解析
pendingTransfer：转移中
renewingPeriod：续费期
redemptionPeriod：偿还期
pendingDelete：删除期
serverTransferProhibited：注册局禁止转移
serverUpdateProhibited：注册局禁止更新
serverDeleteProhibited：注册局禁止删除
clientTransferProhibited：注册商禁止转移
clientUpdateProhibited：注册商禁止更新
clientDeleteProhibited：注册商禁止删除
serverRenewProhibited: 注册局禁止续费
clientRenewProhibited: 注册商禁止续费
                     * @param _domainStatus 域名状态。
ok：正常
serverHold：注册局暂停解析 
clientHold：注册商暂停解析
pendingTransfer：转移中
renewingPeriod：续费期
redemptionPeriod：偿还期
pendingDelete：删除期
serverTransferProhibited：注册局禁止转移
serverUpdateProhibited：注册局禁止更新
serverDeleteProhibited：注册局禁止删除
clientTransferProhibited：注册商禁止转移
clientUpdateProhibited：注册商禁止更新
clientDeleteProhibited：注册商禁止删除
serverRenewProhibited: 注册局禁止续费
clientRenewProhibited: 注册商禁止续费
                     * 
                     */
                    void SetDomainStatus(const std::vector<std::string>& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取域名购买状态。
ok：正常
RegisterPending：待注册
RegisterDoing：注册中
RegisterFailed：注册失败
AboutToExpire: 即将过期
RenewPending：已进入续费期，需要进行续费
RenewDoing：续费中
RedemptionPending：已进入赎回期，需要进行续费
RedemptionDoing：赎回中
TransferPending：待转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * @return BuyStatus 域名购买状态。
ok：正常
RegisterPending：待注册
RegisterDoing：注册中
RegisterFailed：注册失败
AboutToExpire: 即将过期
RenewPending：已进入续费期，需要进行续费
RenewDoing：续费中
RedemptionPending：已进入赎回期，需要进行续费
RedemptionDoing：赎回中
TransferPending：待转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * 
                     */
                    std::string GetBuyStatus() const;

                    /**
                     * 设置域名购买状态。
ok：正常
RegisterPending：待注册
RegisterDoing：注册中
RegisterFailed：注册失败
AboutToExpire: 即将过期
RenewPending：已进入续费期，需要进行续费
RenewDoing：续费中
RedemptionPending：已进入赎回期，需要进行续费
RedemptionDoing：赎回中
TransferPending：待转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * @param _buyStatus 域名购买状态。
ok：正常
RegisterPending：待注册
RegisterDoing：注册中
RegisterFailed：注册失败
AboutToExpire: 即将过期
RenewPending：已进入续费期，需要进行续费
RenewDoing：续费中
RedemptionPending：已进入赎回期，需要进行续费
RedemptionDoing：赎回中
TransferPending：待转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * 
                     */
                    void SetBuyStatus(const std::string& _buyStatus);

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取注册商类型
epp: DNSPod, Inc.（烟台帝思普网络科技有限公司）
qcloud: Tencent Cloud Computing (Beijing) Limited Liability Company（腾讯云计算（北京）有限责任公司）
yunxun: Guangzhou Yunxun Information Technology Co., Ltd.（广州云讯信息科技有限公司）
xinnet: Xin Net Technology Corporation（北京新网数码信息技术有限公司）
                     * @return RegistrarType 注册商类型
epp: DNSPod, Inc.（烟台帝思普网络科技有限公司）
qcloud: Tencent Cloud Computing (Beijing) Limited Liability Company（腾讯云计算（北京）有限责任公司）
yunxun: Guangzhou Yunxun Information Technology Co., Ltd.（广州云讯信息科技有限公司）
xinnet: Xin Net Technology Corporation（北京新网数码信息技术有限公司）
                     * 
                     */
                    std::string GetRegistrarType() const;

                    /**
                     * 设置注册商类型
epp: DNSPod, Inc.（烟台帝思普网络科技有限公司）
qcloud: Tencent Cloud Computing (Beijing) Limited Liability Company（腾讯云计算（北京）有限责任公司）
yunxun: Guangzhou Yunxun Information Technology Co., Ltd.（广州云讯信息科技有限公司）
xinnet: Xin Net Technology Corporation（北京新网数码信息技术有限公司）
                     * @param _registrarType 注册商类型
epp: DNSPod, Inc.（烟台帝思普网络科技有限公司）
qcloud: Tencent Cloud Computing (Beijing) Limited Liability Company（腾讯云计算（北京）有限责任公司）
yunxun: Guangzhou Yunxun Information Technology Co., Ltd.（广州云讯信息科技有限公司）
xinnet: Xin Net Technology Corporation（北京新网数码信息技术有限公司）
                     * 
                     */
                    void SetRegistrarType(const std::string& _registrarType);

                    /**
                     * 判断参数 RegistrarType 是否已赋值
                     * @return RegistrarType 是否已赋值
                     * 
                     */
                    bool RegistrarTypeHasBeenSet() const;

                    /**
                     * 获取域名绑定的ns
                     * @return NameServer 域名绑定的ns
                     * 
                     */
                    std::vector<std::string> GetNameServer() const;

                    /**
                     * 设置域名绑定的ns
                     * @param _nameServer 域名绑定的ns
                     * 
                     */
                    void SetNameServer(const std::vector<std::string>& _nameServer);

                    /**
                     * 判断参数 NameServer 是否已赋值
                     * @return NameServer 是否已赋值
                     * 
                     */
                    bool NameServerHasBeenSet() const;

                    /**
                     * 获取true：开启锁定
false：关闭锁定
                     * @return LockTransfer true：开启锁定
false：关闭锁定
                     * 
                     */
                    bool GetLockTransfer() const;

                    /**
                     * 设置true：开启锁定
false：关闭锁定
                     * @param _lockTransfer true：开启锁定
false：关闭锁定
                     * 
                     */
                    void SetLockTransfer(const bool& _lockTransfer);

                    /**
                     * 判断参数 LockTransfer 是否已赋值
                     * @return LockTransfer 是否已赋值
                     * 
                     */
                    bool LockTransferHasBeenSet() const;

                    /**
                     * 获取锁定结束时间
                     * @return LockEndTime 锁定结束时间
                     * 
                     */
                    std::string GetLockEndTime() const;

                    /**
                     * 设置锁定结束时间
                     * @param _lockEndTime 锁定结束时间
                     * 
                     */
                    void SetLockEndTime(const std::string& _lockEndTime);

                    /**
                     * 判断参数 LockEndTime 是否已赋值
                     * @return LockEndTime 是否已赋值
                     * 
                     */
                    bool LockEndTimeHasBeenSet() const;

                    /**
                     * 获取认证类型：I=个人，E=企业
                     * @return RegistrantType 认证类型：I=个人，E=企业
                     * 
                     */
                    std::string GetRegistrantType() const;

                    /**
                     * 设置认证类型：I=个人，E=企业
                     * @param _registrantType 认证类型：I=个人，E=企业
                     * 
                     */
                    void SetRegistrantType(const std::string& _registrantType);

                    /**
                     * 判断参数 RegistrantType 是否已赋值
                     * @return RegistrantType 是否已赋值
                     * 
                     */
                    bool RegistrantTypeHasBeenSet() const;

                    /**
                     * 获取域名所有者，中文
                     * @return OrganizationNameCN 域名所有者，中文
                     * 
                     */
                    std::string GetOrganizationNameCN() const;

                    /**
                     * 设置域名所有者，中文
                     * @param _organizationNameCN 域名所有者，中文
                     * 
                     */
                    void SetOrganizationNameCN(const std::string& _organizationNameCN);

                    /**
                     * 判断参数 OrganizationNameCN 是否已赋值
                     * @return OrganizationNameCN 是否已赋值
                     * 
                     */
                    bool OrganizationNameCNHasBeenSet() const;

                    /**
                     * 获取域名所有者，英文
                     * @return OrganizationName 域名所有者，英文
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置域名所有者，英文
                     * @param _organizationName 域名所有者，英文
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取域名联系人，中文
                     * @return RegistrantNameCN 域名联系人，中文
                     * 
                     */
                    std::string GetRegistrantNameCN() const;

                    /**
                     * 设置域名联系人，中文
                     * @param _registrantNameCN 域名联系人，中文
                     * 
                     */
                    void SetRegistrantNameCN(const std::string& _registrantNameCN);

                    /**
                     * 判断参数 RegistrantNameCN 是否已赋值
                     * @return RegistrantNameCN 是否已赋值
                     * 
                     */
                    bool RegistrantNameCNHasBeenSet() const;

                    /**
                     * 获取域名联系人，英文
                     * @return RegistrantName 域名联系人，英文
                     * 
                     */
                    std::string GetRegistrantName() const;

                    /**
                     * 设置域名联系人，英文
                     * @param _registrantName 域名联系人，英文
                     * 
                     */
                    void SetRegistrantName(const std::string& _registrantName);

                    /**
                     * 判断参数 RegistrantName 是否已赋值
                     * @return RegistrantName 是否已赋值
                     * 
                     */
                    bool RegistrantNameHasBeenSet() const;

                private:

                    /**
                     * 域名资源ID。
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名名称。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 域名实名认证状态。
NotUpload：未实名认证
InAudit：实名审核中
Approved：实名审核通过
Reject：实名审核失败
NoAudit: 无需实名认证
                     */
                    std::string m_realNameAuditStatus;
                    bool m_realNameAuditStatusHasBeenSet;

                    /**
                     * 域名实名认证不通过原因。
                     */
                    std::string m_realNameAuditUnpassReason;
                    bool m_realNameAuditUnpassReasonHasBeenSet;

                    /**
                     * 域名命名审核状态。
NotAudit：命名审核未上传
Pending：命名审核待上传
Auditing：域名命名审核中
Approved：域名命名审核通过
Rejected：域名命名审核拒绝
                     */
                    std::string m_domainNameAuditStatus;
                    bool m_domainNameAuditStatusHasBeenSet;

                    /**
                     * 域名命名审核不通过原因。
                     */
                    std::string m_domainNameAuditUnpassReason;
                    bool m_domainNameAuditUnpassReasonHasBeenSet;

                    /**
                     * 注册时间。
                     */
                    std::string m_creationDate;
                    bool m_creationDateHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 域名状态。
ok：正常
serverHold：注册局暂停解析 
clientHold：注册商暂停解析
pendingTransfer：转移中
renewingPeriod：续费期
redemptionPeriod：偿还期
pendingDelete：删除期
serverTransferProhibited：注册局禁止转移
serverUpdateProhibited：注册局禁止更新
serverDeleteProhibited：注册局禁止删除
clientTransferProhibited：注册商禁止转移
clientUpdateProhibited：注册商禁止更新
clientDeleteProhibited：注册商禁止删除
serverRenewProhibited: 注册局禁止续费
clientRenewProhibited: 注册商禁止续费
                     */
                    std::vector<std::string> m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * 域名购买状态。
ok：正常
RegisterPending：待注册
RegisterDoing：注册中
RegisterFailed：注册失败
AboutToExpire: 即将过期
RenewPending：已进入续费期，需要进行续费
RenewDoing：续费中
RedemptionPending：已进入赎回期，需要进行续费
RedemptionDoing：赎回中
TransferPending：待转入中
TransferTransing：转入中
TransferFailed：转入失败
                     */
                    std::string m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * 注册商类型
epp: DNSPod, Inc.（烟台帝思普网络科技有限公司）
qcloud: Tencent Cloud Computing (Beijing) Limited Liability Company（腾讯云计算（北京）有限责任公司）
yunxun: Guangzhou Yunxun Information Technology Co., Ltd.（广州云讯信息科技有限公司）
xinnet: Xin Net Technology Corporation（北京新网数码信息技术有限公司）
                     */
                    std::string m_registrarType;
                    bool m_registrarTypeHasBeenSet;

                    /**
                     * 域名绑定的ns
                     */
                    std::vector<std::string> m_nameServer;
                    bool m_nameServerHasBeenSet;

                    /**
                     * true：开启锁定
false：关闭锁定
                     */
                    bool m_lockTransfer;
                    bool m_lockTransferHasBeenSet;

                    /**
                     * 锁定结束时间
                     */
                    std::string m_lockEndTime;
                    bool m_lockEndTimeHasBeenSet;

                    /**
                     * 认证类型：I=个人，E=企业
                     */
                    std::string m_registrantType;
                    bool m_registrantTypeHasBeenSet;

                    /**
                     * 域名所有者，中文
                     */
                    std::string m_organizationNameCN;
                    bool m_organizationNameCNHasBeenSet;

                    /**
                     * 域名所有者，英文
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 域名联系人，中文
                     */
                    std::string m_registrantNameCN;
                    bool m_registrantNameCNHasBeenSet;

                    /**
                     * 域名联系人，英文
                     */
                    std::string m_registrantName;
                    bool m_registrantNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINSIMPLEINFO_H_
