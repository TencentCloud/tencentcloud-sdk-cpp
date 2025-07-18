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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTPROTECTDIRLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTPROTECTDIRLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportProtectDirList请求参数结构体
                */
                class ExportProtectDirListRequest : public AbstractModel
                {
                public:
                    ExportProtectDirListRequest();
                    ~ExportProtectDirListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DirName 网站名称
DirPath 网站防护目录地址
                     * @return Filters DirName 网站名称
DirPath 网站防护目录地址
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置DirName 网站名称
DirPath 网站防护目录地址
                     * @param _filters DirName 网站名称
DirPath 网站防护目录地址
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取asc：升序/desc：降序
                     * @return Order asc：升序/desc：降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置asc：升序/desc：降序
                     * @param _order asc：升序/desc：降序
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
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * DirName 网站名称
DirPath 网站防护目录地址
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * asc：升序/desc：降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTPROTECTDIRLISTREQUEST_H_
