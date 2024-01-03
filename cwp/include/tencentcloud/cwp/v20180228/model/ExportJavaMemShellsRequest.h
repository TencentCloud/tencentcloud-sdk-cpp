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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTJAVAMEMSHELLSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTJAVAMEMSHELLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportJavaMemShells请求参数结构体
                */
                class ExportJavaMemShellsRequest : public AbstractModel
                {
                public:
                    ExportJavaMemShellsRequest();
                    ~ExportJavaMemShellsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * @return Filters 过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * @param _filters 过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取导出字段
                     * @return Where 导出字段
                     * 
                     */
                    std::vector<std::string> GetWhere() const;

                    /**
                     * 设置导出字段
                     * @param _where 导出字段
                     * 
                     */
                    void SetWhere(const std::vector<std::string>& _where);

                    /**
                     * 判断参数 Where 是否已赋值
                     * @return Where 是否已赋值
                     * 
                     */
                    bool WhereHasBeenSet() const;

                private:

                    /**
                     * 过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_where;
                    bool m_whereHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTJAVAMEMSHELLSREQUEST_H_
