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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordPlanData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpdateRecordPlan请求参数结构体
                */
                class UpdateRecordPlanRequest : public AbstractModel
                {
                public:
                    UpdateRecordPlanRequest();
                    ~UpdateRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计划ID
                     * @return PlanId 计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置计划ID
                     * @param _planId 计划ID
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
                     * 获取修改计划的内容
                     * @return Mod 修改计划的内容
                     * 
                     */
                    UpdateRecordPlanData GetMod() const;

                    /**
                     * 设置修改计划的内容
                     * @param _mod 修改计划的内容
                     * 
                     */
                    void SetMod(const UpdateRecordPlanData& _mod);

                    /**
                     * 判断参数 Mod 是否已赋值
                     * @return Mod 是否已赋值
                     * 
                     */
                    bool ModHasBeenSet() const;

                private:

                    /**
                     * 计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 修改计划的内容
                     */
                    UpdateRecordPlanData m_mod;
                    bool m_modHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDPLANREQUEST_H_
