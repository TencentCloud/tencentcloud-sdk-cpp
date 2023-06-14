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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDSOCIALOPINIONRESPONSE_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDSOCIALOPINIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbm/v20180129/model/BrandReportArticle.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeBrandSocialOpinion返回参数结构体
                */
                class DescribeBrandSocialOpinionResponse : public AbstractModel
                {
                public:
                    DescribeBrandSocialOpinionResponse();
                    ~DescribeBrandSocialOpinionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文章总数
                     * @return ArticleCount 文章总数
                     * 
                     */
                    uint64_t GetArticleCount() const;

                    /**
                     * 判断参数 ArticleCount 是否已赋值
                     * @return ArticleCount 是否已赋值
                     * 
                     */
                    bool ArticleCountHasBeenSet() const;

                    /**
                     * 获取来源统计总数
                     * @return FromCount 来源统计总数
                     * 
                     */
                    uint64_t GetFromCount() const;

                    /**
                     * 判断参数 FromCount 是否已赋值
                     * @return FromCount 是否已赋值
                     * 
                     */
                    bool FromCountHasBeenSet() const;

                    /**
                     * 获取疑似负面报道总数
                     * @return AdverseCount 疑似负面报道总数
                     * 
                     */
                    uint64_t GetAdverseCount() const;

                    /**
                     * 判断参数 AdverseCount 是否已赋值
                     * @return AdverseCount 是否已赋值
                     * 
                     */
                    bool AdverseCountHasBeenSet() const;

                    /**
                     * 获取文章列表详情
                     * @return ArticleSet 文章列表详情
                     * 
                     */
                    std::vector<BrandReportArticle> GetArticleSet() const;

                    /**
                     * 判断参数 ArticleSet 是否已赋值
                     * @return ArticleSet 是否已赋值
                     * 
                     */
                    bool ArticleSetHasBeenSet() const;

                private:

                    /**
                     * 文章总数
                     */
                    uint64_t m_articleCount;
                    bool m_articleCountHasBeenSet;

                    /**
                     * 来源统计总数
                     */
                    uint64_t m_fromCount;
                    bool m_fromCountHasBeenSet;

                    /**
                     * 疑似负面报道总数
                     */
                    uint64_t m_adverseCount;
                    bool m_adverseCountHasBeenSet;

                    /**
                     * 文章列表详情
                     */
                    std::vector<BrandReportArticle> m_articleSet;
                    bool m_articleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDSOCIALOPINIONRESPONSE_H_
