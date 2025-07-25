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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPOWEROFFWORKORDERRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPOWEROFFWORKORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/WorkOrderTinyInfo.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreatePowerOffWorkOrder返回参数结构体
                */
                class CreatePowerOffWorkOrderResponse : public AbstractModel
                {
                public:
                    CreatePowerOffWorkOrderResponse();
                    ~CreatePowerOffWorkOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的工单信息
                     * @return WorkOrderSet 创建的工单信息
                     * 
                     */
                    std::vector<WorkOrderTinyInfo> GetWorkOrderSet() const;

                    /**
                     * 判断参数 WorkOrderSet 是否已赋值
                     * @return WorkOrderSet 是否已赋值
                     * 
                     */
                    bool WorkOrderSetHasBeenSet() const;

                private:

                    /**
                     * 创建的工单信息
                     */
                    std::vector<WorkOrderTinyInfo> m_workOrderSet;
                    bool m_workOrderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPOWEROFFWORKORDERRESPONSE_H_
