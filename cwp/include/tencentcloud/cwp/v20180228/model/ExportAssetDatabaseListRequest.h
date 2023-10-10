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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETDATABASELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETDATABASELISTREQUEST_H_

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
                * ExportAssetDatabaseList请求参数结构体
                */
                class ExportAssetDatabaseListRequest : public AbstractModel
                {
                public:
                    ExportAssetDatabaseListRequest();
                    ~ExportAssetDatabaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
                     * @return Filters 过滤条件。
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
                     * @param _filters 过滤条件。
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
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
                     * 过滤条件。
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询指定Quuid主机的信息
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETDATABASELISTREQUEST_H_
