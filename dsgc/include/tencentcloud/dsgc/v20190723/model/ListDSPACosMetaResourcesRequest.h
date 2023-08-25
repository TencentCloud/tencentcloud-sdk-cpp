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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPACOSMETARESOURCESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPACOSMETARESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDataSourceMngFilter.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ListDSPACosMetaResources请求参数结构体
                */
                class ListDSPACosMetaResourcesRequest : public AbstractModel
                {
                public:
                    ListDSPACosMetaResourcesRequest();
                    ~ListDSPACosMetaResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return DspaId 实例Id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置实例Id
                     * @param _dspaId 实例Id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取过滤数组。支持的Name：
Bucket - 桶名，支持模糊匹配

ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

Valid -- 资源是否有效，"1" 表示有效，"0"表示无效。
                     * @return Filters 过滤数组。支持的Name：
Bucket - 桶名，支持模糊匹配

ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

Valid -- 资源是否有效，"1" 表示有效，"0"表示无效。
                     * 
                     */
                    std::vector<DspaDataSourceMngFilter> GetFilters() const;

                    /**
                     * 设置过滤数组。支持的Name：
Bucket - 桶名，支持模糊匹配

ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

Valid -- 资源是否有效，"1" 表示有效，"0"表示无效。
                     * @param _filters 过滤数组。支持的Name：
Bucket - 桶名，支持模糊匹配

ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

Valid -- 资源是否有效，"1" 表示有效，"0"表示无效。
                     * 
                     */
                    void SetFilters(const std::vector<DspaDataSourceMngFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为100。
                     * @return Limit 返回数量，默认为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为100。
                     * @param _limit 返回数量，默认为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资源绑定状态过滤，默认为全部
                     * @return BindType 资源绑定状态过滤，默认为全部
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置资源绑定状态过滤，默认为全部
                     * @param _bindType 资源绑定状态过滤，默认为全部
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 过滤数组。支持的Name：
Bucket - 桶名，支持模糊匹配

ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

Valid -- 资源是否有效，"1" 表示有效，"0"表示无效。
                     */
                    std::vector<DspaDataSourceMngFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源绑定状态过滤，默认为全部
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPACOSMETARESOURCESREQUEST_H_
