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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 诊断扣分项。
                */
                class ScoreItem : public AbstractModel
                {
                public:
                    ScoreItem();
                    ~ScoreItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常诊断项名称。
                     * @return DiagItem 异常诊断项名称。
                     * 
                     */
                    std::string GetDiagItem() const;

                    /**
                     * 设置异常诊断项名称。
                     * @param _diagItem 异常诊断项名称。
                     * 
                     */
                    void SetDiagItem(const std::string& _diagItem);

                    /**
                     * 判断参数 DiagItem 是否已赋值
                     * @return DiagItem 是否已赋值
                     * 
                     */
                    bool DiagItemHasBeenSet() const;

                    /**
                     * 获取诊断项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * @return IssueType 诊断项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * 
                     */
                    std::string GetIssueType() const;

                    /**
                     * 设置诊断项分类，取值包括：可用性、可维护性、性能及可靠性。
                     * @param _issueType 诊断项分类，取值包括：可用性、可维护性、性能及可靠性。
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
                     * 获取健康等级，取值包括：信息、提示、告警、严重、致命。
                     * @return TopSeverity 健康等级，取值包括：信息、提示、告警、严重、致命。
                     * 
                     */
                    std::string GetTopSeverity() const;

                    /**
                     * 设置健康等级，取值包括：信息、提示、告警、严重、致命。
                     * @param _topSeverity 健康等级，取值包括：信息、提示、告警、严重、致命。
                     * 
                     */
                    void SetTopSeverity(const std::string& _topSeverity);

                    /**
                     * 判断参数 TopSeverity 是否已赋值
                     * @return TopSeverity 是否已赋值
                     * 
                     */
                    bool TopSeverityHasBeenSet() const;

                    /**
                     * 获取该异常诊断项出现次数。
                     * @return Count 该异常诊断项出现次数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该异常诊断项出现次数。
                     * @param _count 该异常诊断项出现次数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取扣分分数。
                     * @return ScoreLost 扣分分数。
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置扣分分数。
                     * @param _scoreLost 扣分分数。
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                private:

                    /**
                     * 异常诊断项名称。
                     */
                    std::string m_diagItem;
                    bool m_diagItemHasBeenSet;

                    /**
                     * 诊断项分类，取值包括：可用性、可维护性、性能及可靠性。
                     */
                    std::string m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * 健康等级，取值包括：信息、提示、告警、严重、致命。
                     */
                    std::string m_topSeverity;
                    bool m_topSeverityHasBeenSet;

                    /**
                     * 该异常诊断项出现次数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 扣分分数。
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREITEM_H_
