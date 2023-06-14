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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEFILEEXPORTUSERJOBREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEFILEEXPORTUSERJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Filter.h>
#include <tencentcloud/ciam/v20220331/model/ExportPropertyMap.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * CreateFileExportUserJob请求参数结构体
                */
                class CreateFileExportUserJobRequest : public AbstractModel
                {
                public:
                    CreateFileExportUserJobRequest();
                    ~CreateFileExportUserJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取导出的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * @return Format 导出的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置导出的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * @param _format 导出的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Key可选值为condition、userGroupId

<li> **condition** </li>	Values = 查询条件，用户ID，用户名称，手机或邮箱
<li> **userGroupId** </li>	Values = 用户组ID
                     * @return Filters Key可选值为condition、userGroupId

<li> **condition** </li>	Values = 查询条件，用户ID，用户名称，手机或邮箱
<li> **userGroupId** </li>	Values = 用户组ID
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Key可选值为condition、userGroupId

<li> **condition** </li>	Values = 查询条件，用户ID，用户名称，手机或邮箱
<li> **userGroupId** </li>	Values = 用户组ID
                     * @param _filters Key可选值为condition、userGroupId

<li> **condition** </li>	Values = 查询条件，用户ID，用户名称，手机或邮箱
<li> **userGroupId** </li>	Values = 用户组ID
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
                     * 获取导出用户包含的属性和映射名称，为空时包含所有的属性
                     * @return ExportPropertyMaps 导出用户包含的属性和映射名称，为空时包含所有的属性
                     * 
                     */
                    std::vector<ExportPropertyMap> GetExportPropertyMaps() const;

                    /**
                     * 设置导出用户包含的属性和映射名称，为空时包含所有的属性
                     * @param _exportPropertyMaps 导出用户包含的属性和映射名称，为空时包含所有的属性
                     * 
                     */
                    void SetExportPropertyMaps(const std::vector<ExportPropertyMap>& _exportPropertyMaps);

                    /**
                     * 判断参数 ExportPropertyMaps 是否已赋值
                     * @return ExportPropertyMaps 是否已赋值
                     * 
                     */
                    bool ExportPropertyMapsHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 导出的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Key可选值为condition、userGroupId

<li> **condition** </li>	Values = 查询条件，用户ID，用户名称，手机或邮箱
<li> **userGroupId** </li>	Values = 用户组ID
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 导出用户包含的属性和映射名称，为空时包含所有的属性
                     */
                    std::vector<ExportPropertyMap> m_exportPropertyMaps;
                    bool m_exportPropertyMapsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEFILEEXPORTUSERJOBREQUEST_H_
