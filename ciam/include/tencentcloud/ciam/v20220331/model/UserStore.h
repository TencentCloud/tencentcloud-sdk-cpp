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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_USERSTORE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_USERSTORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 用户池
                */
                class UserStore : public AbstractModel
                {
                public:
                    UserStore();
                    ~UserStore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户ID
                     * @return TenantId 租户ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户ID
                     * @param _tenantId 租户ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取用户池logo
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserStoreLogo 用户池logo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserStoreLogo() const;

                    /**
                     * 设置用户池logo
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userStoreLogo 用户池logo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserStoreLogo(const std::string& _userStoreLogo);

                    /**
                     * 判断参数 UserStoreLogo 是否已赋值
                     * @return UserStoreLogo 是否已赋值
                     * 
                     */
                    bool UserStoreLogoHasBeenSet() const;

                    /**
                     * 获取用户池描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserStoreDesc 用户池描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserStoreDesc() const;

                    /**
                     * 设置用户池描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userStoreDesc 用户池描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserStoreDesc(const std::string& _userStoreDesc);

                    /**
                     * 判断参数 UserStoreDesc 是否已赋值
                     * @return UserStoreDesc 是否已赋值
                     * 
                     */
                    bool UserStoreDescHasBeenSet() const;

                    /**
                     * 获取用户池名称
                     * @return UserStoreName 用户池名称
                     * 
                     */
                    std::string GetUserStoreName() const;

                    /**
                     * 设置用户池名称
                     * @param _userStoreName 用户池名称
                     * 
                     */
                    void SetUserStoreName(const std::string& _userStoreName);

                    /**
                     * 判断参数 UserStoreName 是否已赋值
                     * @return UserStoreName 是否已赋值
                     * 
                     */
                    bool UserStoreNameHasBeenSet() const;

                    /**
                     * 获取用户数量
                     * @return UserNum 用户数量
                     * 
                     */
                    int64_t GetUserNum() const;

                    /**
                     * 设置用户数量
                     * @param _userNum 用户数量
                     * 
                     */
                    void SetUserNum(const int64_t& _userNum);

                    /**
                     * 判断参数 UserNum 是否已赋值
                     * @return UserNum 是否已赋值
                     * 
                     */
                    bool UserNumHasBeenSet() const;

                    /**
                     * 获取用户池ID
                     * @return UserStoreId 用户池ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户池ID
                     * @param _userStoreId 用户池ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取应用数量
                     * @return AppNum 应用数量
                     * 
                     */
                    int64_t GetAppNum() const;

                    /**
                     * 设置应用数量
                     * @param _appNum 应用数量
                     * 
                     */
                    void SetAppNum(const int64_t& _appNum);

                    /**
                     * 判断参数 AppNum 是否已赋值
                     * @return AppNum 是否已赋值
                     * 
                     */
                    bool AppNumHasBeenSet() const;

                    /**
                     * 获取上次切换的用户池
                     * @return LastStatus 上次切换的用户池
                     * 
                     */
                    bool GetLastStatus() const;

                    /**
                     * 设置上次切换的用户池
                     * @param _lastStatus 上次切换的用户池
                     * 
                     */
                    void SetLastStatus(const bool& _lastStatus);

                    /**
                     * 判断参数 LastStatus 是否已赋值
                     * @return LastStatus 是否已赋值
                     * 
                     */
                    bool LastStatusHasBeenSet() const;

                    /**
                     * 获取默认用户池
                     * @return DefaultStatus 默认用户池
                     * 
                     */
                    bool GetDefaultStatus() const;

                    /**
                     * 设置默认用户池
                     * @param _defaultStatus 默认用户池
                     * 
                     */
                    void SetDefaultStatus(const bool& _defaultStatus);

                    /**
                     * 判断参数 DefaultStatus 是否已赋值
                     * @return DefaultStatus 是否已赋值
                     * 
                     */
                    bool DefaultStatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    int64_t GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const int64_t& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取上次切换时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastStatusTime 上次切换时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastStatusTime() const;

                    /**
                     * 设置上次切换时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastStatusTime 上次切换时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastStatusTime(const int64_t& _lastStatusTime);

                    /**
                     * 判断参数 LastStatusTime 是否已赋值
                     * @return LastStatusTime 是否已赋值
                     * 
                     */
                    bool LastStatusTimeHasBeenSet() const;

                    /**
                     * 获取用户目录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserStoreProtocolHost 用户目录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserStoreProtocolHost() const;

                    /**
                     * 设置用户目录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userStoreProtocolHost 用户目录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserStoreProtocolHost(const std::string& _userStoreProtocolHost);

                    /**
                     * 判断参数 UserStoreProtocolHost 是否已赋值
                     * @return UserStoreProtocolHost 是否已赋值
                     * 
                     */
                    bool UserStoreProtocolHostHasBeenSet() const;

                private:

                    /**
                     * 租户ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 用户池logo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userStoreLogo;
                    bool m_userStoreLogoHasBeenSet;

                    /**
                     * 用户池描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userStoreDesc;
                    bool m_userStoreDescHasBeenSet;

                    /**
                     * 用户池名称
                     */
                    std::string m_userStoreName;
                    bool m_userStoreNameHasBeenSet;

                    /**
                     * 用户数量
                     */
                    int64_t m_userNum;
                    bool m_userNumHasBeenSet;

                    /**
                     * 用户池ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 应用数量
                     */
                    int64_t m_appNum;
                    bool m_appNumHasBeenSet;

                    /**
                     * 上次切换的用户池
                     */
                    bool m_lastStatus;
                    bool m_lastStatusHasBeenSet;

                    /**
                     * 默认用户池
                     */
                    bool m_defaultStatus;
                    bool m_defaultStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 上次切换时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastStatusTime;
                    bool m_lastStatusTimeHasBeenSet;

                    /**
                     * 用户目录域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userStoreProtocolHost;
                    bool m_userStoreProtocolHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_USERSTORE_H_
