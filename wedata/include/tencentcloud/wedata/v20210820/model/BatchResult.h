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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 批量操作结果
                */
                class BatchResult : public AbstractModel
                {
                public:
                    BatchResult();
                    ~BatchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正在运行的任务数
                     * @return Running 正在运行的任务数
                     * 
                     */
                    int64_t GetRunning() const;

                    /**
                     * 设置正在运行的任务数
                     * @param _running 正在运行的任务数
                     * 
                     */
                    void SetRunning(const int64_t& _running);

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                    /**
                     * 获取执行成功的任务数
                     * @return Success 执行成功的任务数
                     * 
                     */
                    int64_t GetSuccess() const;

                    /**
                     * 设置执行成功的任务数
                     * @param _success 执行成功的任务数
                     * 
                     */
                    void SetSuccess(const int64_t& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取执行失败的任务数
                     * @return Failed 执行失败的任务数
                     * 
                     */
                    int64_t GetFailed() const;

                    /**
                     * 设置执行失败的任务数
                     * @param _failed 执行失败的任务数
                     * 
                     */
                    void SetFailed(const int64_t& _failed);

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取总任务数
                     * @return Total 总任务数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总任务数
                     * @param _total 总任务数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 正在运行的任务数
                     */
                    int64_t m_running;
                    bool m_runningHasBeenSet;

                    /**
                     * 执行成功的任务数
                     */
                    int64_t m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 执行失败的任务数
                     */
                    int64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * 总任务数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULT_H_
