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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTaskVersions请求参数结构体
                */
                class ListTaskVersionsRequest : public AbstractModel
                {
                public:
                    ListTaskVersionsRequest();
                    ~ListTaskVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>保存版本：SAVE<br>提交版本：SUBMIT<br>默认为SAVE</p>
                     * @return TaskVersionType <p>保存版本：SAVE<br>提交版本：SUBMIT<br>默认为SAVE</p>
                     * 
                     */
                    std::string GetTaskVersionType() const;

                    /**
                     * 设置<p>保存版本：SAVE<br>提交版本：SUBMIT<br>默认为SAVE</p>
                     * @param _taskVersionType <p>保存版本：SAVE<br>提交版本：SUBMIT<br>默认为SAVE</p>
                     * 
                     */
                    void SetTaskVersionType(const std::string& _taskVersionType);

                    /**
                     * 判断参数 TaskVersionType 是否已赋值
                     * @return TaskVersionType 是否已赋值
                     * 
                     */
                    bool TaskVersionTypeHasBeenSet() const;

                    /**
                     * 获取<p>请求的数据页数。默认值为1，取值大于等于1。</p>
                     * @return PageNumber <p>请求的数据页数。默认值为1，取值大于等于1。</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>请求的数据页数。默认值为1，取值大于等于1。</p>
                     * @param _pageNumber <p>请求的数据页数。默认值为1，取值大于等于1。</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。</p>
                     * @return PageSize <p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。</p>
                     * @param _pageSize <p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否为使用版本</p>
                     * @return UsedVersion <p>是否为使用版本</p>
                     * 
                     */
                    bool GetUsedVersion() const;

                    /**
                     * 设置<p>是否为使用版本</p>
                     * @param _usedVersion <p>是否为使用版本</p>
                     * 
                     */
                    void SetUsedVersion(const bool& _usedVersion);

                    /**
                     * 判断参数 UsedVersion 是否已赋值
                     * @return UsedVersion 是否已赋值
                     * 
                     */
                    bool UsedVersionHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>保存版本：SAVE<br>提交版本：SUBMIT<br>默认为SAVE</p>
                     */
                    std::string m_taskVersionType;
                    bool m_taskVersionTypeHasBeenSet;

                    /**
                     * <p>请求的数据页数。默认值为1，取值大于等于1。</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>是否为使用版本</p>
                     */
                    bool m_usedVersion;
                    bool m_usedVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONSREQUEST_H_
