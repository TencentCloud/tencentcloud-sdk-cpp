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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CROMWELLCONFIG_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CROMWELLCONFIG_H_

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
                * Cromwell工作流引擎设置
                */
                class CromwellConfig : public AbstractModel
                {
                public:
                    CromwellConfig();
                    ~CromwellConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流并发数
                     * @return MaxConcurrentWorkflows 工作流并发数
                     * 
                     */
                    uint64_t GetMaxConcurrentWorkflows() const;

                    /**
                     * 设置工作流并发数
                     * @param _maxConcurrentWorkflows 工作流并发数
                     * 
                     */
                    void SetMaxConcurrentWorkflows(const uint64_t& _maxConcurrentWorkflows);

                    /**
                     * 判断参数 MaxConcurrentWorkflows 是否已赋值
                     * @return MaxConcurrentWorkflows 是否已赋值
                     * 
                     */
                    bool MaxConcurrentWorkflowsHasBeenSet() const;

                    /**
                     * 获取作业并发数
                     * @return ConcurrentJobLimit 作业并发数
                     * 
                     */
                    uint64_t GetConcurrentJobLimit() const;

                    /**
                     * 设置作业并发数
                     * @param _concurrentJobLimit 作业并发数
                     * 
                     */
                    void SetConcurrentJobLimit(const uint64_t& _concurrentJobLimit);

                    /**
                     * 判断参数 ConcurrentJobLimit 是否已赋值
                     * @return ConcurrentJobLimit 是否已赋值
                     * 
                     */
                    bool ConcurrentJobLimitHasBeenSet() const;

                private:

                    /**
                     * 工作流并发数
                     */
                    uint64_t m_maxConcurrentWorkflows;
                    bool m_maxConcurrentWorkflowsHasBeenSet;

                    /**
                     * 作业并发数
                     */
                    uint64_t m_concurrentJobLimit;
                    bool m_concurrentJobLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CROMWELLCONFIG_H_
