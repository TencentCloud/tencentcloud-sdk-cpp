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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADMESSAGELISTREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADMESSAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GetThreadMessageList请求参数结构体
                */
                class GetThreadMessageListRequest : public AbstractModel
                {
                public:
                    GetThreadMessageListRequest();
                    ~GetThreadMessageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话 ID
                     * @return ThreadID 会话 ID
                     * 
                     */
                    std::string GetThreadID() const;

                    /**
                     * 设置会话 ID
                     * @param _threadID 会话 ID
                     * 
                     */
                    void SetThreadID(const std::string& _threadID);

                    /**
                     * 判断参数 ThreadID 是否已赋值
                     * @return ThreadID 是否已赋值
                     * 
                     */
                    bool ThreadIDHasBeenSet() const;

                    /**
                     * 获取返回的消息条数，1 - 100 条
                     * @return Limit 返回的消息条数，1 - 100 条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回的消息条数，1 - 100 条
                     * @param _limit 返回的消息条数，1 - 100 条
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序方式，按创建时间升序（asc）或降序（desc），默认为 desc
                     * @return Order 排序方式，按创建时间升序（asc）或降序（desc），默认为 desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，按创建时间升序（asc）或降序（desc），默认为 desc
                     * @param _order 排序方式，按创建时间升序（asc）或降序（desc），默认为 desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_threadID;
                    bool m_threadIDHasBeenSet;

                    /**
                     * 返回的消息条数，1 - 100 条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式，按创建时间升序（asc）或降序（desc），默认为 desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADMESSAGELISTREQUEST_H_
