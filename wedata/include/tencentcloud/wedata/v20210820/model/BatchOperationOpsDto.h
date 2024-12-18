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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATIONOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATIONOPSDTO_H_

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
                * 批量操作的结果返回
                */
                class BatchOperationOpsDto : public AbstractModel
                {
                public:
                    BatchOperationOpsDto();
                    ~BatchOperationOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量操作成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 批量操作成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置批量操作成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount 批量操作成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取批量操作失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedCount 批量操作失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置批量操作失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedCount 批量操作失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取批量操作的总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 批量操作的总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置批量操作的总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 批量操作的总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取异步操作记录的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncActionId 异步操作记录的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAsyncActionId() const;

                    /**
                     * 设置异步操作记录的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asyncActionId 异步操作记录的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsyncActionId(const std::string& _asyncActionId);

                    /**
                     * 判断参数 AsyncActionId 是否已赋值
                     * @return AsyncActionId 是否已赋值
                     * 
                     */
                    bool AsyncActionIdHasBeenSet() const;

                private:

                    /**
                     * 批量操作成功数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 批量操作失败数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 批量操作的总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 异步操作记录的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asyncActionId;
                    bool m_asyncActionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATIONOPSDTO_H_
