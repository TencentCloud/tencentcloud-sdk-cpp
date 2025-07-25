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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONDETAILSRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONDETAILSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/MemberTransactionItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 聚鑫-查询会员间交易信息列表结果
                */
                class QueryMemberTransactionDetailsResult : public AbstractModel
                {
                public:
                    QueryMemberTransactionDetailsResult();
                    ~QueryMemberTransactionDetailsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本次交易返回查询结果记录数。
                     * @return ResultCount 本次交易返回查询结果记录数。
                     * 
                     */
                    uint64_t GetResultCount() const;

                    /**
                     * 设置本次交易返回查询结果记录数。
                     * @param _resultCount 本次交易返回查询结果记录数。
                     * 
                     */
                    void SetResultCount(const uint64_t& _resultCount);

                    /**
                     * 判断参数 ResultCount 是否已赋值
                     * @return ResultCount 是否已赋值
                     * 
                     */
                    bool ResultCountHasBeenSet() const;

                    /**
                     * 获取符合业务查询条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 符合业务查询条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置符合业务查询条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 符合业务查询条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取结束标志。
__0__：否
__1__：是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndFlag 结束标志。
__0__：否
__1__：是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndFlag() const;

                    /**
                     * 设置结束标志。
__0__：否
__1__：是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endFlag 结束标志。
__0__：否
__1__：是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndFlag(const std::string& _endFlag);

                    /**
                     * 判断参数 EndFlag 是否已赋值
                     * @return EndFlag 是否已赋值
                     * 
                     */
                    bool EndFlagHasBeenSet() const;

                    /**
                     * 获取会员间交易信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranItemArray 会员间交易信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MemberTransactionItem> GetTranItemArray() const;

                    /**
                     * 设置会员间交易信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranItemArray 会员间交易信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranItemArray(const std::vector<MemberTransactionItem>& _tranItemArray);

                    /**
                     * 判断参数 TranItemArray 是否已赋值
                     * @return TranItemArray 是否已赋值
                     * 
                     */
                    bool TranItemArrayHasBeenSet() const;

                private:

                    /**
                     * 本次交易返回查询结果记录数。
                     */
                    uint64_t m_resultCount;
                    bool m_resultCountHasBeenSet;

                    /**
                     * 符合业务查询条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 结束标志。
__0__：否
__1__：是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endFlag;
                    bool m_endFlagHasBeenSet;

                    /**
                     * 会员间交易信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MemberTransactionItem> m_tranItemArray;
                    bool m_tranItemArrayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONDETAILSRESULT_H_
