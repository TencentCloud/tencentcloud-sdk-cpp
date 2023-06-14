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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYDEALERINFOLISTREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYDEALERINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryDealerInfoList请求参数结构体
                */
                class QueryDealerInfoListRequest : public AbstractModel
                {
                public:
                    QueryDealerInfoListRequest();
                    ~QueryDealerInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * @return Cursor 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * @param _cursor 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * @return Limit 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * @param _limit 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYDEALERINFOLISTREQUEST_H_
