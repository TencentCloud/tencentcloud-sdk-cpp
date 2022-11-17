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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALCPTRANKRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALCPTRANKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/CptIssueRank.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetCredentialCptRank返回参数结构体
                */
                class GetCredentialCptRankResponse : public AbstractModel
                {
                public:
                    GetCredentialCptRankResponse();
                    ~GetCredentialCptRankResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Rank集合
                     * @return RankIssueResult Rank集合
                     */
                    std::vector<CptIssueRank> GetRankIssueResult() const;

                    /**
                     * 判断参数 RankIssueResult 是否已赋值
                     * @return RankIssueResult 是否已赋值
                     */
                    bool RankIssueResultHasBeenSet() const;

                private:

                    /**
                     * Rank集合
                     */
                    std::vector<CptIssueRank> m_rankIssueResult;
                    bool m_rankIssueResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALCPTRANKRESPONSE_H_
