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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEORIGINSTREAMINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEORIGINSTREAMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeOriginStreamInfo返回参数结构体
                */
                class DescribeOriginStreamInfoResponse : public AbstractModel
                {
                public:
                    DescribeOriginStreamInfoResponse();
                    ~DescribeOriginStreamInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取缓存格式规则。 
0：默认格式。
1：云直播源站格式。
当 OriginStreamPlayType 为 customization 时候生效。
                     * @return CacheFormatRule 缓存格式规则。 
0：默认格式。
1：云直播源站格式。
当 OriginStreamPlayType 为 customization 时候生效。
                     * 
                     */
                    int64_t GetCacheFormatRule() const;

                    /**
                     * 判断参数 CacheFormatRule 是否已赋值
                     * @return CacheFormatRule 是否已赋值
                     * 
                     */
                    bool CacheFormatRuleHasBeenSet() const;

                private:

                    /**
                     * 缓存格式规则。 
0：默认格式。
1：云直播源站格式。
当 OriginStreamPlayType 为 customization 时候生效。
                     */
                    int64_t m_cacheFormatRule;
                    bool m_cacheFormatRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEORIGINSTREAMINFORESPONSE_H_
