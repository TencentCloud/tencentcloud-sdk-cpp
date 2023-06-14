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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPPAYLOAD_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPPAYLOAD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespData.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 获取成员列表回包Payload
                */
                class GetIndustryV1HomeMembersRespPayload : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersRespPayload();
                    ~GetIndustryV1HomeMembersRespPayload() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountLevel 用户级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountLevel() const;

                    /**
                     * 设置用户级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountLevel 用户级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountLevel(const std::string& _accountLevel);

                    /**
                     * 判断参数 AccountLevel 是否已赋值
                     * @return AccountLevel 是否已赋值
                     * 
                     */
                    bool AccountLevelHasBeenSet() const;

                    /**
                     * 获取用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataList 用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GetIndustryV1HomeMembersRespData> GetDataList() const;

                    /**
                     * 设置用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataList 用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataList(const std::vector<GetIndustryV1HomeMembersRespData>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取每页数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit 每页数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit 每页数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 分页偏移量，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 分页偏移量，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 用户总数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 用户级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountLevel;
                    bool m_accountLevelHasBeenSet;

                    /**
                     * 用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GetIndustryV1HomeMembersRespData> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * 每页数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPPAYLOAD_H_
