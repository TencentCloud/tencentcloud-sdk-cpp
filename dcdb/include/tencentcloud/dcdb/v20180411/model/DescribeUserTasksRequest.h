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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEUSERTASKSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEUSERTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeUserTasks请求参数结构体
                */
                class DescribeUserTasksRequest : public AbstractModel
                {
                public:
                    DescribeUserTasksRequest();
                    ~DescribeUserTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务的状态列表。0-任务启动中；1-任务运行中；2-任务成功；3-任务失败
                     * @return Statuses 任务的状态列表。0-任务启动中；1-任务运行中；2-任务成功；3-任务失败
                     * 
                     */
                    std::vector<int64_t> GetStatuses() const;

                    /**
                     * 设置任务的状态列表。0-任务启动中；1-任务运行中；2-任务成功；3-任务失败
                     * @param _statuses 任务的状态列表。0-任务启动中；1-任务运行中；2-任务成功；3-任务失败
                     * 
                     */
                    void SetStatuses(const std::vector<int64_t>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取实例ID列表
                     * @return InstanceIds 实例ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表
                     * @param _instanceIds 实例ID列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取任务类型列表，当前支持的任务类型有：0-回档任务；1-创建实例任务；2-扩容任务；3-迁移任务；4-删除实例任务；5-重启任务
                     * @return FlowTypes 任务类型列表，当前支持的任务类型有：0-回档任务；1-创建实例任务；2-扩容任务；3-迁移任务；4-删除实例任务；5-重启任务
                     * 
                     */
                    std::vector<int64_t> GetFlowTypes() const;

                    /**
                     * 设置任务类型列表，当前支持的任务类型有：0-回档任务；1-创建实例任务；2-扩容任务；3-迁移任务；4-删除实例任务；5-重启任务
                     * @param _flowTypes 任务类型列表，当前支持的任务类型有：0-回档任务；1-创建实例任务；2-扩容任务；3-迁移任务；4-删除实例任务；5-重启任务
                     * 
                     */
                    void SetFlowTypes(const std::vector<int64_t>& _flowTypes);

                    /**
                     * 判断参数 FlowTypes 是否已赋值
                     * @return FlowTypes 是否已赋值
                     * 
                     */
                    bool FlowTypesHasBeenSet() const;

                    /**
                     * 获取任务的创建时间
                     * @return StartTime 任务的创建时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务的创建时间
                     * @param _startTime 任务的创建时间
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
                     * 获取任务的结束时间
                     * @return EndTime 任务的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务的结束时间
                     * @param _endTime 任务的结束时间
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
                     * 获取任务ID的数组
                     * @return UTaskIds 任务ID的数组
                     * 
                     */
                    std::vector<int64_t> GetUTaskIds() const;

                    /**
                     * 设置任务ID的数组
                     * @param _uTaskIds 任务ID的数组
                     * 
                     */
                    void SetUTaskIds(const std::vector<int64_t>& _uTaskIds);

                    /**
                     * 判断参数 UTaskIds 是否已赋值
                     * @return UTaskIds 是否已赋值
                     * 
                     */
                    bool UTaskIdsHasBeenSet() const;

                    /**
                     * 获取每次最多返回多少条任务，取值范围为(0,100]，不传的话默认值为20
                     * @return Limit 每次最多返回多少条任务，取值范围为(0,100]，不传的话默认值为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每次最多返回多少条任务，取值范围为(0,100]，不传的话默认值为20
                     * @param _limit 每次最多返回多少条任务，取值范围为(0,100]，不传的话默认值为20
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
                     * 获取返回任务默认是按照创建时间降序排列，从偏移值Offset处开始返回
                     * @return Offset 返回任务默认是按照创建时间降序排列，从偏移值Offset处开始返回
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回任务默认是按照创建时间降序排列，从偏移值Offset处开始返回
                     * @param _offset 返回任务默认是按照创建时间降序排列，从偏移值Offset处开始返回
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 任务的状态列表。0-任务启动中；1-任务运行中；2-任务成功；3-任务失败
                     */
                    std::vector<int64_t> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * 实例ID列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 任务类型列表，当前支持的任务类型有：0-回档任务；1-创建实例任务；2-扩容任务；3-迁移任务；4-删除实例任务；5-重启任务
                     */
                    std::vector<int64_t> m_flowTypes;
                    bool m_flowTypesHasBeenSet;

                    /**
                     * 任务的创建时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务ID的数组
                     */
                    std::vector<int64_t> m_uTaskIds;
                    bool m_uTaskIdsHasBeenSet;

                    /**
                     * 每次最多返回多少条任务，取值范围为(0,100]，不传的话默认值为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回任务默认是按照创建时间降序排列，从偏移值Offset处开始返回
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEUSERTASKSREQUEST_H_
