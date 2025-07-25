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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBERESOURCETASKSRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBERESOURCETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/FirmwareTaskInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeResourceTasks返回参数结构体
                */
                class DescribeResourceTasksResponse : public AbstractModel
                {
                public:
                    DescribeResourceTasksResponse();
                    ~DescribeResourceTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfos 资源任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FirmwareTaskInfo> GetTaskInfos() const;

                    /**
                     * 判断参数 TaskInfos 是否已赋值
                     * @return TaskInfos 是否已赋值
                     * 
                     */
                    bool TaskInfosHasBeenSet() const;

                    /**
                     * 获取资源任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 资源任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 资源任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FirmwareTaskInfo> m_taskInfos;
                    bool m_taskInfosHasBeenSet;

                    /**
                     * 资源任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBERESOURCETASKSRESPONSE_H_
