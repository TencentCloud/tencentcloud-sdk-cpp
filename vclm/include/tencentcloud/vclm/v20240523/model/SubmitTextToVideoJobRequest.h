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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITTEXTTOVIDEOJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITTEXTTOVIDEOJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>
#include <tencentcloud/vclm/v20240523/model/MultiPrompt.h>
#include <tencentcloud/vclm/v20240523/model/CameraControl.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitTextToVideoJob请求参数结构体
                */
                class SubmitTextToVideoJobRequest : public AbstractModel
                {
                public:
                    SubmitTextToVideoJobRequest();
                    ~SubmitTextToVideoJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>正向文本提示词。不能超过2500个字符</p>
                     * @return Prompt <p>正向文本提示词。不能超过2500个字符</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>正向文本提示词。不能超过2500个字符</p>
                     * @param _prompt <p>正向文本提示词。不能超过2500个字符</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>模型名称。<br>v1.6：Kling-V1-6<br>v2.0：Kling-V2-Master<br>v2.5：Kling-V2-5-Turbo<br>v2.6：Kling-V2-6<br>v3.0：kling-v3</p>
                     * @return Model <p>模型名称。<br>v1.6：Kling-V1-6<br>v2.0：Kling-V2-Master<br>v2.5：Kling-V2-5-Turbo<br>v2.6：Kling-V2-6<br>v3.0：kling-v3</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称。<br>v1.6：Kling-V1-6<br>v2.0：Kling-V2-Master<br>v2.5：Kling-V2-5-Turbo<br>v2.6：Kling-V2-6<br>v3.0：kling-v3</p>
                     * @param _model <p>模型名称。<br>v1.6：Kling-V1-6<br>v2.0：Kling-V2-Master<br>v2.5：Kling-V2-5-Turbo<br>v2.6：Kling-V2-6<br>v3.0：kling-v3</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>负向文本提示词。不能超过2500个字符</p>
                     * @return NegativePrompt <p>负向文本提示词。不能超过2500个字符</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>负向文本提示词。不能超过2500个字符</p>
                     * @param _negativePrompt <p>负向文本提示词。不能超过2500个字符</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取<p>生成视频时长，单位s。默认值为5。<br>枚举值：3，4，5，6，7，8，9，10，11，12，13，14，15</p><p>不同模型支持时长不同</p><ul><li>模型v1.6、v2.0、v2.5、v2.6：支持5、10</li><li>模型v3.0：支持3～15s</li></ul>
                     * @return Duration <p>生成视频时长，单位s。默认值为5。<br>枚举值：3，4，5，6，7，8，9，10，11，12，13，14，15</p><p>不同模型支持时长不同</p><ul><li>模型v1.6、v2.0、v2.5、v2.6：支持5、10</li><li>模型v3.0：支持3～15s</li></ul>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>生成视频时长，单位s。默认值为5。<br>枚举值：3，4，5，6，7，8，9，10，11，12，13，14，15</p><p>不同模型支持时长不同</p><ul><li>模型v1.6、v2.0、v2.5、v2.6：支持5、10</li><li>模型v3.0：支持3～15s</li></ul>
                     * @param _duration <p>生成视频时长，单位s。默认值为5。<br>枚举值：3，4，5，6，7，8，9，10，11，12，13，14，15</p><p>不同模型支持时长不同</p><ul><li>模型v1.6、v2.0、v2.5、v2.6：支持5、10</li><li>模型v3.0：支持3～15s</li></ul>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的模式；</p><p>枚举值：std，pro</p><ul><li>其中std：标准模式（标准），基础模式，性价比高</li><li>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</li></ul><p>不同模型版本、视频模式支持范围不同</p><ul><li>v1.6：std、pro。</li><li>v2.0、v3.0：模型无需配置。</li><li>v2.5：首尾帧情况下支持pro。</li><li>v2.6：仅支持pro，选择v2.6模型时，默认自动生成高品质pro视频。</li></ul>
                     * @return Mode <p>生成视频的模式；</p><p>枚举值：std，pro</p><ul><li>其中std：标准模式（标准），基础模式，性价比高</li><li>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</li></ul><p>不同模型版本、视频模式支持范围不同</p><ul><li>v1.6：std、pro。</li><li>v2.0、v3.0：模型无需配置。</li><li>v2.5：首尾帧情况下支持pro。</li><li>v2.6：仅支持pro，选择v2.6模型时，默认自动生成高品质pro视频。</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>生成视频的模式；</p><p>枚举值：std，pro</p><ul><li>其中std：标准模式（标准），基础模式，性价比高</li><li>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</li></ul><p>不同模型版本、视频模式支持范围不同</p><ul><li>v1.6：std、pro。</li><li>v2.0、v3.0：模型无需配置。</li><li>v2.5：首尾帧情况下支持pro。</li><li>v2.6：仅支持pro，选择v2.6模型时，默认自动生成高品质pro视频。</li></ul>
                     * @param _mode <p>生成视频的模式；</p><p>枚举值：std，pro</p><ul><li>其中std：标准模式（标准），基础模式，性价比高</li><li>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</li></ul><p>不同模型版本、视频模式支持范围不同</p><ul><li>v1.6：std、pro。</li><li>v2.0、v3.0：模型无需配置。</li><li>v2.5：首尾帧情况下支持pro。</li><li>v2.6：仅支持pro，选择v2.6模型时，默认自动生成高品质pro视频。</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的自由度；值越大，模型自由度越小，与用户输入的提示词相关性越强。<br>取值范围：[0, 1]<br>v2.0、v2.5、v2.6 模型不支持当前参数<br>默认值：0.5。</p>
                     * @return CfgScale <p>生成视频的自由度；值越大，模型自由度越小，与用户输入的提示词相关性越强。<br>取值范围：[0, 1]<br>v2.0、v2.5、v2.6 模型不支持当前参数<br>默认值：0.5。</p>
                     * 
                     */
                    double GetCfgScale() const;

                    /**
                     * 设置<p>生成视频的自由度；值越大，模型自由度越小，与用户输入的提示词相关性越强。<br>取值范围：[0, 1]<br>v2.0、v2.5、v2.6 模型不支持当前参数<br>默认值：0.5。</p>
                     * @param _cfgScale <p>生成视频的自由度；值越大，模型自由度越小，与用户输入的提示词相关性越强。<br>取值范围：[0, 1]<br>v2.0、v2.5、v2.6 模型不支持当前参数<br>默认值：0.5。</p>
                     * 
                     */
                    void SetCfgScale(const double& _cfgScale);

                    /**
                     * 判断参数 CfgScale 是否已赋值
                     * @return CfgScale 是否已赋值
                     * 
                     */
                    bool CfgScaleHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的画面纵横比（宽:高）<br>枚举值：16:9, 9:16, 1:1<br>默认值：16:9</p>
                     * @return AspectRatio <p>生成视频的画面纵横比（宽:高）<br>枚举值：16:9, 9:16, 1:1<br>默认值：16:9</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>生成视频的画面纵横比（宽:高）<br>枚举值：16:9, 9:16, 1:1<br>默认值：16:9</p>
                     * @param _aspectRatio <p>生成视频的画面纵横比（宽:高）<br>枚举值：16:9, 9:16, 1:1<br>默认值：16:9</p>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取<p>生成视频时是否同时生成声音</p><ul><li>枚举值：on，off</li></ul><p>仅V2.6及后续版本模型支持当前参数，v2.6模型的std模式只能生成无声的视频</p>
                     * @return Sound <p>生成视频时是否同时生成声音</p><ul><li>枚举值：on，off</li></ul><p>仅V2.6及后续版本模型支持当前参数，v2.6模型的std模式只能生成无声的视频</p>
                     * 
                     */
                    std::string GetSound() const;

                    /**
                     * 设置<p>生成视频时是否同时生成声音</p><ul><li>枚举值：on，off</li></ul><p>仅V2.6及后续版本模型支持当前参数，v2.6模型的std模式只能生成无声的视频</p>
                     * @param _sound <p>生成视频时是否同时生成声音</p><ul><li>枚举值：on，off</li></ul><p>仅V2.6及后续版本模型支持当前参数，v2.6模型的std模式只能生成无声的视频</p>
                     * 
                     */
                    void SetSound(const std::string& _sound);

                    /**
                     * 判断参数 Sound 是否已赋值
                     * @return Sound 是否已赋值
                     * 
                     */
                    bool SoundHasBeenSet() const;

                    /**
                     * 获取<p>为生成视频添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * @return LogoAdd <p>为生成视频添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成视频添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * @param _logoAdd <p>为生成视频添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取<p>标识内容设置。<br>默认在生成视频的右下角添加“视频由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * @return LogoParam <p>标识内容设置。<br>默认在生成视频的右下角添加“视频由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>标识内容设置。<br>默认在生成视频的右下角添加“视频由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * @param _logoParam <p>标识内容设置。<br>默认在生成视频的右下角添加“视频由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                    /**
                     * 获取<p>是否生成多镜头视频</p><ul><li>当前参数为true时，prompt参数无效</li><li>当前参数为false时，shot_type参数及multi_prompt参数无效</li></ul>
                     * @return MultiShot <p>是否生成多镜头视频</p><ul><li>当前参数为true时，prompt参数无效</li><li>当前参数为false时，shot_type参数及multi_prompt参数无效</li></ul>
                     * 
                     */
                    bool GetMultiShot() const;

                    /**
                     * 设置<p>是否生成多镜头视频</p><ul><li>当前参数为true时，prompt参数无效</li><li>当前参数为false时，shot_type参数及multi_prompt参数无效</li></ul>
                     * @param _multiShot <p>是否生成多镜头视频</p><ul><li>当前参数为true时，prompt参数无效</li><li>当前参数为false时，shot_type参数及multi_prompt参数无效</li></ul>
                     * 
                     */
                    void SetMultiShot(const bool& _multiShot);

                    /**
                     * 判断参数 MultiShot 是否已赋值
                     * @return MultiShot 是否已赋值
                     * 
                     */
                    bool MultiShotHasBeenSet() const;

                    /**
                     * 获取<p>分镜方式</p><p>枚举值：customize，intelligence<br>当MultiShot参数为true时，当前参数必填</p>
                     * @return ShotType <p>分镜方式</p><p>枚举值：customize，intelligence<br>当MultiShot参数为true时，当前参数必填</p>
                     * 
                     */
                    std::string GetShotType() const;

                    /**
                     * 设置<p>分镜方式</p><p>枚举值：customize，intelligence<br>当MultiShot参数为true时，当前参数必填</p>
                     * @param _shotType <p>分镜方式</p><p>枚举值：customize，intelligence<br>当MultiShot参数为true时，当前参数必填</p>
                     * 
                     */
                    void SetShotType(const std::string& _shotType);

                    /**
                     * 判断参数 ShotType 是否已赋值
                     * @return ShotType 是否已赋值
                     * 
                     */
                    bool ShotTypeHasBeenSet() const;

                    /**
                     * 获取<p>各分镜提示词，可包含正向描述和负向描述</p><p>通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：</p><ul><li>最多支持6个分镜，最小支持1个分镜</li><li>每个分镜相关内容的最大长度不超过512</li><li>每个分镜的时长不大于当前任务的总时长，不小于1</li><li>所有分镜的时长之和等于当前任务的总时长</li><li>当MultiShot参数为true且ShotType参数为customize时，当前参数不得为空<br>用key:value承载，如下：<pre><code> &quot;MultiPrompt&quot;:[              {                &quot;Index&quot;:int,              &quot;Prompt&quot;: &quot;string&quot;,              &quot;Duration&quot;: &quot;5&quot;            }  ]</code></pre></li></ul>
                     * @return MultiPrompt <p>各分镜提示词，可包含正向描述和负向描述</p><p>通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：</p><ul><li>最多支持6个分镜，最小支持1个分镜</li><li>每个分镜相关内容的最大长度不超过512</li><li>每个分镜的时长不大于当前任务的总时长，不小于1</li><li>所有分镜的时长之和等于当前任务的总时长</li><li>当MultiShot参数为true且ShotType参数为customize时，当前参数不得为空<br>用key:value承载，如下：<pre><code> &quot;MultiPrompt&quot;:[              {                &quot;Index&quot;:int,              &quot;Prompt&quot;: &quot;string&quot;,              &quot;Duration&quot;: &quot;5&quot;            }  ]</code></pre></li></ul>
                     * 
                     */
                    std::vector<MultiPrompt> GetMultiPrompt() const;

                    /**
                     * 设置<p>各分镜提示词，可包含正向描述和负向描述</p><p>通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：</p><ul><li>最多支持6个分镜，最小支持1个分镜</li><li>每个分镜相关内容的最大长度不超过512</li><li>每个分镜的时长不大于当前任务的总时长，不小于1</li><li>所有分镜的时长之和等于当前任务的总时长</li><li>当MultiShot参数为true且ShotType参数为customize时，当前参数不得为空<br>用key:value承载，如下：<pre><code> &quot;MultiPrompt&quot;:[              {                &quot;Index&quot;:int,              &quot;Prompt&quot;: &quot;string&quot;,              &quot;Duration&quot;: &quot;5&quot;            }  ]</code></pre></li></ul>
                     * @param _multiPrompt <p>各分镜提示词，可包含正向描述和负向描述</p><p>通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：</p><ul><li>最多支持6个分镜，最小支持1个分镜</li><li>每个分镜相关内容的最大长度不超过512</li><li>每个分镜的时长不大于当前任务的总时长，不小于1</li><li>所有分镜的时长之和等于当前任务的总时长</li><li>当MultiShot参数为true且ShotType参数为customize时，当前参数不得为空<br>用key:value承载，如下：<pre><code> &quot;MultiPrompt&quot;:[              {                &quot;Index&quot;:int,              &quot;Prompt&quot;: &quot;string&quot;,              &quot;Duration&quot;: &quot;5&quot;            }  ]</code></pre></li></ul>
                     * 
                     */
                    void SetMultiPrompt(const std::vector<MultiPrompt>& _multiPrompt);

                    /**
                     * 判断参数 MultiPrompt 是否已赋值
                     * @return MultiPrompt 是否已赋值
                     * 
                     */
                    bool MultiPromptHasBeenSet() const;

                    /**
                     * 获取<p>控制摄像机运动的协议（如未指定，模型将根据输入的文本/图片进行智能匹配）</p>
                     * @return CameraControl <p>控制摄像机运动的协议（如未指定，模型将根据输入的文本/图片进行智能匹配）</p>
                     * 
                     */
                    CameraControl GetCameraControl() const;

                    /**
                     * 设置<p>控制摄像机运动的协议（如未指定，模型将根据输入的文本/图片进行智能匹配）</p>
                     * @param _cameraControl <p>控制摄像机运动的协议（如未指定，模型将根据输入的文本/图片进行智能匹配）</p>
                     * 
                     */
                    void SetCameraControl(const CameraControl& _cameraControl);

                    /**
                     * 判断参数 CameraControl 是否已赋值
                     * @return CameraControl 是否已赋值
                     * 
                     */
                    bool CameraControlHasBeenSet() const;

                    /**
                     * 获取<p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * @return CallbackUrl <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * @param _callbackUrl <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * <p>正向文本提示词。不能超过2500个字符</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>模型名称。<br>v1.6：Kling-V1-6<br>v2.0：Kling-V2-Master<br>v2.5：Kling-V2-5-Turbo<br>v2.6：Kling-V2-6<br>v3.0：kling-v3</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>负向文本提示词。不能超过2500个字符</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>生成视频时长，单位s。默认值为5。<br>枚举值：3，4，5，6，7，8，9，10，11，12，13，14，15</p><p>不同模型支持时长不同</p><ul><li>模型v1.6、v2.0、v2.5、v2.6：支持5、10</li><li>模型v3.0：支持3～15s</li></ul>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>生成视频的模式；</p><p>枚举值：std，pro</p><ul><li>其中std：标准模式（标准），基础模式，性价比高</li><li>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</li></ul><p>不同模型版本、视频模式支持范围不同</p><ul><li>v1.6：std、pro。</li><li>v2.0、v3.0：模型无需配置。</li><li>v2.5：首尾帧情况下支持pro。</li><li>v2.6：仅支持pro，选择v2.6模型时，默认自动生成高品质pro视频。</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>生成视频的自由度；值越大，模型自由度越小，与用户输入的提示词相关性越强。<br>取值范围：[0, 1]<br>v2.0、v2.5、v2.6 模型不支持当前参数<br>默认值：0.5。</p>
                     */
                    double m_cfgScale;
                    bool m_cfgScaleHasBeenSet;

                    /**
                     * <p>生成视频的画面纵横比（宽:高）<br>枚举值：16:9, 9:16, 1:1<br>默认值：16:9</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>生成视频时是否同时生成声音</p><ul><li>枚举值：on，off</li></ul><p>仅V2.6及后续版本模型支持当前参数，v2.6模型的std模式只能生成无声的视频</p>
                     */
                    std::string m_sound;
                    bool m_soundHasBeenSet;

                    /**
                     * <p>为生成视频添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成视频的右下角添加“视频由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * <p>是否生成多镜头视频</p><ul><li>当前参数为true时，prompt参数无效</li><li>当前参数为false时，shot_type参数及multi_prompt参数无效</li></ul>
                     */
                    bool m_multiShot;
                    bool m_multiShotHasBeenSet;

                    /**
                     * <p>分镜方式</p><p>枚举值：customize，intelligence<br>当MultiShot参数为true时，当前参数必填</p>
                     */
                    std::string m_shotType;
                    bool m_shotTypeHasBeenSet;

                    /**
                     * <p>各分镜提示词，可包含正向描述和负向描述</p><p>通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：</p><ul><li>最多支持6个分镜，最小支持1个分镜</li><li>每个分镜相关内容的最大长度不超过512</li><li>每个分镜的时长不大于当前任务的总时长，不小于1</li><li>所有分镜的时长之和等于当前任务的总时长</li><li>当MultiShot参数为true且ShotType参数为customize时，当前参数不得为空<br>用key:value承载，如下：<pre><code> &quot;MultiPrompt&quot;:[              {                &quot;Index&quot;:int,              &quot;Prompt&quot;: &quot;string&quot;,              &quot;Duration&quot;: &quot;5&quot;            }  ]</code></pre></li></ul>
                     */
                    std::vector<MultiPrompt> m_multiPrompt;
                    bool m_multiPromptHasBeenSet;

                    /**
                     * <p>控制摄像机运动的协议（如未指定，模型将根据输入的文本/图片进行智能匹配）</p>
                     */
                    CameraControl m_cameraControl;
                    bool m_cameraControlHasBeenSet;

                    /**
                     * <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITTEXTTOVIDEOJOBREQUEST_H_
