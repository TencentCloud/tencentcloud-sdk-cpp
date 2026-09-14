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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHBILLING_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHBILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KVPair.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 检索计费信息
                */
                class SearchBilling : public AbstractModel
                {
                public:
                    SearchBilling();
                    ~SearchBilling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计费标签列表</p>
                     * @return BillingTagList <p>计费标签列表</p>
                     * 
                     */
                    std::vector<KVPair> GetBillingTagList() const;

                    /**
                     * 设置<p>计费标签列表</p>
                     * @param _billingTagList <p>计费标签列表</p>
                     * 
                     */
                    void SetBillingTagList(const std::vector<KVPair>& _billingTagList);

                    /**
                     * 判断参数 BillingTagList 是否已赋值
                     * @return BillingTagList 是否已赋值
                     * 
                     */
                    bool BillingTagListHasBeenSet() const;

                    /**
                     * 获取<p>计费子业务类型</p>
                     * @return FinanceSubBusinessType <p>计费子业务类型</p>
                     * 
                     */
                    std::string GetFinanceSubBusinessType() const;

                    /**
                     * 设置<p>计费子业务类型</p>
                     * @param _financeSubBusinessType <p>计费子业务类型</p>
                     * 
                     */
                    void SetFinanceSubBusinessType(const std::string& _financeSubBusinessType);

                    /**
                     * 判断参数 FinanceSubBusinessType 是否已赋值
                     * @return FinanceSubBusinessType 是否已赋值
                     * 
                     */
                    bool FinanceSubBusinessTypeHasBeenSet() const;

                private:

                    /**
                     * <p>计费标签列表</p>
                     */
                    std::vector<KVPair> m_billingTagList;
                    bool m_billingTagListHasBeenSet;

                    /**
                     * <p>计费子业务类型</p>
                     */
                    std::string m_financeSubBusinessType;
                    bool m_financeSubBusinessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHBILLING_H_
