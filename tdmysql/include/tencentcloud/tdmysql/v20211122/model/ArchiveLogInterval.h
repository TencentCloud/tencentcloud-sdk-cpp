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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGINTERVAL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGINTERVAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 可恢复时间区间
                */
                class ArchiveLogInterval : public AbstractModel
                {
                public:
                    ArchiveLogInterval();
                    ~ArchiveLogInterval() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取大版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MajorVersion 大版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMajorVersion() const;

                    /**
                     * 设置大版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _majorVersion 大版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMajorVersion(const std::string& _majorVersion);

                    /**
                     * 判断参数 MajorVersion 是否已赋值
                     * @return MajorVersion 是否已赋值
                     * 
                     */
                    bool MajorVersionHasBeenSet() const;

                    /**
                     * 获取小版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinorVersion 小版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinorVersion() const;

                    /**
                     * 设置小版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minorVersion 小版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinorVersion(const std::string& _minorVersion);

                    /**
                     * 判断参数 MinorVersion 是否已赋值
                     * @return MinorVersion 是否已赋值
                     * 
                     */
                    bool MinorVersionHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 大版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_majorVersion;
                    bool m_majorVersionHasBeenSet;

                    /**
                     * 小版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minorVersion;
                    bool m_minorVersionHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGINTERVAL_H_
