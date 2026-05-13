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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNTIDENTIFY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNTIDENTIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产账号身份信息
                */
                class DspmAssetAccountIdentify : public AbstractModel
                {
                public:
                    DspmAssetAccountIdentify();
                    ~DspmAssetAccountIdentify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取所属云账号uin用户。
                     * @return OwnerUin 所属云账号uin用户。
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置所属云账号uin用户。
                     * @param _ownerUin 所属云账号uin用户。
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取是否管理员
                     * @return IsManager 是否管理员
                     * 
                     */
                    int64_t GetIsManager() const;

                    /**
                     * 设置是否管理员
                     * @param _isManager 是否管理员
                     * 
                     */
                    void SetIsManager(const int64_t& _isManager);

                    /**
                     * 判断参数 IsManager 是否已赋值
                     * @return IsManager 是否已赋值
                     * 
                     */
                    bool IsManagerHasBeenSet() const;

                    /**
                     * 获取主机地址
                     * @return Host 主机地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机地址
                     * @param _host 主机地址
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * @return AccountType 账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * @param _accountType 账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取权限信息
                     * @return Privilege 权限信息
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置权限信息
                     * @param _privilege 权限信息
                     * 
                     */
                    void SetPrivilege(const DspmDbAccountPrivilege& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取活跃状态。 0-不活跃 1-活跃
                     * @return Status 活跃状态。 0-不活跃 1-活跃
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置活跃状态。 0-不活跃 1-活跃
                     * @param _status 活跃状态。 0-不活跃 1-活跃
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账号创建时间。
                     * @return CreateTime 账号创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置账号创建时间。
                     * @param _createTime 账号创建时间。
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
                     * 获取访问权限生效时间。
                     * @return ValidateFrom 访问权限生效时间。
                     * 
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置访问权限生效时间。
                     * @param _validateFrom 访问权限生效时间。
                     * 
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     * 
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取访问权限失效时间。
                     * @return ValidateTo 访问权限失效时间。
                     * 
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置访问权限失效时间。
                     * @param _validateTo 访问权限失效时间。
                     * 
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     * 
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取访客权限申请次数
                     * @return PersonApplyCount 访客权限申请次数
                     * 
                     */
                    int64_t GetPersonApplyCount() const;

                    /**
                     * 设置访客权限申请次数
                     * @param _personApplyCount 访客权限申请次数
                     * 
                     */
                    void SetPersonApplyCount(const int64_t& _personApplyCount);

                    /**
                     * 判断参数 PersonApplyCount 是否已赋值
                     * @return PersonApplyCount 是否已赋值
                     * 
                     */
                    bool PersonApplyCountHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取所属地域
                     * @return Region 所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地域
                     * @param _region 所属地域
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
                     * 获取风险统计信息
                     * @return RiskCount 风险统计信息
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置风险统计信息
                     * @param _riskCount 风险统计信息
                     * 
                     */
                    void SetRiskCount(const DspmRiskCount& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * @return IdentifyType 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * @param _identifyType 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取所属个人用户信息。
                     * @return Person 所属个人用户信息。
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置所属个人用户信息。
                     * @param _person 所属个人用户信息。
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取创建者账号uin用户。
                     * @return CreatorUin 创建者账号uin用户。
                     * 
                     */
                    DspmUinUser GetCreatorUin() const;

                    /**
                     * 设置创建者账号uin用户。
                     * @param _creatorUin 创建者账号uin用户。
                     * 
                     */
                    void SetCreatorUin(const DspmUinUser& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取预设权限。
                     * @return PresetPrivilege 预设权限。
                     * 
                     */
                    DspmDbAccountPrivilege GetPresetPrivilege() const;

                    /**
                     * 设置预设权限。
                     * @param _presetPrivilege 预设权限。
                     * 
                     */
                    void SetPresetPrivilege(const DspmDbAccountPrivilege& _presetPrivilege);

                    /**
                     * 判断参数 PresetPrivilege 是否已赋值
                     * @return PresetPrivilege 是否已赋值
                     * 
                     */
                    bool PresetPrivilegeHasBeenSet() const;

                    /**
                     * 获取内网访问地址，如果有多个，使用';'分割
                     * @return PrivateIp 内网访问地址，如果有多个，使用';'分割
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网访问地址，如果有多个，使用';'分割
                     * @param _privateIp 内网访问地址，如果有多个，使用';'分割
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取身份id
                     * @return IdentifyId 身份id
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置身份id
                     * @param _identifyId 身份id
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取资产所属账号app id
                     * @return AppId 资产所属账号app id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置资产所属账号app id
                     * @param _appId 资产所属账号app id
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取账号昵称
                     * @return NickName 账号昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号昵称
                     * @param _nickName 账号昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取资产所属账号uin
                     * @return Uin 资产所属账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置资产所属账号uin
                     * @param _uin 资产所属账号uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 所属云账号uin用户。
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 是否管理员
                     */
                    int64_t m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * 主机地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 权限信息
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 活跃状态。 0-不活跃 1-活跃
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账号创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 访问权限生效时间。
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 访问权限失效时间。
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 访客权限申请次数
                     */
                    int64_t m_personApplyCount;
                    bool m_personApplyCountHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 风险统计信息
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 所属个人用户信息。
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 创建者账号uin用户。
                     */
                    DspmUinUser m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 预设权限。
                     */
                    DspmDbAccountPrivilege m_presetPrivilege;
                    bool m_presetPrivilegeHasBeenSet;

                    /**
                     * 内网访问地址，如果有多个，使用';'分割
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 身份id
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * 资产所属账号app id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 资产所属账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNTIDENTIFY_H_
