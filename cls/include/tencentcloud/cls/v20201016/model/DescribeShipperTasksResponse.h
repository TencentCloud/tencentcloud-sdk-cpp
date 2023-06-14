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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ShipperTaskInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeShipperTasks返回参数结构体
                */
                class DescribeShipperTasksResponse : public AbstractModel
                {
                public:
                    DescribeShipperTasksResponse();
                    ~DescribeShipperTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取投递任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 投递任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ShipperTaskInfo> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 投递任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ShipperTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSRESPONSE_H_
