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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGDETAILSV2RESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGDETAILSV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRumLogDetailsV2返回参数结构体
                */
                class DescribeRumLogDetailsV2Response : public AbstractModel
                {
                public:
                    DescribeRumLogDetailsV2Response();
                    ~DescribeRumLogDetailsV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志明细JSON字符串，内部Result数组结构不变。CLS路径row_id为0，ts为毫秒精度但单位仍为纳秒，字符串字段完整。</p>
                     * @return Result <p>日志明细JSON字符串，内部Result数组结构不变。CLS路径row_id为0，ts为毫秒精度但单位仍为纳秒，字符串字段完整。</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>CLS续读令牌；ListOver为true时为空。仅CLS路径返回，可缺省。</p>
                     * @return Context <p>CLS续读令牌；ListOver为true时为空。仅CLS路径返回，可缺省。</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>当前条件的日志是否全部返回；预算短页不表示结束。仅CLS路径返回，可缺省。</p>
                     * @return ListOver <p>当前条件的日志是否全部返回；预算短页不表示结束。仅CLS路径返回，可缺省。</p>
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                private:

                    /**
                     * <p>日志明细JSON字符串，内部Result数组结构不变。CLS路径row_id为0，ts为毫秒精度但单位仍为纳秒，字符串字段完整。</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>CLS续读令牌；ListOver为true时为空。仅CLS路径返回，可缺省。</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>当前条件的日志是否全部返回；预算短页不表示结束。仅CLS路径返回，可缺省。</p>
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGDETAILSV2RESPONSE_H_
