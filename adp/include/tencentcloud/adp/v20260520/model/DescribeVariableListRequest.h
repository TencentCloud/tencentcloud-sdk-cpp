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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeVariableList请求参数结构体
                */
                class DescribeVariableListRequest : public AbstractModel
                {
                public:
                    DescribeVariableListRequest();
                    ~DescribeVariableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取过滤条件(支持: VariableIdList-变量ID列表, VariableType-变量类型)
                     * @return FilterList 过滤条件(支持: VariableIdList-变量ID列表, VariableType-变量类型)
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置过滤条件(支持: VariableIdList-变量ID列表, VariableType-变量类型)
                     * @param _filterList 过滤条件(支持: VariableIdList-变量ID列表, VariableType-变量类型)
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * @return ModuleType 模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * 
                     */
                    int64_t GetModuleType() const;

                    /**
                     * 设置模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * @param _moduleType 模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * 
                     */
                    void SetModuleType(const int64_t& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取是否需要内部变量
                     * @return NeedInternalVariable 是否需要内部变量
                     * 
                     */
                    bool GetNeedInternalVariable() const;

                    /**
                     * 设置是否需要内部变量
                     * @param _needInternalVariable 是否需要内部变量
                     * 
                     */
                    void SetNeedInternalVariable(const bool& _needInternalVariable);

                    /**
                     * 判断参数 NeedInternalVariable 是否已赋值
                     * @return NeedInternalVariable 是否已赋值
                     * 
                     */
                    bool NeedInternalVariableHasBeenSet() const;

                    /**
                     * 获取页码(从0开始)
                     * @return PageNumber 页码(从0开始)
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码(从0开始)
                     * @param _pageNumber 页码(从0开始)
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
                     * 获取每页数量(最大值:100)
                     * @return PageSize 每页数量(最大值:100)
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量(最大值:100)
                     * @param _pageSize 每页数量(最大值:100)
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
                     * 获取查询关键词
                     * @return Query 查询关键词
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询关键词
                     * @param _query 查询关键词
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 过滤条件(支持: VariableIdList-变量ID列表, VariableType-变量类型)
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * 模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     */
                    int64_t m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 是否需要内部变量
                     */
                    bool m_needInternalVariable;
                    bool m_needInternalVariableHasBeenSet;

                    /**
                     * 页码(从0开始)
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量(最大值:100)
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询关键词
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTREQUEST_H_
