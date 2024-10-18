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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 回档任务记录
                */
                class RestoreTask : public AbstractModel
                {
                public:
                    RestoreTask();
                    ~RestoreTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标实例ID
                     * @return TargetInstanceId 目标实例ID
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置目标实例ID
                     * @param _targetInstanceId 目标实例ID
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取目标实例名称
                     * @return TargetInstanceName 目标实例名称
                     * 
                     */
                    std::string GetTargetInstanceName() const;

                    /**
                     * 设置目标实例名称
                     * @param _targetInstanceName 目标实例名称
                     * 
                     */
                    void SetTargetInstanceName(const std::string& _targetInstanceName);

                    /**
                     * 判断参数 TargetInstanceName 是否已赋值
                     * @return TargetInstanceName 是否已赋值
                     * 
                     */
                    bool TargetInstanceNameHasBeenSet() const;

                    /**
                     * 获取目标实例状态。取值范围：
1：申请中
2：运行中
3：受限运行中 (主备切换中)
4：已隔离
5：回收中
6：已回收
7：任务执行中 (实例做备份、回档等操作)
8：已下线
9：实例扩容中
10：实例迁移中
11：只读
12：重启中
                     * @return TargetInstanceStatus 目标实例状态。取值范围：
1：申请中
2：运行中
3：受限运行中 (主备切换中)
4：已隔离
5：回收中
6：已回收
7：任务执行中 (实例做备份、回档等操作)
8：已下线
9：实例扩容中
10：实例迁移中
11：只读
12：重启中
                     * 
                     */
                    int64_t GetTargetInstanceStatus() const;

                    /**
                     * 设置目标实例状态。取值范围：
1：申请中
2：运行中
3：受限运行中 (主备切换中)
4：已隔离
5：回收中
6：已回收
7：任务执行中 (实例做备份、回档等操作)
8：已下线
9：实例扩容中
10：实例迁移中
11：只读
12：重启中
                     * @param _targetInstanceStatus 目标实例状态。取值范围：
1：申请中
2：运行中
3：受限运行中 (主备切换中)
4：已隔离
5：回收中
6：已回收
7：任务执行中 (实例做备份、回档等操作)
8：已下线
9：实例扩容中
10：实例迁移中
11：只读
12：重启中
                     * 
                     */
                    void SetTargetInstanceStatus(const int64_t& _targetInstanceStatus);

                    /**
                     * 判断参数 TargetInstanceStatus 是否已赋值
                     * @return TargetInstanceStatus 是否已赋值
                     * 
                     */
                    bool TargetInstanceStatusHasBeenSet() const;

                    /**
                     * 获取目标实例所在地域
                     * @return TargetRegion 目标实例所在地域
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置目标实例所在地域
                     * @param _targetRegion 目标实例所在地域
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
                     * 获取回档记录ID
                     * @return RestoreId 回档记录ID
                     * 
                     */
                    int64_t GetRestoreId() const;

                    /**
                     * 设置回档记录ID
                     * @param _restoreId 回档记录ID
                     * 
                     */
                    void SetRestoreId(const int64_t& _restoreId);

                    /**
                     * 判断参数 RestoreId 是否已赋值
                     * @return RestoreId 是否已赋值
                     * 
                     */
                    bool RestoreIdHasBeenSet() const;

                    /**
                     * 获取回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * @return TargetType 回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * @param _targetType 回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     * 
                     */
                    void SetTargetType(const int64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取回档方式，0-按照时间点回档，1-按照备份集回档
                     * @return RestoreType 回档方式，0-按照时间点回档，1-按照备份集回档
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置回档方式，0-按照时间点回档，1-按照备份集回档
                     * @param _restoreType 回档方式，0-按照时间点回档，1-按照备份集回档
                     * 
                     */
                    void SetRestoreType(const int64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取回档目标时间
                     * @return RestoreTime 回档目标时间
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置回档目标时间
                     * @param _restoreTime 回档目标时间
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

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
                     * 获取回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * @return Status 回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * @param _status 回档状态，0-初始化，1-运行中，2-成功，3-失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 目标实例ID
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 目标实例名称
                     */
                    std::string m_targetInstanceName;
                    bool m_targetInstanceNameHasBeenSet;

                    /**
                     * 目标实例状态。取值范围：
1：申请中
2：运行中
3：受限运行中 (主备切换中)
4：已隔离
5：回收中
6：已回收
7：任务执行中 (实例做备份、回档等操作)
8：已下线
9：实例扩容中
10：实例迁移中
11：只读
12：重启中
                     */
                    int64_t m_targetInstanceStatus;
                    bool m_targetInstanceStatusHasBeenSet;

                    /**
                     * 目标实例所在地域
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * 回档记录ID
                     */
                    int64_t m_restoreId;
                    bool m_restoreIdHasBeenSet;

                    /**
                     * 回档到目标实例的类型，0-当前实例，1-已有实例，2-全新实例
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 回档方式，0-按照时间点回档，1-按照备份集回档
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * 回档目标时间
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

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
                     * 回档状态，0-初始化，1-运行中，2-成功，3-失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_
