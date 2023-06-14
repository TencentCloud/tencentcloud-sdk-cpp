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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECONTENTREVIEWTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECONTENTREVIEWTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ContentReviewTemplateItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeContentReviewTemplates返回参数结构体
                */
                class DescribeContentReviewTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeContentReviewTemplatesResponse();
                    ~DescribeContentReviewTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的记录总数。
                     * @return TotalCount 符合过滤条件的记录总数。
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
                     * 获取内容审核模板详情列表。
                     * @return ContentReviewTemplateSet 内容审核模板详情列表。
                     * 
                     */
                    std::vector<ContentReviewTemplateItem> GetContentReviewTemplateSet() const;

                    /**
                     * 判断参数 ContentReviewTemplateSet 是否已赋值
                     * @return ContentReviewTemplateSet 是否已赋值
                     * 
                     */
                    bool ContentReviewTemplateSetHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 内容审核模板详情列表。
                     */
                    std::vector<ContentReviewTemplateItem> m_contentReviewTemplateSet;
                    bool m_contentReviewTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECONTENTREVIEWTEMPLATESRESPONSE_H_
