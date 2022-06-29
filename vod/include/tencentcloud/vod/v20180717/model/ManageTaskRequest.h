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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MANAGETASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MANAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ManageTask请求参数结构体
                */
                class ManageTaskRequest : public AbstractModel
                {
                public:
                    ManageTaskRequest();
                    ~ManageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频处理的任务 ID。
                     * @return TaskId 视频处理的任务 ID。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置视频处理的任务 ID。
                     * @param TaskId 视频处理的任务 ID。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取操作类型，取值范围：
<li>Abort：终止任务。只能终止已发起且状态为等待中（WAITING）的任务。</li>
                     * @return OperationType 操作类型，取值范围：
<li>Abort：终止任务。只能终止已发起且状态为等待中（WAITING）的任务。</li>
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型，取值范围：
<li>Abort：终止任务。只能终止已发起且状态为等待中（WAITING）的任务。</li>
                     * @param OperationType 操作类型，取值范围：
<li>Abort：终止任务。只能终止已发起且状态为等待中（WAITING）的任务。</li>
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取<b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @return SubAppId <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @param SubAppId <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 视频处理的任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作类型，取值范围：
<li>Abort：终止任务。只能终止已发起且状态为等待中（WAITING）的任务。</li>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MANAGETASKREQUEST_H_
