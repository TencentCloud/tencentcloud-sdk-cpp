/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_WAITERITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_WAITERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 等待该锁资源的进程列表（死锁环的等待边）。
                */
                class WaiterItem : public AbstractModel
                {
                public:
                    WaiterItem();
                    ~WaiterItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该边持有或申请的锁模式。</p>
                     * @return Mode <p>该边持有或申请的锁模式。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>该边持有或申请的锁模式。</p>
                     * @param _mode <p>该边持有或申请的锁模式。</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>并行执行子线程 ID。0 表示主线程；大于 0 表示并行计划的 worker。SessionId + ExecutionContextId 组合可唯一区分并行执行下的 worker。</p>
                     * @return ExecutionContextId <p>并行执行子线程 ID。0 表示主线程；大于 0 表示并行计划的 worker。SessionId + ExecutionContextId 组合可唯一区分并行执行下的 worker。</p>
                     * 
                     */
                    int64_t GetExecutionContextId() const;

                    /**
                     * 设置<p>并行执行子线程 ID。0 表示主线程；大于 0 表示并行计划的 worker。SessionId + ExecutionContextId 组合可唯一区分并行执行下的 worker。</p>
                     * @param _executionContextId <p>并行执行子线程 ID。0 表示主线程；大于 0 表示并行计划的 worker。SessionId + ExecutionContextId 组合可唯一区分并行执行下的 worker。</p>
                     * 
                     */
                    void SetExecutionContextId(const int64_t& _executionContextId);

                    /**
                     * 判断参数 ExecutionContextId 是否已赋值
                     * @return ExecutionContextId 是否已赋值
                     * 
                     */
                    bool ExecutionContextIdHasBeenSet() const;

                    /**
                     * 获取<p>进程内部指针，对应 Transactions[].Processes[].ProcessId。</p>
                     * @return ProcessId <p>进程内部指针，对应 Transactions[].Processes[].ProcessId。</p>
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置<p>进程内部指针，对应 Transactions[].Processes[].ProcessId。</p>
                     * @param _processId <p>进程内部指针，对应 Transactions[].Processes[].ProcessId。</p>
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取<p>该边对应进程的 SPID，便于前端直接展示无需回查。</p>
                     * @return SessionId <p>该边对应进程的 SPID，便于前端直接展示无需回查。</p>
                     * 
                     */
                    int64_t GetSessionId() const;

                    /**
                     * 设置<p>该边对应进程的 SPID，便于前端直接展示无需回查。</p>
                     * @param _sessionId <p>该边对应进程的 SPID，便于前端直接展示无需回查。</p>
                     * 
                     */
                    void SetSessionId(const int64_t& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>仅 Waiters 边有值。常见值：wait（普通等待）/ convert（锁转换，如从 S 升级到 X）。owner 边无此字段。</p>
                     * @return RequestType <p>仅 Waiters 边有值。常见值：wait（普通等待）/ convert（锁转换，如从 S 升级到 X）。owner 边无此字段。</p>
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置<p>仅 Waiters 边有值。常见值：wait（普通等待）/ convert（锁转换，如从 S 升级到 X）。owner 边无此字段。</p>
                     * @param _requestType <p>仅 Waiters 边有值。常见值：wait（普通等待）/ convert（锁转换，如从 S 升级到 X）。owner 边无此字段。</p>
                     * 
                     */
                    void SetRequestType(const std::string& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                private:

                    /**
                     * <p>该边持有或申请的锁模式。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>并行执行子线程 ID。0 表示主线程；大于 0 表示并行计划的 worker。SessionId + ExecutionContextId 组合可唯一区分并行执行下的 worker。</p>
                     */
                    int64_t m_executionContextId;
                    bool m_executionContextIdHasBeenSet;

                    /**
                     * <p>进程内部指针，对应 Transactions[].Processes[].ProcessId。</p>
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>该边对应进程的 SPID，便于前端直接展示无需回查。</p>
                     */
                    int64_t m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>仅 Waiters 边有值。常见值：wait（普通等待）/ convert（锁转换，如从 S 升级到 X）。owner 边无此字段。</p>
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_WAITERITEM_H_
