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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeCurrentOp请求参数结构体
                */
                class DescribeCurrentOpRequest : public AbstractModel
                {
                public:
                    DescribeCurrentOpRequest();
                    ~DescribeCurrentOpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定要查询的实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 指定要查询的实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定要查询的实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 指定要查询的实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取操作所属的命名空间 namespace，格式为 db.collection。
                     * @return Ns 操作所属的命名空间 namespace，格式为 db.collection。
                     * 
                     */
                    std::string GetNs() const;

                    /**
                     * 设置操作所属的命名空间 namespace，格式为 db.collection。
                     * @param _ns 操作所属的命名空间 namespace，格式为 db.collection。
                     * 
                     */
                    void SetNs(const std::string& _ns);

                    /**
                     * 判断参数 Ns 是否已赋值
                     * @return Ns 是否已赋值
                     * 
                     */
                    bool NsHasBeenSet() const;

                    /**
                     * 获取设置查询筛选条件为操作任务已经执行的时间。
- 默认值为0，取值范围为[0, 3600000]，单位：毫秒。
- 结果将返回超过设置时间的操作。
                     * @return MillisecondRunning 设置查询筛选条件为操作任务已经执行的时间。
- 默认值为0，取值范围为[0, 3600000]，单位：毫秒。
- 结果将返回超过设置时间的操作。
                     * 
                     */
                    uint64_t GetMillisecondRunning() const;

                    /**
                     * 设置设置查询筛选条件为操作任务已经执行的时间。
- 默认值为0，取值范围为[0, 3600000]，单位：毫秒。
- 结果将返回超过设置时间的操作。
                     * @param _millisecondRunning 设置查询筛选条件为操作任务已经执行的时间。
- 默认值为0，取值范围为[0, 3600000]，单位：毫秒。
- 结果将返回超过设置时间的操作。
                     * 
                     */
                    void SetMillisecondRunning(const uint64_t& _millisecondRunning);

                    /**
                     * 判断参数 MillisecondRunning 是否已赋值
                     * @return MillisecondRunning 是否已赋值
                     * 
                     */
                    bool MillisecondRunningHasBeenSet() const;

                    /**
                     * 获取设置查询筛选条件为操作任务类型。取值包括：none、update、insert，query、command、getmore、remove 和 killcursors。
                     * @return Op 设置查询筛选条件为操作任务类型。取值包括：none、update、insert，query、command、getmore、remove 和 killcursors。
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置设置查询筛选条件为操作任务类型。取值包括：none、update、insert，query、command、getmore、remove 和 killcursors。
                     * @param _op 设置查询筛选条件为操作任务类型。取值包括：none、update、insert，query、command、getmore、remove 和 killcursors。
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取筛选条件，分片名称。
                     * @return ReplicaSetName 筛选条件，分片名称。
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置筛选条件，分片名称。
                     * @param _replicaSetName 筛选条件，分片名称。
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取设置查询筛选条件为节点角色。
- primary：主节点。
- secondary：从节点。
                     * @return State 设置查询筛选条件为节点角色。
- primary：主节点。
- secondary：从节点。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置设置查询筛选条件为节点角色。
- primary：主节点。
- secondary：从节点。
                     * @param _state 设置查询筛选条件为节点角色。
- primary：主节点。
- secondary：从节点。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取单次请求返回的数量，默认值为100，取值范围为[0,100]
                     * @return Limit 单次请求返回的数量，默认值为100，取值范围为[0,100]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，默认值为100，取值范围为[0,100]
                     * @param _limit 单次请求返回的数量，默认值为100，取值范围为[0,100]
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
                     * 获取偏移量，默认值为0，取值范围为[0,10000]
                     * @return Offset 偏移量，默认值为0，取值范围为[0,10000]
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0，取值范围为[0,10000]
                     * @param _offset 偏移量，默认值为0，取值范围为[0,10000]
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
                     * 获取返回结果集排序的字段，目前支持："MicrosecsRunning"/"microsecsrunning"，默认为升序排序
                     * @return OrderBy 返回结果集排序的字段，目前支持："MicrosecsRunning"/"microsecsrunning"，默认为升序排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置返回结果集排序的字段，目前支持："MicrosecsRunning"/"microsecsrunning"，默认为升序排序
                     * @param _orderBy 返回结果集排序的字段，目前支持："MicrosecsRunning"/"microsecsrunning"，默认为升序排序
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
                     * 获取返回结果集排序方式，可能的取值："ASC"/"asc"或"DESC"/"desc"
                     * @return OrderByType 返回结果集排序方式，可能的取值："ASC"/"asc"或"DESC"/"desc"
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置返回结果集排序方式，可能的取值："ASC"/"asc"或"DESC"/"desc"
                     * @param _orderByType 返回结果集排序方式，可能的取值："ASC"/"asc"或"DESC"/"desc"
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 指定要查询的实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作所属的命名空间 namespace，格式为 db.collection。
                     */
                    std::string m_ns;
                    bool m_nsHasBeenSet;

                    /**
                     * 设置查询筛选条件为操作任务已经执行的时间。
- 默认值为0，取值范围为[0, 3600000]，单位：毫秒。
- 结果将返回超过设置时间的操作。
                     */
                    uint64_t m_millisecondRunning;
                    bool m_millisecondRunningHasBeenSet;

                    /**
                     * 设置查询筛选条件为操作任务类型。取值包括：none、update、insert，query、command、getmore、remove 和 killcursors。
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 筛选条件，分片名称。
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * 设置查询筛选条件为节点角色。
- primary：主节点。
- secondary：从节点。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 单次请求返回的数量，默认值为100，取值范围为[0,100]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认值为0，取值范围为[0,10000]
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回结果集排序的字段，目前支持："MicrosecsRunning"/"microsecsrunning"，默认为升序排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 返回结果集排序方式，可能的取值："ASC"/"asc"或"DESC"/"desc"
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPREQUEST_H_
