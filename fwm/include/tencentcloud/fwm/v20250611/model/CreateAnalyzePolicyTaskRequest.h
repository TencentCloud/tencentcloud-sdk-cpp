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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_CREATEANALYZEPOLICYTASKREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_CREATEANALYZEPOLICYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * CreateAnalyzePolicyTask请求参数结构体
                */
                class CreateAnalyzePolicyTaskRequest : public AbstractModel
                {
                public:
                    CreateAnalyzePolicyTaskRequest();
                    ~CreateAnalyzePolicyTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品类型
                     * @return Products 产品类型
                     * 
                     */
                    std::vector<std::string> GetProducts() const;

                    /**
                     * 设置产品类型
                     * @param _products 产品类型
                     * 
                     */
                    void SetProducts(const std::vector<std::string>& _products);

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取成员Id 列表
                     * @return MemberIdSet 成员Id 列表
                     * 
                     */
                    std::vector<std::string> GetMemberIdSet() const;

                    /**
                     * 设置成员Id 列表
                     * @param _memberIdSet 成员Id 列表
                     * 
                     */
                    void SetMemberIdSet(const std::vector<std::string>& _memberIdSet);

                    /**
                     * 判断参数 MemberIdSet 是否已赋值
                     * @return MemberIdSet 是否已赋值
                     * 
                     */
                    bool MemberIdSetHasBeenSet() const;

                private:

                    /**
                     * 产品类型
                     */
                    std::vector<std::string> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 成员Id 列表
                     */
                    std::vector<std::string> m_memberIdSet;
                    bool m_memberIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_CREATEANALYZEPOLICYTASKREQUEST_H_
