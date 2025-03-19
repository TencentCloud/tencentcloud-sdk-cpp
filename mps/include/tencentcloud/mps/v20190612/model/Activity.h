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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ActivityPara.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编排原子任务
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原子任务类型：
<li>input: 起始节点</li>
<li>output：终止节点</li>
<li>action-trans：转码</li>
<li>action-samplesnapshot：采样截图</li>
<li>action-AIAnalysis: 分析</li>
<li>action-AIRecognition：识别</li>
<li>action-aiReview：审核</li>
<li>action-animated-graphics：转动图</li>
<li>action-image-sprite：雪碧图</li>
<li>action-snapshotByTimeOffset: 时间点截图</li>
<li>action-adaptive-substream：自适应码流</li>
<li>action-AIQualityControl：媒体质检</li>
<li>action-SmartSubtitles：智能字幕</li>



注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityType 原子任务类型：
<li>input: 起始节点</li>
<li>output：终止节点</li>
<li>action-trans：转码</li>
<li>action-samplesnapshot：采样截图</li>
<li>action-AIAnalysis: 分析</li>
<li>action-AIRecognition：识别</li>
<li>action-aiReview：审核</li>
<li>action-animated-graphics：转动图</li>
<li>action-image-sprite：雪碧图</li>
<li>action-snapshotByTimeOffset: 时间点截图</li>
<li>action-adaptive-substream：自适应码流</li>
<li>action-AIQualityControl：媒体质检</li>
<li>action-SmartSubtitles：智能字幕</li>



注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置原子任务类型：
<li>input: 起始节点</li>
<li>output：终止节点</li>
<li>action-trans：转码</li>
<li>action-samplesnapshot：采样截图</li>
<li>action-AIAnalysis: 分析</li>
<li>action-AIRecognition：识别</li>
<li>action-aiReview：审核</li>
<li>action-animated-graphics：转动图</li>
<li>action-image-sprite：雪碧图</li>
<li>action-snapshotByTimeOffset: 时间点截图</li>
<li>action-adaptive-substream：自适应码流</li>
<li>action-AIQualityControl：媒体质检</li>
<li>action-SmartSubtitles：智能字幕</li>



注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityType 原子任务类型：
<li>input: 起始节点</li>
<li>output：终止节点</li>
<li>action-trans：转码</li>
<li>action-samplesnapshot：采样截图</li>
<li>action-AIAnalysis: 分析</li>
<li>action-AIRecognition：识别</li>
<li>action-aiReview：审核</li>
<li>action-animated-graphics：转动图</li>
<li>action-image-sprite：雪碧图</li>
<li>action-snapshotByTimeOffset: 时间点截图</li>
<li>action-adaptive-substream：自适应码流</li>
<li>action-AIQualityControl：媒体质检</li>
<li>action-SmartSubtitles：智能字幕</li>



注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取后驱节点索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReardriveIndex 后驱节点索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReardriveIndex() const;

                    /**
                     * 设置后驱节点索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reardriveIndex 后驱节点索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReardriveIndex(const std::vector<int64_t>& _reardriveIndex);

                    /**
                     * 判断参数 ReardriveIndex 是否已赋值
                     * @return ReardriveIndex 是否已赋值
                     * 
                     */
                    bool ReardriveIndexHasBeenSet() const;

                    /**
                     * 获取原子任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityPara 原子任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ActivityPara GetActivityPara() const;

                    /**
                     * 设置原子任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityPara 原子任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityPara(const ActivityPara& _activityPara);

                    /**
                     * 判断参数 ActivityPara 是否已赋值
                     * @return ActivityPara 是否已赋值
                     * 
                     */
                    bool ActivityParaHasBeenSet() const;

                private:

                    /**
                     * 原子任务类型：
<li>input: 起始节点</li>
<li>output：终止节点</li>
<li>action-trans：转码</li>
<li>action-samplesnapshot：采样截图</li>
<li>action-AIAnalysis: 分析</li>
<li>action-AIRecognition：识别</li>
<li>action-aiReview：审核</li>
<li>action-animated-graphics：转动图</li>
<li>action-image-sprite：雪碧图</li>
<li>action-snapshotByTimeOffset: 时间点截图</li>
<li>action-adaptive-substream：自适应码流</li>
<li>action-AIQualityControl：媒体质检</li>
<li>action-SmartSubtitles：智能字幕</li>



注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 后驱节点索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_reardriveIndex;
                    bool m_reardriveIndexHasBeenSet;

                    /**
                     * 原子任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ActivityPara m_activityPara;
                    bool m_activityParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_
