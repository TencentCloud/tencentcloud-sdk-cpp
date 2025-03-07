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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TASKLASTEXECUTESTATUS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TASKLASTEXECUTESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 任务最近一次执行状态
                */
                class TaskLastExecuteStatus : public AbstractModel
                {
                public:
                    TaskLastExecuteStatus();
                    ~TaskLastExecuteStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取运行状态，RUNNING/SUCCESS/FAIL/HALF/TERMINATED
                     * @return State 运行状态，RUNNING/SUCCESS/FAIL/HALF/TERMINATED
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置运行状态，RUNNING/SUCCESS/FAIL/HALF/TERMINATED
                     * @param _state 运行状态，RUNNING/SUCCESS/FAIL/HALF/TERMINATED
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取批次历史ID
                     * @return BatchLogId 批次历史ID
                     * 
                     */
                    std::string GetBatchLogId() const;

                    /**
                     * 设置批次历史ID
                     * @param _batchLogId 批次历史ID
                     * 
                     */
                    void SetBatchLogId(const std::string& _batchLogId);

                    /**
                     * 判断参数 BatchLogId 是否已赋值
                     * @return BatchLogId 是否已赋值
                     * 
                     */
                    bool BatchLogIdHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 运行状态，RUNNING/SUCCESS/FAIL/HALF/TERMINATED
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 批次历史ID
                     */
                    std::string m_batchLogId;
                    bool m_batchLogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TASKLASTEXECUTESTATUS_H_
