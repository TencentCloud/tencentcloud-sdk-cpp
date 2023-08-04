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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDBACKUPTEMPLATERESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDBACKUPTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/RecordTemplateTimeSections.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询录像上云模版返回数据
                */
                class DescribeRecordBackupTemplateResponse : public AbstractModel
                {
                public:
                    DescribeRecordBackupTemplateResponse();
                    ~DescribeRecordBackupTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeSections 上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 判断参数 TimeSections 是否已赋值
                     * @return TimeSections 是否已赋值
                     * 
                     */
                    bool TimeSectionsHasBeenSet() const;

                    /**
                     * 获取录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevTimeSections 录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetDevTimeSections() const;

                    /**
                     * 判断参数 DevTimeSections 是否已赋值
                     * @return DevTimeSections 是否已赋值
                     * 
                     */
                    bool DevTimeSectionsHasBeenSet() const;

                    /**
                     * 获取上云倍速（支持1，2，4倍速）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scale 上云倍速（支持1，2，4倍速）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                    /**
                     * 录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordTemplateTimeSections> m_devTimeSections;
                    bool m_devTimeSectionsHasBeenSet;

                    /**
                     * 上云倍速（支持1，2，4倍速）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDBACKUPTEMPLATERESPONSE_H_
