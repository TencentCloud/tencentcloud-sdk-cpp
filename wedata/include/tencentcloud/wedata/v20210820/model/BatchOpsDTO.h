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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FailMessage.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 批量操作结果，带失败原因
                */
                class BatchOpsDTO : public AbstractModel
                {
                public:
                    BatchOpsDTO();
                    ~BatchOpsDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总数量
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
                     * 获取成功数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 成功数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置成功数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount 成功数量
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
                     * 获取失败数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailCount 失败数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置失败数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failCount 失败数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailMessageList 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FailMessage> GetFailMessageList() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failMessageList 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailMessageList(const std::vector<FailMessage>& _failMessageList);

                    /**
                     * 判断参数 FailMessageList 是否已赋值
                     * @return FailMessageList 是否已赋值
                     * 
                     */
                    bool FailMessageListHasBeenSet() const;

                private:

                    /**
                     * 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 成功数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FailMessage> m_failMessageList;
                    bool m_failMessageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPSDTO_H_
