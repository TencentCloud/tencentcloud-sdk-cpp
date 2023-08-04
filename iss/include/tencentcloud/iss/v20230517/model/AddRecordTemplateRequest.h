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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDTEMPLATEREQUEST_H_

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
                * AddRecordTemplate请求参数结构体
                */
                class AddRecordTemplateRequest : public AbstractModel
                {
                public:
                    AddRecordTemplateRequest();
                    ~AddRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名称， 仅支持中文、英文、数字、_、-，长度不超过32个字符，模板名称全局唯一，不能为空，不能重复
                     * @return TemplateName 模板名称， 仅支持中文、英文、数字、_、-，长度不超过32个字符，模板名称全局唯一，不能为空，不能重复
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称， 仅支持中文、英文、数字、_、-，长度不超过32个字符，模板名称全局唯一，不能为空，不能重复
                     * @param _templateName 模板名称， 仅支持中文、英文、数字、_、-，长度不超过32个字符，模板名称全局唯一，不能为空，不能重复
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
                     * 获取上云时间段，按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟
                     * @return TimeSections 上云时间段，按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置上云时间段，按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟
                     * @param _timeSections 上云时间段，按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟
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
                     * 模板名称， 仅支持中文、英文、数字、_、-，长度不超过32个字符，模板名称全局唯一，不能为空，不能重复
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 上云时间段，按周进行设置，支持一天设置多个时间段，每个时间段不小于10分钟
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDTEMPLATEREQUEST_H_
