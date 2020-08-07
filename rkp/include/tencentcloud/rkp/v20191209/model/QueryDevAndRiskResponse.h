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

#ifndef TENCENTCLOUD_RKP_V20191209_MODEL_QUERYDEVANDRISKRESPONSE_H_
#define TENCENTCLOUD_RKP_V20191209_MODEL_QUERYDEVANDRISKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rkp/v20191209/model/DevInfoQ.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            namespace Model
            {
                /**
                * QueryDevAndRisk返回参数结构体
                */
                class QueryDevAndRiskResponse : public AbstractModel
                {
                public:
                    QueryDevAndRiskResponse();
                    ~QueryDevAndRiskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取是否查得
                     * @return Found 是否查得
                     */
                    int64_t GetFound() const;

                    /**
                     * 判断参数 Found 是否已赋值
                     * @return Found 是否已赋值
                     */
                    bool FoundHasBeenSet() const;

                    /**
                     * 获取匹配数量级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllCnt 匹配数量级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAllCnt() const;

                    /**
                     * 判断参数 AllCnt 是否已赋值
                     * @return AllCnt 是否已赋值
                     */
                    bool AllCntHasBeenSet() const;

                    /**
                     * 获取匹配到的设备信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Matches 匹配到的设备信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DevInfoQ> GetMatches() const;

                    /**
                     * 判断参数 Matches 是否已赋值
                     * @return Matches 是否已赋值
                     */
                    bool MatchesHasBeenSet() const;

                private:

                    /**
                     * 是否查得
                     */
                    int64_t m_found;
                    bool m_foundHasBeenSet;

                    /**
                     * 匹配数量级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_allCnt;
                    bool m_allCntHasBeenSet;

                    /**
                     * 匹配到的设备信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DevInfoQ> m_matches;
                    bool m_matchesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_MODEL_QUERYDEVANDRISKRESPONSE_H_
