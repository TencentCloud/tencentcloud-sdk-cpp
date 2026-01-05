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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWSREQUEST_H_

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
                * ListTriggerWorkflows请求参数结构体
                */
                class ListTriggerWorkflowsRequest : public AbstractModel
                {
                public:
                    ListTriggerWorkflowsRequest();
                    ~ListTriggerWorkflowsRequest() = default;
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
                     * 获取请求的数据页数。默认值为1，取值大于等于1
                     * @return PageNumber 请求的数据页数。默认值为1，取值大于等于1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置请求的数据页数。默认值为1，取值大于等于1
                     * @param _pageNumber 请求的数据页数。默认值为1，取值大于等于1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     * @return PageSize 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     * @param _pageSize 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
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
                     * 获取搜索关键词
                     * @return Keyword 搜索关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键词
                     * @param _keyword 搜索关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取工作流所属文件夹
                     * @return ParentFolderPath 工作流所属文件夹
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置工作流所属文件夹
                     * @param _parentFolderPath 工作流所属文件夹
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
                     * 获取bundleId项
                     * @return BundleId bundleId项
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置bundleId项
                     * @param _bundleId bundleId项
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取负责人ID
                     * @return OwnerUin 负责人ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置负责人ID
                     * @param _ownerUin 负责人ID
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建人ID
                     * @return CreateUserUin 创建人ID
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人ID
                     * @param _createUserUin 创建人ID
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
                     * 获取修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @return ModifyTime 修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    std::vector<std::string> GetModifyTime() const;

                    /**
                     * 设置修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @param _modifyTime 修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    void SetModifyTime(const std::vector<std::string>& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @return CreateTime 创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    std::vector<std::string> GetCreateTime() const;

                    /**
                     * 设置创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @param _createTime 创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    void SetCreateTime(const std::vector<std::string>& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请求的数据页数。默认值为1，取值大于等于1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 工作流所属文件夹
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * bundleId项
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 负责人ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建人ID
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     */
                    std::vector<std::string> m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     */
                    std::vector<std::string> m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWSREQUEST_H_
