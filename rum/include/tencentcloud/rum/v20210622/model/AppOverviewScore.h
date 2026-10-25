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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_APPOVERVIEWSCORE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_APPOVERVIEWSCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/OverviewScoreItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 单应用总览评分
                */
                class AppOverviewScore : public AbstractModel
                {
                public:
                    AppOverviewScore();
                    ~AppOverviewScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>端</p>
                     * @return Platform <p>端</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>端</p>
                     * @param _platform <p>端</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>加权总分，全部缺失时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalScore <p>加权总分，全部缺失时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalScore() const;

                    /**
                     * 设置<p>加权总分，全部缺失时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalScore <p>加权总分，全部缺失时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalScore(const double& _totalScore);

                    /**
                     * 判断参数 TotalScore 是否已赋值
                     * @return TotalScore 是否已赋值
                     * 
                     */
                    bool TotalScoreHasBeenSet() const;

                    /**
                     * 获取<p>计分项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items <p>计分项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OverviewScoreItem> GetItems() const;

                    /**
                     * 设置<p>计分项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items <p>计分项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<OverviewScoreItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>端</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>加权总分，全部缺失时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalScore;
                    bool m_totalScoreHasBeenSet;

                    /**
                     * <p>计分项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OverviewScoreItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_APPOVERVIEWSCORE_H_
