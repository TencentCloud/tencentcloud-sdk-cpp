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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKBRANCHLISTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKBRANCHLISTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/BankBranchInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 查询联行号返回结果
                */
                class QueryOpenBankBankBranchListResult : public AbstractModel
                {
                public:
                    QueryOpenBankBankBranchListResult();
                    ~QueryOpenBankBankBranchListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支行列表。
                     * @return BankBranchList 支行列表。
                     * 
                     */
                    std::vector<BankBranchInfo> GetBankBranchList() const;

                    /**
                     * 设置支行列表。
                     * @param _bankBranchList 支行列表。
                     * 
                     */
                    void SetBankBranchList(const std::vector<BankBranchInfo>& _bankBranchList);

                    /**
                     * 判断参数 BankBranchList 是否已赋值
                     * @return BankBranchList 是否已赋值
                     * 
                     */
                    bool BankBranchListHasBeenSet() const;

                    /**
                     * 获取列表总数。
                     * @return Count 列表总数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置列表总数。
                     * @param _count 列表总数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 支行列表。
                     */
                    std::vector<BankBranchInfo> m_bankBranchList;
                    bool m_bankBranchListHasBeenSet;

                    /**
                     * 列表总数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKBRANCHLISTRESULT_H_
