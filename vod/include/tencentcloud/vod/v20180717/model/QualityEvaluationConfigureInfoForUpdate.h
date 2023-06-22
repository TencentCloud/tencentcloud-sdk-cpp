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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYEVALUATIONCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYEVALUATIONCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频画面质量评价的控制参数。
                */
                class QualityEvaluationConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    QualityEvaluationConfigureInfoForUpdate();
                    ~QualityEvaluationConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频画面质量评价开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * @return Switch 视频画面质量评价开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置视频画面质量评价开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * @param _switch 视频画面质量评价开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取视频画面质量评价过滤阈值，结果只返回低于该值的时间段。
                     * @return Score 视频画面质量评价过滤阈值，结果只返回低于该值的时间段。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置视频画面质量评价过滤阈值，结果只返回低于该值的时间段。
                     * @param _score 视频画面质量评价过滤阈值，结果只返回低于该值的时间段。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 视频画面质量评价开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 视频画面质量评价过滤阈值，结果只返回低于该值的时间段。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYEVALUATIONCONFIGUREINFOFORUPDATE_H_
