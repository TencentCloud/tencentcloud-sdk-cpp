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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETINITSERVICELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETINITSERVICELISTREQUEST_H_

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
                * DescribeAssetInitServiceList请求参数结构体
                */
                class DescribeAssetInitServiceListRequest : public AbstractModel
                {
                public:
                    DescribeAssetInitServiceListRequest();
                    ~DescribeAssetInitServiceListRequest() = default;
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
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>Name- string - 是否必填：否 - 包名</li>
<li>User- string - 是否必填：否 - 用户</li>
<li>IsAutoRun - string - 是否必填：否 - 是否开机自启动：0否，1是</li>
<li>Status- string - 是否必填：否 - 默认启用状态：0未启用， 1启用 仅linux</li>
<li>Type- string - 是否必填：否 - 类型：类型 仅windows：
1:编码器
2:IE插件
3:网络提供者
4:镜像劫持
5:LSA提供者
6:KnownDLLs
7:启动执行
8:WMI
9:计划任务
10:Winsock提供者
11:打印监控器
12:资源管理器
13:驱动服务
14:登录</li>
                     * @return Filters 过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>Name- string - 是否必填：否 - 包名</li>
<li>User- string - 是否必填：否 - 用户</li>
<li>IsAutoRun - string - 是否必填：否 - 是否开机自启动：0否，1是</li>
<li>Status- string - 是否必填：否 - 默认启用状态：0未启用， 1启用 仅linux</li>
<li>Type- string - 是否必填：否 - 类型：类型 仅windows：
1:编码器
2:IE插件
3:网络提供者
4:镜像劫持
5:LSA提供者
6:KnownDLLs
7:启动执行
8:WMI
9:计划任务
10:Winsock提供者
11:打印监控器
12:资源管理器
13:驱动服务
14:登录</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>Name- string - 是否必填：否 - 包名</li>
<li>User- string - 是否必填：否 - 用户</li>
<li>IsAutoRun - string - 是否必填：否 - 是否开机自启动：0否，1是</li>
<li>Status- string - 是否必填：否 - 默认启用状态：0未启用， 1启用 仅linux</li>
<li>Type- string - 是否必填：否 - 类型：类型 仅windows：
1:编码器
2:IE插件
3:网络提供者
4:镜像劫持
5:LSA提供者
6:KnownDLLs
7:启动执行
8:WMI
9:计划任务
10:Winsock提供者
11:打印监控器
12:资源管理器
13:驱动服务
14:登录</li>
                     * @param _filters 过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>Name- string - 是否必填：否 - 包名</li>
<li>User- string - 是否必填：否 - 用户</li>
<li>IsAutoRun - string - 是否必填：否 - 是否开机自启动：0否，1是</li>
<li>Status- string - 是否必填：否 - 默认启用状态：0未启用， 1启用 仅linux</li>
<li>Type- string - 是否必填：否 - 类型：类型 仅windows：
1:编码器
2:IE插件
3:网络提供者
4:镜像劫持
5:LSA提供者
6:KnownDLLs
7:启动执行
8:WMI
9:计划任务
10:Winsock提供者
11:打印监控器
12:资源管理器
13:驱动服务
14:登录</li>
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
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param _limit 需要返回的数量，默认为10，最大值为100
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
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>Name- string - 是否必填：否 - 包名</li>
<li>User- string - 是否必填：否 - 用户</li>
<li>IsAutoRun - string - 是否必填：否 - 是否开机自启动：0否，1是</li>
<li>Status- string - 是否必填：否 - 默认启用状态：0未启用， 1启用 仅linux</li>
<li>Type- string - 是否必填：否 - 类型：类型 仅windows：
1:编码器
2:IE插件
3:网络提供者
4:镜像劫持
5:LSA提供者
6:KnownDLLs
7:启动执行
8:WMI
9:计划任务
10:Winsock提供者
11:打印监控器
12:资源管理器
13:驱动服务
14:登录</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETINITSERVICELISTREQUEST_H_
