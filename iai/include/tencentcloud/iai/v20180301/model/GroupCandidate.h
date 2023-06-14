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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_GROUPCANDIDATE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_GROUPCANDIDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/Candidate.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 分组识别结果Item
                */
                class GroupCandidate : public AbstractModel
                {
                public:
                    GroupCandidate();
                    ~GroupCandidate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员库ID 。
                     * @return GroupId 人员库ID 。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库ID 。
                     * @param _groupId 人员库ID 。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取识别出的最相似候选人。
                     * @return Candidates 识别出的最相似候选人。
                     * 
                     */
                    std::vector<Candidate> GetCandidates() const;

                    /**
                     * 设置识别出的最相似候选人。
                     * @param _candidates 识别出的最相似候选人。
                     * 
                     */
                    void SetCandidates(const std::vector<Candidate>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                private:

                    /**
                     * 人员库ID 。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 识别出的最相似候选人。
                     */
                    std::vector<Candidate> m_candidates;
                    bool m_candidatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GROUPCANDIDATE_H_
