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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTWORKFLOWZIPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTWORKFLOWZIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExportWorkflowZip请求参数结构体
                */
                class ExportWorkflowZipRequest : public AbstractModel
                {
                public:
                    ExportWorkflowZipRequest();
                    ~ExportWorkflowZipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取工作流ID
                     * @return WorkflowIds 工作流ID
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowIds 工作流ID
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取跨域访问域名，文件存储在共享存储中，跨域下载会出现跨域访问失败问题，如果是跨域请求，请填写该值
                     * @return OriginDomain 跨域访问域名，文件存储在共享存储中，跨域下载会出现跨域访问失败问题，如果是跨域请求，请填写该值
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 设置跨域访问域名，文件存储在共享存储中，跨域下载会出现跨域访问失败问题，如果是跨域请求，请填写该值
                     * @param _originDomain 跨域访问域名，文件存储在共享存储中，跨域下载会出现跨域访问失败问题，如果是跨域请求，请填写该值
                     * 
                     */
                    void SetOriginDomain(const std::string& _originDomain);

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * 跨域访问域名，文件存储在共享存储中，跨域下载会出现跨域访问失败问题，如果是跨域请求，请填写该值
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTWORKFLOWZIPREQUEST_H_
