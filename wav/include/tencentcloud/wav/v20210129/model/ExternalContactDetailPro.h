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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACTDETAILPRO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACTDETAILPRO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/ExternalContact.h>
#include <tencentcloud/wav/v20210129/model/FollowUserPro.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 具备更多信息的外部联系人详细信息
                */
                class ExternalContactDetailPro : public AbstractModel
                {
                public:
                    ExternalContactDetailPro();
                    ~ExternalContactDetailPro() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Customer 客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExternalContact GetCustomer() const;

                    /**
                     * 设置客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customer 客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomer(const ExternalContact& _customer);

                    /**
                     * 判断参数 Customer 是否已赋值
                     * @return Customer 是否已赋值
                     * 
                     */
                    bool CustomerHasBeenSet() const;

                    /**
                     * 获取添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowUser 添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FollowUserPro> GetFollowUser() const;

                    /**
                     * 设置添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followUser 添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowUser(const std::vector<FollowUserPro>& _followUser);

                    /**
                     * 判断参数 FollowUser 是否已赋值
                     * @return FollowUser 是否已赋值
                     * 
                     */
                    bool FollowUserHasBeenSet() const;

                private:

                    /**
                     * 客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExternalContact m_customer;
                    bool m_customerHasBeenSet;

                    /**
                     * 添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FollowUserPro> m_followUser;
                    bool m_followUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACTDETAILPRO_H_
