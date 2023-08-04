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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDTEMPLATEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDTEMPLATEDATA_H_

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
                * 修改实时上云模板的请求数据结构
                */
                class UpdateRecordTemplateData : public AbstractModel
                {
                public:
                    UpdateRecordTemplateData();
                    ~UpdateRecordTemplateData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称， 不修改名称时，不需要带该字段
                     * @return TemplateName 模板名称， 不修改名称时，不需要带该字段
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称， 不修改名称时，不需要带该字段
                     * @param _templateName 模板名称， 不修改名称时，不需要带该字段
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
                     * 获取上云时间段，不修改名称时，不需要带该字段
                     * @return TimeSections 上云时间段，不修改名称时，不需要带该字段
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置上云时间段，不修改名称时，不需要带该字段
                     * @param _timeSections 上云时间段，不修改名称时，不需要带该字段
                     * 
                     */
                    void SetTimeSections(const std::vector<RecordTemplateTimeSections>& _timeSections);

                    /**
                     * 判断参数 TimeSections 是否已赋值
                     * @return TimeSections 是否已赋值
                     * 
                     */
                    bool TimeSectionsHasBeenSet() const;

                private:

                    /**
                     * 模板名称， 不修改名称时，不需要带该字段
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 上云时间段，不修改名称时，不需要带该字段
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDTEMPLATEDATA_H_
