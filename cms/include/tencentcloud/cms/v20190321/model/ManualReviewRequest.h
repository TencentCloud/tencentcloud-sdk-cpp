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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/ManualReviewContent.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * ManualReview请求参数结构体
                */
                class ManualReviewRequest : public AbstractModel
                {
                public:
                    ManualReviewRequest();
                    ~ManualReviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人工审核信息
                     * @return ReviewContent 人工审核信息
                     */
                    ManualReviewContent GetReviewContent() const;

                    /**
                     * 设置人工审核信息
                     * @param ReviewContent 人工审核信息
                     */
                    void SetReviewContent(const ManualReviewContent& _reviewContent);

                    /**
                     * 判断参数 ReviewContent 是否已赋值
                     * @return ReviewContent 是否已赋值
                     */
                    bool ReviewContentHasBeenSet() const;

                private:

                    /**
                     * 人工审核信息
                     */
                    ManualReviewContent m_reviewContent;
                    bool m_reviewContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWREQUEST_H_
