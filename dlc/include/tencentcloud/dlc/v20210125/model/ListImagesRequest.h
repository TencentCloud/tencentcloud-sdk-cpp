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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTIMAGESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListImages请求参数结构体
                */
                class ListImagesRequest : public AbstractModel
                {
                public:
                    ListImagesRequest();
                    ~ListImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词搜索（模糊匹配名称或描述）
                     * @return Keyword 关键词搜索（模糊匹配名称或描述）
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词搜索（模糊匹配名称或描述）
                     * @param _keyword 关键词搜索（模糊匹配名称或描述）
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
                     * 获取镜像类型过滤（Ray/Workspace）
                     * @return Type 镜像类型过滤（Ray/Workspace）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置镜像类型过滤（Ray/Workspace）
                     * @param _type 镜像类型过滤（Ray/Workspace）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return Page 页数
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页数
                     * @param _page 页数
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return PageSize 数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置数量
                     * @param _pageSize 数量
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
                     * 关键词搜索（模糊匹配名称或描述）
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 镜像类型过滤（Ray/Workspace）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTIMAGESREQUEST_H_
