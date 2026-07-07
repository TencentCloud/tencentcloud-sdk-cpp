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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELREWRITERESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELREWRITERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RewriteItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRewrite返回参数结构体
                */
                class DescribeModelRewriteResponse : public AbstractModel
                {
                public:
                    DescribeModelRewriteResponse();
                    ~DescribeModelRewriteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>重写规则列表，按 SourceModel 字典序排序。无规则或过滤未命中时为空数组。</p>
                     * @return Rewrites <p>重写规则列表，按 SourceModel 字典序排序。无规则或过滤未命中时为空数组。</p>
                     * 
                     */
                    std::vector<RewriteItem> GetRewrites() const;

                    /**
                     * 判断参数 Rewrites 是否已赋值
                     * @return Rewrites 是否已赋值
                     * 
                     */
                    bool RewritesHasBeenSet() const;

                private:

                    /**
                     * <p>重写规则列表，按 SourceModel 字典序排序。无规则或过滤未命中时为空数组。</p>
                     */
                    std::vector<RewriteItem> m_rewrites;
                    bool m_rewritesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELREWRITERESPONSE_H_
