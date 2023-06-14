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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_TIMETEMPLATEITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_TIMETEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/TimeTemplateSpec.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 时间模板详情
                */
                class TimeTemplateItem : public AbstractModel
                {
                public:
                    TimeTemplateItem();
                    ~TimeTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否全时录制，即7*24小时录制 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllWeek 是否全时录制，即7*24小时录制 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAllWeek() const;

                    /**
                     * 设置是否全时录制，即7*24小时录制 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllWeek 是否全时录制，即7*24小时录制 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllWeek(const int64_t& _isAllWeek);

                    /**
                     * 判断参数 IsAllWeek 是否已赋值
                     * @return IsAllWeek 是否已赋值
                     * 
                     */
                    bool IsAllWeekHasBeenSet() const;

                    /**
                     * 获取是否为自定义模板 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 是否为自定义模板 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置是否为自定义模板 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 是否为自定义模板 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取时间片段详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeTemplateSpecs 时间片段详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimeTemplateSpec> GetTimeTemplateSpecs() const;

                    /**
                     * 设置时间片段详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeTemplateSpecs 时间片段详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeTemplateSpecs(const std::vector<TimeTemplateSpec>& _timeTemplateSpecs);

                    /**
                     * 判断参数 TimeTemplateSpecs 是否已赋值
                     * @return TimeTemplateSpecs 是否已赋值
                     * 
                     */
                    bool TimeTemplateSpecsHasBeenSet() const;

                private:

                    /**
                     * 时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否全时录制，即7*24小时录制 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAllWeek;
                    bool m_isAllWeekHasBeenSet;

                    /**
                     * 是否为自定义模板 0-否 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 时间片段详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimeTemplateSpec> m_timeTemplateSpecs;
                    bool m_timeTemplateSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_TIMETEMPLATEITEM_H_
