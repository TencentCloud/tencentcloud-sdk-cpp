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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_NEXTFLOWCONFIG_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_NEXTFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Nextflow工作流引擎设置
                */
                class NextflowConfig : public AbstractModel
                {
                public:
                    NextflowConfig();
                    ~NextflowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流任务并发数
                     * @return ExecutorQueueSize 工作流任务并发数
                     * 
                     */
                    uint64_t GetExecutorQueueSize() const;

                    /**
                     * 设置工作流任务并发数
                     * @param _executorQueueSize 工作流任务并发数
                     * 
                     */
                    void SetExecutorQueueSize(const uint64_t& _executorQueueSize);

                    /**
                     * 判断参数 ExecutorQueueSize 是否已赋值
                     * @return ExecutorQueueSize 是否已赋值
                     * 
                     */
                    bool ExecutorQueueSizeHasBeenSet() const;

                private:

                    /**
                     * 工作流任务并发数
                     */
                    uint64_t m_executorQueueSize;
                    bool m_executorQueueSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_NEXTFLOWCONFIG_H_
