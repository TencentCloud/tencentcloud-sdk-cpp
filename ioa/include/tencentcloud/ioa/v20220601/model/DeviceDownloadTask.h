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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDOWNLOADTASK_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDOWNLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class DeviceDownloadTask : public AbstractModel
                {
                public:
                    DeviceDownloadTask();
                    ~DeviceDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步数据下载的url
                     * @return DownloadURL 同步数据下载的url
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 设置同步数据下载的url
                     * @param _downloadURL 同步数据下载的url
                     * 
                     */
                    void SetDownloadURL(const std::string& _downloadURL);

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取异步任务id，需要根据id去任务中心下载
                     * @return TaskId 异步任务id，需要根据id去任务中心下载
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置异步任务id，需要根据id去任务中心下载
                     * @param _taskId 异步任务id，需要根据id去任务中心下载
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 同步数据下载的url
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * 异步任务id，需要根据id去任务中心下载
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDOWNLOADTASK_H_
