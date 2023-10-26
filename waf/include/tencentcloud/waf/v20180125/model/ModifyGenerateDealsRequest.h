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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYGENERATEDEALSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYGENERATEDEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Goods.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyGenerateDeals请求参数结构体
                */
                class ModifyGenerateDealsRequest : public AbstractModel
                {
                public:
                    ModifyGenerateDealsRequest();
                    ~ModifyGenerateDealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计费下单入参
                     * @return Goods 计费下单入参
                     * 
                     */
                    std::vector<Goods> GetGoods() const;

                    /**
                     * 设置计费下单入参
                     * @param _goods 计费下单入参
                     * 
                     */
                    void SetGoods(const std::vector<Goods>& _goods);

                    /**
                     * 判断参数 Goods 是否已赋值
                     * @return Goods 是否已赋值
                     * 
                     */
                    bool GoodsHasBeenSet() const;

                private:

                    /**
                     * 计费下单入参
                     */
                    std::vector<Goods> m_goods;
                    bool m_goodsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYGENERATEDEALSREQUEST_H_
