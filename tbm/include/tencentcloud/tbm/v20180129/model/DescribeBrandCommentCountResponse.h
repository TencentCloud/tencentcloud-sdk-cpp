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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDCOMMENTCOUNTRESPONSE_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDCOMMENTCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbm/v20180129/model/Comment.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeBrandCommentCount返回参数结构体
                */
                class DescribeBrandCommentCountResponse : public AbstractModel
                {
                public:
                    DescribeBrandCommentCountResponse();
                    ~DescribeBrandCommentCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按天统计好评/差评数
                     * @return CommentSet 按天统计好评/差评数
                     * 
                     */
                    std::vector<Comment> GetCommentSet() const;

                    /**
                     * 判断参数 CommentSet 是否已赋值
                     * @return CommentSet 是否已赋值
                     * 
                     */
                    bool CommentSetHasBeenSet() const;

                private:

                    /**
                     * 按天统计好评/差评数
                     */
                    std::vector<Comment> m_commentSet;
                    bool m_commentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDCOMMENTCOUNTRESPONSE_H_
