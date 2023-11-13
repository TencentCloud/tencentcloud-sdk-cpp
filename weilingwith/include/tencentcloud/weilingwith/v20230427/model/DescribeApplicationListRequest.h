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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeApplicationList请求参数结构体
                */
                class DescribeApplicationListRequest : public AbstractModel
                {
                public:
                    DescribeApplicationListRequest();
                    ~DescribeApplicationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目空间id，本次查询返回的应用均关联至该空间
                     * @return WorkspaceId 项目空间id，本次查询返回的应用均关联至该空间
                     * 
                     */
                    uint64_t GetWorkspaceId() const;

                    /**
                     * 设置项目空间id，本次查询返回的应用均关联至该空间
                     * @param _workspaceId 项目空间id，本次查询返回的应用均关联至该空间
                     * 
                     */
                    void SetWorkspaceId(const uint64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取应用id数组，可选，填了则表示根据id批量查询
                     * @return ApplicationId 应用id数组，可选，填了则表示根据id批量查询
                     * 
                     */
                    std::vector<uint64_t> GetApplicationId() const;

                    /**
                     * 设置应用id数组，可选，填了则表示根据id批量查询
                     * @param _applicationId 应用id数组，可选，填了则表示根据id批量查询
                     * 
                     */
                    void SetApplicationId(const std::vector<uint64_t>& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取请求页号
                     * @return PageNumber 请求页号
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置请求页号
                     * @param _pageNumber 请求页号
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
                     * 获取页容量，默认为10
                     * @return PageSize 页容量，默认为10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页容量，默认为10
                     * @param _pageSize 页容量，默认为10
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 项目空间id，本次查询返回的应用均关联至该空间
                     */
                    uint64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 应用id数组，可选，填了则表示根据id批量查询
                     */
                    std::vector<uint64_t> m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 请求页号
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页容量，默认为10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
