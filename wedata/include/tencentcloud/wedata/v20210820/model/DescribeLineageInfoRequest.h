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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELINEAGEINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELINEAGEINFOREQUEST_H_

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
                * DescribeLineageInfo请求参数结构体
                */
                class DescribeLineageInfoRequest : public AbstractModel
                {
                public:
                    DescribeLineageInfoRequest();
                    ~DescribeLineageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实体原始唯一ID
                     * @return ResourceOriId 实体原始唯一ID
                     * 
                     */
                    std::string GetResourceOriId() const;

                    /**
                     * 设置实体原始唯一ID
                     * @param _resourceOriId 实体原始唯一ID
                     * 
                     */
                    void SetResourceOriId(const std::string& _resourceOriId);

                    /**
                     * 判断参数 ResourceOriId 是否已赋值
                     * @return ResourceOriId 是否已赋值
                     * 
                     */
                    bool ResourceOriIdHasBeenSet() const;

                    /**
                     * 获取实体类型
                     * @return ResourceType 实体类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置实体类型
                     * @param _resourceType 实体类型
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
                     * 获取血缘唯一ID
                     * @return QualifiedId 血缘唯一ID
                     * 
                     */
                    std::string GetQualifiedId() const;

                    /**
                     * 设置血缘唯一ID
                     * @param _qualifiedId 血缘唯一ID
                     * 
                     */
                    void SetQualifiedId(const std::string& _qualifiedId);

                    /**
                     * 判断参数 QualifiedId 是否已赋值
                     * @return QualifiedId 是否已赋值
                     * 
                     */
                    bool QualifiedIdHasBeenSet() const;

                    /**
                     * 获取查询方向
                     * @return Direction 查询方向
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置查询方向
                     * @param _direction 查询方向
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
                     * 获取查询入度
                     * @return InputDepth 查询入度
                     * 
                     */
                    int64_t GetInputDepth() const;

                    /**
                     * 设置查询入度
                     * @param _inputDepth 查询入度
                     * 
                     */
                    void SetInputDepth(const int64_t& _inputDepth);

                    /**
                     * 判断参数 InputDepth 是否已赋值
                     * @return InputDepth 是否已赋值
                     * 
                     */
                    bool InputDepthHasBeenSet() const;

                    /**
                     * 获取查询出度
                     * @return OutputDepth 查询出度
                     * 
                     */
                    int64_t GetOutputDepth() const;

                    /**
                     * 设置查询出度
                     * @param _outputDepth 查询出度
                     * 
                     */
                    void SetOutputDepth(const int64_t& _outputDepth);

                    /**
                     * 判断参数 OutputDepth 是否已赋值
                     * @return OutputDepth 是否已赋值
                     * 
                     */
                    bool OutputDepthHasBeenSet() const;

                    /**
                     * 获取数据来源
                     * @return Platform 数据来源
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置数据来源
                     * @param _platform 数据来源
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取血缘类型（分页使用）
                     * @return LineageType 血缘类型（分页使用）
                     * 
                     */
                    std::string GetLineageType() const;

                    /**
                     * 设置血缘类型（分页使用）
                     * @param _lineageType 血缘类型（分页使用）
                     * 
                     */
                    void SetLineageType(const std::string& _lineageType);

                    /**
                     * 判断参数 LineageType 是否已赋值
                     * @return LineageType 是否已赋值
                     * 
                     */
                    bool LineageTypeHasBeenSet() const;

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

                private:

                    /**
                     * 实体原始唯一ID
                     */
                    std::string m_resourceOriId;
                    bool m_resourceOriIdHasBeenSet;

                    /**
                     * 实体类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 血缘唯一ID
                     */
                    std::string m_qualifiedId;
                    bool m_qualifiedIdHasBeenSet;

                    /**
                     * 查询方向
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 查询入度
                     */
                    int64_t m_inputDepth;
                    bool m_inputDepthHasBeenSet;

                    /**
                     * 查询出度
                     */
                    int64_t m_outputDepth;
                    bool m_outputDepthHasBeenSet;

                    /**
                     * 数据来源
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 血缘类型（分页使用）
                     */
                    std::string m_lineageType;
                    bool m_lineageTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELINEAGEINFOREQUEST_H_
