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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DeleteRecordPlan请求参数结构体
                */
                class DeleteRecordPlanRequest : public AbstractModel
                {
                public:
                    DeleteRecordPlanRequest();
                    ~DeleteRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取上云计划ID
                     * @return PlanId 上云计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置上云计划ID
                     * @param _planId 上云计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                private:

                    /**
                     * 上云计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDPLANREQUEST_H_
