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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVERECORDPLANBYIDRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVERECORDPLANBYIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeLiveRecordPlanById返回参数结构体
                */
                class DescribeLiveRecordPlanByIdResponse : public AbstractModel
                {
                public:
                    DescribeLiveRecordPlanByIdResponse();
                    ~DescribeLiveRecordPlanByIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计划名称
                     * @return PlanName 计划名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
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
                     * @return TemplateName 模板名称
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
                     * 获取存储时间
                     * @return RecordStorageTime 存储时间
                     * 
                     */
                    int64_t GetRecordStorageTime() const;

                    /**
                     * 判断参数 RecordStorageTime 是否已赋值
                     * @return RecordStorageTime 是否已赋值
                     * 
                     */
                    bool RecordStorageTimeHasBeenSet() const;

                    /**
                     * 获取计划类型
                     * @return PlanType 计划类型
                     * 
                     */
                    int64_t GetPlanType() const;

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                private:

                    /**
                     * 计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 存储时间
                     */
                    int64_t m_recordStorageTime;
                    bool m_recordStorageTimeHasBeenSet;

                    /**
                     * 计划类型
                     */
                    int64_t m_planType;
                    bool m_planTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVERECORDPLANBYIDRESPONSE_H_
