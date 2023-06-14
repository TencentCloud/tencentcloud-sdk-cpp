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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFOLDERWORKFLOWLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFOLDERWORKFLOWLISTREQUEST_H_

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
                * DescribeFolderWorkflowList请求参数结构体
                */
                class DescribeFolderWorkflowListRequest : public AbstractModel
                {
                public:
                    DescribeFolderWorkflowListRequest();
                    ~DescribeFolderWorkflowListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取父文件夹ID
                     * @return ParentsFolderId 父文件夹ID
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置父文件夹ID
                     * @param _parentsFolderId 父文件夹ID
                     * 
                     */
                    void SetParentsFolderId(const std::string& _parentsFolderId);

                    /**
                     * 判断参数 ParentsFolderId 是否已赋值
                     * @return ParentsFolderId 是否已赋值
                     * 
                     */
                    bool ParentsFolderIdHasBeenSet() const;

                    /**
                     * 获取关键字
                     * @return KeyWords 关键字
                     * 
                     */
                    std::string GetKeyWords() const;

                    /**
                     * 设置关键字
                     * @param _keyWords 关键字
                     * 
                     */
                    void SetKeyWords(const std::string& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取页码，默认1
                     * @return PageNumber 页码，默认1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，默认1
                     * @param _pageNumber 页码，默认1
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
                     * 获取页大小，默认10
                     * @return PageSize 页大小，默认10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小，默认10
                     * @param _pageSize 页大小，默认10
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父文件夹ID
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * 页码，默认1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小，默认10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFOLDERWORKFLOWLISTREQUEST_H_
