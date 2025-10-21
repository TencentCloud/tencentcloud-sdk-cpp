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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFILESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFILESREQUEST_H_

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
                * ListResourceFiles请求参数结构体
                */
                class ListResourceFilesRequest : public AbstractModel
                {
                public:
                    ListResourceFilesRequest();
                    ~ListResourceFilesRequest() = default;
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
                     * 获取数据页数，大于等于1。默认1
                     * @return PageNumber 数据页数，大于等于1。默认1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置数据页数，大于等于1。默认1
                     * @param _pageNumber 数据页数，大于等于1。默认1
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
                     * 获取每页显示的数据条数，最小为10条，最大为200 条。默认10
                     * @return PageSize 每页显示的数据条数，最小为10条，最大为200 条。默认10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的数据条数，最小为10条，最大为200 条。默认10
                     * @param _pageSize 每页显示的数据条数，最小为10条，最大为200 条。默认10
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
                     * 获取资源文件名称(模糊搜索关键词)
                     * @return ResourceName 资源文件名称(模糊搜索关键词)
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源文件名称(模糊搜索关键词)
                     * @param _resourceName 资源文件名称(模糊搜索关键词)
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源文件所属文件夹路径(如/a/b/c，查询c文件夹下的资源文件)
                     * @return ParentFolderPath 资源文件所属文件夹路径(如/a/b/c，查询c文件夹下的资源文件)
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置资源文件所属文件夹路径(如/a/b/c，查询c文件夹下的资源文件)
                     * @param _parentFolderPath 资源文件所属文件夹路径(如/a/b/c，查询c文件夹下的资源文件)
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取创建人ID, 可通过DescribeCurrentUserInfo接口获取
                     * @return CreateUserUin 创建人ID, 可通过DescribeCurrentUserInfo接口获取
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人ID, 可通过DescribeCurrentUserInfo接口获取
                     * @param _createUserUin 创建人ID, 可通过DescribeCurrentUserInfo接口获取
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取更新时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return ModifyTimeStart 更新时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetModifyTimeStart() const;

                    /**
                     * 设置更新时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _modifyTimeStart 更新时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetModifyTimeStart(const std::string& _modifyTimeStart);

                    /**
                     * 判断参数 ModifyTimeStart 是否已赋值
                     * @return ModifyTimeStart 是否已赋值
                     * 
                     */
                    bool ModifyTimeStartHasBeenSet() const;

                    /**
                     * 获取更新时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return ModifyTimeEnd 更新时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetModifyTimeEnd() const;

                    /**
                     * 设置更新时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _modifyTimeEnd 更新时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetModifyTimeEnd(const std::string& _modifyTimeEnd);

                    /**
                     * 判断参数 ModifyTimeEnd 是否已赋值
                     * @return ModifyTimeEnd 是否已赋值
                     * 
                     */
                    bool ModifyTimeEndHasBeenSet() const;

                    /**
                     * 获取创建时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return CreateTimeStart 创建时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCreateTimeStart() const;

                    /**
                     * 设置创建时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _createTimeStart 创建时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetCreateTimeStart(const std::string& _createTimeStart);

                    /**
                     * 判断参数 CreateTimeStart 是否已赋值
                     * @return CreateTimeStart 是否已赋值
                     * 
                     */
                    bool CreateTimeStartHasBeenSet() const;

                    /**
                     * 获取创建时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return CreateTimeEnd 创建时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCreateTimeEnd() const;

                    /**
                     * 设置创建时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _createTimeEnd 创建时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetCreateTimeEnd(const std::string& _createTimeEnd);

                    /**
                     * 判断参数 CreateTimeEnd 是否已赋值
                     * @return CreateTimeEnd 是否已赋值
                     * 
                     */
                    bool CreateTimeEndHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据页数，大于等于1。默认1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的数据条数，最小为10条，最大为200 条。默认10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 资源文件名称(模糊搜索关键词)
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源文件所属文件夹路径(如/a/b/c，查询c文件夹下的资源文件)
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 创建人ID, 可通过DescribeCurrentUserInfo接口获取
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 更新时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_modifyTimeStart;
                    bool m_modifyTimeStartHasBeenSet;

                    /**
                     * 更新时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_modifyTimeEnd;
                    bool m_modifyTimeEndHasBeenSet;

                    /**
                     * 创建时间范围,开始时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_createTimeStart;
                    bool m_createTimeStartHasBeenSet;

                    /**
                     * 创建时间范围,结束时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_createTimeEnd;
                    bool m_createTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFILESREQUEST_H_
