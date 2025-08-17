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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OCCUPIEDSEAL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OCCUPIEDSEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/AuthorizedUser.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 持有的电子印章信息
                */
                class OccupiedSeal : public AbstractModel
                {
                public:
                    OccupiedSeal();
                    ~OccupiedSeal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电子印章编号
                     * @return SealId 电子印章编号
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置电子印章编号
                     * @param _sealId 电子印章编号
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取电子印章名称
                     * @return SealName 电子印章名称
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置电子印章名称
                     * @param _sealName 电子印章名称
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取电子印章授权时间戳，单位秒
                     * @return CreateOn 电子印章授权时间戳，单位秒
                     * 
                     */
                    int64_t GetCreateOn() const;

                    /**
                     * 设置电子印章授权时间戳，单位秒
                     * @param _createOn 电子印章授权时间戳，单位秒
                     * 
                     */
                    void SetCreateOn(const int64_t& _createOn);

                    /**
                     * 判断参数 CreateOn 是否已赋值
                     * @return CreateOn 是否已赋值
                     * 
                     */
                    bool CreateOnHasBeenSet() const;

                    /**
                     * 获取电子印章授权人，电子签的UserId
                     * @return Creator 电子印章授权人，电子签的UserId
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置电子印章授权人，电子签的UserId
                     * @param _creator 电子印章授权人，电子签的UserId
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取电子印章策略Id
                     * @return SealPolicyId 电子印章策略Id
                     * 
                     */
                    std::string GetSealPolicyId() const;

                    /**
                     * 设置电子印章策略Id
                     * @param _sealPolicyId 电子印章策略Id
                     * 
                     */
                    void SetSealPolicyId(const std::string& _sealPolicyId);

                    /**
                     * 判断参数 SealPolicyId 是否已赋值
                     * @return SealPolicyId 是否已赋值
                     * 
                     */
                    bool SealPolicyIdHasBeenSet() const;

                    /**
                     * 获取印章状态，有以下六种：CHECKING（审核中）SUCCESS（已启用）FAIL（审核拒绝）CHECKING-SADM（待超管审核）DISABLE（已停用）STOPPED（已终止）
                     * @return SealStatus 印章状态，有以下六种：CHECKING（审核中）SUCCESS（已启用）FAIL（审核拒绝）CHECKING-SADM（待超管审核）DISABLE（已停用）STOPPED（已终止）
                     * 
                     */
                    std::string GetSealStatus() const;

                    /**
                     * 设置印章状态，有以下六种：CHECKING（审核中）SUCCESS（已启用）FAIL（审核拒绝）CHECKING-SADM（待超管审核）DISABLE（已停用）STOPPED（已终止）
                     * @param _sealStatus 印章状态，有以下六种：CHECKING（审核中）SUCCESS（已启用）FAIL（审核拒绝）CHECKING-SADM（待超管审核）DISABLE（已停用）STOPPED（已终止）
                     * 
                     */
                    void SetSealStatus(const std::string& _sealStatus);

                    /**
                     * 判断参数 SealStatus 是否已赋值
                     * @return SealStatus 是否已赋值
                     * 
                     */
                    bool SealStatusHasBeenSet() const;

                    /**
                     * 获取审核失败原因
                     * @return FailReason 审核失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置审核失败原因
                     * @param _failReason 审核失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取印章图片url，5分钟内有效
                     * @return Url 印章图片url，5分钟内有效
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置印章图片url，5分钟内有效
                     * @param _url 印章图片url，5分钟内有效
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取电子印章类型 , 可选类型如下: 
<ul><li>**OFFICIAL**: (默认)公章</li>
<li>**CONTRACT**: 合同专用章;</li>
<li>**FINANCE**: 财务专用章;</li>
<li>**PERSONNEL**: 人事专用章</li>
<li>**INVOICE**: 发票专用章</li>
</ul>
                     * @return SealType 电子印章类型 , 可选类型如下: 
<ul><li>**OFFICIAL**: (默认)公章</li>
<li>**CONTRACT**: 合同专用章;</li>
<li>**FINANCE**: 财务专用章;</li>
<li>**PERSONNEL**: 人事专用章</li>
<li>**INVOICE**: 发票专用章</li>
</ul>
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置电子印章类型 , 可选类型如下: 
<ul><li>**OFFICIAL**: (默认)公章</li>
<li>**CONTRACT**: 合同专用章;</li>
<li>**FINANCE**: 财务专用章;</li>
<li>**PERSONNEL**: 人事专用章</li>
<li>**INVOICE**: 发票专用章</li>
</ul>
                     * @param _sealType 电子印章类型 , 可选类型如下: 
<ul><li>**OFFICIAL**: (默认)公章</li>
<li>**CONTRACT**: 合同专用章;</li>
<li>**FINANCE**: 财务专用章;</li>
<li>**PERSONNEL**: 人事专用章</li>
<li>**INVOICE**: 发票专用章</li>
</ul>
                     * 
                     */
                    void SetSealType(const std::string& _sealType);

                    /**
                     * 判断参数 SealType 是否已赋值
                     * @return SealType 是否已赋值
                     * 
                     */
                    bool SealTypeHasBeenSet() const;

                    /**
                     * 获取用印申请是否为永久授权
                     * @return IsAllTime 用印申请是否为永久授权
                     * 
                     */
                    bool GetIsAllTime() const;

                    /**
                     * 设置用印申请是否为永久授权
                     * @param _isAllTime 用印申请是否为永久授权
                     * 
                     */
                    void SetIsAllTime(const bool& _isAllTime);

                    /**
                     * 判断参数 IsAllTime 是否已赋值
                     * @return IsAllTime 是否已赋值
                     * 
                     */
                    bool IsAllTimeHasBeenSet() const;

                    /**
                     * 获取授权人列表
                     * @return AuthorizedUsers 授权人列表
                     * 
                     */
                    std::vector<AuthorizedUser> GetAuthorizedUsers() const;

                    /**
                     * 设置授权人列表
                     * @param _authorizedUsers 授权人列表
                     * 
                     */
                    void SetAuthorizedUsers(const std::vector<AuthorizedUser>& _authorizedUsers);

                    /**
                     * 判断参数 AuthorizedUsers 是否已赋值
                     * @return AuthorizedUsers 是否已赋值
                     * 
                     */
                    bool AuthorizedUsersHasBeenSet() const;

                    /**
                     * 获取印章的真实宽度，单位毫米	
                     * @return RealWidth 印章的真实宽度，单位毫米	
                     * 
                     */
                    int64_t GetRealWidth() const;

                    /**
                     * 设置印章的真实宽度，单位毫米	
                     * @param _realWidth 印章的真实宽度，单位毫米	
                     * 
                     */
                    void SetRealWidth(const int64_t& _realWidth);

                    /**
                     * 判断参数 RealWidth 是否已赋值
                     * @return RealWidth 是否已赋值
                     * 
                     */
                    bool RealWidthHasBeenSet() const;

                    /**
                     * 获取印章的真实高度，单位毫米	
                     * @return RealHeight 印章的真实高度，单位毫米	
                     * 
                     */
                    int64_t GetRealHeight() const;

                    /**
                     * 设置印章的真实高度，单位毫米	
                     * @param _realHeight 印章的真实高度，单位毫米	
                     * 
                     */
                    void SetRealHeight(const int64_t& _realHeight);

                    /**
                     * 判断参数 RealHeight 是否已赋值
                     * @return RealHeight 是否已赋值
                     * 
                     */
                    bool RealHeightHasBeenSet() const;

                    /**
                     * 获取印章描述
                     * @return SealDescription 印章描述
                     * 
                     */
                    std::string GetSealDescription() const;

                    /**
                     * 设置印章描述
                     * @param _sealDescription 印章描述
                     * 
                     */
                    void SetSealDescription(const std::string& _sealDescription);

                    /**
                     * 判断参数 SealDescription 是否已赋值
                     * @return SealDescription 是否已赋值
                     * 
                     */
                    bool SealDescriptionHasBeenSet() const;

                private:

                    /**
                     * 电子印章编号
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 电子印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 电子印章授权时间戳，单位秒
                     */
                    int64_t m_createOn;
                    bool m_createOnHasBeenSet;

                    /**
                     * 电子印章授权人，电子签的UserId
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 电子印章策略Id
                     */
                    std::string m_sealPolicyId;
                    bool m_sealPolicyIdHasBeenSet;

                    /**
                     * 印章状态，有以下六种：CHECKING（审核中）SUCCESS（已启用）FAIL（审核拒绝）CHECKING-SADM（待超管审核）DISABLE（已停用）STOPPED（已终止）
                     */
                    std::string m_sealStatus;
                    bool m_sealStatusHasBeenSet;

                    /**
                     * 审核失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 印章图片url，5分钟内有效
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 电子印章类型 , 可选类型如下: 
<ul><li>**OFFICIAL**: (默认)公章</li>
<li>**CONTRACT**: 合同专用章;</li>
<li>**FINANCE**: 财务专用章;</li>
<li>**PERSONNEL**: 人事专用章</li>
<li>**INVOICE**: 发票专用章</li>
</ul>
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 用印申请是否为永久授权
                     */
                    bool m_isAllTime;
                    bool m_isAllTimeHasBeenSet;

                    /**
                     * 授权人列表
                     */
                    std::vector<AuthorizedUser> m_authorizedUsers;
                    bool m_authorizedUsersHasBeenSet;

                    /**
                     * 印章的真实宽度，单位毫米	
                     */
                    int64_t m_realWidth;
                    bool m_realWidthHasBeenSet;

                    /**
                     * 印章的真实高度，单位毫米	
                     */
                    int64_t m_realHeight;
                    bool m_realHeightHasBeenSet;

                    /**
                     * 印章描述
                     */
                    std::string m_sealDescription;
                    bool m_sealDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OCCUPIEDSEAL_H_
