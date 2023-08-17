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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCALERTLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCALERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/QueryFilter.h>
#include <tencentcloud/ssa/v20180608/model/QuerySort.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeSocAlertList请求参数结构体
                */
                class DescribeSocAlertListRequest : public AbstractModel
                {
                public:
                    DescribeSocAlertListRequest();
                    ~DescribeSocAlertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
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
                     * 获取页码
                     * @return PageIndex 页码
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置页码
                     * @param _pageIndex 页码
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取1:急需关注 2.重保监控 3.全量告警
                     * @return Scenes 1:急需关注 2.重保监控 3.全量告警
                     * 
                     */
                    int64_t GetScenes() const;

                    /**
                     * 设置1:急需关注 2.重保监控 3.全量告警
                     * @param _scenes 1:急需关注 2.重保监控 3.全量告警
                     * 
                     */
                    void SetScenes(const int64_t& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取查询参数
                     * @return Filter 查询参数
                     * 
                     */
                    std::vector<QueryFilter> GetFilter() const;

                    /**
                     * 设置查询参数
                     * @param _filter 查询参数
                     * 
                     */
                    void SetFilter(const std::vector<QueryFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return Sorter 排序参数
                     * 
                     */
                    std::vector<QuerySort> GetSorter() const;

                    /**
                     * 设置排序参数
                     * @param _sorter 排序参数
                     * 
                     */
                    void SetSorter(const std::vector<QuerySort>& _sorter);

                    /**
                     * 判断参数 Sorter 是否已赋值
                     * @return Sorter 是否已赋值
                     * 
                     */
                    bool SorterHasBeenSet() const;

                    /**
                     * 获取是否导出；默认为否，如量级超过1000，则使用单独的导出接口
                     * @return ExportFlag 是否导出；默认为否，如量级超过1000，则使用单独的导出接口
                     * 
                     */
                    bool GetExportFlag() const;

                    /**
                     * 设置是否导出；默认为否，如量级超过1000，则使用单独的导出接口
                     * @param _exportFlag 是否导出；默认为否，如量级超过1000，则使用单独的导出接口
                     * 
                     */
                    void SetExportFlag(const bool& _exportFlag);

                    /**
                     * 判断参数 ExportFlag 是否已赋值
                     * @return ExportFlag 是否已赋值
                     * 
                     */
                    bool ExportFlagHasBeenSet() const;

                private:

                    /**
                     * 页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 1:急需关注 2.重保监控 3.全量告警
                     */
                    int64_t m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * 查询参数
                     */
                    std::vector<QueryFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::vector<QuerySort> m_sorter;
                    bool m_sorterHasBeenSet;

                    /**
                     * 是否导出；默认为否，如量级超过1000，则使用单独的导出接口
                     */
                    bool m_exportFlag;
                    bool m_exportFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCALERTLISTREQUEST_H_
