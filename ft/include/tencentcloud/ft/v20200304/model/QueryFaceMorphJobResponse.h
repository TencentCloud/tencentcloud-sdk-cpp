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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_QUERYFACEMORPHJOBRESPONSE_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_QUERYFACEMORPHJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ft/v20200304/model/FaceMorphOutput.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * QueryFaceMorphJob返回参数结构体
                */
                class QueryFaceMorphJobResponse : public AbstractModel
                {
                public:
                    QueryFaceMorphJobResponse();
                    ~QueryFaceMorphJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前任务状态：排队中、处理中、处理失败或者处理完成
                     * @return JobStatus 当前任务状态：排队中、处理中、处理失败或者处理完成
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取人像渐变输出的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceMorphOutput 人像渐变输出的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FaceMorphOutput GetFaceMorphOutput() const;

                    /**
                     * 判断参数 FaceMorphOutput 是否已赋值
                     * @return FaceMorphOutput 是否已赋值
                     * 
                     */
                    bool FaceMorphOutputHasBeenSet() const;

                    /**
                     * 获取当前任务状态码：1：排队中、3: 处理中、5: 处理失败、7:处理完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobStatusCode 当前任务状态码：1：排队中、3: 处理中、5: 处理失败、7:处理完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobStatusCode() const;

                    /**
                     * 判断参数 JobStatusCode 是否已赋值
                     * @return JobStatusCode 是否已赋值
                     * 
                     */
                    bool JobStatusCodeHasBeenSet() const;

                private:

                    /**
                     * 当前任务状态：排队中、处理中、处理失败或者处理完成
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 人像渐变输出的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FaceMorphOutput m_faceMorphOutput;
                    bool m_faceMorphOutputHasBeenSet;

                    /**
                     * 当前任务状态码：1：排队中、3: 处理中、5: 处理失败、7:处理完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobStatusCode;
                    bool m_jobStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_QUERYFACEMORPHJOBRESPONSE_H_
