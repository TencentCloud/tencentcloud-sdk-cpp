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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERCSPMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERCSPMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 账号CSPM信息
                */
                class UserCSPMInfo : public AbstractModel
                {
                public:
                    UserCSPMInfo();
                    ~UserCSPMInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>APPID</p>
                     * @return AppID <p>APPID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appID <p>APPID</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>UIN</p>
                     * @return Uin <p>UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>UIN</p>
                     * @param _uin <p>UIN</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>账号昵称</p>
                     * @return NickName <p>账号昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>账号昵称</p>
                     * @param _nickName <p>账号昵称</p>
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
                     * 获取<p>CSPM扫描配额</p>
                     * @return CSPMNum <p>CSPM扫描配额</p>
                     * 
                     */
                    int64_t GetCSPMNum() const;

                    /**
                     * 设置<p>CSPM扫描配额</p>
                     * @param _cSPMNum <p>CSPM扫描配额</p>
                     * 
                     */
                    void SetCSPMNum(const int64_t& _cSPMNum);

                    /**
                     * 判断参数 CSPMNum 是否已赋值
                     * @return CSPMNum 是否已赋值
                     * 
                     */
                    bool CSPMNumHasBeenSet() const;

                    /**
                     * 获取<p>已消耗CSPM扫描配额</p>
                     * @return UsedCount <p>已消耗CSPM扫描配额</p>
                     * 
                     */
                    int64_t GetUsedCount() const;

                    /**
                     * 设置<p>已消耗CSPM扫描配额</p>
                     * @param _usedCount <p>已消耗CSPM扫描配额</p>
                     * 
                     */
                    void SetUsedCount(const int64_t& _usedCount);

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取<p>赠送CSPM扫描配额</p>
                     * @return GrantedCSPMNum <p>赠送CSPM扫描配额</p>
                     * 
                     */
                    int64_t GetGrantedCSPMNum() const;

                    /**
                     * 设置<p>赠送CSPM扫描配额</p>
                     * @param _grantedCSPMNum <p>赠送CSPM扫描配额</p>
                     * 
                     */
                    void SetGrantedCSPMNum(const int64_t& _grantedCSPMNum);

                    /**
                     * 判断参数 GrantedCSPMNum 是否已赋值
                     * @return GrantedCSPMNum 是否已赋值
                     * 
                     */
                    bool GrantedCSPMNumHasBeenSet() const;

                    /**
                     * 获取<p>是否被共享，1-被共享，2-未被共享</p>
                     * @return IsShared <p>是否被共享，1-被共享，2-未被共享</p>
                     * 
                     */
                    int64_t GetIsShared() const;

                    /**
                     * 设置<p>是否被共享，1-被共享，2-未被共享</p>
                     * @param _isShared <p>是否被共享，1-被共享，2-未被共享</p>
                     * 
                     */
                    void SetIsShared(const int64_t& _isShared);

                    /**
                     * 判断参数 IsShared 是否已赋值
                     * @return IsShared 是否已赋值
                     * 
                     */
                    bool IsSharedHasBeenSet() const;

                    /**
                     * 获取<p>是否单独购买，1-单独购买，2-未单独购买</p>
                     * @return IsSelfBuy <p>是否单独购买，1-单独购买，2-未单独购买</p>
                     * 
                     */
                    int64_t GetIsSelfBuy() const;

                    /**
                     * 设置<p>是否单独购买，1-单独购买，2-未单独购买</p>
                     * @param _isSelfBuy <p>是否单独购买，1-单独购买，2-未单独购买</p>
                     * 
                     */
                    void SetIsSelfBuy(const int64_t& _isSelfBuy);

                    /**
                     * 判断参数 IsSelfBuy 是否已赋值
                     * @return IsSelfBuy 是否已赋值
                     * 
                     */
                    bool IsSelfBuyHasBeenSet() const;

                    /**
                     * 获取<p>配额来源账号</p>
                     * @return ShareFromAppID <p>配额来源账号</p>
                     * 
                     */
                    int64_t GetShareFromAppID() const;

                    /**
                     * 设置<p>配额来源账号</p>
                     * @param _shareFromAppID <p>配额来源账号</p>
                     * 
                     */
                    void SetShareFromAppID(const int64_t& _shareFromAppID);

                    /**
                     * 判断参数 ShareFromAppID 是否已赋值
                     * @return ShareFromAppID 是否已赋值
                     * 
                     */
                    bool ShareFromAppIDHasBeenSet() const;

                    /**
                     * 获取<p>角色:member:成员;admin:管理员;delegatedAdmin:委派管理员</p>
                     * @return Role <p>角色:member:成员;admin:管理员;delegatedAdmin:委派管理员</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>角色:member:成员;admin:管理员;delegatedAdmin:委派管理员</p>
                     * @param _role <p>角色:member:成员;admin:管理员;delegatedAdmin:委派管理员</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>所在部门</p>
                     * @return Department <p>所在部门</p>
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置<p>所在部门</p>
                     * @param _department <p>所在部门</p>
                     * 
                     */
                    void SetDepartment(const std::string& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                private:

                    /**
                     * <p>APPID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>账号昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>CSPM扫描配额</p>
                     */
                    int64_t m_cSPMNum;
                    bool m_cSPMNumHasBeenSet;

                    /**
                     * <p>已消耗CSPM扫描配额</p>
                     */
                    int64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * <p>赠送CSPM扫描配额</p>
                     */
                    int64_t m_grantedCSPMNum;
                    bool m_grantedCSPMNumHasBeenSet;

                    /**
                     * <p>是否被共享，1-被共享，2-未被共享</p>
                     */
                    int64_t m_isShared;
                    bool m_isSharedHasBeenSet;

                    /**
                     * <p>是否单独购买，1-单独购买，2-未单独购买</p>
                     */
                    int64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

                    /**
                     * <p>配额来源账号</p>
                     */
                    int64_t m_shareFromAppID;
                    bool m_shareFromAppIDHasBeenSet;

                    /**
                     * <p>角色:member:成员;admin:管理员;delegatedAdmin:委派管理员</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>所在部门</p>
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERCSPMINFO_H_
