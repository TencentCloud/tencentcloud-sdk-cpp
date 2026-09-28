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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileNode.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 查询文件信息结果
                */
                class ListFilesRsp : public AbstractModel
                {
                public:
                    ListFilesRsp();
                    ~ListFilesRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件/文件夹节点列表</p>
                     * @return Items <p>文件/文件夹节点列表</p>
                     * 
                     */
                    std::vector<FileNode> GetItems() const;

                    /**
                     * 设置<p>文件/文件夹节点列表</p>
                     * @param _items <p>文件/文件夹节点列表</p>
                     * 
                     */
                    void SetItems(const std::vector<FileNode>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>当前页码</p>
                     * @return PageNumber <p>当前页码</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>当前页码</p>
                     * @param _pageNumber <p>当前页码</p>
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
                     * 获取<p>每页条数</p>
                     * @return PageSize <p>每页条数</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页条数</p>
                     * @param _pageSize <p>每页条数</p>
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
                     * 获取<p>总条数</p>
                     * @return TotalCount <p>总条数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总条数</p>
                     * @param _totalCount <p>总条数</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>总页数</p>
                     * @return TotalPageNumber <p>总页数</p>
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置<p>总页数</p>
                     * @param _totalPageNumber <p>总页数</p>
                     * 
                     */
                    void SetTotalPageNumber(const int64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                private:

                    /**
                     * <p>文件/文件夹节点列表</p>
                     */
                    std::vector<FileNode> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>当前页码</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页条数</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>总条数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>总页数</p>
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESRSP_H_
