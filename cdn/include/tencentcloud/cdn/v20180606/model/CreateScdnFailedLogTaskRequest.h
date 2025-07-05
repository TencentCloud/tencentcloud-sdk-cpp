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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNFAILEDLOGTASKREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNFAILEDLOGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateScdnFailedLogTask请求参数结构体
                */
                class CreateScdnFailedLogTaskRequest : public AbstractModel
                {
                public:
                    CreateScdnFailedLogTaskRequest();
                    ~CreateScdnFailedLogTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取重试失败任务的taskID
                     * @return TaskId 重试失败任务的taskID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置重试失败任务的taskID
                     * @param _taskId 重试失败任务的taskID
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
                     * 获取地域：mainland或overseas
                     * @return Area 地域：mainland或overseas
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域：mainland或overseas
                     * @param _area 地域：mainland或overseas
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 重试失败任务的taskID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 地域：mainland或overseas
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNFAILEDLOGTASKREQUEST_H_
