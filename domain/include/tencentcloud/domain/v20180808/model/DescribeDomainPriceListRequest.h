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
                     * 获取查询指定域名后缀的域名价格列表，若不指定域名后缀，默认查询所有后缀的域名价格列表。
                     * @return TldList 查询指定域名后缀的域名价格列表，若不指定域名后缀，默认查询所有后缀的域名价格列表。
                     * 
                     */
                    std::vector<std::string> GetTldList() const;

                    /**
                     * 设置查询指定域名后缀的域名价格列表，若不指定域名后缀，默认查询所有后缀的域名价格列表。
                     * @param _tldList 查询指定域名后缀的域名价格列表，若不指定域名后缀，默认查询所有后缀的域名价格列表。
                     * 
                     */
                    void SetTldList(const std::vector<std::string>& _tldList);

                    /**
                     * 判断参数 TldList 是否已赋值
                     * @return TldList 是否已赋值
                     * 
                     */
                    bool TldListHasBeenSet() const;

                    /**
                     * 获取查询购买的年份，默认会列出所有年份的价格，可选值【1,10】
                     * @return Year 查询购买的年份，默认会列出所有年份的价格，可选值【1,10】
                     * 
                     */
                    std::vector<int64_t> GetYear() const;

                    /**
                     * 设置查询购买的年份，默认会列出所有年份的价格，可选值【1,10】
                     * @param _year 查询购买的年份，默认会列出所有年份的价格，可选值【1,10】
                     * 
                     */
                    void SetYear(const std::vector<int64_t>& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取域名的购买类型：
new  新购
renew 续费
redem 赎回
tran 转入
                     * @return Operation 域名的购买类型：
new  新购
renew 续费
redem 赎回
tran 转入
                     * 
                     */
                    std::vector<std::string> GetOperation() const;

                    /**
                     * 设置域名的购买类型：
new  新购
renew 续费
redem 赎回
tran 转入
                     * @param _operation 域名的购买类型：
new  新购
renew 续费
redem 赎回
tran 转入
                     * 
                     */
                    void SetOperation(const std::vector<std::string>& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 查询指定域名后缀的域名价格列表，若不指定域名后缀，默认查询所有后缀的域名价格列表。
                     */
                    std::vector<std::string> m_tldList;
                    bool m_tldListHasBeenSet;

                    /**
                     * 查询购买的年份，默认会列出所有年份的价格，可选值【1,10】
                     */
                    std::vector<int64_t> m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * 域名的购买类型：
new  新购
renew 续费
redem 赎回
tran 转入
                     */
                    std::vector<std::string> m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTREQUEST_H_
