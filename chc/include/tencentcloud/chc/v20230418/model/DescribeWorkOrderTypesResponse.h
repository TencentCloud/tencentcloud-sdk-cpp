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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERTYPESRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERTYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/WorkOrderTypeDetail.h>
#include <tencentcloud/chc/v20230418/model/WorkOrderFamilyDetail.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeWorkOrderTypes返回参数结构体
                */
                class DescribeWorkOrderTypesResponse : public AbstractModel
                {
                public:
                    DescribeWorkOrderTypesResponse();
                    ~DescribeWorkOrderTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已收藏的工单类型列表
                     * @return CollectedWorkOderTypeSet 已收藏的工单类型列表
                     * 
                     */
                    std::vector<WorkOrderTypeDetail> GetCollectedWorkOderTypeSet() const;

                    /**
                     * 判断参数 CollectedWorkOderTypeSet 是否已赋值
                     * @return CollectedWorkOderTypeSet 是否已赋值
                     * 
                     */
                    bool CollectedWorkOderTypeSetHasBeenSet() const;

                    /**
                     * 获取全部工单类型列表
                     * @return WorkOrderFamilySet 全部工单类型列表
                     * 
                     */
                    std::vector<WorkOrderFamilyDetail> GetWorkOrderFamilySet() const;

                    /**
                     * 判断参数 WorkOrderFamilySet 是否已赋值
                     * @return WorkOrderFamilySet 是否已赋值
                     * 
                     */
                    bool WorkOrderFamilySetHasBeenSet() const;

                private:

                    /**
                     * 已收藏的工单类型列表
                     */
                    std::vector<WorkOrderTypeDetail> m_collectedWorkOderTypeSet;
                    bool m_collectedWorkOderTypeSetHasBeenSet;

                    /**
                     * 全部工单类型列表
                     */
                    std::vector<WorkOrderFamilyDetail> m_workOrderFamilySet;
                    bool m_workOrderFamilySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERTYPESRESPONSE_H_
