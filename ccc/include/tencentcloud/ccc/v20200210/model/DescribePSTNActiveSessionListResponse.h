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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPSTNACTIVESESSIONLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPSTNACTIVESESSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/PSTNSessionInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribePSTNActiveSessionList返回参数结构体
                */
                class DescribePSTNActiveSessionListResponse : public AbstractModel
                {
                public:
                    DescribePSTNActiveSessionListResponse();
                    ~DescribePSTNActiveSessionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表总条数
                     * @return Total 列表总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取列表内容
                     * @return Sessions 列表内容
                     * 
                     */
                    std::vector<PSTNSessionInfo> GetSessions() const;

                    /**
                     * 判断参数 Sessions 是否已赋值
                     * @return Sessions 是否已赋值
                     * 
                     */
                    bool SessionsHasBeenSet() const;

                private:

                    /**
                     * 列表总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 列表内容
                     */
                    std::vector<PSTNSessionInfo> m_sessions;
                    bool m_sessionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPSTNACTIVESESSIONLISTRESPONSE_H_
