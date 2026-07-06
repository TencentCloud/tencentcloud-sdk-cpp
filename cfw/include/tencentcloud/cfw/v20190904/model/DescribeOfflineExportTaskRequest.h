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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeOfflineExportTask请求参数结构体
                */
                class DescribeOfflineExportTaskRequest : public AbstractModel
                {
                public:
                    DescribeOfflineExportTaskRequest();
                    ~DescribeOfflineExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页参数</p>
                     * @return Limit <p>分页参数</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页参数</p>
                     * @param _limit <p>分页参数</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页参数</p>
                     * @return Offset <p>分页参数</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页参数</p>
                     * @param _offset <p>分页参数</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>任务ID/任务名称</p>
                     * @return TaskName <p>任务ID/任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务ID/任务名称</p>
                     * @param _taskName <p>任务ID/任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * <p>分页参数</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页参数</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>任务ID/任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTASKREQUEST_H_
