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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADREQUEST_H_

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
                * CreateResultDownload请求参数结构体
                */
                class CreateResultDownloadRequest : public AbstractModel
                {
                public:
                    CreateResultDownloadRequest();
                    ~CreateResultDownloadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果任务Id
                     * @return TaskId 查询结果任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置查询结果任务Id
                     * @param _taskId 查询结果任务Id
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
                     * 获取下载格式
                     * @return Format 下载格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置下载格式
                     * @param _format 下载格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取是否重新生成下载文件，仅当之前任务状态为 timeout | error 时有效
                     * @return Force 是否重新生成下载文件，仅当之前任务状态为 timeout | error 时有效
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否重新生成下载文件，仅当之前任务状态为 timeout | error 时有效
                     * @param _force 是否重新生成下载文件，仅当之前任务状态为 timeout | error 时有效
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 查询结果任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 下载格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 是否重新生成下载文件，仅当之前任务状态为 timeout | error 时有效
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADREQUEST_H_
