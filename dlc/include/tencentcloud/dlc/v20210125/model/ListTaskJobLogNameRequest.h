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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTTASKJOBLOGNAMEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTTASKJOBLOGNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListTaskJobLogName请求参数结构体
                */
                class ListTaskJobLogNameRequest : public AbstractModel
                {
                public:
                    ListTaskJobLogNameRequest();
                    ~ListTaskJobLogNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的taskId
                     * @return TaskId 查询的taskId
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置查询的taskId
                     * @param _taskId 查询的taskId
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取SparkSQL批任务唯一ID
                     * @return BatchId SparkSQL批任务唯一ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置SparkSQL批任务唯一ID
                     * @param _batchId SparkSQL批任务唯一ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 查询的taskId
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * SparkSQL批任务唯一ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTTASKJOBLOGNAMEREQUEST_H_
