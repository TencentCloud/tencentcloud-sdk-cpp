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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTUSERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 账户用户信息
                */
                class PayeeAccountUserInfo : public AbstractModel
                {
                public:
                    PayeeAccountUserInfo();
                    ~PayeeAccountUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutUserId 外部用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutUserId() const;

                    /**
                     * 设置外部用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outUserId 外部用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutUserId(const std::string& _outUserId);

                    /**
                     * 判断参数 OutUserId 是否已赋值
                     * @return OutUserId 是否已赋值
                     * 
                     */
                    bool OutUserIdHasBeenSet() const;

                    /**
                     * 获取用户类型
0:B端用户
1:C端用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserType 用户类型
0:B端用户
1:C端用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserType() const;

                    /**
                     * 设置用户类型
0:B端用户
1:C端用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userType 用户类型
0:B端用户
1:C端用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserType(const int64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取证件类型
0:身份证
1:社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdType 证件类型
0:身份证
1:社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIdType() const;

                    /**
                     * 设置证件类型
0:身份证
1:社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idType 证件类型
0:身份证
1:社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdType(const int64_t& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdNo 证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdNo() const;

                    /**
                     * 设置证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idNo 证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdNo(const std::string& _idNo);

                    /**
                     * 判断参数 IdNo 是否已赋值
                     * @return IdNo 是否已赋值
                     * 
                     */
                    bool IdNoHasBeenSet() const;

                    /**
                     * 获取姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 外部用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outUserId;
                    bool m_outUserIdHasBeenSet;

                    /**
                     * 用户类型
0:B端用户
1:C端用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 证件类型
0:身份证
1:社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 证件号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idNo;
                    bool m_idNoHasBeenSet;

                    /**
                     * 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTUSERINFO_H_
