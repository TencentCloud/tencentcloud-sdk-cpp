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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskTemplates请求参数结构体
                */
                class DescribeTaskTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeTaskTemplatesRequest();
                    ~DescribeTaskTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return PageNumber 页号
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param _pageNumber 页号
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取排序字段, 仅支持更新时间, 取值示例

- UpdateTime
                     * @return OrderFields 排序字段, 仅支持更新时间, 取值示例

- UpdateTime
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段, 仅支持更新时间, 取值示例

- UpdateTime
                     * @param _orderFields 排序字段, 仅支持更新时间, 取值示例

- UpdateTime
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取过滤条件, 取值列表

- TemplateName    模版名称
- TaskType    支持任务类型
- InCharge    责任人
- FolderId    文件夹id
- Status    提交状态
- UpdateStartTime    更新时间,时间区间查询
- UpdateEndTime    更新时间,时间区间查询
                     * @return Filters 过滤条件, 取值列表

- TemplateName    模版名称
- TaskType    支持任务类型
- InCharge    责任人
- FolderId    文件夹id
- Status    提交状态
- UpdateStartTime    更新时间,时间区间查询
- UpdateEndTime    更新时间,时间区间查询
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件, 取值列表

- TemplateName    模版名称
- TaskType    支持任务类型
- InCharge    责任人
- FolderId    文件夹id
- Status    提交状态
- UpdateStartTime    更新时间,时间区间查询
- UpdateEndTime    更新时间,时间区间查询
                     * @param _filters 过滤条件, 取值列表

- TemplateName    模版名称
- TaskType    支持任务类型
- InCharge    责任人
- FolderId    文件夹id
- Status    提交状态
- UpdateStartTime    更新时间,时间区间查询
- UpdateEndTime    更新时间,时间区间查询
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页号
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序字段, 仅支持更新时间, 取值示例

- UpdateTime
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 过滤条件, 取值列表

- TemplateName    模版名称
- TaskType    支持任务类型
- InCharge    责任人
- FolderId    文件夹id
- Status    提交状态
- UpdateStartTime    更新时间,时间区间查询
- UpdateEndTime    更新时间,时间区间查询
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKTEMPLATESREQUEST_H_
