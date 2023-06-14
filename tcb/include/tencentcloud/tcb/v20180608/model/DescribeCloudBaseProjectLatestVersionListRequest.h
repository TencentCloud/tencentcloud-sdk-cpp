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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEPROJECTLATESTVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEPROJECTLATESTVERSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseProjectLatestVersionList请求参数结构体
                */
                class DescribeCloudBaseProjectLatestVersionListRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseProjectLatestVersionListRequest();
                    ~DescribeCloudBaseProjectLatestVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取个数
                     * @return PageSize 个数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置个数
                     * @param _pageSize 个数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取环境id, 非必填
                     * @return EnvId 环境id, 非必填
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id, 非必填
                     * @param _envId 环境id, 非必填
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取项目名称, 非必填
                     * @return ProjectName 项目名称, 非必填
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称, 非必填
                     * @param _projectName 项目名称, 非必填
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目类型: framework-oneclick,qci-extension-cicd
                     * @return ProjectType 项目类型: framework-oneclick,qci-extension-cicd
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置项目类型: framework-oneclick,qci-extension-cicd
                     * @param _projectType 项目类型: framework-oneclick,qci-extension-cicd
                     * 
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ci的id
                     * @return CiId ci的id
                     * 
                     */
                    std::string GetCiId() const;

                    /**
                     * 设置ci的id
                     * @param _ciId ci的id
                     * 
                     */
                    void SetCiId(const std::string& _ciId);

                    /**
                     * 判断参数 CiId 是否已赋值
                     * @return CiId 是否已赋值
                     * 
                     */
                    bool CiIdHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 个数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 环境id, 非必填
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 项目名称, 非必填
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目类型: framework-oneclick,qci-extension-cicd
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ci的id
                     */
                    std::string m_ciId;
                    bool m_ciIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEPROJECTLATESTVERSIONLISTREQUEST_H_
