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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPDATA_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespFeature.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespProduct.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespType.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 获取成员列表回包DataList
                */
                class GetIndustryV1HomeMembersRespData : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersRespData();
                    ~GetIndustryV1HomeMembersRespData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEditTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _editTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEditTime(const int64_t& _editTime);

                    /**
                     * 判断参数 EditTime 是否已赋值
                     * @return EditTime 是否已赋值
                     * 
                     */
                    bool EditTimeHasBeenSet() const;

                    /**
                     * 获取功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureList 功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GetIndustryV1HomeMembersRespFeature GetFeatureList() const;

                    /**
                     * 设置功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _featureList 功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeatureList(const GetIndustryV1HomeMembersRespFeature& _featureList);

                    /**
                     * 判断参数 FeatureList 是否已赋值
                     * @return FeatureList 是否已赋值
                     * 
                     */
                    bool FeatureListHasBeenSet() const;

                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取用户行业分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndustryType 用户行业分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndustryType() const;

                    /**
                     * 设置用户行业分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _industryType 用户行业分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndustryType(const std::string& _industryType);

                    /**
                     * 判断参数 IndustryType 是否已赋值
                     * @return IndustryType 是否已赋值
                     * 
                     */
                    bool IndustryTypeHasBeenSet() const;

                    /**
                     * 获取子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberNum 子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemberNum() const;

                    /**
                     * 设置子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberNum 子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberNum(const int64_t& _memberNum);

                    /**
                     * 判断参数 MemberNum 是否已赋值
                     * @return MemberNum 是否已赋值
                     * 
                     */
                    bool MemberNumHasBeenSet() const;

                    /**
                     * 获取机器人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductList 机器人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GetIndustryV1HomeMembersRespProduct GetProductList() const;

                    /**
                     * 设置机器人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productList 机器人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductList(const GetIndustryV1HomeMembersRespProduct& _productList);

                    /**
                     * 判断参数 ProductList 是否已赋值
                     * @return ProductList 是否已赋值
                     * 
                     */
                    bool ProductListHasBeenSet() const;

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
                     * 获取是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeList 功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GetIndustryV1HomeMembersRespType GetTypeList() const;

                    /**
                     * 设置功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeList 功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeList(const GetIndustryV1HomeMembersRespType& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

                    /**
                     * 获取用户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAccount 用户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserAccount() const;

                    /**
                     * 设置用户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAccount 用户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAccount(const std::string& _userAccount);

                    /**
                     * 判断参数 UserAccount 是否已赋值
                     * @return UserAccount 是否已赋值
                     * 
                     */
                    bool UserAccountHasBeenSet() const;

                private:

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_editTime;
                    bool m_editTimeHasBeenSet;

                    /**
                     * 功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GetIndustryV1HomeMembersRespFeature m_featureList;
                    bool m_featureListHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 用户行业分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_industryType;
                    bool m_industryTypeHasBeenSet;

                    /**
                     * 子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memberNum;
                    bool m_memberNumHasBeenSet;

                    /**
                     * 机器人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GetIndustryV1HomeMembersRespProduct m_productList;
                    bool m_productListHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 功能列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GetIndustryV1HomeMembersRespType m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * 用户账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAccount;
                    bool m_userAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPDATA_H_
