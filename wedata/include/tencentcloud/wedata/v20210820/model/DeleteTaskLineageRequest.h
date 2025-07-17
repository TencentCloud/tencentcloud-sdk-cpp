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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKLINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteTaskLineage请求参数结构体
                */
                class DeleteTaskLineageRequest : public AbstractModel
                {
                public:
                    DeleteTaskLineageRequest();
                    ~DeleteTaskLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务信息
                     * @return Task 任务信息
                     * 
                     */
                    LineageTask GetTask() const;

                    /**
                     * 设置任务信息
                     * @param _task 任务信息
                     * 
                     */
                    void SetTask(const LineageTask& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取wedata内部任务默认SQL
                     * @return ChannelType wedata内部任务默认SQL
                     * 
                     */
                    std::string GetChannelType() const;

                    /**
                     * 设置wedata内部任务默认SQL
                     * @param _channelType wedata内部任务默认SQL
                     * 
                     */
                    void SetChannelType(const std::string& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                private:

                    /**
                     * 任务信息
                     */
                    LineageTask m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * wedata内部任务默认SQL
                     */
                    std::string m_channelType;
                    bool m_channelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKLINEAGEREQUEST_H_
