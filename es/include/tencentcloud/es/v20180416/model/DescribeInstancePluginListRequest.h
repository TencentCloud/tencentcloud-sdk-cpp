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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGINLISTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstancePluginList请求参数结构体
                */
                class DescribeInstancePluginListRequest : public AbstractModel
                {
                public:
                    DescribeInstancePluginListRequest();
                    ~DescribeInstancePluginListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取分页起始值, 默认值0
                     * @return Offset 分页起始值, 默认值0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始值, 默认值0
                     * @param _offset 分页起始值, 默认值0
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
                     * 获取分页大小，默认值10
                     * @return Limit 分页大小，默认值10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认值10
                     * @param _limit 分页大小，默认值10
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
                     * 获取排序字段<li>1：插件名 pluginName</li>
                     * @return OrderBy 排序字段<li>1：插件名 pluginName</li>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段<li>1：插件名 pluginName</li>
                     * @param _orderBy 排序字段<li>1：插件名 pluginName</li>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式<li>0：升序 asc</li><li>1：降序 desc</li>
                     * @return OrderByType 排序方式<li>0：升序 asc</li><li>1：降序 desc</li>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式<li>0：升序 asc</li><li>1：降序 desc</li>
                     * @param _orderByType 排序方式<li>0：升序 asc</li><li>1：降序 desc</li>
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取0：系统插件
                     * @return PluginType 0：系统插件
                     * 
                     */
                    int64_t GetPluginType() const;

                    /**
                     * 设置0：系统插件
                     * @param _pluginType 0：系统插件
                     * 
                     */
                    void SetPluginType(const int64_t& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页起始值, 默认值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认值10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段<li>1：插件名 pluginName</li>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式<li>0：升序 asc</li><li>1：降序 desc</li>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 0：系统插件
                     */
                    int64_t m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGINLISTREQUEST_H_
