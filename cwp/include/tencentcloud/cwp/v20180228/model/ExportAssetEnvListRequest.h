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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETENVLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETENVLISTREQUEST_H_

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
                * ExportAssetEnvList请求参数结构体
                */
                class ExportAssetEnvListRequest : public AbstractModel
                {
                public:
                    ExportAssetEnvListRequest();
                    ~ExportAssetEnvListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器Uuid
                     * @return Uuid 服务器Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器Uuid
                     * @param _uuid 服务器Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取服务器Quuid
                     * @return Quuid 服务器Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器Quuid
                     * @param _quuid 服务器Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>Name- string - 是否必填：否 - 环境变量名</li>
<li>Type- int - 是否必填：否 - 类型：0用户变量，1系统变量</li>
                     * @return Filters 过滤条件。
<li>Name- string - 是否必填：否 - 环境变量名</li>
<li>Type- int - 是否必填：否 - 类型：0用户变量，1系统变量</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Name- string - 是否必填：否 - 环境变量名</li>
<li>Type- int - 是否必填：否 - 类型：0用户变量，1系统变量</li>
                     * @param _filters 过滤条件。
<li>Name- string - 是否必填：否 - 环境变量名</li>
<li>Type- int - 是否必填：否 - 类型：0用户变量，1系统变量</li>
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
                     * 获取排序方式，asc升序 或 desc降序
                     * @return Order 排序方式，asc升序 或 desc降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，asc升序 或 desc降序
                     * @param _order 排序方式，asc升序 或 desc降序
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
                     * 获取排序方式：[FirstTime]
                     * @return By 排序方式：[FirstTime]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序方式：[FirstTime]
                     * @param _by 排序方式：[FirstTime]
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
                     * 服务器Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 服务器Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 过滤条件。
<li>Name- string - 是否必填：否 - 环境变量名</li>
<li>Type- int - 是否必填：否 - 类型：0用户变量，1系统变量</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式，asc升序 或 desc降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式：[FirstTime]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETENVLISTREQUEST_H_
