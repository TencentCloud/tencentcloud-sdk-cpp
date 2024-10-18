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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeRestoreTask请求参数结构体
                */
                class DescribeRestoreTaskRequest : public AbstractModel
                {
                public:
                    DescribeRestoreTaskRequest();
                    ~DescribeRestoreTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源实例ID
                     * @return InstanceId 源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置源实例ID
                     * @param _instanceId 源实例ID
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取回档方式，0-按照时间点回档，1-按照备份集回档
                     * @return RestoreType 回档方式，0-按照时间点回档，1-按照备份集回档
                     * 
                     */
                    uint64_t GetRestoreType() const;

                    /**
                     * 设置回档方式，0-按照时间点回档，1-按照备份集回档
                     * @param _restoreType 回档方式，0-按照时间点回档，1-按照备份集回档
                     * 
                     */
                    void SetRestoreType(const uint64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取回档的目标实例所在地域
                     * @return TargetRegion 回档的目标实例所在地域
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置回档的目标实例所在地域
                     * @param _targetRegion 回档的目标实例所在地域
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * @return TargetType 回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * @param _targetType 回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * 
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * @return Status 回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * @param _status 回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @return Offset 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @param _offset 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Limit 分页返回，页编号，默认值为第0页
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param _limit 分页返回，页编号，默认值为第0页
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段，restoreTime-回档时间，startTime-任务开始时间，endTime-任务结束时间，默认按照任务开始时间降序
                     * @return OrderBy 排序字段，restoreTime-回档时间，startTime-任务开始时间，endTime-任务结束时间，默认按照任务开始时间降序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，restoreTime-回档时间，startTime-任务开始时间，endTime-任务结束时间，默认按照任务开始时间降序
                     * @param _orderBy 排序字段，restoreTime-回档时间，startTime-任务开始时间，endTime-任务结束时间，默认按照任务开始时间降序
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
                     * 获取排序规则（desc-降序，asc-升序），默认desc
                     * @return OrderByType 排序规则（desc-降序，asc-升序），默认desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序规则（desc-降序，asc-升序），默认desc
                     * @param _orderByType 排序规则（desc-降序，asc-升序），默认desc
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
                     * 获取回档异步任务ID
                     * @return FlowId 回档异步任务ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置回档异步任务ID
                     * @param _flowId 回档异步任务ID
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 回档方式，0-按照时间点回档，1-按照备份集回档
                     */
                    uint64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * 回档的目标实例所在地域
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * 回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 回档状态，0-初始化，1-运行中，2-成功，3-失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，restoreTime-回档时间，startTime-任务开始时间，endTime-任务结束时间，默认按照任务开始时间降序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序规则（desc-降序，asc-升序），默认desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 回档异步任务ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKREQUEST_H_
