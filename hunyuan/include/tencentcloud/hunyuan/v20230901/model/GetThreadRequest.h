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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADREQUEST_H_

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
                * GetThread请求参数结构体
                */
                class GetThreadRequest : public AbstractModel
                {
                public:
                    GetThreadRequest();
                    ~GetThreadRequest() = default;
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

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_threadID;
                    bool m_threadIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADREQUEST_H_
