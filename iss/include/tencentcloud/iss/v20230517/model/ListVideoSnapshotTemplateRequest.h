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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListVideoSnapshotTemplate请求参数结构体
                */
                class ListVideoSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    ListVideoSnapshotTemplateRequest();
                    ~ListVideoSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模板名称</p>
                     * @return Name <p>模板名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称</p>
                     * @param _name <p>模板名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @return Type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @param _type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>排序参数</p><p>默认值：update_time</p>
                     * @return Sort <p>排序参数</p><p>默认值：update_time</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序参数</p><p>默认值：update_time</p>
                     * @param _sort <p>排序参数</p><p>默认值：update_time</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>排序顺序</p><p>枚举值：</p><ul><li>desc： 降序</li><li>asc： 生序</li></ul><p>默认值：desc</p>
                     * @return Order <p>排序顺序</p><p>枚举值：</p><ul><li>desc： 降序</li><li>asc： 生序</li></ul><p>默认值：desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序顺序</p><p>枚举值：</p><ul><li>desc： 降序</li><li>asc： 生序</li></ul><p>默认值：desc</p>
                     * @param _order <p>排序顺序</p><p>枚举值：</p><ul><li>desc： 降序</li><li>asc： 生序</li></ul><p>默认值：desc</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>页码</p><p>默认值：1</p>
                     * @return PageNumber <p>页码</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p><p>默认值：1</p>
                     * @param _pageNumber <p>页码</p><p>默认值：1</p>
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
                     * 获取<p>每页数目</p><p>默认值：20</p>
                     * @return PageSize <p>每页数目</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数目</p><p>默认值：20</p>
                     * @param _pageSize <p>每页数目</p><p>默认值：20</p>
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
                     * <p>模板名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>排序参数</p><p>默认值：update_time</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>排序顺序</p><p>枚举值：</p><ul><li>desc： 降序</li><li>asc： 生序</li></ul><p>默认值：desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>页码</p><p>默认值：1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数目</p><p>默认值：20</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTTEMPLATEREQUEST_H_
