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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCOLUMNLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCOLUMNLINEAGEREQUEST_H_

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
                * ListColumnLineage请求参数结构体
                */
                class ListColumnLineageRequest : public AbstractModel
                {
                public:
                    ListColumnLineageRequest();
                    ~ListColumnLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表唯一ID
                     * @return TableUniqueId 表唯一ID
                     * 
                     */
                    std::string GetTableUniqueId() const;

                    /**
                     * 设置表唯一ID
                     * @param _tableUniqueId 表唯一ID
                     * 
                     */
                    void SetTableUniqueId(const std::string& _tableUniqueId);

                    /**
                     * 判断参数 TableUniqueId 是否已赋值
                     * @return TableUniqueId 是否已赋值
                     * 
                     */
                    bool TableUniqueIdHasBeenSet() const;

                    /**
                     * 获取血缘方向 INPUT｜OUTPUT
                     * @return Direction 血缘方向 INPUT｜OUTPUT
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置血缘方向 INPUT｜OUTPUT
                     * @param _direction 血缘方向 INPUT｜OUTPUT
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取列名称
                     * @return ColumnName 列名称
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置列名称
                     * @param _columnName 列名称
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取来源：WEDATA|THIRD 默认WEDATA
                     * @return Platform 来源：WEDATA|THIRD 默认WEDATA
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置来源：WEDATA|THIRD 默认WEDATA
                     * @param _platform 来源：WEDATA|THIRD 默认WEDATA
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * 表唯一ID
                     */
                    std::string m_tableUniqueId;
                    bool m_tableUniqueIdHasBeenSet;

                    /**
                     * 血缘方向 INPUT｜OUTPUT
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 列名称
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 来源：WEDATA|THIRD 默认WEDATA
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCOLUMNLINEAGEREQUEST_H_
