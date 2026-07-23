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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectConfig.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectStrategy.h>
#include <tencentcloud/vod/v20180717/model/JitterConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/BlurConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AbnormalLightingConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/CrashScreenConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/BlackWhiteEdgeConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/NoiseConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/MosaicConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/QRCodeConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/QualityEvaluationConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/VoiceConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测模板详情。
                */
                class QualityInspectTemplateItem : public AbstractModel
                {
                public:
                    QualityInspectTemplateItem();
                    ~QualityInspectTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板 ID。</p>
                     * @return Definition <p>模板 ID。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>模板 ID。</p>
                     * @param _definition <p>模板 ID。</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>模板类型，可选值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * @return Type <p>模板类型，可选值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模板类型，可选值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * @param _type <p>模板类型，可选值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>模板名称。</p>
                     * @return Name <p>模板名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称。</p>
                     * @param _name <p>模板名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>模板描述。</p>
                     * @return Comment <p>模板描述。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>模板描述。</p>
                     * @param _comment <p>模板描述。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>音画质检测的配置参数。</p>
                     * @return Configs <p>音画质检测的配置参数。</p>
                     * 
                     */
                    std::vector<QualityInspectConfig> GetConfigs() const;

                    /**
                     * 设置<p>音画质检测的配置参数。</p>
                     * @param _configs <p>音画质检测的配置参数。</p>
                     * 
                     */
                    void SetConfigs(const std::vector<QualityInspectConfig>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取<p>音画质检测的抽检策略。</p>
                     * @return Strategy <p>音画质检测的抽检策略。</p>
                     * 
                     */
                    QualityInspectStrategy GetStrategy() const;

                    /**
                     * 设置<p>音画质检测的抽检策略。</p>
                     * @param _strategy <p>音画质检测的抽检策略。</p>
                     * 
                     */
                    void SetStrategy(const QualityInspectStrategy& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return CreateTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _createTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return UpdateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _updateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）截帧间隔，单位为秒。</p>
                     * @return ScreenshotInterval <p>（不推荐，使用 Configs 替代）截帧间隔，单位为秒。</p>
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）截帧间隔，单位为秒。</p>
                     * @param _screenshotInterval <p>（不推荐，使用 Configs 替代）截帧间隔，单位为秒。</p>
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面抖动重影检测的控制参数。</p>
                     * @return JitterConfigure <p>（不推荐，使用 Configs 替代）视频画面抖动重影检测的控制参数。</p>
                     * 
                     */
                    JitterConfigureInfo GetJitterConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面抖动重影检测的控制参数。</p>
                     * @param _jitterConfigure <p>（不推荐，使用 Configs 替代）视频画面抖动重影检测的控制参数。</p>
                     * 
                     */
                    void SetJitterConfigure(const JitterConfigureInfo& _jitterConfigure);

                    /**
                     * 判断参数 JitterConfigure 是否已赋值
                     * @return JitterConfigure 是否已赋值
                     * 
                     */
                    bool JitterConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面模糊检测的控制参数。</p>
                     * @return BlurConfigure <p>（不推荐，使用 Configs 替代）视频画面模糊检测的控制参数。</p>
                     * 
                     */
                    BlurConfigureInfo GetBlurConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面模糊检测的控制参数。</p>
                     * @param _blurConfigure <p>（不推荐，使用 Configs 替代）视频画面模糊检测的控制参数。</p>
                     * 
                     */
                    void SetBlurConfigure(const BlurConfigureInfo& _blurConfigure);

                    /**
                     * 判断参数 BlurConfigure 是否已赋值
                     * @return BlurConfigure 是否已赋值
                     * 
                     */
                    bool BlurConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面低光、过曝检测的控制参数。</p>
                     * @return AbnormalLightingConfigure <p>（不推荐，使用 Configs 替代）视频画面低光、过曝检测的控制参数。</p>
                     * 
                     */
                    AbnormalLightingConfigureInfo GetAbnormalLightingConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面低光、过曝检测的控制参数。</p>
                     * @param _abnormalLightingConfigure <p>（不推荐，使用 Configs 替代）视频画面低光、过曝检测的控制参数。</p>
                     * 
                     */
                    void SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfo& _abnormalLightingConfigure);

                    /**
                     * 判断参数 AbnormalLightingConfigure 是否已赋值
                     * @return AbnormalLightingConfigure 是否已赋值
                     * 
                     */
                    bool AbnormalLightingConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面花屏检测的控制参数。</p>
                     * @return CrashScreenConfigure <p>（不推荐，使用 Configs 替代）视频画面花屏检测的控制参数。</p>
                     * 
                     */
                    CrashScreenConfigureInfo GetCrashScreenConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面花屏检测的控制参数。</p>
                     * @param _crashScreenConfigure <p>（不推荐，使用 Configs 替代）视频画面花屏检测的控制参数。</p>
                     * 
                     */
                    void SetCrashScreenConfigure(const CrashScreenConfigureInfo& _crashScreenConfigure);

                    /**
                     * 判断参数 CrashScreenConfigure 是否已赋值
                     * @return CrashScreenConfigure 是否已赋值
                     * 
                     */
                    bool CrashScreenConfigureHasBeenSet() const;

                    /**
                     * 获取<p>视频画面黑边、白边、黑屏、白屏检测的控制参数。</p>
                     * @return BlackWhiteEdgeConfigure <p>视频画面黑边、白边、黑屏、白屏检测的控制参数。</p>
                     * 
                     */
                    BlackWhiteEdgeConfigureInfo GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置<p>视频画面黑边、白边、黑屏、白屏检测的控制参数。</p>
                     * @param _blackWhiteEdgeConfigure <p>视频画面黑边、白边、黑屏、白屏检测的控制参数。</p>
                     * 
                     */
                    void SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfo& _blackWhiteEdgeConfigure);

                    /**
                     * 判断参数 BlackWhiteEdgeConfigure 是否已赋值
                     * @return BlackWhiteEdgeConfigure 是否已赋值
                     * 
                     */
                    bool BlackWhiteEdgeConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面噪点检测的控制参数。</p>
                     * @return NoiseConfigure <p>（不推荐，使用 Configs 替代）视频画面噪点检测的控制参数。</p>
                     * 
                     */
                    NoiseConfigureInfo GetNoiseConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面噪点检测的控制参数。</p>
                     * @param _noiseConfigure <p>（不推荐，使用 Configs 替代）视频画面噪点检测的控制参数。</p>
                     * 
                     */
                    void SetNoiseConfigure(const NoiseConfigureInfo& _noiseConfigure);

                    /**
                     * 判断参数 NoiseConfigure 是否已赋值
                     * @return NoiseConfigure 是否已赋值
                     * 
                     */
                    bool NoiseConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面马赛克检测的控制参数。</p>
                     * @return MosaicConfigure <p>（不推荐，使用 Configs 替代）视频画面马赛克检测的控制参数。</p>
                     * 
                     */
                    MosaicConfigureInfo GetMosaicConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面马赛克检测的控制参数。</p>
                     * @param _mosaicConfigure <p>（不推荐，使用 Configs 替代）视频画面马赛克检测的控制参数。</p>
                     * 
                     */
                    void SetMosaicConfigure(const MosaicConfigureInfo& _mosaicConfigure);

                    /**
                     * 判断参数 MosaicConfigure 是否已赋值
                     * @return MosaicConfigure 是否已赋值
                     * 
                     */
                    bool MosaicConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面二维码检测的控制参数。</p>
                     * @return QRCodeConfigure <p>（不推荐，使用 Configs 替代）视频画面二维码检测的控制参数。</p>
                     * 
                     */
                    QRCodeConfigureInfo GetQRCodeConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面二维码检测的控制参数。</p>
                     * @param _qRCodeConfigure <p>（不推荐，使用 Configs 替代）视频画面二维码检测的控制参数。</p>
                     * 
                     */
                    void SetQRCodeConfigure(const QRCodeConfigureInfo& _qRCodeConfigure);

                    /**
                     * 判断参数 QRCodeConfigure 是否已赋值
                     * @return QRCodeConfigure 是否已赋值
                     * 
                     */
                    bool QRCodeConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）视频画面质量评价的控制参数。</p>
                     * @return QualityEvaluationConfigure <p>（不推荐，使用 Configs 替代）视频画面质量评价的控制参数。</p>
                     * 
                     */
                    QualityEvaluationConfigureInfo GetQualityEvaluationConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）视频画面质量评价的控制参数。</p>
                     * @param _qualityEvaluationConfigure <p>（不推荐，使用 Configs 替代）视频画面质量评价的控制参数。</p>
                     * 
                     */
                    void SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfo& _qualityEvaluationConfigure);

                    /**
                     * 判断参数 QualityEvaluationConfigure 是否已赋值
                     * @return QualityEvaluationConfigure 是否已赋值
                     * 
                     */
                    bool QualityEvaluationConfigureHasBeenSet() const;

                    /**
                     * 获取<p>（不推荐，使用 Configs 替代）音频（静音、低音、爆音）检测的控制参数。</p>
                     * @return VoiceConfigure <p>（不推荐，使用 Configs 替代）音频（静音、低音、爆音）检测的控制参数。</p>
                     * 
                     */
                    VoiceConfigureInfo GetVoiceConfigure() const;

                    /**
                     * 设置<p>（不推荐，使用 Configs 替代）音频（静音、低音、爆音）检测的控制参数。</p>
                     * @param _voiceConfigure <p>（不推荐，使用 Configs 替代）音频（静音、低音、爆音）检测的控制参数。</p>
                     * 
                     */
                    void SetVoiceConfigure(const VoiceConfigureInfo& _voiceConfigure);

                    /**
                     * 判断参数 VoiceConfigure 是否已赋值
                     * @return VoiceConfigure 是否已赋值
                     * 
                     */
                    bool VoiceConfigureHasBeenSet() const;

                private:

                    /**
                     * <p>模板 ID。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>模板类型，可选值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>模板名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模板描述。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>音画质检测的配置参数。</p>
                     */
                    std::vector<QualityInspectConfig> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * <p>音画质检测的抽检策略。</p>
                     */
                    QualityInspectStrategy m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）截帧间隔，单位为秒。</p>
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面抖动重影检测的控制参数。</p>
                     */
                    JitterConfigureInfo m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面模糊检测的控制参数。</p>
                     */
                    BlurConfigureInfo m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面低光、过曝检测的控制参数。</p>
                     */
                    AbnormalLightingConfigureInfo m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面花屏检测的控制参数。</p>
                     */
                    CrashScreenConfigureInfo m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * <p>视频画面黑边、白边、黑屏、白屏检测的控制参数。</p>
                     */
                    BlackWhiteEdgeConfigureInfo m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面噪点检测的控制参数。</p>
                     */
                    NoiseConfigureInfo m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面马赛克检测的控制参数。</p>
                     */
                    MosaicConfigureInfo m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面二维码检测的控制参数。</p>
                     */
                    QRCodeConfigureInfo m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）视频画面质量评价的控制参数。</p>
                     */
                    QualityEvaluationConfigureInfo m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                    /**
                     * <p>（不推荐，使用 Configs 替代）音频（静音、低音、爆音）检测的控制参数。</p>
                     */
                    VoiceConfigureInfo m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_
