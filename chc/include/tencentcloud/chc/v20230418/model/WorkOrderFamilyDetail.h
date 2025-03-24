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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERFAMILYDETAIL_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERFAMILYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/WorkOrderTypeDetail.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 带有分类的工单类型列表
                */
                class WorkOrderFamilyDetail : public AbstractModel
                {
                public:
                    WorkOrderFamilyDetail();
                    ~WorkOrderFamilyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工单类型大类的名称
                     * @return WorkOrderFamily 工单类型大类的名称
                     * 
                     */
                    std::string GetWorkOrderFamily() const;

                    /**
                     * 设置工单类型大类的名称
                     * @param _workOrderFamily 工单类型大类的名称
                     * 
                     */
                    void SetWorkOrderFamily(const std::string& _workOrderFamily);

                    /**
                     * 判断参数 WorkOrderFamily 是否已赋值
                     * @return WorkOrderFamily 是否已赋值
                     * 
                     */
                    bool WorkOrderFamilyHasBeenSet() const;

                    /**
                     * 获取工单类型详情列表
                     * @return WorkOrderTypeSet 工单类型详情列表
                     * 
                     */
                    std::vector<WorkOrderTypeDetail> GetWorkOrderTypeSet() const;

                    /**
                     * 设置工单类型详情列表
                     * @param _workOrderTypeSet 工单类型详情列表
                     * 
                     */
                    void SetWorkOrderTypeSet(const std::vector<WorkOrderTypeDetail>& _workOrderTypeSet);

                    /**
                     * 判断参数 WorkOrderTypeSet 是否已赋值
                     * @return WorkOrderTypeSet 是否已赋值
                     * 
                     */
                    bool WorkOrderTypeSetHasBeenSet() const;

                private:

                    /**
                     * 工单类型大类的名称
                     */
                    std::string m_workOrderFamily;
                    bool m_workOrderFamilyHasBeenSet;

                    /**
                     * 工单类型详情列表
                     */
                    std::vector<WorkOrderTypeDetail> m_workOrderTypeSet;
                    bool m_workOrderTypeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERFAMILYDETAIL_H_
