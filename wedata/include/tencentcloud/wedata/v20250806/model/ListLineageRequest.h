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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTLINEAGEREQUEST_H_

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
                * ListLineage请求参数结构体
                */
                class ListLineageRequest : public AbstractModel
                {
                public:
                    ListLineageRequest();
                    ~ListLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实体唯一ID</p>
                     * @return ResourceUniqueId <p>实体唯一ID</p>
                     * 
                     */
                    std::string GetResourceUniqueId() const;

                    /**
                     * 设置<p>实体唯一ID</p>
                     * @param _resourceUniqueId <p>实体唯一ID</p>
                     * 
                     */
                    void SetResourceUniqueId(const std::string& _resourceUniqueId);

                    /**
                     * 判断参数 ResourceUniqueId 是否已赋值
                     * @return ResourceUniqueId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取<p>实体类型 TABLE|METRIC|MODEL|SERVICE|COLUMN</p>
                     * @return ResourceType <p>实体类型 TABLE|METRIC|MODEL|SERVICE|COLUMN</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>实体类型 TABLE|METRIC|MODEL|SERVICE|COLUMN</p>
                     * @param _resourceType <p>实体类型 TABLE|METRIC|MODEL|SERVICE|COLUMN</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>血缘方向 INPUT｜OUTPUT</p>
                     * @return Direction <p>血缘方向 INPUT｜OUTPUT</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>血缘方向 INPUT｜OUTPUT</p>
                     * @param _direction <p>血缘方向 INPUT｜OUTPUT</p>
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
                     * 获取<p>页码</p>
                     * @return PageNumber <p>页码</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNumber <p>页码</p>
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
                     * 获取<p>分页大小</p>
                     * @return PageSize <p>分页大小</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _pageSize <p>分页大小</p>
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
                     * 获取<p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * @return Platform <p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * @param _platform <p>来源：WEDATA|THIRD 默认WEDATA</p>
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
                     * <p>实体唯一ID</p>
                     */
                    std::string m_resourceUniqueId;
                    bool m_resourceUniqueIdHasBeenSet;

                    /**
                     * <p>实体类型 TABLE|METRIC|MODEL|SERVICE|COLUMN</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>血缘方向 INPUT｜OUTPUT</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>来源：WEDATA|THIRD 默认WEDATA</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTLINEAGEREQUEST_H_
