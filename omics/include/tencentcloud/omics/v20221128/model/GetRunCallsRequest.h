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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNCALLSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNCALLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunCalls请求参数结构体
                */
                class GetRunCallsRequest : public AbstractModel
                {
                public:
                    GetRunCallsRequest();
                    ~GetRunCallsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Uuid。
                     * @return RunUuid 任务Uuid。
                     * 
                     */
                    std::string GetRunUuid() const;

                    /**
                     * 设置任务Uuid。
                     * @param _runUuid 任务Uuid。
                     * 
                     */
                    void SetRunUuid(const std::string& _runUuid);

                    /**
                     * 判断参数 RunUuid 是否已赋值
                     * @return RunUuid 是否已赋值
                     * 
                     */
                    bool RunUuidHasBeenSet() const;

                    /**
                     * 获取作业路径
                     * @return Path 作业路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置作业路径
                     * @param _path 作业路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取项目ID。
（不填使用指定地域下的默认项目）
                     * @return ProjectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
（不填使用指定地域下的默认项目）
                     * @param _projectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务Uuid。
                     */
                    std::string m_runUuid;
                    bool m_runUuidHasBeenSet;

                    /**
                     * 作业路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 项目ID。
（不填使用指定地域下的默认项目）
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNCALLSREQUEST_H_
