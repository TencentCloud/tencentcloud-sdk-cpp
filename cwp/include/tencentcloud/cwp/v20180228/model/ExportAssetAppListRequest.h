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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETAPPLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETAPPLISTREQUEST_H_

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
                * ExportAssetAppList请求参数结构体
                */
                class ExportAssetAppListRequest : public AbstractModel
                {
                public:
                    ExportAssetAppListRequest();
                    ~ExportAssetAppListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询指定Quuid主机的信息
                     * @return Quuid 查询指定Quuid主机的信息
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置查询指定Quuid主机的信息
                     * @param _quuid 查询指定Quuid主机的信息
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
                     * 获取过滤条件。<li>AppName- string - 是否必填：否 - 应用名搜索</li><li>IP - String - 是否必填：否 - 主机ip</li><li>MachineName - String - 是否必填：否 - 主机名称</li><li>InstanceID - string - 是否必填：否 - 实例ID</li><li>Type - int - 是否必填：否 - 类型	: 仅linux0: 全部1: 运维2 : 数据库3 : 安全4 : 可疑应用5 : 系统架构6 : 系统应用7 : WEB服务99:其他</li><li>OsType - uint64 - 是否必填：否 - Windows/Linux</li>
                     * @return Filters 过滤条件。<li>AppName- string - 是否必填：否 - 应用名搜索</li><li>IP - String - 是否必填：否 - 主机ip</li><li>MachineName - String - 是否必填：否 - 主机名称</li><li>InstanceID - string - 是否必填：否 - 实例ID</li><li>Type - int - 是否必填：否 - 类型	: 仅linux0: 全部1: 运维2 : 数据库3 : 安全4 : 可疑应用5 : 系统架构6 : 系统应用7 : WEB服务99:其他</li><li>OsType - uint64 - 是否必填：否 - Windows/Linux</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。<li>AppName- string - 是否必填：否 - 应用名搜索</li><li>IP - String - 是否必填：否 - 主机ip</li><li>MachineName - String - 是否必填：否 - 主机名称</li><li>InstanceID - string - 是否必填：否 - 实例ID</li><li>Type - int - 是否必填：否 - 类型	: 仅linux0: 全部1: 运维2 : 数据库3 : 安全4 : 可疑应用5 : 系统架构6 : 系统应用7 : WEB服务99:其他</li><li>OsType - uint64 - 是否必填：否 - Windows/Linux</li>
                     * @param _filters 过滤条件。<li>AppName- string - 是否必填：否 - 应用名搜索</li><li>IP - String - 是否必填：否 - 主机ip</li><li>MachineName - String - 是否必填：否 - 主机名称</li><li>InstanceID - string - 是否必填：否 - 实例ID</li><li>Type - int - 是否必填：否 - 类型	: 仅linux0: 全部1: 运维2 : 数据库3 : 安全4 : 可疑应用5 : 系统架构6 : 系统应用7 : WEB服务99:其他</li><li>OsType - uint64 - 是否必填：否 - Windows/Linux</li>
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
                     * 获取排序方式：[FirstTime|ProcessCount]
                     * @return By 排序方式：[FirstTime|ProcessCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序方式：[FirstTime|ProcessCount]
                     * @param _by 排序方式：[FirstTime|ProcessCount]
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
                     * 查询指定Quuid主机的信息
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 过滤条件。<li>AppName- string - 是否必填：否 - 应用名搜索</li><li>IP - String - 是否必填：否 - 主机ip</li><li>MachineName - String - 是否必填：否 - 主机名称</li><li>InstanceID - string - 是否必填：否 - 实例ID</li><li>Type - int - 是否必填：否 - 类型	: 仅linux0: 全部1: 运维2 : 数据库3 : 安全4 : 可疑应用5 : 系统架构6 : 系统应用7 : WEB服务99:其他</li><li>OsType - uint64 - 是否必填：否 - Windows/Linux</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式，asc升序 或 desc降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式：[FirstTime|ProcessCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETAPPLISTREQUEST_H_
