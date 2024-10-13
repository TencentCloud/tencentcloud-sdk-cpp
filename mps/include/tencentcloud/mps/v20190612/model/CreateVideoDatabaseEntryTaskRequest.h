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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEVIDEODATABASEENTRYTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEVIDEODATABASEENTRYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateVideoDatabaseEntryTask请求参数结构体
                */
                class CreateVideoDatabaseEntryTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoDatabaseEntryTaskRequest();
                    ~CreateVideoDatabaseEntryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待入库视频信息
                     * @return InputInfo 待入库视频信息
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置待入库视频信息
                     * @param _inputInfo 待入库视频信息
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取可选，入库任务完成后向指定的回调地址传递任务结果，目前仅支持URL
                     * @return TaskNotifyConfig 可选，入库任务完成后向指定的回调地址传递任务结果，目前仅支持URL
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置可选，入库任务完成后向指定的回调地址传递任务结果，目前仅支持URL
                     * @param _taskNotifyConfig 可选，入库任务完成后向指定的回调地址传递任务结果，目前仅支持URL
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * 待入库视频信息
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 可选，入库任务完成后向指定的回调地址传递任务结果，目前仅支持URL
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEVIDEODATABASEENTRYTASKREQUEST_H_
