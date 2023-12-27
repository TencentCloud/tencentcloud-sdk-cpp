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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RetryRuns请求参数结构体
                */
                class RetryRunsRequest : public AbstractModel
                {
                public:
                    RetryRunsRequest();
                    ~RetryRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID。（不填使用指定地域下的默认项目）
                     * @return ProjectId 项目ID。（不填使用指定地域下的默认项目）
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。（不填使用指定地域下的默认项目）
                     * @param _projectId 项目ID。（不填使用指定地域下的默认项目）
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取需要重试的任务批次ID。
                     * @return RunGroupId 需要重试的任务批次ID。
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 设置需要重试的任务批次ID。
                     * @param _runGroupId 需要重试的任务批次ID。
                     * 
                     */
                    void SetRunGroupId(const std::string& _runGroupId);

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                    /**
                     * 获取需要重试的任务UUID。
                     * @return RunUuids 需要重试的任务UUID。
                     * 
                     */
                    std::vector<std::string> GetRunUuids() const;

                    /**
                     * 设置需要重试的任务UUID。
                     * @param _runUuids 需要重试的任务UUID。
                     * 
                     */
                    void SetRunUuids(const std::vector<std::string>& _runUuids);

                    /**
                     * 判断参数 RunUuids 是否已赋值
                     * @return RunUuids 是否已赋值
                     * 
                     */
                    bool RunUuidsHasBeenSet() const;

                    /**
                     * 获取WDL运行选项，不填使用被重试的任务批次运行选项。
                     * @return WDLOption WDL运行选项，不填使用被重试的任务批次运行选项。
                     * 
                     */
                    RunOption GetWDLOption() const;

                    /**
                     * 设置WDL运行选项，不填使用被重试的任务批次运行选项。
                     * @param _wDLOption WDL运行选项，不填使用被重试的任务批次运行选项。
                     * 
                     */
                    void SetWDLOption(const RunOption& _wDLOption);

                    /**
                     * 判断参数 WDLOption 是否已赋值
                     * @return WDLOption 是否已赋值
                     * 
                     */
                    bool WDLOptionHasBeenSet() const;

                    /**
                     * 获取Nextflow运行选项，不填使用被重试的任务批次运行选项。
                     * @return NFOption Nextflow运行选项，不填使用被重试的任务批次运行选项。
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow运行选项，不填使用被重试的任务批次运行选项。
                     * @param _nFOption Nextflow运行选项，不填使用被重试的任务批次运行选项。
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                private:

                    /**
                     * 项目ID。（不填使用指定地域下的默认项目）
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 需要重试的任务批次ID。
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * 需要重试的任务UUID。
                     */
                    std::vector<std::string> m_runUuids;
                    bool m_runUuidsHasBeenSet;

                    /**
                     * WDL运行选项，不填使用被重试的任务批次运行选项。
                     */
                    RunOption m_wDLOption;
                    bool m_wDLOptionHasBeenSet;

                    /**
                     * Nextflow运行选项，不填使用被重试的任务批次运行选项。
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_
