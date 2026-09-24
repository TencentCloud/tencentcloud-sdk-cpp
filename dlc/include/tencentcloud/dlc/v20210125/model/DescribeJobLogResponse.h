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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBLOGRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ClsLogEntry.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeJobLog返回参数结构体
                */
                class DescribeJobLogResponse : public AbstractModel
                {
                public:
                    DescribeJobLogResponse();
                    ~DescribeJobLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志行数据。</p>
                     * @return Lines <p>日志行数据。</p>
                     * 
                     */
                    std::vector<std::string> GetLines() const;

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                    /**
                     * 获取<p>下一页游标（不透明令牌，原样透传回请求即可；无更多日志时不返回）。</p>
                     * @return Cursor <p>下一页游标（不透明令牌，原样透传回请求即可；无更多日志时不返回）。</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取<p>是否还有更多日志。</p>
                     * @return HasMore <p>是否还有更多日志。</p>
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                    /**
                     * 获取<p>日志条目列表。</p>
                     * @return Results <p>日志条目列表。</p>
                     * 
                     */
                    std::vector<ClsLogEntry> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * <p>日志行数据。</p>
                     */
                    std::vector<std::string> m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * <p>下一页游标（不透明令牌，原样透传回请求即可；无更多日志时不返回）。</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>是否还有更多日志。</p>
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                    /**
                     * <p>日志条目列表。</p>
                     */
                    std::vector<ClsLogEntry> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBLOGRESPONSE_H_
