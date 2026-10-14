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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 工作流运行实例状态信息
                */
                class WorkflowRunResult : public AbstractModel
                {
                public:
                    WorkflowRunResult();
                    ~WorkflowRunResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行状态。1: 排队中；2: 运行中；3: 运行成功；4: 运行失败； 5: 已取消
                     * @return Status 运行状态。1: 排队中；2: 运行中；3: 运行成功；4: 运行失败； 5: 已取消
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置运行状态。1: 排队中；2: 运行中；3: 运行成功；4: 运行失败； 5: 已取消
                     * @param _status 运行状态。1: 排队中；2: 运行中；3: 运行成功；4: 运行失败； 5: 已取消
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
                     * 获取错误信息
                     * @return FailMessage 错误信息
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置错误信息
                     * @param _failMessage 错误信息
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取消耗的token总数
                     * @return TotalTokens 消耗的token总数
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置消耗的token总数
                     * @param _totalTokens 消耗的token总数
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * 运行状态。1: 排队中；2: 运行中；3: 运行成功；4: 运行失败； 5: 已取消
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * 消耗的token总数
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNRESULT_H_
