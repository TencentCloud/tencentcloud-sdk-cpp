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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>
#include <tencentcloud/wedata/v20250806/model/SecurityFilter.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>
#include <tencentcloud/wedata/v20250806/model/Page.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListPermissions请求参数结构体
                */
                class ListPermissionsRequest : public AbstractModel
                {
                public:
                    ListPermissionsRequest();
                    ~ListPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table，取catalogName.SchemaName.TableName
                     * @return Resource 资源
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table，取catalogName.SchemaName.TableName
                     * 
                     */
                    PrivilegeResource GetResource() const;

                    /**
                     * 设置资源
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table，取catalogName.SchemaName.TableName
                     * @param _resource 资源
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table，取catalogName.SchemaName.TableName
                     * 
                     */
                    void SetResource(const PrivilegeResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取过滤条件(此参数还未支持)
                     * @return Filters 过滤条件(此参数还未支持)
                     * 
                     */
                    std::vector<SecurityFilter> GetFilters() const;

                    /**
                     * 设置过滤条件(此参数还未支持)
                     * @param _filters 过滤条件(此参数还未支持)
                     * 
                     */
                    void SetFilters(const std::vector<SecurityFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段(此参数还未支持)
                     * @return OrderFields 排序字段(此参数还未支持)
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段(此参数还未支持)
                     * @param _orderFields 排序字段(此参数还未支持)
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
                     * 获取页参数(此参数还未支持)
                     * @return Page 页参数(此参数还未支持)
                     * 
                     */
                    Page GetPage() const;

                    /**
                     * 设置页参数(此参数还未支持)
                     * @param _page 页参数(此参数还未支持)
                     * 
                     */
                    void SetPage(const Page& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 资源
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table，取catalogName.SchemaName.TableName
                     */
                    PrivilegeResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 过滤条件(此参数还未支持)
                     */
                    std::vector<SecurityFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段(此参数还未支持)
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 页参数(此参数还未支持)
                     */
                    Page m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPERMISSIONSREQUEST_H_
