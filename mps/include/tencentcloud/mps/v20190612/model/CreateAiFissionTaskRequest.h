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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIFISSIONTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIFISSIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiFissionInput.h>
#include <tencentcloud/mps/v20190612/model/VideoDramaCosInfo.h>
#include <tencentcloud/mps/v20190612/model/FissionTaskInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAiFissionTask请求参数结构体
                */
                class CreateAiFissionTaskRequest : public AbstractModel
                {
                public:
                    CreateAiFissionTaskRequest();
                    ~CreateAiFissionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ai视频裂变输入信息</p>
                     * @return Input <p>ai视频裂变输入信息</p>
                     * 
                     */
                    AiFissionInput GetInput() const;

                    /**
                     * 设置<p>ai视频裂变输入信息</p>
                     * @param _input <p>ai视频裂变输入信息</p>
                     * 
                     */
                    void SetInput(const AiFissionInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>用户cos信息</p>
                     * @return CosInfo <p>用户cos信息</p>
                     * 
                     */
                    VideoDramaCosInfo GetCosInfo() const;

                    /**
                     * 设置<p>用户cos信息</p>
                     * @param _cosInfo <p>用户cos信息</p>
                     * 
                     */
                    void SetCosInfo(const VideoDramaCosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                    /**
                     * 获取<p>ai视频裂变任务信息</p>
                     * @return TaskInfo <p>ai视频裂变任务信息</p>
                     * 
                     */
                    FissionTaskInfo GetTaskInfo() const;

                    /**
                     * 设置<p>ai视频裂变任务信息</p>
                     * @param _taskInfo <p>ai视频裂变任务信息</p>
                     * 
                     */
                    void SetTaskInfo(const FissionTaskInfo& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                private:

                    /**
                     * <p>ai视频裂变输入信息</p>
                     */
                    AiFissionInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>用户cos信息</p>
                     */
                    VideoDramaCosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                    /**
                     * <p>ai视频裂变任务信息</p>
                     */
                    FissionTaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIFISSIONTASKREQUEST_H_
