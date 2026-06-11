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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_COVERSTAFFINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_COVERSTAFFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 轮班人员组信息
                */
                class CoverStaffInfo : public AbstractModel
                {
                public:
                    CoverStaffInfo();
                    ~CoverStaffInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取轮班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverStaffIDs 轮班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCoverStaffIDs() const;

                    /**
                     * 设置轮班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverStaffIDs 轮班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverStaffIDs(const std::vector<std::string>& _coverStaffIDs);

                    /**
                     * 判断参数 CoverStaffIDs 是否已赋值
                     * @return CoverStaffIDs 是否已赋值
                     * 
                     */
                    bool CoverStaffIDsHasBeenSet() const;

                    /**
                     * 获取轮班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverStartTime 轮班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCoverStartTime() const;

                    /**
                     * 设置轮班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverStartTime 轮班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverStartTime(const int64_t& _coverStartTime);

                    /**
                     * 判断参数 CoverStartTime 是否已赋值
                     * @return CoverStartTime 是否已赋值
                     * 
                     */
                    bool CoverStartTimeHasBeenSet() const;

                    /**
                     * 获取轮班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverEndTime 轮班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCoverEndTime() const;

                    /**
                     * 设置轮班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverEndTime 轮班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverEndTime(const int64_t& _coverEndTime);

                    /**
                     * 判断参数 CoverEndTime 是否已赋值
                     * @return CoverEndTime 是否已赋值
                     * 
                     */
                    bool CoverEndTimeHasBeenSet() const;

                private:

                    /**
                     * 轮班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_coverStaffIDs;
                    bool m_coverStaffIDsHasBeenSet;

                    /**
                     * 轮班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_coverStartTime;
                    bool m_coverStartTimeHasBeenSet;

                    /**
                     * 轮班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_coverEndTime;
                    bool m_coverEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_COVERSTAFFINFO_H_
