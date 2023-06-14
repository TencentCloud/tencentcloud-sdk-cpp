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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTINFORESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/PayeeAccountUserInfo.h>
#include <tencentcloud/cpdp/v20190820/model/PayeeAccountPropertyInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 账户信息结果
                */
                class PayeeAccountInfoResult : public AbstractModel
                {
                public:
                    PayeeAccountInfoResult();
                    ~PayeeAccountInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountId 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountId 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName 账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserInfo 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PayeeAccountUserInfo GetUserInfo() const;

                    /**
                     * 设置用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userInfo 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserInfo(const PayeeAccountUserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取属性信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropertyInfo 属性信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PayeeAccountPropertyInfo GetPropertyInfo() const;

                    /**
                     * 设置属性信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propertyInfo 属性信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropertyInfo(const PayeeAccountPropertyInfo& _propertyInfo);

                    /**
                     * 判断参数 PropertyInfo 是否已赋值
                     * @return PropertyInfo 是否已赋值
                     * 
                     */
                    bool PropertyInfoHasBeenSet() const;

                private:

                    /**
                     * 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PayeeAccountUserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 属性信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PayeeAccountPropertyInfo m_propertyInfo;
                    bool m_propertyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTINFORESULT_H_
