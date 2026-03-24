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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATORACCOUNT_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATORACCOUNT_H_

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
                * 成员信息
                */
                class AggregatorAccount : public AbstractModel
                {
                public:
                    AggregatorAccount();
                    ~AggregatorAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员ID
                     * @return MemberUin 成员ID
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置成员ID
                     * @param _memberUin 成员ID
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取成员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberName 成员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置成员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberName 成员名称
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
                     * 成员ID
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATORACCOUNT_H_
