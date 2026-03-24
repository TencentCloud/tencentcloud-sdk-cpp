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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATOR_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 用户组列表信息
                */
                class Aggregator : public AbstractModel
                {
                public:
                    Aggregator();
                    ~Aggregator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号组名称
                     * @return Name 账号组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号组名称
                     * @param _name 账号组名称
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
                     * 获取账号组描述
                     * @return Description 账号组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置账号组描述
                     * @param _description 账号组描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建者用户ID
                     * @return OwnerUin 创建者用户ID
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置创建者用户ID
                     * @param _ownerUin 创建者用户ID
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取账号组成员数量
                     * @return AccountCount 账号组成员数量
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置账号组成员数量
                     * @param _accountCount 账号组成员数量
                     * 
                     */
                    void SetAccountCount(const uint64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取RD:全局账号组
                     * @return Type RD:全局账号组
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置RD:全局账号组
                     * @param _type RD:全局账号组
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取账号组状态
                     * @return AggregatorStatus 账号组状态
                     * 
                     */
                    uint64_t GetAggregatorStatus() const;

                    /**
                     * 设置账号组状态
                     * @param _aggregatorStatus 账号组状态
                     * 
                     */
                    void SetAggregatorStatus(const uint64_t& _aggregatorStatus);

                    /**
                     * 判断参数 AggregatorStatus 是否已赋值
                     * @return AggregatorStatus 是否已赋值
                     * 
                     */
                    bool AggregatorStatusHasBeenSet() const;

                    /**
                     * 获取账号组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberName 账号组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置账号组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberName 账号组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                private:

                    /**
                     * 账号组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账号组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建者用户ID
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 账号组成员数量
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * RD:全局账号组
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 账号组状态
                     */
                    uint64_t m_aggregatorStatus;
                    bool m_aggregatorStatusHasBeenSet;

                    /**
                     * 账号组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATOR_H_
