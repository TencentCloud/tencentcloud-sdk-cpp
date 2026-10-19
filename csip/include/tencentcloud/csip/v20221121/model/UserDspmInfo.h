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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_

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
                * 账号dspm信息
                */
                class UserDspmInfo : public AbstractModel
                {
                public:
                    UserDspmInfo();
                    ~UserDspmInfo() = default;
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
                     * 获取<p>账号下数据库资产数量</p>
                     * @return AssetNum <p>账号下数据库资产数量</p>
                     * 
                     */
                    int64_t GetAssetNum() const;

                    /**
                     * 设置<p>账号下数据库资产数量</p>
                     * @param _assetNum <p>账号下数据库资产数量</p>
                     * 
                     */
                    void SetAssetNum(const int64_t& _assetNum);

                    /**
                     * 判断参数 AssetNum 是否已赋值
                     * @return AssetNum 是否已赋值
                     * 
                     */
                    bool AssetNumHasBeenSet() const;

                    /**
                     * 获取<p>账号下开启安全分析数据库资产数量</p>
                     * @return UsedAssetNum <p>账号下开启安全分析数据库资产数量</p>
                     * 
                     */
                    int64_t GetUsedAssetNum() const;

                    /**
                     * 设置<p>账号下开启安全分析数据库资产数量</p>
                     * @param _usedAssetNum <p>账号下开启安全分析数据库资产数量</p>
                     * 
                     */
                    void SetUsedAssetNum(const int64_t& _usedAssetNum);

                    /**
                     * 判断参数 UsedAssetNum 是否已赋值
                     * @return UsedAssetNum 是否已赋值
                     * 
                     */
                    bool UsedAssetNumHasBeenSet() const;

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
                     * 获取<p>云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）</p>
                     * @return CloudType <p>云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）</p>
                     * @param _cloudType <p>云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）</p>
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>账号是否隔离中</p>
                     * @return IsIsolating <p>账号是否隔离中</p>
                     * 
                     */
                    bool GetIsIsolating() const;

                    /**
                     * 设置<p>账号是否隔离中</p>
                     * @param _isIsolating <p>账号是否隔离中</p>
                     * 
                     */
                    void SetIsIsolating(const bool& _isIsolating);

                    /**
                     * 判断参数 IsIsolating 是否已赋值
                     * @return IsIsolating 是否已赋值
                     * 
                     */
                    bool IsIsolatingHasBeenSet() const;

                    /**
                     * 获取<p>是否正在数据清理</p>
                     * @return IsDataCleaning <p>是否正在数据清理</p>
                     * 
                     */
                    bool GetIsDataCleaning() const;

                    /**
                     * 设置<p>是否正在数据清理</p>
                     * @param _isDataCleaning <p>是否正在数据清理</p>
                     * 
                     */
                    void SetIsDataCleaning(const bool& _isDataCleaning);

                    /**
                     * 判断参数 IsDataCleaning 是否已赋值
                     * @return IsDataCleaning 是否已赋值
                     * 
                     */
                    bool IsDataCleaningHasBeenSet() const;

                    /**
                     * 获取<p>集团账号角色（member-普通成员/admin-管理员/delegatedAdmin-委派管理员），非集团账号为空</p>
                     * @return Role <p>集团账号角色（member-普通成员/admin-管理员/delegatedAdmin-委派管理员），非集团账号为空</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>集团账号角色（member-普通成员/admin-管理员/delegatedAdmin-委派管理员），非集团账号为空</p>
                     * @param _role <p>集团账号角色（member-普通成员/admin-管理员/delegatedAdmin-委派管理员），非集团账号为空</p>
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
                     * 获取<p>所属部门名称，未分配部门或非集团账号为空</p>
                     * @return NodeName <p>所属部门名称，未分配部门或非集团账号为空</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>所属部门名称，未分配部门或非集团账号为空</p>
                     * @param _nodeName <p>所属部门名称，未分配部门或非集团账号为空</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

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
                     * <p>账号下数据库资产数量</p>
                     */
                    int64_t m_assetNum;
                    bool m_assetNumHasBeenSet;

                    /**
                     * <p>账号下开启安全分析数据库资产数量</p>
                     */
                    int64_t m_usedAssetNum;
                    bool m_usedAssetNumHasBeenSet;

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
                     * <p>云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>账号是否隔离中</p>
                     */
                    bool m_isIsolating;
                    bool m_isIsolatingHasBeenSet;

                    /**
                     * <p>是否正在数据清理</p>
                     */
                    bool m_isDataCleaning;
                    bool m_isDataCleaningHasBeenSet;

                    /**
                     * <p>集团账号角色（member-普通成员/admin-管理员/delegatedAdmin-委派管理员），非集团账号为空</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>所属部门名称，未分配部门或非集团账号为空</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_
