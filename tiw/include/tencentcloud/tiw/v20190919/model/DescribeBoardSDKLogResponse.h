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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeBoardSDKLog返回参数结构体
                */
                class DescribeBoardSDKLogResponse : public AbstractModel
                {
                public:
                    DescribeBoardSDKLogResponse();
                    ~DescribeBoardSDKLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总共能查到日志条数
                     * @return Total 总共能查到日志条数
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取日志详细内容
                     * @return Sources 日志详细内容
                     */
                    std::vector<std::string> GetSources() const;

                    /**
                     * 判断参数 Sources 是否已赋值
                     * @return Sources 是否已赋值
                     */
                    bool SourcesHasBeenSet() const;

                    /**
                     * 获取按时间段聚合后每个时间段的日志条数
                     * @return Buckets 按时间段聚合后每个时间段的日志条数
                     */
                    std::vector<std::string> GetBuckets() const;

                    /**
                     * 判断参数 Buckets 是否已赋值
                     * @return Buckets 是否已赋值
                     */
                    bool BucketsHasBeenSet() const;

                    /**
                     * 获取用于递归拉取的上下文Key，下一次请求的时候带上
                     * @return Context 用于递归拉取的上下文Key，下一次请求的时候带上
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 总共能查到日志条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 日志详细内容
                     */
                    std::vector<std::string> m_sources;
                    bool m_sourcesHasBeenSet;

                    /**
                     * 按时间段聚合后每个时间段的日志条数
                     */
                    std::vector<std::string> m_buckets;
                    bool m_bucketsHasBeenSet;

                    /**
                     * 用于递归拉取的上下文Key，下一次请求的时候带上
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGRESPONSE_H_
