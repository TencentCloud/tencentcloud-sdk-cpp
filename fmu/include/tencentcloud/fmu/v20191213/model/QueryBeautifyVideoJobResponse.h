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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_QUERYBEAUTIFYVIDEOJOBRESPONSE_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_QUERYBEAUTIFYVIDEOJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fmu/v20191213/model/BeautifyVideoOutput.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * QueryBeautifyVideoJob返回参数结构体
                */
                class QueryBeautifyVideoJobResponse : public AbstractModel
                {
                public:
                    QueryBeautifyVideoJobResponse();
                    ~QueryBeautifyVideoJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取当前任务状态：排队中、处理中、处理失败或者处理完成
                     * @return JobStatus 当前任务状态：排队中、处理中、处理失败或者处理完成
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取视频美颜输出的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeautifyVideoOutput 视频美颜输出的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BeautifyVideoOutput GetBeautifyVideoOutput() const;

                    /**
                     * 判断参数 BeautifyVideoOutput 是否已赋值
                     * @return BeautifyVideoOutput 是否已赋值
                     */
                    bool BeautifyVideoOutputHasBeenSet() const;

                private:

                    /**
                     * 当前任务状态：排队中、处理中、处理失败或者处理完成
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 视频美颜输出的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BeautifyVideoOutput m_beautifyVideoOutput;
                    bool m_beautifyVideoOutputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_QUERYBEAUTIFYVIDEOJOBRESPONSE_H_
