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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACT_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 客户信息
                */
                class ExternalContact : public AbstractModel
                {
                public:
                    ExternalContact();
                    ~ExternalContact() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部联系人的userId
                     * @return ExternalUserId 外部联系人的userId
                     * 
                     */
                    std::string GetExternalUserId() const;

                    /**
                     * 设置外部联系人的userId
                     * @param _externalUserId 外部联系人的userId
                     * 
                     */
                    void SetExternalUserId(const std::string& _externalUserId);

                    /**
                     * 判断参数 ExternalUserId 是否已赋值
                     * @return ExternalUserId 是否已赋值
                     * 
                     */
                    bool ExternalUserIdHasBeenSet() const;

                    /**
                     * 获取外部联系人性别 0-未知 1-男性 2-女性
                     * @return Gender 外部联系人性别 0-未知 1-男性 2-女性
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置外部联系人性别 0-未知 1-男性 2-女性
                     * @param _gender 外部联系人性别 0-未知 1-男性 2-女性
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取外部联系人的名称
                     * @return Name 外部联系人的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置外部联系人的名称
                     * @param _name 外部联系人的名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取外部联系人的类型，1表示该外部联系人是微信用户，2表示该外部联系人是企业微信用户
                     * @return Type 外部联系人的类型，1表示该外部联系人是微信用户，2表示该外部联系人是企业微信用户
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置外部联系人的类型，1表示该外部联系人是微信用户，2表示该外部联系人是企业微信用户
                     * @param _type 外部联系人的类型，1表示该外部联系人是微信用户，2表示该外部联系人是企业微信用户
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取外部联系人在微信开放平台的唯一身份标识（微信unionid），通过此字段企业可将外部联系人与公众号/小程序用户关联起来。仅当联系人类型是微信用户，且企业或第三方服务商绑定了微信开发者ID有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnionId 外部联系人在微信开放平台的唯一身份标识（微信unionid），通过此字段企业可将外部联系人与公众号/小程序用户关联起来。仅当联系人类型是微信用户，且企业或第三方服务商绑定了微信开发者ID有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnionId() const;

                    /**
                     * 设置外部联系人在微信开放平台的唯一身份标识（微信unionid），通过此字段企业可将外部联系人与公众号/小程序用户关联起来。仅当联系人类型是微信用户，且企业或第三方服务商绑定了微信开发者ID有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unionId 外部联系人在微信开放平台的唯一身份标识（微信unionid），通过此字段企业可将外部联系人与公众号/小程序用户关联起来。仅当联系人类型是微信用户，且企业或第三方服务商绑定了微信开发者ID有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnionId(const std::string& _unionId);

                    /**
                     * 判断参数 UnionId 是否已赋值
                     * @return UnionId 是否已赋值
                     * 
                     */
                    bool UnionIdHasBeenSet() const;

                    /**
                     * 获取外部联系人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 外部联系人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置外部联系人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 外部联系人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * 外部联系人的userId
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                    /**
                     * 外部联系人性别 0-未知 1-男性 2-女性
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 外部联系人的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 外部联系人的类型，1表示该外部联系人是微信用户，2表示该外部联系人是企业微信用户
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 外部联系人在微信开放平台的唯一身份标识（微信unionid），通过此字段企业可将外部联系人与公众号/小程序用户关联起来。仅当联系人类型是微信用户，且企业或第三方服务商绑定了微信开发者ID有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unionId;
                    bool m_unionIdHasBeenSet;

                    /**
                     * 外部联系人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACT_H_
