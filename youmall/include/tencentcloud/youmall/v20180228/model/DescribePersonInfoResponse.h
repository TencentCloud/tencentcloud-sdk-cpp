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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFORESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/PersonInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePersonInfo返回参数结构体
                */
                class DescribePersonInfoResponse : public AbstractModel
                {
                public:
                    DescribePersonInfoResponse();
                    ~DescribePersonInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取门店ID
                     * @return ShopId 门店ID
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取用户信息
                     * @return PersonInfoSet 用户信息
                     * 
                     */
                    std::vector<PersonInfo> GetPersonInfoSet() const;

                    /**
                     * 判断参数 PersonInfoSet 是否已赋值
                     * @return PersonInfoSet 是否已赋值
                     * 
                     */
                    bool PersonInfoSetHasBeenSet() const;

                private:

                    /**
                     * 公司ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 门店ID
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 用户信息
                     */
                    std::vector<PersonInfo> m_personInfoSet;
                    bool m_personInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFORESPONSE_H_
