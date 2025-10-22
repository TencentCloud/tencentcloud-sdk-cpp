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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_JOBRECORDPROGRESS_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_JOBRECORDPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 子任务进度
                */
                class JobRecordProgress : public AbstractModel
                {
                public:
                    JobRecordProgress();
                    ~JobRecordProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正在执行的任务数
                     * @return Doing 正在执行的任务数
                     * 
                     */
                    int64_t GetDoing() const;

                    /**
                     * 设置正在执行的任务数
                     * @param _doing 正在执行的任务数
                     * 
                     */
                    void SetDoing(const int64_t& _doing);

                    /**
                     * 判断参数 Doing 是否已赋值
                     * @return Doing 是否已赋值
                     * 
                     */
                    bool DoingHasBeenSet() const;

                    /**
                     * 获取已完成的任务数
                     * @return Done 已完成的任务数
                     * 
                     */
                    int64_t GetDone() const;

                    /**
                     * 设置已完成的任务数
                     * @param _done 已完成的任务数
                     * 
                     */
                    void SetDone(const int64_t& _done);

                    /**
                     * 判断参数 Done 是否已赋值
                     * @return Done 是否已赋值
                     * 
                     */
                    bool DoneHasBeenSet() const;

                    /**
                     * 获取发生错误的任务数
                     * @return Error 发生错误的任务数
                     * 
                     */
                    int64_t GetError() const;

                    /**
                     * 设置发生错误的任务数
                     * @param _error 发生错误的任务数
                     * 
                     */
                    void SetError(const int64_t& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取超时
                     * @return Timeout 超时
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时
                     * @param _timeout 超时
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取停止
                     * @return Stop 停止
                     * 
                     */
                    int64_t GetStop() const;

                    /**
                     * 设置停止
                     * @param _stop 停止
                     * 
                     */
                    void SetStop(const int64_t& _stop);

                    /**
                     * 判断参数 Stop 是否已赋值
                     * @return Stop 是否已赋值
                     * 
                     */
                    bool StopHasBeenSet() const;

                    /**
                     * 获取暂停
                     * @return Todo 暂停
                     * 
                     */
                    int64_t GetTodo() const;

                    /**
                     * 设置暂停
                     * @param _todo 暂停
                     * 
                     */
                    void SetTodo(const int64_t& _todo);

                    /**
                     * 判断参数 Todo 是否已赋值
                     * @return Todo 是否已赋值
                     * 
                     */
                    bool TodoHasBeenSet() const;

                private:

                    /**
                     * 正在执行的任务数
                     */
                    int64_t m_doing;
                    bool m_doingHasBeenSet;

                    /**
                     * 已完成的任务数
                     */
                    int64_t m_done;
                    bool m_doneHasBeenSet;

                    /**
                     * 发生错误的任务数
                     */
                    int64_t m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 超时
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 停止
                     */
                    int64_t m_stop;
                    bool m_stopHasBeenSet;

                    /**
                     * 暂停
                     */
                    int64_t m_todo;
                    bool m_todoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_JOBRECORDPROGRESS_H_
