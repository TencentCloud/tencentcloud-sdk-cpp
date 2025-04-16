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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONSTATEMENTBATCHINFORMATION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONSTATEMENTBATCHINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NotebookSessionStatementInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 按批提交Statement运行SQL任务。
                */
                class NotebookSessionStatementBatchInformation : public AbstractModel
                {
                public:
                    NotebookSessionStatementBatchInformation();
                    ~NotebookSessionStatementBatchInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookSessionStatementBatch 任务详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NotebookSessionStatementInfo> GetNotebookSessionStatementBatch() const;

                    /**
                     * 设置任务详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebookSessionStatementBatch 任务详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotebookSessionStatementBatch(const std::vector<NotebookSessionStatementInfo>& _notebookSessionStatementBatch);

                    /**
                     * 判断参数 NotebookSessionStatementBatch 是否已赋值
                     * @return NotebookSessionStatementBatch 是否已赋值
                     * 
                     */
                    bool NotebookSessionStatementBatchHasBeenSet() const;

                    /**
                     * 获取当前批任务是否运行完成
                     * @return IsAvailable 当前批任务是否运行完成
                     * 
                     */
                    bool GetIsAvailable() const;

                    /**
                     * 设置当前批任务是否运行完成
                     * @param _isAvailable 当前批任务是否运行完成
                     * 
                     */
                    void SetIsAvailable(const bool& _isAvailable);

                    /**
                     * 判断参数 IsAvailable 是否已赋值
                     * @return IsAvailable 是否已赋值
                     * 
                     */
                    bool IsAvailableHasBeenSet() const;

                    /**
                     * 获取Session唯一标识
                     * @return SessionId Session唯一标识
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session唯一标识
                     * @param _sessionId Session唯一标识
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Batch唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchId Batch唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置Batch唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchId Batch唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 任务详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NotebookSessionStatementInfo> m_notebookSessionStatementBatch;
                    bool m_notebookSessionStatementBatchHasBeenSet;

                    /**
                     * 当前批任务是否运行完成
                     */
                    bool m_isAvailable;
                    bool m_isAvailableHasBeenSet;

                    /**
                     * Session唯一标识
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Batch唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONSTATEMENTBATCHINFORMATION_H_
