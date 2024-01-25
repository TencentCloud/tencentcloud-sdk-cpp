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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESQLTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESQLTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeSqlTaskResult返回参数结构体
                */
                class DescribeSqlTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeSqlTaskResultResponse();
                    ~DescribeSqlTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取子任务执行记录Id
                     * @return DetailId 子任务执行记录Id
                     * 
                     */
                    uint64_t GetDetailId() const;

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取是否是结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultSet 是否是结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResultSet() const;

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取结果内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultContent 结果内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultContent() const;

                    /**
                     * 判断参数 ResultContent 是否已赋值
                     * @return ResultContent 是否已赋值
                     * 
                     */
                    bool ResultContentHasBeenSet() const;

                    /**
                     * 获取字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldList 字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFieldList() const;

                    /**
                     * 判断参数 FieldList 是否已赋值
                     * @return FieldList 是否已赋值
                     * 
                     */
                    bool FieldListHasBeenSet() const;

                private:

                    /**
                     * 任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 子任务执行记录Id
                     */
                    uint64_t m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * 是否是结果集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * 结果内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultContent;
                    bool m_resultContentHasBeenSet;

                    /**
                     * 字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fieldList;
                    bool m_fieldListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESQLTASKRESULTRESPONSE_H_
