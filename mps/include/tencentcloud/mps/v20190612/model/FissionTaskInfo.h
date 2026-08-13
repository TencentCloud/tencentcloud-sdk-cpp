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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FISSIONTASKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FISSIONTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CustomModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 商品裂变任务信息
                */
                class FissionTaskInfo : public AbstractModel
                {
                public:
                    FissionTaskInfo();
                    ~FissionTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频输出时长</p><p>取值范围：[4, 15]</p><p>单位：秒</p><p>默认值：15</p>
                     * @return Duration <p>视频输出时长</p><p>取值范围：[4, 15]</p><p>单位：秒</p><p>默认值：15</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>视频输出时长</p><p>取值范围：[4, 15]</p><p>单位：秒</p><p>默认值：15</p>
                     * @param _duration <p>视频输出时长</p><p>取值范围：[4, 15]</p><p>单位：秒</p><p>默认值：15</p>
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>模型档位</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 旗舰版</li></ul>
                     * @return ModelTier <p>模型档位</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 旗舰版</li></ul>
                     * 
                     */
                    std::string GetModelTier() const;

                    /**
                     * 设置<p>模型档位</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 旗舰版</li></ul>
                     * @param _modelTier <p>模型档位</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 旗舰版</li></ul>
                     * 
                     */
                    void SetModelTier(const std::string& _modelTier);

                    /**
                     * 判断参数 ModelTier 是否已赋值
                     * @return ModelTier 是否已赋值
                     * 
                     */
                    bool ModelTierHasBeenSet() const;

                    /**
                     * 获取<p>视频画面比例</p><p>枚举值：</p><ul><li>9:16： 9:16</li><li>16:9： 16:9</li><li>1:1： 1:1</li><li>3:4： 3:4</li><li>4:3： 4:3</li></ul>
                     * @return Ratio <p>视频画面比例</p><p>枚举值：</p><ul><li>9:16： 9:16</li><li>16:9： 16:9</li><li>1:1： 1:1</li><li>3:4： 3:4</li><li>4:3： 4:3</li></ul>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>视频画面比例</p><p>枚举值：</p><ul><li>9:16： 9:16</li><li>16:9： 16:9</li><li>1:1： 1:1</li><li>3:4： 3:4</li><li>4:3： 4:3</li></ul>
                     * @param _ratio <p>视频画面比例</p><p>枚举值：</p><ul><li>9:16： 9:16</li><li>16:9： 16:9</li><li>1:1： 1:1</li><li>3:4： 3:4</li><li>4:3： 4:3</li></ul>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>输出分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li><li>2k： 2k</li><li>4k： 4k</li></ul>
                     * @return Resolution <p>输出分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li><li>2k： 2k</li><li>4k： 4k</li></ul>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>输出分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li><li>2k： 2k</li><li>4k： 4k</li></ul>
                     * @param _resolution <p>输出分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li><li>2k： 2k</li><li>4k： 4k</li></ul>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>目标市场</p><p>枚举值：</p><ul><li>north_america： 北美</li><li>europe： 欧洲</li><li>china： 中国</li><li>japan： 日本</li><li>korea： 韩国</li><li>southeast_asia： 东南亚</li><li>brazil： 巴西</li><li>global： 全球</li><li>other： 其他</li></ul><p>影响默认出镜模特族裔与本地化风格；未指定 CustomModel 时按市场自动决定人种</p>
                     * @return Market <p>目标市场</p><p>枚举值：</p><ul><li>north_america： 北美</li><li>europe： 欧洲</li><li>china： 中国</li><li>japan： 日本</li><li>korea： 韩国</li><li>southeast_asia： 东南亚</li><li>brazil： 巴西</li><li>global： 全球</li><li>other： 其他</li></ul><p>影响默认出镜模特族裔与本地化风格；未指定 CustomModel 时按市场自动决定人种</p>
                     * 
                     */
                    std::string GetMarket() const;

                    /**
                     * 设置<p>目标市场</p><p>枚举值：</p><ul><li>north_america： 北美</li><li>europe： 欧洲</li><li>china： 中国</li><li>japan： 日本</li><li>korea： 韩国</li><li>southeast_asia： 东南亚</li><li>brazil： 巴西</li><li>global： 全球</li><li>other： 其他</li></ul><p>影响默认出镜模特族裔与本地化风格；未指定 CustomModel 时按市场自动决定人种</p>
                     * @param _market <p>目标市场</p><p>枚举值：</p><ul><li>north_america： 北美</li><li>europe： 欧洲</li><li>china： 中国</li><li>japan： 日本</li><li>korea： 韩国</li><li>southeast_asia： 东南亚</li><li>brazil： 巴西</li><li>global： 全球</li><li>other： 其他</li></ul><p>影响默认出镜模特族裔与本地化风格；未指定 CustomModel 时按市场自动决定人种</p>
                     * 
                     */
                    void SetMarket(const std::string& _market);

                    /**
                     * 判断参数 Market 是否已赋值
                     * @return Market 是否已赋值
                     * 
                     */
                    bool MarketHasBeenSet() const;

                    /**
                     * 获取<p>口播/字幕语言</p><p>枚举值：</p><ul><li>english： 英文</li><li>chinese： 中文</li><li>japanese： 日语</li><li>korean： 韩语</li><li>spanish： 西班牙语</li><li>portuguese： 葡萄牙语</li><li>music_only： 纯音乐无口播</li></ul>
                     * @return Language <p>口播/字幕语言</p><p>枚举值：</p><ul><li>english： 英文</li><li>chinese： 中文</li><li>japanese： 日语</li><li>korean： 韩语</li><li>spanish： 西班牙语</li><li>portuguese： 葡萄牙语</li><li>music_only： 纯音乐无口播</li></ul>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>口播/字幕语言</p><p>枚举值：</p><ul><li>english： 英文</li><li>chinese： 中文</li><li>japanese： 日语</li><li>korean： 韩语</li><li>spanish： 西班牙语</li><li>portuguese： 葡萄牙语</li><li>music_only： 纯音乐无口播</li></ul>
                     * @param _language <p>口播/字幕语言</p><p>枚举值：</p><ul><li>english： 英文</li><li>chinese： 中文</li><li>japanese： 日语</li><li>korean： 韩语</li><li>spanish： 西班牙语</li><li>portuguese： 葡萄牙语</li><li>music_only： 纯音乐无口播</li></ul>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>视频类型</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示（纯商品、无人声）</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * @return VideoType <p>视频类型</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示（纯商品、无人声）</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * 
                     */
                    std::string GetVideoType() const;

                    /**
                     * 设置<p>视频类型</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示（纯商品、无人声）</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * @param _videoType <p>视频类型</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示（纯商品、无人声）</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * 
                     */
                    void SetVideoType(const std::string& _videoType);

                    /**
                     * 判断参数 VideoType 是否已赋值
                     * @return VideoType 是否已赋值
                     * 
                     */
                    bool VideoTypeHasBeenSet() const;

                    /**
                     * 获取<p>裂变数量</p><p>取值范围：[0, 1]</p><p>单位：个</p>
                     * @return SplitCount <p>裂变数量</p><p>取值范围：[0, 1]</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetSplitCount() const;

                    /**
                     * 设置<p>裂变数量</p><p>取值范围：[0, 1]</p><p>单位：个</p>
                     * @param _splitCount <p>裂变数量</p><p>取值范围：[0, 1]</p><p>单位：个</p>
                     * 
                     */
                    void SetSplitCount(const uint64_t& _splitCount);

                    /**
                     * 判断参数 SplitCount 是否已赋值
                     * @return SplitCount 是否已赋值
                     * 
                     */
                    bool SplitCountHasBeenSet() const;

                    /**
                     * 获取<p>定制出镜模特</p>
                     * @return CustomModel <p>定制出镜模特</p>
                     * 
                     */
                    CustomModel GetCustomModel() const;

                    /**
                     * 设置<p>定制出镜模特</p>
                     * @param _customModel <p>定制出镜模特</p>
                     * 
                     */
                    void SetCustomModel(const CustomModel& _customModel);

                    /**
                     * 判断参数 CustomModel 是否已赋值
                     * @return CustomModel 是否已赋值
                     * 
                     */
                    bool CustomModelHasBeenSet() const;

                private:

                    /**
                     * <p>视频输出时长</p><p>取值范围：[4, 15]</p><p>单位：秒</p><p>默认值：15</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>模型档位</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 旗舰版</li></ul>
                     */
                    std::string m_modelTier;
                    bool m_modelTierHasBeenSet;

                    /**
                     * <p>视频画面比例</p><p>枚举值：</p><ul><li>9:16： 9:16</li><li>16:9： 16:9</li><li>1:1： 1:1</li><li>3:4： 3:4</li><li>4:3： 4:3</li></ul>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>输出分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li><li>2k： 2k</li><li>4k： 4k</li></ul>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>目标市场</p><p>枚举值：</p><ul><li>north_america： 北美</li><li>europe： 欧洲</li><li>china： 中国</li><li>japan： 日本</li><li>korea： 韩国</li><li>southeast_asia： 东南亚</li><li>brazil： 巴西</li><li>global： 全球</li><li>other： 其他</li></ul><p>影响默认出镜模特族裔与本地化风格；未指定 CustomModel 时按市场自动决定人种</p>
                     */
                    std::string m_market;
                    bool m_marketHasBeenSet;

                    /**
                     * <p>口播/字幕语言</p><p>枚举值：</p><ul><li>english： 英文</li><li>chinese： 中文</li><li>japanese： 日语</li><li>korean： 韩语</li><li>spanish： 西班牙语</li><li>portuguese： 葡萄牙语</li><li>music_only： 纯音乐无口播</li></ul>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>视频类型</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示（纯商品、无人声）</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     */
                    std::string m_videoType;
                    bool m_videoTypeHasBeenSet;

                    /**
                     * <p>裂变数量</p><p>取值范围：[0, 1]</p><p>单位：个</p>
                     */
                    uint64_t m_splitCount;
                    bool m_splitCountHasBeenSet;

                    /**
                     * <p>定制出镜模特</p>
                     */
                    CustomModel m_customModel;
                    bool m_customModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FISSIONTASKINFO_H_
