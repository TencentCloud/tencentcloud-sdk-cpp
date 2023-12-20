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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_GETTASKRESULTAPIRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_GETTASKRESULTAPIRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * GetTaskResultApi返回参数结构体
                */
                class GetTaskResultApiResponse : public AbstractModel
                {
                public:
                    GetTaskResultApiResponse();
                    ~GetTaskResultApiResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态，需要关注的状态
<ul><li>**0**  :NeedTranform   - 任务已提交</li>
<li>**4**  :Processing     - 文档转换中</li>
<li>**8**  :TaskEnd        - 任务处理完成</li>
<li>**-2** :DownloadFailed - 下载失败</li>
<li>**-6** :ProcessFailed  - 转换失败</li>
<li>**-13**:ProcessTimeout - 转换文件超时</li></ul>
                     * @return TaskStatus 任务状态，需要关注的状态
<ul><li>**0**  :NeedTranform   - 任务已提交</li>
<li>**4**  :Processing     - 文档转换中</li>
<li>**8**  :TaskEnd        - 任务处理完成</li>
<li>**-2** :DownloadFailed - 下载失败</li>
<li>**-6** :ProcessFailed  - 转换失败</li>
<li>**-13**:ProcessTimeout - 转换文件超时</li></ul>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取状态描述，需要关注的状态
<ul><li> **NeedTranform** : 任务已提交</li>
<li> **Processing** : 文档转换中</li>
<li> **TaskEnd** : 任务处理完成</li>
<li> **DownloadFailed** : 下载失败</li>
<li> **ProcessFailed** : 转换失败</li>
<li> **ProcessTimeout** : 转换文件超时</li></ul>
                     * @return TaskMessage 状态描述，需要关注的状态
<ul><li> **NeedTranform** : 任务已提交</li>
<li> **Processing** : 文档转换中</li>
<li> **TaskEnd** : 任务处理完成</li>
<li> **DownloadFailed** : 下载失败</li>
<li> **ProcessFailed** : 转换失败</li>
<li> **ProcessTimeout** : 转换文件超时</li></ul>
                     * 
                     */
                    std::string GetTaskMessage() const;

                    /**
                     * 判断参数 TaskMessage 是否已赋值
                     * @return TaskMessage 是否已赋值
                     * 
                     */
                    bool TaskMessageHasBeenSet() const;

                    /**
                     * 获取资源Id（即FileId），用于[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)
                     * @return ResourceId 资源Id（即FileId），用于[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态，需要关注的状态
<ul><li>**0**  :NeedTranform   - 任务已提交</li>
<li>**4**  :Processing     - 文档转换中</li>
<li>**8**  :TaskEnd        - 任务处理完成</li>
<li>**-2** :DownloadFailed - 下载失败</li>
<li>**-6** :ProcessFailed  - 转换失败</li>
<li>**-13**:ProcessTimeout - 转换文件超时</li></ul>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 状态描述，需要关注的状态
<ul><li> **NeedTranform** : 任务已提交</li>
<li> **Processing** : 文档转换中</li>
<li> **TaskEnd** : 任务处理完成</li>
<li> **DownloadFailed** : 下载失败</li>
<li> **ProcessFailed** : 转换失败</li>
<li> **ProcessTimeout** : 转换文件超时</li></ul>
                     */
                    std::string m_taskMessage;
                    bool m_taskMessageHasBeenSet;

                    /**
                     * 资源Id（即FileId），用于[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_GETTASKRESULTAPIRESPONSE_H_
