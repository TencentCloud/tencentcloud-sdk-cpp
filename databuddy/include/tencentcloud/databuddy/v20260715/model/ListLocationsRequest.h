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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListLocations请求参数结构体
                */
                class ListLocationsRequest : public AbstractModel
                {
                public:
                    ListLocationsRequest();
                    ~ListLocationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>调用时所在workspace唯一id，必填</p>
                     * @return WorkspaceId <p>调用时所在workspace唯一id，必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>调用时所在workspace唯一id，必填</p>
                     * @param _workspaceId <p>调用时所在workspace唯一id，必填</p>
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
                     * 获取<p>存储位置名匹配模式，支持SQL LIKE语法</p>
                     * @return LocationNamePattern <p>存储位置名匹配模式，支持SQL LIKE语法</p>
                     * 
                     */
                    std::string GetLocationNamePattern() const;

                    /**
                     * 设置<p>存储位置名匹配模式，支持SQL LIKE语法</p>
                     * @param _locationNamePattern <p>存储位置名匹配模式，支持SQL LIKE语法</p>
                     * 
                     */
                    void SetLocationNamePattern(const std::string& _locationNamePattern);

                    /**
                     * 判断参数 LocationNamePattern 是否已赋值
                     * @return LocationNamePattern 是否已赋值
                     * 
                     */
                    bool LocationNamePatternHasBeenSet() const;

                    /**
                     * 获取<p>是否基于快照分页</p>
                     * @return SnapshotBased <p>是否基于快照分页</p>
                     * 
                     */
                    bool GetSnapshotBased() const;

                    /**
                     * 设置<p>是否基于快照分页</p>
                     * @param _snapshotBased <p>是否基于快照分页</p>
                     * 
                     */
                    void SetSnapshotBased(const bool& _snapshotBased);

                    /**
                     * 判断参数 SnapshotBased 是否已赋值
                     * @return SnapshotBased 是否已赋值
                     * 
                     */
                    bool SnapshotBasedHasBeenSet() const;

                    /**
                     * 获取<p>快照ID</p>
                     * @return SnapshotId <p>快照ID</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>快照ID</p>
                     * @param _snapshotId <p>快照ID</p>
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>页码，从1开始，可选，默认1</p>
                     * @return PageNumber <p>页码，从1开始，可选，默认1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从1开始，可选，默认1</p>
                     * @param _pageNumber <p>页码，从1开始，可选，默认1</p>
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
                     * 获取<p>每页大小，默认10，取值范围 1~500</p>
                     * @return PageSize <p>每页大小，默认10，取值范围 1~500</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，默认10，取值范围 1~500</p>
                     * @param _pageSize <p>每页大小，默认10，取值范围 1~500</p>
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
                     * <p>调用时所在workspace唯一id，必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>存储位置名匹配模式，支持SQL LIKE语法</p>
                     */
                    std::string m_locationNamePattern;
                    bool m_locationNamePatternHasBeenSet;

                    /**
                     * <p>是否基于快照分页</p>
                     */
                    bool m_snapshotBased;
                    bool m_snapshotBasedHasBeenSet;

                    /**
                     * <p>快照ID</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>页码，从1开始，可选，默认1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，默认10，取值范围 1~500</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONSREQUEST_H_
