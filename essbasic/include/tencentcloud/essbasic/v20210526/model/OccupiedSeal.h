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
                     * 获取<p>电子印章编号</p>
                     * @return SealId <p>电子印章编号</p>
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置<p>电子印章编号</p>
                     * @param _sealId <p>电子印章编号</p>
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
                     * 获取<p>电子印章名称</p>
                     * @return SealName <p>电子印章名称</p>
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置<p>电子印章名称</p>
                     * @param _sealName <p>电子印章名称</p>
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
                     * 获取<p>电子印章授权时间戳，单位秒</p>
                     * @return CreateOn <p>电子印章授权时间戳，单位秒</p>
                     * 
                     */
                    int64_t GetCreateOn() const;

                    /**
                     * 设置<p>电子印章授权时间戳，单位秒</p>
                     * @param _createOn <p>电子印章授权时间戳，单位秒</p>
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
                     * 获取<p>电子印章授权人，电子签的UserId</p>
                     * @return Creator <p>电子印章授权人，电子签的UserId</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>电子印章授权人，电子签的UserId</p>
                     * @param _creator <p>电子印章授权人，电子签的UserId</p>
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
                     * 获取<p>电子印章策略Id</p>
                     * @return SealPolicyId <p>电子印章策略Id</p>
                     * 
                     */
                    std::string GetSealPolicyId() const;

                    /**
                     * 设置<p>电子印章策略Id</p>
                     * @param _sealPolicyId <p>电子印章策略Id</p>
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
                     * 获取<p>印章状态</p><p>枚举值：</p><ul><li>CHECKING： 待审核</li><li>CHECKING-SADM： 待超管审核</li><li>SUCCESS： 启用状态</li><li>FAIL： 审核拒绝</li><li>DISABLE： 已停用</li><li>STOPPED： 已终止</li><li>VOID： 已作废</li><li>INVALID： 已失效</li></ul>
                     * @return SealStatus <p>印章状态</p><p>枚举值：</p><ul><li>CHECKING： 待审核</li><li>CHECKING-SADM： 待超管审核</li><li>SUCCESS： 启用状态</li><li>FAIL： 审核拒绝</li><li>DISABLE： 已停用</li><li>STOPPED： 已终止</li><li>VOID： 已作废</li><li>INVALID： 已失效</li></ul>
                     * 
                     */
                    std::string GetSealStatus() const;

                    /**
                     * 设置<p>印章状态</p><p>枚举值：</p><ul><li>CHECKING： 待审核</li><li>CHECKING-SADM： 待超管审核</li><li>SUCCESS： 启用状态</li><li>FAIL： 审核拒绝</li><li>DISABLE： 已停用</li><li>STOPPED： 已终止</li><li>VOID： 已作废</li><li>INVALID： 已失效</li></ul>
                     * @param _sealStatus <p>印章状态</p><p>枚举值：</p><ul><li>CHECKING： 待审核</li><li>CHECKING-SADM： 待超管审核</li><li>SUCCESS： 启用状态</li><li>FAIL： 审核拒绝</li><li>DISABLE： 已停用</li><li>STOPPED： 已终止</li><li>VOID： 已作废</li><li>INVALID： 已失效</li></ul>
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
                     * 获取<p>审核失败原因</p>
                     * @return FailReason <p>审核失败原因</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>审核失败原因</p>
                     * @param _failReason <p>审核失败原因</p>
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
                     * 获取<p>印章图片url，5分钟内有效</p>
                     * @return Url <p>印章图片url，5分钟内有效</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>印章图片url，5分钟内有效</p>
                     * @param _url <p>印章图片url，5分钟内有效</p>
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
                     * 获取<p>电子印章类型 , 可选类型如下: </p><ul><li>**OFFICIAL**: (默认)公章</li><li>**CONTRACT**: 合同专用章;</li><li>**FINANCE**: 财务专用章;</li><li>**PERSONNEL**: 人事专用章</li><li>**INVOICE**: 发票专用章</li></ul>
                     * @return SealType <p>电子印章类型 , 可选类型如下: </p><ul><li>**OFFICIAL**: (默认)公章</li><li>**CONTRACT**: 合同专用章;</li><li>**FINANCE**: 财务专用章;</li><li>**PERSONNEL**: 人事专用章</li><li>**INVOICE**: 发票专用章</li></ul>
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置<p>电子印章类型 , 可选类型如下: </p><ul><li>**OFFICIAL**: (默认)公章</li><li>**CONTRACT**: 合同专用章;</li><li>**FINANCE**: 财务专用章;</li><li>**PERSONNEL**: 人事专用章</li><li>**INVOICE**: 发票专用章</li></ul>
                     * @param _sealType <p>电子印章类型 , 可选类型如下: </p><ul><li>**OFFICIAL**: (默认)公章</li><li>**CONTRACT**: 合同专用章;</li><li>**FINANCE**: 财务专用章;</li><li>**PERSONNEL**: 人事专用章</li><li>**INVOICE**: 发票专用章</li></ul>
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
                     * 获取<p>用印申请是否为永久授权</p>
                     * @return IsAllTime <p>用印申请是否为永久授权</p>
                     * 
                     */
                    bool GetIsAllTime() const;

                    /**
                     * 设置<p>用印申请是否为永久授权</p>
                     * @param _isAllTime <p>用印申请是否为永久授权</p>
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
                     * 获取<p>授权人列表</p>
                     * @return AuthorizedUsers <p>授权人列表</p>
                     * 
                     */
                    std::vector<AuthorizedUser> GetAuthorizedUsers() const;

                    /**
                     * 设置<p>授权人列表</p>
                     * @param _authorizedUsers <p>授权人列表</p>
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
                     * 获取<p>印章的真实宽度，单位毫米</p>
                     * @return RealWidth <p>印章的真实宽度，单位毫米</p>
                     * 
                     */
                    int64_t GetRealWidth() const;

                    /**
                     * 设置<p>印章的真实宽度，单位毫米</p>
                     * @param _realWidth <p>印章的真实宽度，单位毫米</p>
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
                     * 获取<p>印章的真实高度，单位毫米</p>
                     * @return RealHeight <p>印章的真实高度，单位毫米</p>
                     * 
                     */
                    int64_t GetRealHeight() const;

                    /**
                     * 设置<p>印章的真实高度，单位毫米</p>
                     * @param _realHeight <p>印章的真实高度，单位毫米</p>
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
                     * 获取<p>印章描述</p>
                     * @return SealDescription <p>印章描述</p>
                     * 
                     */
                    std::string GetSealDescription() const;

                    /**
                     * 设置<p>印章描述</p>
                     * @param _sealDescription <p>印章描述</p>
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
                     * <p>电子印章编号</p>
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * <p>电子印章名称</p>
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * <p>电子印章授权时间戳，单位秒</p>
                     */
                    int64_t m_createOn;
                    bool m_createOnHasBeenSet;

                    /**
                     * <p>电子印章授权人，电子签的UserId</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>电子印章策略Id</p>
                     */
                    std::string m_sealPolicyId;
                    bool m_sealPolicyIdHasBeenSet;

                    /**
                     * <p>印章状态</p><p>枚举值：</p><ul><li>CHECKING： 待审核</li><li>CHECKING-SADM： 待超管审核</li><li>SUCCESS： 启用状态</li><li>FAIL： 审核拒绝</li><li>DISABLE： 已停用</li><li>STOPPED： 已终止</li><li>VOID： 已作废</li><li>INVALID： 已失效</li></ul>
                     */
                    std::string m_sealStatus;
                    bool m_sealStatusHasBeenSet;

                    /**
                     * <p>审核失败原因</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>印章图片url，5分钟内有效</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>电子印章类型 , 可选类型如下: </p><ul><li>**OFFICIAL**: (默认)公章</li><li>**CONTRACT**: 合同专用章;</li><li>**FINANCE**: 财务专用章;</li><li>**PERSONNEL**: 人事专用章</li><li>**INVOICE**: 发票专用章</li></ul>
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * <p>用印申请是否为永久授权</p>
                     */
                    bool m_isAllTime;
                    bool m_isAllTimeHasBeenSet;

                    /**
                     * <p>授权人列表</p>
                     */
                    std::vector<AuthorizedUser> m_authorizedUsers;
                    bool m_authorizedUsersHasBeenSet;

                    /**
                     * <p>印章的真实宽度，单位毫米</p>
                     */
                    int64_t m_realWidth;
                    bool m_realWidthHasBeenSet;

                    /**
                     * <p>印章的真实高度，单位毫米</p>
                     */
                    int64_t m_realHeight;
                    bool m_realHeightHasBeenSet;

                    /**
                     * <p>印章描述</p>
                     */
                    std::string m_sealDescription;
                    bool m_sealDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OCCUPIEDSEAL_H_
