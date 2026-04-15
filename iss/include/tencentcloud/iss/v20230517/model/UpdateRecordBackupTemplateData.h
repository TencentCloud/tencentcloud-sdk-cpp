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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 修改录像上云模板返回数据
                */
                class UpdateRecordBackupTemplateData : public AbstractModel
                {
                public:
                    UpdateRecordBackupTemplateData();
                    ~UpdateRecordBackupTemplateData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板ID</p>
                     * @return TemplateId <p>模板ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _templateId <p>模板ID</p>
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
                     * 获取<p>模板名称</p>
                     * @return TemplateName <p>模板名称</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称</p>
                     * @param _templateName <p>模板名称</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * @return TimeSections <p>上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置<p>上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * @param _timeSections <p>上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * 
                     */
                    void SetTimeSections(const std::vector<RecordTemplateTimeSections>& _timeSections);

                    /**
                     * 判断参数 TimeSections 是否已赋值
                     * @return TimeSections 是否已赋值
                     * 
                     */
                    bool TimeSectionsHasBeenSet() const;

                    /**
                     * 获取<p>录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * @return DevTimeSections <p>录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetDevTimeSections() const;

                    /**
                     * 设置<p>录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * @param _devTimeSections <p>录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     * 
                     */
                    void SetDevTimeSections(const std::vector<RecordTemplateTimeSections>& _devTimeSections);

                    /**
                     * 判断参数 DevTimeSections 是否已赋值
                     * @return DevTimeSections 是否已赋值
                     * 
                     */
                    bool DevTimeSectionsHasBeenSet() const;

                    /**
                     * 获取<p>上云倍速（支持1，2，4倍速）</p>
                     * @return Scale <p>上云倍速（支持1，2，4倍速）</p>
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置<p>上云倍速（支持1，2，4倍速）</p>
                     * @param _scale <p>上云倍速（支持1，2，4倍速）</p>
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createAt <p>创建时间</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateAt <p>更新时间</p>
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                    /**
                     * 获取<p>周期偏移量，默认1，表示拉取昨天的设备录像，0表示取去今天的设备录像，3表示拉取前天的设备录像</p>
                     * @return DayOffset <p>周期偏移量，默认1，表示拉取昨天的设备录像，0表示取去今天的设备录像，3表示拉取前天的设备录像</p>
                     * 
                     */
                    int64_t GetDayOffset() const;

                    /**
                     * 设置<p>周期偏移量，默认1，表示拉取昨天的设备录像，0表示取去今天的设备录像，3表示拉取前天的设备录像</p>
                     * @param _dayOffset <p>周期偏移量，默认1，表示拉取昨天的设备录像，0表示取去今天的设备录像，3表示拉取前天的设备录像</p>
                     * 
                     */
                    void SetDayOffset(const int64_t& _dayOffset);

                    /**
                     * 判断参数 DayOffset 是否已赋值
                     * @return DayOffset 是否已赋值
                     * 
                     */
                    bool DayOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>模板ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板名称</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                    /**
                     * <p>录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）</p>
                     */
                    std::vector<RecordTemplateTimeSections> m_devTimeSections;
                    bool m_devTimeSectionsHasBeenSet;

                    /**
                     * <p>上云倍速（支持1，2，4倍速）</p>
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * <p>周期偏移量，默认1，表示拉取昨天的设备录像，0表示取去今天的设备录像，3表示拉取前天的设备录像</p>
                     */
                    int64_t m_dayOffset;
                    bool m_dayOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEDATA_H_
