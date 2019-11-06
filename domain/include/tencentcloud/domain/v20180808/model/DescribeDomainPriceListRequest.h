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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeDomainPriceList请求参数结构体
                */
                class DescribeDomainPriceListRequest : public AbstractModel
                {
                public:
                    DescribeDomainPriceListRequest();
                    ~DescribeDomainPriceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询价格的后缀列表。默认则为全部后缀
                     * @return TldList 查询价格的后缀列表。默认则为全部后缀
                     */
                    std::vector<std::string> GetTldList() const;

                    /**
                     * 设置查询价格的后缀列表。默认则为全部后缀
                     * @param TldList 查询价格的后缀列表。默认则为全部后缀
                     */
                    void SetTldList(const std::vector<std::string>& _tldList);

                    /**
                     * 判断参数 TldList 是否已赋值
                     * @return TldList 是否已赋值
                     */
                    bool TldListHasBeenSet() const;

                private:

                    /**
                     * 查询价格的后缀列表。默认则为全部后缀
                     */
                    std::vector<std::string> m_tldList;
                    bool m_tldListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTREQUEST_H_
