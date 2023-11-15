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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBESPACEDEVICERELATIONLISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBESPACEDEVICERELATIONLISTREQUEST_H_

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
                * DescribeSpaceDeviceRelationList请求参数结构体
                */
                class DescribeSpaceDeviceRelationListRequest : public AbstractModel
                {
                public:
                    DescribeSpaceDeviceRelationListRequest();
                    ~DescribeSpaceDeviceRelationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取构件id列表
                     * @return ElementIds 构件id列表
                     * 
                     */
                    std::vector<std::string> GetElementIds() const;

                    /**
                     * 设置构件id列表
                     * @param _elementIds 构件id列表
                     * 
                     */
                    void SetElementIds(const std::vector<std::string>& _elementIds);

                    /**
                     * 判断参数 ElementIds 是否已赋值
                     * @return ElementIds 是否已赋值
                     * 
                     */
                    bool ElementIdsHasBeenSet() const;

                    /**
                     * 获取是否级联
                     * @return IsCascade 是否级联
                     * 
                     */
                    bool GetIsCascade() const;

                    /**
                     * 设置是否级联
                     * @param _isCascade 是否级联
                     * 
                     */
                    void SetIsCascade(const bool& _isCascade);

                    /**
                     * 判断参数 IsCascade 是否已赋值
                     * @return IsCascade 是否已赋值
                     * 
                     */
                    bool IsCascadeHasBeenSet() const;

                    /**
                     * 获取项目空间id
                     * @return WorkspaceId 项目空间id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置项目空间id
                     * @param _workspaceId 项目空间id
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取页容量
                     * @return PageSize 页容量
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页容量
                     * @param _pageSize 页容量
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

                private:

                    /**
                     * 构件id列表
                     */
                    std::vector<std::string> m_elementIds;
                    bool m_elementIdsHasBeenSet;

                    /**
                     * 是否级联
                     */
                    bool m_isCascade;
                    bool m_isCascadeHasBeenSet;

                    /**
                     * 项目空间id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页容量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBESPACEDEVICERELATIONLISTREQUEST_H_
