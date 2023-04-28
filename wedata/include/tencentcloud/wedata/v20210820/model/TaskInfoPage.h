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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskCanvasInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务分页查询
                */
                class TaskInfoPage : public AbstractModel
                {
                public:
                    TaskInfoPage();
                    ~TaskInfoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取页号
                     * @return PageNumber 页号
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param PageNumber 页号
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param PageSize 页大小
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取工作流列表信息
                     * @return Items 工作流列表信息
                     */
                    std::vector<TaskCanvasInfo> GetItems() const;

                    /**
                     * 设置工作流列表信息
                     * @param Items 工作流列表信息
                     */
                    void SetItems(const std::vector<TaskCanvasInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPage 总页数
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 设置总页数
                     * @param TotalPage 总页数
                     */
                    void SetTotalPage(const uint64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     */
                    bool TotalPageHasBeenSet() const;

                private:

                    /**
                     * 页号
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 工作流列表信息
                     */
                    std::vector<TaskCanvasInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总页数
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOPAGE_H_
