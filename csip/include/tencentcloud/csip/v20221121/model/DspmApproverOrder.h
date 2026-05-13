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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERORDER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>
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
                * 审批单信息
                */
                class DspmApproverOrder : public AbstractModel
                {
                public:
                    DspmApproverOrder();
                    ~DspmApproverOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应申请单id
                     * @return OrderId 对应申请单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置对应申请单id
                     * @param _orderId 对应申请单id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取身份id。
                     * @return IdentifyId 身份id。
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置身份id。
                     * @param _identifyId 身份id。
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
                     * 获取申请人账号uin
                     * @return ApplicantUin 申请人账号uin
                     * 
                     */
                    DspmUinUser GetApplicantUin() const;

                    /**
                     * 设置申请人账号uin
                     * @param _applicantUin 申请人账号uin
                     * 
                     */
                    void SetApplicantUin(const DspmUinUser& _applicantUin);

                    /**
                     * 判断参数 ApplicantUin 是否已赋值
                     * @return ApplicantUin 是否已赋值
                     * 
                     */
                    bool ApplicantUinHasBeenSet() const;

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
                     * 获取申请类型。0-关联身份 1-编辑身份 2-创建临时身份
                     * @return ApplyType 申请类型。0-关联身份 1-编辑身份 2-创建临时身份
                     * 
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置申请类型。0-关联身份 1-编辑身份 2-创建临时身份
                     * @param _applyType 申请类型。0-关联身份 1-编辑身份 2-创建临时身份
                     * 
                     */
                    void SetApplyType(const int64_t& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取申请权限
                     * @return Privilege 申请权限
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置申请权限
                     * @param _privilege 申请权限
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
                     * 获取从审批完成后开始计算的访问权限失效时间，临时账号有效。单位毫秒。
                     * @return ValidatePeriod 从审批完成后开始计算的访问权限失效时间，临时账号有效。单位毫秒。
                     * 
                     */
                    int64_t GetValidatePeriod() const;

                    /**
                     * 设置从审批完成后开始计算的访问权限失效时间，临时账号有效。单位毫秒。
                     * @param _validatePeriod 从审批完成后开始计算的访问权限失效时间，临时账号有效。单位毫秒。
                     * 
                     */
                    void SetValidatePeriod(const int64_t& _validatePeriod);

                    /**
                     * 判断参数 ValidatePeriod 是否已赋值
                     * @return ValidatePeriod 是否已赋值
                     * 
                     */
                    bool ValidatePeriodHasBeenSet() const;

                    /**
                     * 获取申请原因
                     * @return Reason 申请原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置申请原因
                     * @param _reason 申请原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取管理类型。0-普通成员 1-管理员
                     * @return ManagerType 管理类型。0-普通成员 1-管理员
                     * 
                     */
                    int64_t GetManagerType() const;

                    /**
                     * 设置管理类型。0-普通成员 1-管理员
                     * @param _managerType 管理类型。0-普通成员 1-管理员
                     * 
                     */
                    void SetManagerType(const int64_t& _managerType);

                    /**
                     * 判断参数 ManagerType 是否已赋值
                     * @return ManagerType 是否已赋值
                     * 
                     */
                    bool ManagerTypeHasBeenSet() const;

                    /**
                     * 获取个人用户信息
                     * @return Person 个人用户信息
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置个人用户信息
                     * @param _person 个人用户信息
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
                     * 获取云账号用户信息
                     * @return SubjectUser 云账号用户信息
                     * 
                     */
                    DspmUinUser GetSubjectUser() const;

                    /**
                     * 设置云账号用户信息
                     * @param _subjectUser 云账号用户信息
                     * 
                     */
                    void SetSubjectUser(const DspmUinUser& _subjectUser);

                    /**
                     * 判断参数 SubjectUser 是否已赋值
                     * @return SubjectUser 是否已赋值
                     * 
                     */
                    bool SubjectUserHasBeenSet() const;

                    /**
                     * 获取对应申请单创建时间。
                     * @return CreateTime 对应申请单创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置对应申请单创建时间。
                     * @param _createTime 对应申请单创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 对应申请单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 身份id。
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * 申请人账号uin
                     */
                    DspmUinUser m_applicantUin;
                    bool m_applicantUinHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 申请类型。0-关联身份 1-编辑身份 2-创建临时身份
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * 申请权限
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 从审批完成后开始计算的访问权限失效时间，临时账号有效。单位毫秒。
                     */
                    int64_t m_validatePeriod;
                    bool m_validatePeriodHasBeenSet;

                    /**
                     * 申请原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 管理类型。0-普通成员 1-管理员
                     */
                    int64_t m_managerType;
                    bool m_managerTypeHasBeenSet;

                    /**
                     * 个人用户信息
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 云账号用户信息
                     */
                    DspmUinUser m_subjectUser;
                    bool m_subjectUserHasBeenSet;

                    /**
                     * 对应申请单创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERORDER_H_
