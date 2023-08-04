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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEMODIFY_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEMODIFY_H_

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
                * 修改录像上云模板数据结构
                */
                class UpdateRecordBackupTemplateModify : public AbstractModel
                {
                public:
                    UpdateRecordBackupTemplateModify();
                    ~UpdateRecordBackupTemplateModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称（不修改名称时，不需要带该字段）
                     * @return TemplateName 模板名称（不修改名称时，不需要带该字段）
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称（不修改名称时，不需要带该字段）
                     * @param _templateName 模板名称（不修改名称时，不需要带该字段）
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
                     * 获取上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     * @return TimeSections 上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     * @param _timeSections 上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
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
                     * 获取录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     * @return DevTimeSections 录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetDevTimeSections() const;

                    /**
                     * 设置录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     * @param _devTimeSections 录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
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
                     * 获取上云倍速（支持1，2，4倍速）
                     * @return Scale 上云倍速（支持1，2，4倍速）
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置上云倍速（支持1，2，4倍速）
                     * @param _scale 上云倍速（支持1，2，4倍速）
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                private:

                    /**
                     * 模板名称（不修改名称时，不需要带该字段）
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 上云时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                    /**
                     * 录像时间段（按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟）
                     */
                    std::vector<RecordTemplateTimeSections> m_devTimeSections;
                    bool m_devTimeSectionsHasBeenSet;

                    /**
                     * 上云倍速（支持1，2，4倍速）
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEMODIFY_H_
