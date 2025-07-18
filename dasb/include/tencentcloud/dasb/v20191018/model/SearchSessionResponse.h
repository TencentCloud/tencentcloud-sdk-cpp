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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHSESSIONRESPONSE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/SessionResult.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * SearchSession返回参数结构体
                */
                class SearchSessionResponse : public AbstractModel
                {
                public:
                    SearchSessionResponse();
                    ~SearchSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录数
                     * @return TotalCount 记录数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取会话信息列表
                     * @return SessionSet 会话信息列表
                     * 
                     */
                    std::vector<SessionResult> GetSessionSet() const;

                    /**
                     * 判断参数 SessionSet 是否已赋值
                     * @return SessionSet 是否已赋值
                     * 
                     */
                    bool SessionSetHasBeenSet() const;

                private:

                    /**
                     * 记录数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 会话信息列表
                     */
                    std::vector<SessionResult> m_sessionSet;
                    bool m_sessionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHSESSIONRESPONSE_H_
