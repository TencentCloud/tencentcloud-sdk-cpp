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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
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
                     * 获取异步任务请求 ID，执行云数据库相关操作返回的 AsyncRequestId。
                     * @return AsyncRequestId 异步任务请求 ID，执行云数据库相关操作返回的 AsyncRequestId。
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置异步任务请求 ID，执行云数据库相关操作返回的 AsyncRequestId。
                     * @param _asyncRequestId 异步任务请求 ID，执行云数据库相关操作返回的 AsyncRequestId。
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取任务类型，不传值则查询所有任务类型，支持的值包括：
1 - 数据库回档；
2 - SQL操作；
3 - 数据导入；
5 - 参数设置；
6 - 初始化云数据库实例；
7 - 重启云数据库实例；
8 - 开启云数据库实例GTID；
9 - 只读实例升级；
10 - 数据库批量回档；
11 - 主实例升级；
12 - 删除云数据库库表；
13 - 灾备实例提升为主。
                     * @return TaskTypes 任务类型，不传值则查询所有任务类型，支持的值包括：
1 - 数据库回档；
2 - SQL操作；
3 - 数据导入；
5 - 参数设置；
6 - 初始化云数据库实例；
7 - 重启云数据库实例；
8 - 开启云数据库实例GTID；
9 - 只读实例升级；
10 - 数据库批量回档；
11 - 主实例升级；
12 - 删除云数据库库表；
13 - 灾备实例提升为主。
                     * 
                     */
                    std::vector<int64_t> GetTaskTypes() const;

                    /**
                     * 设置任务类型，不传值则查询所有任务类型，支持的值包括：
1 - 数据库回档；
2 - SQL操作；
3 - 数据导入；
5 - 参数设置；
6 - 初始化云数据库实例；
7 - 重启云数据库实例；
8 - 开启云数据库实例GTID；
9 - 只读实例升级；
10 - 数据库批量回档；
11 - 主实例升级；
12 - 删除云数据库库表；
13 - 灾备实例提升为主。
                     * @param _taskTypes 任务类型，不传值则查询所有任务类型，支持的值包括：
1 - 数据库回档；
2 - SQL操作；
3 - 数据导入；
5 - 参数设置；
6 - 初始化云数据库实例；
7 - 重启云数据库实例；
8 - 开启云数据库实例GTID；
9 - 只读实例升级；
10 - 数据库批量回档；
11 - 主实例升级；
12 - 删除云数据库库表；
13 - 灾备实例提升为主。
                     * 
                     */
                    void SetTaskTypes(const std::vector<int64_t>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取任务状态，不传值则查询所有任务状态，支持的值包括：
-1 - 未定义；
0 - 初始化；
1 - 运行中；
2 - 执行成功；
3 - 执行失败；
4 - 已终止；
5 - 已删除；
6 - 已暂停。
                     * @return TaskStatus 任务状态，不传值则查询所有任务状态，支持的值包括：
-1 - 未定义；
0 - 初始化；
1 - 运行中；
2 - 执行成功；
3 - 执行失败；
4 - 已终止；
5 - 已删除；
6 - 已暂停。
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置任务状态，不传值则查询所有任务状态，支持的值包括：
-1 - 未定义；
0 - 初始化；
1 - 运行中；
2 - 执行成功；
3 - 执行失败；
4 - 已终止；
5 - 已删除；
6 - 已暂停。
                     * @param _taskStatus 任务状态，不传值则查询所有任务状态，支持的值包括：
-1 - 未定义；
0 - 初始化；
1 - 运行中；
2 - 执行成功；
3 - 执行失败；
4 - 已终止；
5 - 已删除；
6 - 已暂停。
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取第一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * @return StartTimeBegin 第一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * 
                     */
                    std::string GetStartTimeBegin() const;

                    /**
                     * 设置第一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * @param _startTimeBegin 第一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * 
                     */
                    void SetStartTimeBegin(const std::string& _startTimeBegin);

                    /**
                     * 判断参数 StartTimeBegin 是否已赋值
                     * @return StartTimeBegin 是否已赋值
                     * 
                     */
                    bool StartTimeBeginHasBeenSet() const;

                    /**
                     * 获取最后一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * @return StartTimeEnd 最后一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * 
                     */
                    std::string GetStartTimeEnd() const;

                    /**
                     * 设置最后一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * @param _startTimeEnd 最后一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     * 
                     */
                    void SetStartTimeEnd(const std::string& _startTimeEnd);

                    /**
                     * 判断参数 StartTimeEnd 是否已赋值
                     * @return StartTimeEnd 是否已赋值
                     * 
                     */
                    bool StartTimeEndHasBeenSet() const;

                    /**
                     * 获取记录偏移量，默认值为0。
                     * @return Offset 记录偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量，默认值为0。
                     * @param _offset 记录偏移量，默认值为0。
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
                     * 获取单次请求返回的数量，默认值为20，最大值为100。
                     * @return Limit 单次请求返回的数量，默认值为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，默认值为20，最大值为100。
                     * @param _limit 单次请求返回的数量，默认值为20，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 异步任务请求 ID，执行云数据库相关操作返回的 AsyncRequestId。
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 任务类型，不传值则查询所有任务类型，支持的值包括：
1 - 数据库回档；
2 - SQL操作；
3 - 数据导入；
5 - 参数设置；
6 - 初始化云数据库实例；
7 - 重启云数据库实例；
8 - 开启云数据库实例GTID；
9 - 只读实例升级；
10 - 数据库批量回档；
11 - 主实例升级；
12 - 删除云数据库库表；
13 - 灾备实例提升为主。
                     */
                    std::vector<int64_t> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 任务状态，不传值则查询所有任务状态，支持的值包括：
-1 - 未定义；
0 - 初始化；
1 - 运行中；
2 - 执行成功；
3 - 执行失败；
4 - 已终止；
5 - 已删除；
6 - 已暂停。
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 第一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     */
                    std::string m_startTimeBegin;
                    bool m_startTimeBeginHasBeenSet;

                    /**
                     * 最后一个任务的开始时间，用于范围查询，时间格式如：2017-12-31 10:40:01。
                     */
                    std::string m_startTimeEnd;
                    bool m_startTimeEndHasBeenSet;

                    /**
                     * 记录偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次请求返回的数量，默认值为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETASKSREQUEST_H_
