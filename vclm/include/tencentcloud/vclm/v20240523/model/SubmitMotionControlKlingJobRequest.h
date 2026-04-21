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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITMOTIONCONTROLKLINGJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITMOTIONCONTROLKLINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/Element.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitMotionControlKlingJob请求参数结构体
                */
                class SubmitMotionControlKlingJobRequest : public AbstractModel
                {
                public:
                    SubmitMotionControlKlingJobRequest();
                    ~SubmitMotionControlKlingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称  枚举值：kling-v2-6, kling-v3。</p>
                     * @return Model <p>模型名称  枚举值：kling-v2-6, kling-v3。</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称  枚举值：kling-v2-6, kling-v3。</p>
                     * @param _model <p>模型名称  枚举值：kling-v2-6, kling-v3。</p>
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
                     * 获取<p>文本提示词，可包含正向描述和负向描述</p><p>可将提示词模板化来满足不同的视频生成需求</p><p>不能超过2500个字</p>
                     * @return Prompt <p>文本提示词，可包含正向描述和负向描述</p><p>可将提示词模板化来满足不同的视频生成需求</p><p>不能超过2500个字</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>文本提示词，可包含正向描述和负向描述</p><p>可将提示词模板化来满足不同的视频生成需求</p><p>不能超过2500个字</p>
                     * @param _prompt <p>文本提示词，可包含正向描述和负向描述</p><p>可将提示词模板化来满足不同的视频生成需求</p><p>不能超过2500个字</p>
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
                     * 获取
                     * @return ExternalTaskId 
                     * 
                     */
                    std::string GetExternalTaskId() const;

                    /**
                     * 设置
                     * @param _externalTaskId 
                     * 
                     */
                    void SetExternalTaskId(const std::string& _externalTaskId);

                    /**
                     * 判断参数 ExternalTaskId 是否已赋值
                     * @return ExternalTaskId 是否已赋值
                     * 
                     */
                    bool ExternalTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>参考图像，生成视频中的人物、背景等元素均以参考图为准  视频内容需满足以下要求：  人物比例尽量与参考动作比例一致，尽量避免全身动作驱动半身人物进行生成  人物需要露出清晰的上半身或全身的肢体及头部，避免遮挡  画面中人物避免存在极端朝向，比如倒立、平卧等。人物占画面比例不得太低  支持真实/风格化的角色（包括人物/类人动物/部分纯动物/部分类人肢体比例的角色）通过  包含支持传入图片Base64编码或图片URL（确保可访问）。</p>
                     * @return Image <p>参考图像，生成视频中的人物、背景等元素均以参考图为准  视频内容需满足以下要求：  人物比例尽量与参考动作比例一致，尽量避免全身动作驱动半身人物进行生成  人物需要露出清晰的上半身或全身的肢体及头部，避免遮挡  画面中人物避免存在极端朝向，比如倒立、平卧等。人物占画面比例不得太低  支持真实/风格化的角色（包括人物/类人动物/部分纯动物/部分类人肢体比例的角色）通过  包含支持传入图片Base64编码或图片URL（确保可访问）。</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>参考图像，生成视频中的人物、背景等元素均以参考图为准  视频内容需满足以下要求：  人物比例尽量与参考动作比例一致，尽量避免全身动作驱动半身人物进行生成  人物需要露出清晰的上半身或全身的肢体及头部，避免遮挡  画面中人物避免存在极端朝向，比如倒立、平卧等。人物占画面比例不得太低  支持真实/风格化的角色（包括人物/类人动物/部分纯动物/部分类人肢体比例的角色）通过  包含支持传入图片Base64编码或图片URL（确保可访问）。</p>
                     * @param _image <p>参考图像，生成视频中的人物、背景等元素均以参考图为准  视频内容需满足以下要求：  人物比例尽量与参考动作比例一致，尽量避免全身动作驱动半身人物进行生成  人物需要露出清晰的上半身或全身的肢体及头部，避免遮挡  画面中人物避免存在极端朝向，比如倒立、平卧等。人物占画面比例不得太低  支持真实/风格化的角色（包括人物/类人动物/部分纯动物/部分类人肢体比例的角色）通过  包含支持传入图片Base64编码或图片URL（确保可访问）。</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>参考视频的获取链接。生成视频中的人物动作与参考视频一致。  视频内容需满足以下要求：  人物需要漏出清晰的上半身或全身的全部肢体及头部，避免遮挡  建议上传1人动作视频，2人及以上会取画面占比最大的人物动作进行生成  推荐使用真人动作，部分风格化的人物/类人肢体比例可以通过  动作视频一镜到底，角色始终出现在画面中，避免切镜、运镜等。否则会被截取  动作避免过快，相对平稳的动作生成效果更佳  视频文件支持.mp4/.mov，文件大小不超过100MB，仅支持长宽的边长均位于340px~3850px之间，上述校验不通过会返回错误码等信息  视频时长下限不短于3秒，时长上限与人物朝向参考（character_orientation）有关：  当人物朝向与视频中人物一致时，视频时长最长可达30秒；  当人物朝向与图片中人物一致时，视频时长最长可达10秒；  如果您的动作难度比较高、速度比较快，有一定概率生成不足上传视频时长的结果，因为模型只能提取有效动作时长进行生成，最短提取出3s可用连续动作即可生成。请注意，因此消耗的积分将无法退还，建议适当调整动作难度与速度  系统会校验视频内容，如有问题会返回错误码等信息。</p>
                     * @return Video <p>参考视频的获取链接。生成视频中的人物动作与参考视频一致。  视频内容需满足以下要求：  人物需要漏出清晰的上半身或全身的全部肢体及头部，避免遮挡  建议上传1人动作视频，2人及以上会取画面占比最大的人物动作进行生成  推荐使用真人动作，部分风格化的人物/类人肢体比例可以通过  动作视频一镜到底，角色始终出现在画面中，避免切镜、运镜等。否则会被截取  动作避免过快，相对平稳的动作生成效果更佳  视频文件支持.mp4/.mov，文件大小不超过100MB，仅支持长宽的边长均位于340px~3850px之间，上述校验不通过会返回错误码等信息  视频时长下限不短于3秒，时长上限与人物朝向参考（character_orientation）有关：  当人物朝向与视频中人物一致时，视频时长最长可达30秒；  当人物朝向与图片中人物一致时，视频时长最长可达10秒；  如果您的动作难度比较高、速度比较快，有一定概率生成不足上传视频时长的结果，因为模型只能提取有效动作时长进行生成，最短提取出3s可用连续动作即可生成。请注意，因此消耗的积分将无法退还，建议适当调整动作难度与速度  系统会校验视频内容，如有问题会返回错误码等信息。</p>
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置<p>参考视频的获取链接。生成视频中的人物动作与参考视频一致。  视频内容需满足以下要求：  人物需要漏出清晰的上半身或全身的全部肢体及头部，避免遮挡  建议上传1人动作视频，2人及以上会取画面占比最大的人物动作进行生成  推荐使用真人动作，部分风格化的人物/类人肢体比例可以通过  动作视频一镜到底，角色始终出现在画面中，避免切镜、运镜等。否则会被截取  动作避免过快，相对平稳的动作生成效果更佳  视频文件支持.mp4/.mov，文件大小不超过100MB，仅支持长宽的边长均位于340px~3850px之间，上述校验不通过会返回错误码等信息  视频时长下限不短于3秒，时长上限与人物朝向参考（character_orientation）有关：  当人物朝向与视频中人物一致时，视频时长最长可达30秒；  当人物朝向与图片中人物一致时，视频时长最长可达10秒；  如果您的动作难度比较高、速度比较快，有一定概率生成不足上传视频时长的结果，因为模型只能提取有效动作时长进行生成，最短提取出3s可用连续动作即可生成。请注意，因此消耗的积分将无法退还，建议适当调整动作难度与速度  系统会校验视频内容，如有问题会返回错误码等信息。</p>
                     * @param _video <p>参考视频的获取链接。生成视频中的人物动作与参考视频一致。  视频内容需满足以下要求：  人物需要漏出清晰的上半身或全身的全部肢体及头部，避免遮挡  建议上传1人动作视频，2人及以上会取画面占比最大的人物动作进行生成  推荐使用真人动作，部分风格化的人物/类人肢体比例可以通过  动作视频一镜到底，角色始终出现在画面中，避免切镜、运镜等。否则会被截取  动作避免过快，相对平稳的动作生成效果更佳  视频文件支持.mp4/.mov，文件大小不超过100MB，仅支持长宽的边长均位于340px~3850px之间，上述校验不通过会返回错误码等信息  视频时长下限不短于3秒，时长上限与人物朝向参考（character_orientation）有关：  当人物朝向与视频中人物一致时，视频时长最长可达30秒；  当人物朝向与图片中人物一致时，视频时长最长可达10秒；  如果您的动作难度比较高、速度比较快，有一定概率生成不足上传视频时长的结果，因为模型只能提取有效动作时长进行生成，最短提取出3s可用连续动作即可生成。请注意，因此消耗的积分将无法退还，建议适当调整动作难度与速度  系统会校验视频内容，如有问题会返回错误码等信息。</p>
                     * 
                     */
                    void SetVideo(const std::string& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的模式</p><p>枚举值：std，pro<br>其中std：标准模式（标准），基础模式，性价比高<br>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</p>
                     * @return Mode <p>生成视频的模式</p><p>枚举值：std，pro<br>其中std：标准模式（标准），基础模式，性价比高<br>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>生成视频的模式</p><p>枚举值：std，pro<br>其中std：标准模式（标准），基础模式，性价比高<br>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</p>
                     * @param _mode <p>生成视频的模式</p><p>枚举值：std，pro<br>其中std：标准模式（标准），基础模式，性价比高<br>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</p>
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
                     * 获取<p>可选择是否保留视频原声  枚举值：yes，no  其中yes：保留视频原声  其中no：不保留视频原声。</p>
                     * @return KeepOriginalSound <p>可选择是否保留视频原声  枚举值：yes，no  其中yes：保留视频原声  其中no：不保留视频原声。</p>
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置<p>可选择是否保留视频原声  枚举值：yes，no  其中yes：保留视频原声  其中no：不保留视频原声。</p>
                     * @param _keepOriginalSound <p>可选择是否保留视频原声  枚举值：yes，no  其中yes：保留视频原声  其中no：不保留视频原声。</p>
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                    /**
                     * 获取<p>生成视频中人物的朝向，可选择与图片一致或与视频一致  枚举值：image，video，其中：  其中image：与图片中人物朝向一致；此时参考视频时长不得超过10秒；  其中video：与视频中人物朝向一致；此时参考视频时长不得超过30秒；  引用主体时，生成的视频暂时只能参考视频中的人物朝向。</p>
                     * @return CharacterOrientation <p>生成视频中人物的朝向，可选择与图片一致或与视频一致  枚举值：image，video，其中：  其中image：与图片中人物朝向一致；此时参考视频时长不得超过10秒；  其中video：与视频中人物朝向一致；此时参考视频时长不得超过30秒；  引用主体时，生成的视频暂时只能参考视频中的人物朝向。</p>
                     * 
                     */
                    std::string GetCharacterOrientation() const;

                    /**
                     * 设置<p>生成视频中人物的朝向，可选择与图片一致或与视频一致  枚举值：image，video，其中：  其中image：与图片中人物朝向一致；此时参考视频时长不得超过10秒；  其中video：与视频中人物朝向一致；此时参考视频时长不得超过30秒；  引用主体时，生成的视频暂时只能参考视频中的人物朝向。</p>
                     * @param _characterOrientation <p>生成视频中人物的朝向，可选择与图片一致或与视频一致  枚举值：image，video，其中：  其中image：与图片中人物朝向一致；此时参考视频时长不得超过10秒；  其中video：与视频中人物朝向一致；此时参考视频时长不得超过30秒；  引用主体时，生成的视频暂时只能参考视频中的人物朝向。</p>
                     * 
                     */
                    void SetCharacterOrientation(const std::string& _characterOrientation);

                    /**
                     * 判断参数 CharacterOrientation 是否已赋值
                     * @return CharacterOrientation 是否已赋值
                     * 
                     */
                    bool CharacterOrientationHasBeenSet() const;

                    /**
                     * 获取<p>参考主体列表  基于主体库中主体的ID配置，用key:value承载，如下：  &quot;element_list&quot;:[     {        &quot;element_id&quot;:long   },   {        &quot;element_id&quot;:long   } ] 参考主体数量与有无参考视频、参考图片数量有关，其中：  当使用首帧生成视频时，最多支持3个主体；  当使用首尾帧生成视频时，kling-v3-omni模型最多支持3个主体，kling-video-o1模不支持主体；  有参考视频时，参考图片数量和参考主体数量之和不得超过4，且不支持使用视频角色主体；  无参考视频时，参考图片数量和参考主体数量之和不得超过7；</p>
                     * @return ElementList <p>参考主体列表  基于主体库中主体的ID配置，用key:value承载，如下：  &quot;element_list&quot;:[     {        &quot;element_id&quot;:long   },   {        &quot;element_id&quot;:long   } ] 参考主体数量与有无参考视频、参考图片数量有关，其中：  当使用首帧生成视频时，最多支持3个主体；  当使用首尾帧生成视频时，kling-v3-omni模型最多支持3个主体，kling-video-o1模不支持主体；  有参考视频时，参考图片数量和参考主体数量之和不得超过4，且不支持使用视频角色主体；  无参考视频时，参考图片数量和参考主体数量之和不得超过7；</p>
                     * 
                     */
                    std::vector<Element> GetElementList() const;

                    /**
                     * 设置<p>参考主体列表  基于主体库中主体的ID配置，用key:value承载，如下：  &quot;element_list&quot;:[     {        &quot;element_id&quot;:long   },   {        &quot;element_id&quot;:long   } ] 参考主体数量与有无参考视频、参考图片数量有关，其中：  当使用首帧生成视频时，最多支持3个主体；  当使用首尾帧生成视频时，kling-v3-omni模型最多支持3个主体，kling-video-o1模不支持主体；  有参考视频时，参考图片数量和参考主体数量之和不得超过4，且不支持使用视频角色主体；  无参考视频时，参考图片数量和参考主体数量之和不得超过7；</p>
                     * @param _elementList <p>参考主体列表  基于主体库中主体的ID配置，用key:value承载，如下：  &quot;element_list&quot;:[     {        &quot;element_id&quot;:long   },   {        &quot;element_id&quot;:long   } ] 参考主体数量与有无参考视频、参考图片数量有关，其中：  当使用首帧生成视频时，最多支持3个主体；  当使用首尾帧生成视频时，kling-v3-omni模型最多支持3个主体，kling-video-o1模不支持主体；  有参考视频时，参考图片数量和参考主体数量之和不得超过4，且不支持使用视频角色主体；  无参考视频时，参考图片数量和参考主体数量之和不得超过7；</p>
                     * 
                     */
                    void SetElementList(const std::vector<Element>& _elementList);

                    /**
                     * 判断参数 ElementList 是否已赋值
                     * @return ElementList 是否已赋值
                     * 
                     */
                    bool ElementListHasBeenSet() const;

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

                    /**
                     * 获取<p>为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。 1：添加标识； 0：不添加标识； 其他数值：默认按1处理。</p>
                     * @return LogoAdd <p>为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。 1：添加标识； 0：不添加标识； 其他数值：默认按1处理。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。 1：添加标识； 0：不添加标识； 其他数值：默认按1处理。</p>
                     * @param _logoAdd <p>为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。 1：添加标识； 0：不添加标识； 其他数值：默认按1处理。</p>
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
                     * 获取<p>默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。</p>
                     * @return LogoParam <p>默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。</p>
                     * @param _logoParam <p>默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。</p>
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称  枚举值：kling-v2-6, kling-v3。</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>文本提示词，可包含正向描述和负向描述</p><p>可将提示词模板化来满足不同的视频生成需求</p><p>不能超过2500个字</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_externalTaskId;
                    bool m_externalTaskIdHasBeenSet;

                    /**
                     * <p>参考图像，生成视频中的人物、背景等元素均以参考图为准  视频内容需满足以下要求：  人物比例尽量与参考动作比例一致，尽量避免全身动作驱动半身人物进行生成  人物需要露出清晰的上半身或全身的肢体及头部，避免遮挡  画面中人物避免存在极端朝向，比如倒立、平卧等。人物占画面比例不得太低  支持真实/风格化的角色（包括人物/类人动物/部分纯动物/部分类人肢体比例的角色）通过  包含支持传入图片Base64编码或图片URL（确保可访问）。</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>参考视频的获取链接。生成视频中的人物动作与参考视频一致。  视频内容需满足以下要求：  人物需要漏出清晰的上半身或全身的全部肢体及头部，避免遮挡  建议上传1人动作视频，2人及以上会取画面占比最大的人物动作进行生成  推荐使用真人动作，部分风格化的人物/类人肢体比例可以通过  动作视频一镜到底，角色始终出现在画面中，避免切镜、运镜等。否则会被截取  动作避免过快，相对平稳的动作生成效果更佳  视频文件支持.mp4/.mov，文件大小不超过100MB，仅支持长宽的边长均位于340px~3850px之间，上述校验不通过会返回错误码等信息  视频时长下限不短于3秒，时长上限与人物朝向参考（character_orientation）有关：  当人物朝向与视频中人物一致时，视频时长最长可达30秒；  当人物朝向与图片中人物一致时，视频时长最长可达10秒；  如果您的动作难度比较高、速度比较快，有一定概率生成不足上传视频时长的结果，因为模型只能提取有效动作时长进行生成，最短提取出3s可用连续动作即可生成。请注意，因此消耗的积分将无法退还，建议适当调整动作难度与速度  系统会校验视频内容，如有问题会返回错误码等信息。</p>
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * <p>生成视频的模式</p><p>枚举值：std，pro<br>其中std：标准模式（标准），基础模式，性价比高<br>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>可选择是否保留视频原声  枚举值：yes，no  其中yes：保留视频原声  其中no：不保留视频原声。</p>
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                    /**
                     * <p>生成视频中人物的朝向，可选择与图片一致或与视频一致  枚举值：image，video，其中：  其中image：与图片中人物朝向一致；此时参考视频时长不得超过10秒；  其中video：与视频中人物朝向一致；此时参考视频时长不得超过30秒；  引用主体时，生成的视频暂时只能参考视频中的人物朝向。</p>
                     */
                    std::string m_characterOrientation;
                    bool m_characterOrientationHasBeenSet;

                    /**
                     * <p>参考主体列表  基于主体库中主体的ID配置，用key:value承载，如下：  &quot;element_list&quot;:[     {        &quot;element_id&quot;:long   },   {        &quot;element_id&quot;:long   } ] 参考主体数量与有无参考视频、参考图片数量有关，其中：  当使用首帧生成视频时，最多支持3个主体；  当使用首尾帧生成视频时，kling-v3-omni模型最多支持3个主体，kling-video-o1模不支持主体；  有参考视频时，参考图片数量和参考主体数量之和不得超过4，且不支持使用视频角色主体；  无参考视频时，参考图片数量和参考主体数量之和不得超过7；</p>
                     */
                    std::vector<Element> m_elementList;
                    bool m_elementListHasBeenSet;

                    /**
                     * <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。 1：添加标识； 0：不添加标识； 其他数值：默认按1处理。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITMOTIONCONTROLKLINGJOBREQUEST_H_
