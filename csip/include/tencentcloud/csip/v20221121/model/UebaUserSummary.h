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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UebaUserSummaryElement.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用户行为分析-用户概览信息
                */
                class UebaUserSummary : public AbstractModel
                {
                public:
                    UebaUserSummary();
                    ~UebaUserSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全部用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllUserCount 全部用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAllUserCount() const;

                    /**
                     * 设置全部用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allUserCount 全部用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllUserCount(const uint64_t& _allUserCount);

                    /**
                     * 判断参数 AllUserCount 是否已赋值
                     * @return AllUserCount 是否已赋值
                     * 
                     */
                    bool AllUserCountHasBeenSet() const;

                    /**
                     * 获取异常用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbnormalUserCount 异常用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAbnormalUserCount() const;

                    /**
                     * 设置异常用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abnormalUserCount 异常用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbnormalUserCount(const uint64_t& _abnormalUserCount);

                    /**
                     * 判断参数 AbnormalUserCount 是否已赋值
                     * @return AbnormalUserCount 是否已赋值
                     * 
                     */
                    bool AbnormalUserCountHasBeenSet() const;

                    /**
                     * 获取云账号用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserCount 云账号用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 设置云账号用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userCount 云账号用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserCount(const uint64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUserCount 子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSubUserCount() const;

                    /**
                     * 设置子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUserCount 子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUserCount(const uint64_t& _subUserCount);

                    /**
                     * 判断参数 SubUserCount 是否已赋值
                     * @return SubUserCount 是否已赋值
                     * 
                     */
                    bool SubUserCountHasBeenSet() const;

                    /**
                     * 获取自定义用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomUserCount 自定义用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCustomUserCount() const;

                    /**
                     * 设置自定义用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customUserCount 自定义用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomUserCount(const uint64_t& _customUserCount);

                    /**
                     * 判断参数 CustomUserCount 是否已赋值
                     * @return CustomUserCount 是否已赋值
                     * 
                     */
                    bool CustomUserCountHasBeenSet() const;

                    /**
                     * 获取自定义用户求和组成元素
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Element 自定义用户求和组成元素
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UebaUserSummaryElement> GetElement() const;

                    /**
                     * 设置自定义用户求和组成元素
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _element 自定义用户求和组成元素
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElement(const std::vector<UebaUserSummaryElement>& _element);

                    /**
                     * 判断参数 Element 是否已赋值
                     * @return Element 是否已赋值
                     * 
                     */
                    bool ElementHasBeenSet() const;

                private:

                    /**
                     * 全部用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_allUserCount;
                    bool m_allUserCountHasBeenSet;

                    /**
                     * 异常用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_abnormalUserCount;
                    bool m_abnormalUserCountHasBeenSet;

                    /**
                     * 云账号用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * 子用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_subUserCount;
                    bool m_subUserCountHasBeenSet;

                    /**
                     * 自定义用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_customUserCount;
                    bool m_customUserCountHasBeenSet;

                    /**
                     * 自定义用户求和组成元素
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UebaUserSummaryElement> m_element;
                    bool m_elementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARY_H_
