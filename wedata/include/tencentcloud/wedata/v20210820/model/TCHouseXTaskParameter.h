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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TCHOUSEXTASKPARAMETER_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TCHOUSEXTASKPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TCHouse-X 任务参数
                */
                class TCHouseXTaskParameter : public AbstractModel
                {
                public:
                    TCHouseXTaskParameter();
                    ~TCHouseXTaskParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DriverCPU核数
                     * @return DriverCores DriverCPU核数
                     * 
                     */
                    int64_t GetDriverCores() const;

                    /**
                     * 设置DriverCPU核数
                     * @param _driverCores DriverCPU核数
                     * 
                     */
                    void SetDriverCores(const int64_t& _driverCores);

                    /**
                     * 判断参数 DriverCores 是否已赋值
                     * @return DriverCores 是否已赋值
                     * 
                     */
                    bool DriverCoresHasBeenSet() const;

                    /**
                     * 获取ExecutorCPU核数
                     * @return ExecutorCores ExecutorCPU核数
                     * 
                     */
                    int64_t GetExecutorCores() const;

                    /**
                     * 设置ExecutorCPU核数
                     * @param _executorCores ExecutorCPU核数
                     * 
                     */
                    void SetExecutorCores(const int64_t& _executorCores);

                    /**
                     * 判断参数 ExecutorCores 是否已赋值
                     * @return ExecutorCores 是否已赋值
                     * 
                     */
                    bool ExecutorCoresHasBeenSet() const;

                    /**
                     * 获取Executor个数
                     * @return NumExecutors Executor个数
                     * 
                     */
                    int64_t GetNumExecutors() const;

                    /**
                     * 设置Executor个数
                     * @param _numExecutors Executor个数
                     * 
                     */
                    void SetNumExecutors(const int64_t& _numExecutors);

                    /**
                     * 判断参数 NumExecutors 是否已赋值
                     * @return NumExecutors 是否已赋值
                     * 
                     */
                    bool NumExecutorsHasBeenSet() const;

                private:

                    /**
                     * DriverCPU核数
                     */
                    int64_t m_driverCores;
                    bool m_driverCoresHasBeenSet;

                    /**
                     * ExecutorCPU核数
                     */
                    int64_t m_executorCores;
                    bool m_executorCoresHasBeenSet;

                    /**
                     * Executor个数
                     */
                    int64_t m_numExecutors;
                    bool m_numExecutorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TCHOUSEXTASKPARAMETER_H_
