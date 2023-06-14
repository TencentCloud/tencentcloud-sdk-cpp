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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKOPERATIONLOG_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKOPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云盘操作日志。
                */
                class DiskOperationLog : public AbstractModel
                {
                public:
                    DiskOperationLog();
                    ~DiskOperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     * @return OperationState 操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     * 
                     */
                    std::string GetOperationState() const;

                    /**
                     * 设置操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     * @param _operationState 操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     * 
                     */
                    void SetOperationState(const std::string& _operationState);

                    /**
                     * 判断参数 OperationState 是否已赋值
                     * @return OperationState 是否已赋值
                     * 
                     */
                    bool OperationStateHasBeenSet() const;

                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param _startTime 开始时间。
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
                     * 获取操作者的UIN。
                     * @return Operator 操作者的UIN。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者的UIN。
                     * @param _operator 操作者的UIN。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作类型。取值范围：
CBS_OPERATION_ATTACH：挂载云硬盘
CBS_OPERATION_DETACH：解挂云硬盘
CBS_OPERATION_RENEW：续费
CBS_OPERATION_EXPAND：扩容
CBS_OPERATION_CREATE：创建
CBS_OPERATION_ISOLATE：隔离
CBS_OPERATION_MODIFY：修改云硬盘属性
ASP_OPERATION_BIND：关联定期快照策略
ASP_OPERATION_UNBIND：取消关联定期快照策略
                     * @return Operation 操作类型。取值范围：
CBS_OPERATION_ATTACH：挂载云硬盘
CBS_OPERATION_DETACH：解挂云硬盘
CBS_OPERATION_RENEW：续费
CBS_OPERATION_EXPAND：扩容
CBS_OPERATION_CREATE：创建
CBS_OPERATION_ISOLATE：隔离
CBS_OPERATION_MODIFY：修改云硬盘属性
ASP_OPERATION_BIND：关联定期快照策略
ASP_OPERATION_UNBIND：取消关联定期快照策略
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型。取值范围：
CBS_OPERATION_ATTACH：挂载云硬盘
CBS_OPERATION_DETACH：解挂云硬盘
CBS_OPERATION_RENEW：续费
CBS_OPERATION_EXPAND：扩容
CBS_OPERATION_CREATE：创建
CBS_OPERATION_ISOLATE：隔离
CBS_OPERATION_MODIFY：修改云硬盘属性
ASP_OPERATION_BIND：关联定期快照策略
ASP_OPERATION_UNBIND：取消关联定期快照策略
                     * @param _operation 操作类型。取值范围：
CBS_OPERATION_ATTACH：挂载云硬盘
CBS_OPERATION_DETACH：解挂云硬盘
CBS_OPERATION_RENEW：续费
CBS_OPERATION_EXPAND：扩容
CBS_OPERATION_CREATE：创建
CBS_OPERATION_ISOLATE：隔离
CBS_OPERATION_MODIFY：修改云硬盘属性
ASP_OPERATION_BIND：关联定期快照策略
ASP_OPERATION_UNBIND：取消关联定期快照策略
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param _endTime 结束时间。
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
                     * 获取操作的云盘ID。
                     * @return DiskId 操作的云盘ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置操作的云盘ID。
                     * @param _diskId 操作的云盘ID。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * 操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     */
                    std::string m_operationState;
                    bool m_operationStateHasBeenSet;

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 操作者的UIN。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作类型。取值范围：
CBS_OPERATION_ATTACH：挂载云硬盘
CBS_OPERATION_DETACH：解挂云硬盘
CBS_OPERATION_RENEW：续费
CBS_OPERATION_EXPAND：扩容
CBS_OPERATION_CREATE：创建
CBS_OPERATION_ISOLATE：隔离
CBS_OPERATION_MODIFY：修改云硬盘属性
ASP_OPERATION_BIND：关联定期快照策略
ASP_OPERATION_UNBIND：取消关联定期快照策略
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 操作的云盘ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKOPERATIONLOG_H_
