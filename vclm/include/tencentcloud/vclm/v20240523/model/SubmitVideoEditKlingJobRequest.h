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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEDITKLINGJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEDITKLINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/ImageInfo.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>
#include <tencentcloud/vclm/v20240523/model/ReferVideoInfo.h>
#include <tencentcloud/vclm/v20240523/model/MultiPrompt.h>
#include <tencentcloud/vclm/v20240523/model/Element.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitVideoEditKlingJob请求参数结构体
                */
                class SubmitVideoEditKlingJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoEditKlingJobRequest();
                    ~SubmitVideoEditKlingJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>模型名称，支持kling-video-o1，kling-v3-omni。默认kling-video-o1。</p>
                     * @return Model <p>模型名称，支持kling-video-o1，kling-v3-omni。默认kling-video-o1。</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称，支持kling-video-o1，kling-v3-omni。默认kling-video-o1。</p>
                     * @param _model <p>模型名称，支持kling-video-o1，kling-v3-omni。默认kling-video-o1。</p>
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
                     * 获取<p>参考图列表</p><p>包括主体、场景、风格等参考图片，也可作为首帧或尾帧生成视频；当作为首帧或尾帧生成视频时：</p><p>通过type参数来定义图片是否为首尾帧：first_frame为首帧，end_frame为尾帧</p><p>暂时不支持仅尾帧，即有尾帧图时必须有首帧图</p><p>首帧或首尾帧生视频时，不能使用视频编辑功能</p><p>用key:value承载，如下：</p><p>&quot;ImageInfo&quot;:[<br>    {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;first_frame&quot;<br>  },<br>  {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;end_frame&quot;<br>  }<br>]<br>支持传入图片URL（确保可访问）</p><p>图片格式支持.jpg / .jpeg / .png</p><p>图片文件大小不能超过10MB，图片宽高尺寸不小于300px，不大于8000px，图片宽高比要在1:2.5 ~ 2.5:1之间</p><p>有参考视频时，参考图片数量不得超过4；无参考视频时，参考图片数量不得超过7</p><p>数组中超过2张图片时，不支持设置尾帧</p>
                     * @return ImageList <p>参考图列表</p><p>包括主体、场景、风格等参考图片，也可作为首帧或尾帧生成视频；当作为首帧或尾帧生成视频时：</p><p>通过type参数来定义图片是否为首尾帧：first_frame为首帧，end_frame为尾帧</p><p>暂时不支持仅尾帧，即有尾帧图时必须有首帧图</p><p>首帧或首尾帧生视频时，不能使用视频编辑功能</p><p>用key:value承载，如下：</p><p>&quot;ImageInfo&quot;:[<br>    {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;first_frame&quot;<br>  },<br>  {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;end_frame&quot;<br>  }<br>]<br>支持传入图片URL（确保可访问）</p><p>图片格式支持.jpg / .jpeg / .png</p><p>图片文件大小不能超过10MB，图片宽高尺寸不小于300px，不大于8000px，图片宽高比要在1:2.5 ~ 2.5:1之间</p><p>有参考视频时，参考图片数量不得超过4；无参考视频时，参考图片数量不得超过7</p><p>数组中超过2张图片时，不支持设置尾帧</p>
                     * 
                     */
                    std::vector<ImageInfo> GetImageList() const;

                    /**
                     * 设置<p>参考图列表</p><p>包括主体、场景、风格等参考图片，也可作为首帧或尾帧生成视频；当作为首帧或尾帧生成视频时：</p><p>通过type参数来定义图片是否为首尾帧：first_frame为首帧，end_frame为尾帧</p><p>暂时不支持仅尾帧，即有尾帧图时必须有首帧图</p><p>首帧或首尾帧生视频时，不能使用视频编辑功能</p><p>用key:value承载，如下：</p><p>&quot;ImageInfo&quot;:[<br>    {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;first_frame&quot;<br>  },<br>  {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;end_frame&quot;<br>  }<br>]<br>支持传入图片URL（确保可访问）</p><p>图片格式支持.jpg / .jpeg / .png</p><p>图片文件大小不能超过10MB，图片宽高尺寸不小于300px，不大于8000px，图片宽高比要在1:2.5 ~ 2.5:1之间</p><p>有参考视频时，参考图片数量不得超过4；无参考视频时，参考图片数量不得超过7</p><p>数组中超过2张图片时，不支持设置尾帧</p>
                     * @param _imageList <p>参考图列表</p><p>包括主体、场景、风格等参考图片，也可作为首帧或尾帧生成视频；当作为首帧或尾帧生成视频时：</p><p>通过type参数来定义图片是否为首尾帧：first_frame为首帧，end_frame为尾帧</p><p>暂时不支持仅尾帧，即有尾帧图时必须有首帧图</p><p>首帧或首尾帧生视频时，不能使用视频编辑功能</p><p>用key:value承载，如下：</p><p>&quot;ImageInfo&quot;:[<br>    {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;first_frame&quot;<br>  },<br>  {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;end_frame&quot;<br>  }<br>]<br>支持传入图片URL（确保可访问）</p><p>图片格式支持.jpg / .jpeg / .png</p><p>图片文件大小不能超过10MB，图片宽高尺寸不小于300px，不大于8000px，图片宽高比要在1:2.5 ~ 2.5:1之间</p><p>有参考视频时，参考图片数量不得超过4；无参考视频时，参考图片数量不得超过7</p><p>数组中超过2张图片时，不支持设置尾帧</p>
                     * 
                     */
                    void SetImageList(const std::vector<ImageInfo>& _imageList);

                    /**
                     * 判断参数 ImageList 是否已赋值
                     * @return ImageList 是否已赋值
                     * 
                     */
                    bool ImageListHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的画面纵横比（宽:高）</p><p>枚举值：16:9, 9:16, 1:1</p><p>未使用首帧参考或视频编辑功能时，当前参数必填</p>
                     * @return AspectRatio <p>生成视频的画面纵横比（宽:高）</p><p>枚举值：16:9, 9:16, 1:1</p><p>未使用首帧参考或视频编辑功能时，当前参数必填</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>生成视频的画面纵横比（宽:高）</p><p>枚举值：16:9, 9:16, 1:1</p><p>未使用首帧参考或视频编辑功能时，当前参数必填</p>
                     * @param _aspectRatio <p>生成视频的画面纵横比（宽:高）</p><p>枚举值：16:9, 9:16, 1:1</p><p>未使用首帧参考或视频编辑功能时，当前参数必填</p>
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
                     * 获取<p>生成视频时长，单位s</p><p>枚举值：3，4，5，6，7，8，9，10，其中：使用文生视频、首帧图生视频时，仅支持5和10s<br>使用视频编辑功能（“refer_type”:“base”）时，输出结果与传入视频时长相同，此时当前参数无效；此时，按输入视频时长四舍五入取整计量计费</p>
                     * @return Duration <p>生成视频时长，单位s</p><p>枚举值：3，4，5，6，7，8，9，10，其中：使用文生视频、首帧图生视频时，仅支持5和10s<br>使用视频编辑功能（“refer_type”:“base”）时，输出结果与传入视频时长相同，此时当前参数无效；此时，按输入视频时长四舍五入取整计量计费</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>生成视频时长，单位s</p><p>枚举值：3，4，5，6，7，8，9，10，其中：使用文生视频、首帧图生视频时，仅支持5和10s<br>使用视频编辑功能（“refer_type”:“base”）时，输出结果与传入视频时长相同，此时当前参数无效；此时，按输入视频时长四舍五入取整计量计费</p>
                     * @param _duration <p>生成视频时长，单位s</p><p>枚举值：3，4，5，6，7，8，9，10，其中：使用文生视频、首帧图生视频时，仅支持5和10s<br>使用视频编辑功能（“refer_type”:“base”）时，输出结果与传入视频时长相同，此时当前参数无效；此时，按输入视频时长四舍五入取整计量计费</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

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
                     * 获取<p>参考视频，通过URL方式获取</p><p>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧<br>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效</p><ul><li>视频格式仅支持MP4/MOV</li><li>仅支持时长≥3秒且≤10秒的视频</li><li>视频宽高尺寸需介于720px（含）和2160px（含）之间</li><li>视频帧率基于24fps～60fps，生成视频时会输出为24fps</li><li>至多仅支持上传1段视频，视频大小不超过200MB</li></ul>
                     * @return VideoList <p>参考视频，通过URL方式获取</p><p>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧<br>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效</p><ul><li>视频格式仅支持MP4/MOV</li><li>仅支持时长≥3秒且≤10秒的视频</li><li>视频宽高尺寸需介于720px（含）和2160px（含）之间</li><li>视频帧率基于24fps～60fps，生成视频时会输出为24fps</li><li>至多仅支持上传1段视频，视频大小不超过200MB</li></ul>
                     * 
                     */
                    std::vector<ReferVideoInfo> GetVideoList() const;

                    /**
                     * 设置<p>参考视频，通过URL方式获取</p><p>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧<br>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效</p><ul><li>视频格式仅支持MP4/MOV</li><li>仅支持时长≥3秒且≤10秒的视频</li><li>视频宽高尺寸需介于720px（含）和2160px（含）之间</li><li>视频帧率基于24fps～60fps，生成视频时会输出为24fps</li><li>至多仅支持上传1段视频，视频大小不超过200MB</li></ul>
                     * @param _videoList <p>参考视频，通过URL方式获取</p><p>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧<br>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效</p><ul><li>视频格式仅支持MP4/MOV</li><li>仅支持时长≥3秒且≤10秒的视频</li><li>视频宽高尺寸需介于720px（含）和2160px（含）之间</li><li>视频帧率基于24fps～60fps，生成视频时会输出为24fps</li><li>至多仅支持上传1段视频，视频大小不超过200MB</li></ul>
                     * 
                     */
                    void SetVideoList(const std::vector<ReferVideoInfo>& _videoList);

                    /**
                     * 判断参数 VideoList 是否已赋值
                     * @return VideoList 是否已赋值
                     * 
                     */
                    bool VideoListHasBeenSet() const;

                    /**
                     * 获取<p>是否生成多镜头视频  当前参数为true时，prompt参数无效，且不支持设定首尾帧生视频  当前参数为false时，shot_type参数及multi_prompt参数无效</p>
                     * @return MultiShot <p>是否生成多镜头视频  当前参数为true时，prompt参数无效，且不支持设定首尾帧生视频  当前参数为false时，shot_type参数及multi_prompt参数无效</p>
                     * 
                     */
                    bool GetMultiShot() const;

                    /**
                     * 设置<p>是否生成多镜头视频  当前参数为true时，prompt参数无效，且不支持设定首尾帧生视频  当前参数为false时，shot_type参数及multi_prompt参数无效</p>
                     * @param _multiShot <p>是否生成多镜头视频  当前参数为true时，prompt参数无效，且不支持设定首尾帧生视频  当前参数为false时，shot_type参数及multi_prompt参数无效</p>
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
                     * 获取<p>分镜方式  枚举值：customize  当multi_shot参数为true时，当前参数必填</p>
                     * @return ShotType <p>分镜方式  枚举值：customize  当multi_shot参数为true时，当前参数必填</p>
                     * 
                     */
                    std::string GetShotType() const;

                    /**
                     * 设置<p>分镜方式  枚举值：customize  当multi_shot参数为true时，当前参数必填</p>
                     * @param _shotType <p>分镜方式  枚举值：customize  当multi_shot参数为true时，当前参数必填</p>
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
                     * 获取<p>各分镜信息，如提示词、时长等  通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：  最多支持6个分镜，最小支持1个分镜  每个分镜相关内容的最大长度不超过512  每个分镜的时长不大于当前任务的总时长，不小于1  所有分镜的时长之和等于当前任务的总时长</p>
                     * @return MultiPrompt <p>各分镜信息，如提示词、时长等  通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：  最多支持6个分镜，最小支持1个分镜  每个分镜相关内容的最大长度不超过512  每个分镜的时长不大于当前任务的总时长，不小于1  所有分镜的时长之和等于当前任务的总时长</p>
                     * 
                     */
                    std::vector<MultiPrompt> GetMultiPrompt() const;

                    /**
                     * 设置<p>各分镜信息，如提示词、时长等  通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：  最多支持6个分镜，最小支持1个分镜  每个分镜相关内容的最大长度不超过512  每个分镜的时长不大于当前任务的总时长，不小于1  所有分镜的时长之和等于当前任务的总时长</p>
                     * @param _multiPrompt <p>各分镜信息，如提示词、时长等  通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：  最多支持6个分镜，最小支持1个分镜  每个分镜相关内容的最大长度不超过512  每个分镜的时长不大于当前任务的总时长，不小于1  所有分镜的时长之和等于当前任务的总时长</p>
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
                     * 获取<p>是否开启声音</p>
                     * @return Sound <p>是否开启声音</p>
                     * 
                     */
                    std::string GetSound() const;

                    /**
                     * 设置<p>是否开启声音</p>
                     * @param _sound <p>是否开启声音</p>
                     * 
                     */
                    void SetSound(const std::string& _sound);

                    /**
                     * 判断参数 Sound 是否已赋值
                     * @return Sound 是否已赋值
                     * 
                     */
                    bool SoundHasBeenSet() const;

                private:

                    /**
                     * <p>文本提示词，可包含正向描述和负向描述</p><p>可将提示词模板化来满足不同的视频生成需求</p><p>不能超过2500个字</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>模型名称，支持kling-video-o1，kling-v3-omni。默认kling-video-o1。</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_externalTaskId;
                    bool m_externalTaskIdHasBeenSet;

                    /**
                     * <p>参考图列表</p><p>包括主体、场景、风格等参考图片，也可作为首帧或尾帧生成视频；当作为首帧或尾帧生成视频时：</p><p>通过type参数来定义图片是否为首尾帧：first_frame为首帧，end_frame为尾帧</p><p>暂时不支持仅尾帧，即有尾帧图时必须有首帧图</p><p>首帧或首尾帧生视频时，不能使用视频编辑功能</p><p>用key:value承载，如下：</p><p>&quot;ImageInfo&quot;:[<br>    {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;first_frame&quot;<br>  },<br>  {<br>      &quot;ImageUrl&quot;:&quot;https://cos.ap-guangzhou.myqcloud.com/test.png&quot;,<br>    &quot;Type&quot;:&quot;end_frame&quot;<br>  }<br>]<br>支持传入图片URL（确保可访问）</p><p>图片格式支持.jpg / .jpeg / .png</p><p>图片文件大小不能超过10MB，图片宽高尺寸不小于300px，不大于8000px，图片宽高比要在1:2.5 ~ 2.5:1之间</p><p>有参考视频时，参考图片数量不得超过4；无参考视频时，参考图片数量不得超过7</p><p>数组中超过2张图片时，不支持设置尾帧</p>
                     */
                    std::vector<ImageInfo> m_imageList;
                    bool m_imageListHasBeenSet;

                    /**
                     * <p>生成视频的画面纵横比（宽:高）</p><p>枚举值：16:9, 9:16, 1:1</p><p>未使用首帧参考或视频编辑功能时，当前参数必填</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>生成视频时长，单位s</p><p>枚举值：3，4，5，6，7，8，9，10，其中：使用文生视频、首帧图生视频时，仅支持5和10s<br>使用视频编辑功能（“refer_type”:“base”）时，输出结果与传入视频时长相同，此时当前参数无效；此时，按输入视频时长四舍五入取整计量计费</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

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

                    /**
                     * <p>生成视频的模式</p><p>枚举值：std，pro<br>其中std：标准模式（标准），基础模式，性价比高<br>其中pro：专家模式（高品质），高表现模式，生成视频质量更佳</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>参考视频，通过URL方式获取</p><p>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧<br>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效</p><ul><li>视频格式仅支持MP4/MOV</li><li>仅支持时长≥3秒且≤10秒的视频</li><li>视频宽高尺寸需介于720px（含）和2160px（含）之间</li><li>视频帧率基于24fps～60fps，生成视频时会输出为24fps</li><li>至多仅支持上传1段视频，视频大小不超过200MB</li></ul>
                     */
                    std::vector<ReferVideoInfo> m_videoList;
                    bool m_videoListHasBeenSet;

                    /**
                     * <p>是否生成多镜头视频  当前参数为true时，prompt参数无效，且不支持设定首尾帧生视频  当前参数为false时，shot_type参数及multi_prompt参数无效</p>
                     */
                    bool m_multiShot;
                    bool m_multiShotHasBeenSet;

                    /**
                     * <p>分镜方式  枚举值：customize  当multi_shot参数为true时，当前参数必填</p>
                     */
                    std::string m_shotType;
                    bool m_shotTypeHasBeenSet;

                    /**
                     * <p>各分镜信息，如提示词、时长等  通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：  最多支持6个分镜，最小支持1个分镜  每个分镜相关内容的最大长度不超过512  每个分镜的时长不大于当前任务的总时长，不小于1  所有分镜的时长之和等于当前任务的总时长</p>
                     */
                    std::vector<MultiPrompt> m_multiPrompt;
                    bool m_multiPromptHasBeenSet;

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
                     * <p>是否开启声音</p>
                     */
                    std::string m_sound;
                    bool m_soundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEDITKLINGJOBREQUEST_H_
