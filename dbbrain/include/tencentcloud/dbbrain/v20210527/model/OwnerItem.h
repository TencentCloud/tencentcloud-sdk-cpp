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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_OWNERITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_OWNERITEM_H_

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
                * 持有该锁资源的进程列表（死锁环的持有边）。
                */
                class OwnerItem : public AbstractModel
                {
                public:
                    OwnerItem();
                    ~OwnerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * @return Mode <p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * @param _mode <p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
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
                     * 获取<p>该边对应进程的并行执行子线程 ID。</p>
                     * @return ExecutionContextId <p>该边对应进程的并行执行子线程 ID。</p>
                     * 
                     */
                    int64_t GetExecutionContextId() const;

                    /**
                     * 设置<p>该边对应进程的并行执行子线程 ID。</p>
                     * @param _executionContextId <p>该边对应进程的并行执行子线程 ID。</p>
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
                     * 获取<p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * @return ProcessId <p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置<p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * @param _processId <p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
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
                     * 获取<p>SQL Server 会话 ID。日志排查主键。</p>
                     * @return SessionId <p>SQL Server 会话 ID。日志排查主键。</p>
                     * 
                     */
                    int64_t GetSessionId() const;

                    /**
                     * 设置<p>SQL Server 会话 ID。日志排查主键。</p>
                     * @param _sessionId <p>SQL Server 会话 ID。日志排查主键。</p>
                     * 
                     */
                    void SetSessionId(const int64_t& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>该边对应进程的并行执行子线程 ID。</p>
                     */
                    int64_t m_executionContextId;
                    bool m_executionContextIdHasBeenSet;

                    /**
                     * <p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>SQL Server 会话 ID。日志排查主键。</p>
                     */
                    int64_t m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_OWNERITEM_H_
