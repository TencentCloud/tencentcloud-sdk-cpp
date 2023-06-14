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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCERESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskInstanceDetail.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskInstance返回参数结构体
                */
                class DescribeTaskInstanceResponse : public AbstractModel
                {
                public:
                    DescribeTaskInstanceResponse();
                    ~DescribeTaskInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例详情
                     * @return TaskInstanceDetail 任务实例详情
                     * 
                     */
                    TaskInstanceDetail GetTaskInstanceDetail() const;

                    /**
                     * 判断参数 TaskInstanceDetail 是否已赋值
                     * @return TaskInstanceDetail 是否已赋值
                     * 
                     */
                    bool TaskInstanceDetailHasBeenSet() const;

                    /**
                     * 获取任务实例详情。与TaskInstanceDetail相同含义，优先取Data，Data为空时，取TaskInstanceDetail
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 任务实例详情。与TaskInstanceDetail相同含义，优先取Data，Data为空时，取TaskInstanceDetail
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskInstanceDetail GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 任务实例详情
                     */
                    TaskInstanceDetail m_taskInstanceDetail;
                    bool m_taskInstanceDetailHasBeenSet;

                    /**
                     * 任务实例详情。与TaskInstanceDetail相同含义，优先取Data，Data为空时，取TaskInstanceDetail
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskInstanceDetail m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCERESPONSE_H_
