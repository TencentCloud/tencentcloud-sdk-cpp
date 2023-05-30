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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DIAGNOSERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DIAGNOSERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 诊断结果项。
                */
                class DiagnoseResult : public AbstractModel
                {
                public:
                    DiagnoseResult();
                    ~DiagnoseResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断出的异常类别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 诊断出的异常类别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置诊断出的异常类别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Category 诊断出的异常类别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取诊断出的具体异常类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 诊断出的具体异常类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置诊断出的具体异常类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 诊断出的具体异常类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetTimestamp() const;

                    /**
                     * 设置诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp 诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const double& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DateTime 诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDateTime() const;

                    /**
                     * 设置诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DateTime 诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDateTime(const std::string& _dateTime);

                    /**
                     * 判断参数 DateTime 是否已赋值
                     * @return DateTime 是否已赋值
                     */
                    bool DateTimeHasBeenSet() const;

                    /**
                     * 获取诊断出的异常级别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeverityLevel 诊断出的异常级别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSeverityLevel() const;

                    /**
                     * 设置诊断出的异常级别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SeverityLevel 诊断出的异常级别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSeverityLevel(const std::string& _severityLevel);

                    /**
                     * 判断参数 SeverityLevel 是否已赋值
                     * @return SeverityLevel 是否已赋值
                     */
                    bool SeverityLevelHasBeenSet() const;

                private:

                    /**
                     * 诊断出的异常类别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 诊断出的具体异常类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dateTime;
                    bool m_dateTimeHasBeenSet;

                    /**
                     * 诊断出的异常级别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_severityLevel;
                    bool m_severityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DIAGNOSERESULT_H_
