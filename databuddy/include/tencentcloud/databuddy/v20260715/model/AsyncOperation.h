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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASYNCOPERATION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASYNCOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * OneFlow 透传的 Workspace 异步文件操作信息；作业状态由 Workspace 持久化和维护
                */
                class AsyncOperation : public AbstractModel
                {
                public:
                    AsyncOperation();
                    ~AsyncOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否异步执行；ZIP 解压创建时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAsync 是否异步执行；ZIP 解压创建时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAsync() const;

                    /**
                     * 设置是否异步执行；ZIP 解压创建时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAsync 是否异步执行；ZIP 解压创建时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAsync(const bool& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     * 
                     */
                    bool IsAsyncHasBeenSet() const;

                    /**
                     * 获取Workspace 持久化的异步作业 ID，用于查询作业进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId Workspace 持久化的异步作业 ID，用于查询作业进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Workspace 持久化的异步作业 ID，用于查询作业进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId Workspace 持久化的异步作业 ID，用于查询作业进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取调用方生成的提交幂等与链路追踪标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationId 调用方生成的提交幂等与链路追踪标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置调用方生成的提交幂等与链路追踪标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationId 调用方生成的提交幂等与链路追踪标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationId(const std::string& _operationId);

                    /**
                     * 判断参数 OperationId 是否已赋值
                     * @return OperationId 是否已赋值
                     * 
                     */
                    bool OperationIdHasBeenSet() const;

                    /**
                     * 获取异步作业状态：0-未指定，1-已受理，2-解压中，3-回调处理中，4-成功，5-部分失败，6-失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 异步作业状态：0-未指定，1-已受理，2-解压中，3-回调处理中，4-成功，5-部分失败，6-失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置异步作业状态：0-未指定，1-已受理，2-解压中，3-回调处理中，4-成功，5-部分失败，6-失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 异步作业状态：0-未指定，1-已受理，2-解压中，3-回调处理中，4-成功，5-部分失败，6-失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 是否异步执行；ZIP 解压创建时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAsync;
                    bool m_isAsyncHasBeenSet;

                    /**
                     * Workspace 持久化的异步作业 ID，用于查询作业进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 调用方生成的提交幂等与链路追踪标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * 异步作业状态：0-未指定，1-已受理，2-解压中，3-回调处理中，4-成功，5-部分失败，6-失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASYNCOPERATION_H_
