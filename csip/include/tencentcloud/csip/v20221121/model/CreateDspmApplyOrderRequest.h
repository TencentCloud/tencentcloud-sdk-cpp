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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmApplyOrder请求参数结构体
                */
                class CreateDspmApplyOrderRequest : public AbstractModel
                {
                public:
                    CreateDspmApplyOrderRequest();
                    ~CreateDspmApplyOrderRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取申请类型。0-子账号授权 1-访客授权。
                     * @return ApplyType 申请类型。0-子账号授权 1-访客授权。
                     * 
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置申请类型。0-子账号授权 1-访客授权。
                     * @param _applyType 申请类型。0-子账号授权 1-访客授权。
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
                     * 获取权限信息。
                     * @return Privilege 权限信息。
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置权限信息。
                     * @param _privilege 权限信息。
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
                     * 获取主机地址。当前仅支持'%'。默认'%'。
                     * @return Host 主机地址。当前仅支持'%'。默认'%'。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机地址。当前仅支持'%'。默认'%'。
                     * @param _host 主机地址。当前仅支持'%'。默认'%'。
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
                     * 获取审批人列表。为空使用资产全部管理员。
                     * @return ApproverUin 审批人列表。为空使用资产全部管理员。
                     * 
                     */
                    std::vector<std::string> GetApproverUin() const;

                    /**
                     * 设置审批人列表。为空使用资产全部管理员。
                     * @param _approverUin 审批人列表。为空使用资产全部管理员。
                     * 
                     */
                    void SetApproverUin(const std::vector<std::string>& _approverUin);

                    /**
                     * 判断参数 ApproverUin 是否已赋值
                     * @return ApproverUin 是否已赋值
                     * 
                     */
                    bool ApproverUinHasBeenSet() const;

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
                     * 获取被授权者。子账号授权时，传目标uin，为空时默认使用当前uin；访客授权时传访客身份id。
                     * @return Subject 被授权者。子账号授权时，传目标uin，为空时默认使用当前uin；访客授权时传访客身份id。
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置被授权者。子账号授权时，传目标uin，为空时默认使用当前uin；访客授权时传访客身份id。
                     * @param _subject 被授权者。子账号授权时，传目标uin，为空时默认使用当前uin；访客授权时传访客身份id。
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                private:

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 申请类型。0-子账号授权 1-访客授权。
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * 权限信息。
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 主机地址。当前仅支持'%'。默认'%'。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 从审批完成后开始计算的访问权限失效时间，临时账号有效。单位毫秒。
                     */
                    int64_t m_validatePeriod;
                    bool m_validatePeriodHasBeenSet;

                    /**
                     * 审批人列表。为空使用资产全部管理员。
                     */
                    std::vector<std::string> m_approverUin;
                    bool m_approverUinHasBeenSet;

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
                     * 被授权者。子账号授权时，传目标uin，为空时默认使用当前uin；访客授权时传访客身份id。
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERREQUEST_H_
