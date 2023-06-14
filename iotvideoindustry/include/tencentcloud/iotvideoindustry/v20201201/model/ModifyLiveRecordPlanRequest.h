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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYLIVERECORDPLANREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYLIVERECORDPLANREQUEST_H_

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
                * ModifyLiveRecordPlan请求参数结构体
                */
                class ModifyLiveRecordPlanRequest : public AbstractModel
                {
                public:
                    ModifyLiveRecordPlanRequest();
                    ~ModifyLiveRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录制计划ID
                     * @return PlanId 录制计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录制计划ID
                     * @param _planId 录制计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取录制计划名
                     * @return PlanName 录制计划名
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置录制计划名
                     * @param _planName 录制计划名
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取时间模板ID，固定直播时为必填
                     * @return TemplateId 时间模板ID，固定直播时为必填
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置时间模板ID，固定直播时为必填
                     * @param _templateId 时间模板ID，固定直播时为必填
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 录制计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 录制计划名
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 时间模板ID，固定直播时为必填
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYLIVERECORDPLANREQUEST_H_
