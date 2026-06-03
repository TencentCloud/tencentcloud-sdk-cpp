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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYUSAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYUSAGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageDetailItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanApiKeyUsageDetail返回参数结构体
                */
                class DescribeTokenPlanApiKeyUsageDetailResponse : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeyUsageDetailResponse();
                    ~DescribeTokenPlanApiKeyUsageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取翻页上下文，传入下一次请求的 Context 参数继续翻页。
                     * @return Context 翻页上下文，传入下一次请求的 Context 参数继续翻页。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取是否已到末尾，为 true 时无需继续翻页。
                     * @return ListOver 是否已到末尾，为 true 时无需继续翻页。
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取调用明细列表。
                     * @return List 调用明细列表。
                     * 
                     */
                    std::vector<UsageDetailItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取	 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * @return ProductType 	 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * 翻页上下文，传入下一次请求的 Context 参数继续翻页。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 是否已到末尾，为 true 时无需继续翻页。
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 调用明细列表。
                     */
                    std::vector<UsageDetailItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 	 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYUSAGEDETAILRESPONSE_H_
