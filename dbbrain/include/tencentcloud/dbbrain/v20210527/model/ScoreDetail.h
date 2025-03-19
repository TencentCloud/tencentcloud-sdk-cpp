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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREDETAIL_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ScoreItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 扣分详情。
                */
                class ScoreDetail : public AbstractModel
                {
                public:
                    ScoreDetail();
                    ~ScoreDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扣分项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * @return IssueType 扣分项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * 
                     */
                    std::string GetIssueType() const;

                    /**
                     * 设置扣分项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * @param _issueType 扣分项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * 
                     */
                    void SetIssueType(const std::string& _issueType);

                    /**
                     * 判断参数 IssueType 是否已赋值
                     * @return IssueType 是否已赋值
                     * 
                     */
                    bool IssueTypeHasBeenSet() const;

                    /**
                     * 获取扣分总分。
                     * @return ScoreLost 扣分总分。
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置扣分总分。
                     * @param _scoreLost 扣分总分。
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                    /**
                     * 获取扣分总分上限。
                     * @return ScoreLostMax 扣分总分上限。
                     * 
                     */
                    int64_t GetScoreLostMax() const;

                    /**
                     * 设置扣分总分上限。
                     * @param _scoreLostMax 扣分总分上限。
                     * 
                     */
                    void SetScoreLostMax(const int64_t& _scoreLostMax);

                    /**
                     * 判断参数 ScoreLostMax 是否已赋值
                     * @return ScoreLostMax 是否已赋值
                     * 
                     */
                    bool ScoreLostMaxHasBeenSet() const;

                    /**
                     * 获取扣分项列表。
                     * @return Items 扣分项列表。
                     * 
                     */
                    std::vector<ScoreItem> GetItems() const;

                    /**
                     * 设置扣分项列表。
                     * @param _items 扣分项列表。
                     * 
                     */
                    void SetItems(const std::vector<ScoreItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 扣分项分类，取值包括：可用性、可维护性、性能及可靠性。
                     */
                    std::string m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * 扣分总分。
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                    /**
                     * 扣分总分上限。
                     */
                    int64_t m_scoreLostMax;
                    bool m_scoreLostMaxHasBeenSet;

                    /**
                     * 扣分项列表。
                     */
                    std::vector<ScoreItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREDETAIL_H_
