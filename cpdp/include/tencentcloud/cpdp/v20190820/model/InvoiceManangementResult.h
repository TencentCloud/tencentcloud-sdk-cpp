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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_INVOICEMANANGEMENTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_INVOICEMANANGEMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/InvoiceManagementList.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 发票管理返回结果
                */
                class InvoiceManangementResult : public AbstractModel
                {
                public:
                    InvoiceManangementResult();
                    ~InvoiceManangementResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数。
                     * @return Total 总数。
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数。
                     * @param Total 总数。
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取发票列表。
                     * @return List 发票列表。
                     */
                    std::vector<InvoiceManagementList> GetList() const;

                    /**
                     * 设置发票列表。
                     * @param List 发票列表。
                     */
                    void SetList(const std::vector<InvoiceManagementList>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总数。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 发票列表。
                     */
                    std::vector<InvoiceManagementList> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_INVOICEMANANGEMENTRESULT_H_
