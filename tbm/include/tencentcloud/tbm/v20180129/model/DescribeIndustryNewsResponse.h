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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEINDUSTRYNEWSRESPONSE_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEINDUSTRYNEWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbm/v20180129/model/IndustryNews.h>
#include <tencentcloud/tbm/v20180129/model/DateCount.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeIndustryNews返回参数结构体
                */
                class DescribeIndustryNewsResponse : public AbstractModel
                {
                public:
                    DescribeIndustryNewsResponse();
                    ~DescribeIndustryNewsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总计文章数量
                     * @return NewsCount 总计文章数量
                     * 
                     */
                    uint64_t GetNewsCount() const;

                    /**
                     * 判断参数 NewsCount 是否已赋值
                     * @return NewsCount 是否已赋值
                     * 
                     */
                    bool NewsCountHasBeenSet() const;

                    /**
                     * 获取总计来源数量
                     * @return FromCount 总计来源数量
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
                     * 获取总计疑似负面数量
                     * @return AdverseCount 总计疑似负面数量
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
                     * 获取文章列表
                     * @return NewsSet 文章列表
                     * 
                     */
                    std::vector<IndustryNews> GetNewsSet() const;

                    /**
                     * 判断参数 NewsSet 是否已赋值
                     * @return NewsSet 是否已赋值
                     * 
                     */
                    bool NewsSetHasBeenSet() const;

                    /**
                     * 获取按天统计的数量列表
                     * @return DateCountSet 按天统计的数量列表
                     * 
                     */
                    std::vector<DateCount> GetDateCountSet() const;

                    /**
                     * 判断参数 DateCountSet 是否已赋值
                     * @return DateCountSet 是否已赋值
                     * 
                     */
                    bool DateCountSetHasBeenSet() const;

                private:

                    /**
                     * 总计文章数量
                     */
                    uint64_t m_newsCount;
                    bool m_newsCountHasBeenSet;

                    /**
                     * 总计来源数量
                     */
                    uint64_t m_fromCount;
                    bool m_fromCountHasBeenSet;

                    /**
                     * 总计疑似负面数量
                     */
                    uint64_t m_adverseCount;
                    bool m_adverseCountHasBeenSet;

                    /**
                     * 文章列表
                     */
                    std::vector<IndustryNews> m_newsSet;
                    bool m_newsSetHasBeenSet;

                    /**
                     * 按天统计的数量列表
                     */
                    std::vector<DateCount> m_dateCountSet;
                    bool m_dateCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEINDUSTRYNEWSRESPONSE_H_
