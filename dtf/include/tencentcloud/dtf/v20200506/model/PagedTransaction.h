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

#ifndef TENCENTCLOUD_DTF_V20200506_MODEL_PAGEDTRANSACTION_H_
#define TENCENTCLOUD_DTF_V20200506_MODEL_PAGEDTRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dtf/v20200506/model/Transaction.h>


namespace TencentCloud
{
    namespace Dtf
    {
        namespace V20200506
        {
            namespace Model
            {
                /**
                * 分页主事务
                */
                class PagedTransaction : public AbstractModel
                {
                public:
                    PagedTransaction();
                    ~PagedTransaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总条数，特定在该接口中总是会返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总条数，特定在该接口中总是会返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总条数，特定在该接口中总是会返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总条数，特定在该接口中总是会返回null
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
                     * 获取主事务分组列表
                     * @return Content 主事务分组列表
                     * 
                     */
                    std::vector<Transaction> GetContent() const;

                    /**
                     * 设置主事务分组列表
                     * @param _content 主事务分组列表
                     * 
                     */
                    void SetContent(const std::vector<Transaction>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 总条数，特定在该接口中总是会返回null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 主事务分组列表
                     */
                    std::vector<Transaction> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTF_V20200506_MODEL_PAGEDTRANSACTION_H_
