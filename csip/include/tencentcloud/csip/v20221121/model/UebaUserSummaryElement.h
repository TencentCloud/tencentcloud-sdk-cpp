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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARYELEMENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARYELEMENT_H_

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
                * 用户行为分析 用户概览 求和元素
                */
                class UebaUserSummaryElement : public AbstractModel
                {
                public:
                    UebaUserSummaryElement();
                    ~UebaUserSummaryElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberID 成员id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberID() const;

                    /**
                     * 设置成员id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberID 成员id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberID(const std::string& _memberID);

                    /**
                     * 判断参数 MemberID 是否已赋值
                     * @return MemberID 是否已赋值
                     * 
                     */
                    bool MemberIDHasBeenSet() const;

                    /**
                     * 获取日志类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogType 日志类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logType 日志类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取用户ID依据字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserID 用户ID依据字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置用户ID依据字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userID 用户ID依据字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserID(const std::string& _userID);

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

                    /**
                     * 获取数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 成员id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberID;
                    bool m_memberIDHasBeenSet;

                    /**
                     * 日志类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 用户ID依据字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARYELEMENT_H_
