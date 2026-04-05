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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_

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
                * AIGC 生视频任务的输出媒体文件配置。
                */
                class AigcVideoOutputConfig : public AbstractModel
                {
                public:
                    AigcVideoOutputConfig();
                    ~AigcVideoOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储模式</p><p>枚举值：</p><ul><li>Temporary： 临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL，有效期 7 天</li><li>Permanent： 永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId</li></ul><p>默认值：Temporary</p>
                     * @return StorageMode <p>存储模式</p><p>枚举值：</p><ul><li>Temporary： 临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL，有效期 7 天</li><li>Permanent： 永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId</li></ul><p>默认值：Temporary</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式</p><p>枚举值：</p><ul><li>Temporary： 临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL，有效期 7 天</li><li>Permanent： 永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId</li></ul><p>默认值：Temporary</p>
                     * @param _storageMode <p>存储模式</p><p>枚举值：</p><ul><li>Temporary： 临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL，有效期 7 天</li><li>Permanent： 永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId</li></ul><p>默认值：Temporary</p>
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取<p>输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * @return MediaName <p>输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * @param _mediaName <p>输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取<p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * @return ClassId <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * @param _classId <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取<p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @return ExpireTime <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @param _expireTime <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li></p>
                     * @return Duration <p>生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li></p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li></p>
                     * @param _duration <p>生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li></p>
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的分辨率。</p><li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li><li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 OS，可选值为 720P；</li>
                     * @return Resolution <p>生成视频的分辨率。</p><li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li><li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 OS，可选值为 720P；</li>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>生成视频的分辨率。</p><li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li><li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 OS，可选值为 720P；</li>
                     * @param _resolution <p>生成视频的分辨率。</p><li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li><li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 OS，可选值为 720P；</li>
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
                     * 获取<p>指定所生成视频的宽高比。</p><li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li><li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li><li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     * @return AspectRatio <p>指定所生成视频的宽高比。</p><li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li><li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li><li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>指定所生成视频的宽高比。</p><li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li><li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li><li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     * @param _aspectRatio <p>指定所生成视频的宽高比。</p><li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li><li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li><li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 Hailuo，则暂不支持。</li>
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
                     * 获取<p>是否生成音频。支持的模型包括 GV、OS、Vidu、Jimeng、Kling。</p><p>枚举值：</p><ul><li>Enabled： 开启</li><li>Disabled： 关闭</li></ul><p>默认值：Disabled</p>
                     * @return AudioGeneration <p>是否生成音频。支持的模型包括 GV、OS、Vidu、Jimeng、Kling。</p><p>枚举值：</p><ul><li>Enabled： 开启</li><li>Disabled： 关闭</li></ul><p>默认值：Disabled</p>
                     * 
                     */
                    std::string GetAudioGeneration() const;

                    /**
                     * 设置<p>是否生成音频。支持的模型包括 GV、OS、Vidu、Jimeng、Kling。</p><p>枚举值：</p><ul><li>Enabled： 开启</li><li>Disabled： 关闭</li></ul><p>默认值：Disabled</p>
                     * @param _audioGeneration <p>是否生成音频。支持的模型包括 GV、OS、Vidu、Jimeng、Kling。</p><p>枚举值：</p><ul><li>Enabled： 开启</li><li>Disabled： 关闭</li></ul><p>默认值：Disabled</p>
                     * 
                     */
                    void SetAudioGeneration(const std::string& _audioGeneration);

                    /**
                     * 判断参数 AudioGeneration 是否已赋值
                     * @return AudioGeneration 是否已赋值
                     * 
                     */
                    bool AudioGenerationHasBeenSet() const;

                    /**
                     * 获取<p>是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li></p>
                     * @return PersonGeneration <p>是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li></p>
                     * 
                     */
                    std::string GetPersonGeneration() const;

                    /**
                     * 设置<p>是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li></p>
                     * @param _personGeneration <p>是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li></p>
                     * 
                     */
                    void SetPersonGeneration(const std::string& _personGeneration);

                    /**
                     * 判断参数 PersonGeneration 是否已赋值
                     * @return PersonGeneration 是否已赋值
                     * 
                     */
                    bool PersonGenerationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return InputComplianceCheck <p>是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    std::string GetInputComplianceCheck() const;

                    /**
                     * 设置<p>是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _inputComplianceCheck <p>是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    void SetInputComplianceCheck(const std::string& _inputComplianceCheck);

                    /**
                     * 判断参数 InputComplianceCheck 是否已赋值
                     * @return InputComplianceCheck 是否已赋值
                     * 
                     */
                    bool InputComplianceCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return OutputComplianceCheck <p>是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    std::string GetOutputComplianceCheck() const;

                    /**
                     * 设置<p>是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _outputComplianceCheck <p>是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    void SetOutputComplianceCheck(const std::string& _outputComplianceCheck);

                    /**
                     * 判断参数 OutputComplianceCheck 是否已赋值
                     * @return OutputComplianceCheck 是否已赋值
                     * 
                     */
                    bool OutputComplianceCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>说明：</p><ol><li>对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。</li><li>对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。</li></ol>
                     * @return EnhanceSwitch <p>是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>说明：</p><ol><li>对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。</li><li>对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。</li></ol>
                     * 
                     */
                    std::string GetEnhanceSwitch() const;

                    /**
                     * 设置<p>是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>说明：</p><ol><li>对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。</li><li>对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。</li></ol>
                     * @param _enhanceSwitch <p>是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>说明：</p><ol><li>对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。</li><li>对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。</li></ol>
                     * 
                     */
                    void SetEnhanceSwitch(const std::string& _enhanceSwitch);

                    /**
                     * 判断参数 EnhanceSwitch 是否已赋值
                     * @return EnhanceSwitch 是否已赋值
                     * 
                     */
                    bool EnhanceSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否开启错峰。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return OffPeak <p>是否开启错峰。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    std::string GetOffPeak() const;

                    /**
                     * 设置<p>是否开启错峰。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _offPeak <p>是否开启错峰。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    void SetOffPeak(const std::string& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                    /**
                     * 获取<p>是否开启vidu智能插帧。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return FrameInterpolate <p>是否开启vidu智能插帧。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    std::string GetFrameInterpolate() const;

                    /**
                     * 设置<p>是否开启vidu智能插帧。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _frameInterpolate <p>是否开启vidu智能插帧。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    void SetFrameInterpolate(const std::string& _frameInterpolate);

                    /**
                     * 判断参数 FrameInterpolate 是否已赋值
                     * @return FrameInterpolate 是否已赋值
                     * 
                     */
                    bool FrameInterpolateHasBeenSet() const;

                    /**
                     * 获取<p>是否开启图标水印。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>目前支持的模型有 Vidu，其他模型暂不支持。</p>
                     * @return LogoAdd <p>是否开启图标水印。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>目前支持的模型有 Vidu，其他模型暂不支持。</p>
                     * 
                     */
                    std::string GetLogoAdd() const;

                    /**
                     * 设置<p>是否开启图标水印。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>目前支持的模型有 Vidu，其他模型暂不支持。</p>
                     * @param _logoAdd <p>是否开启图标水印。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>目前支持的模型有 Vidu，其他模型暂不支持。</p>
                     * 
                     */
                    void SetLogoAdd(const std::string& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                private:

                    /**
                     * <p>存储模式</p><p>枚举值：</p><ul><li>Temporary： 临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL，有效期 7 天</li><li>Permanent： 永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId</li></ul><p>默认值：Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li></p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>生成视频的分辨率。</p><li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li><li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li><li>当 ModelName 是 OS，可选值为 720P；</li>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>指定所生成视频的宽高比。</p><li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li><li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li><li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li><li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>是否生成音频。支持的模型包括 GV、OS、Vidu、Jimeng、Kling。</p><p>枚举值：</p><ul><li>Enabled： 开启</li><li>Disabled： 关闭</li></ul><p>默认值：Disabled</p>
                     */
                    std::string m_audioGeneration;
                    bool m_audioGenerationHasBeenSet;

                    /**
                     * <p>是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li></p>
                     */
                    std::string m_personGeneration;
                    bool m_personGenerationHasBeenSet;

                    /**
                     * <p>是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    std::string m_inputComplianceCheck;
                    bool m_inputComplianceCheckHasBeenSet;

                    /**
                     * <p>是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    std::string m_outputComplianceCheck;
                    bool m_outputComplianceCheckHasBeenSet;

                    /**
                     * <p>是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>说明：</p><ol><li>对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。</li><li>对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。</li></ol>
                     */
                    std::string m_enhanceSwitch;
                    bool m_enhanceSwitchHasBeenSet;

                    /**
                     * <p>是否开启错峰。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    std::string m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * <p>是否开启vidu智能插帧。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    std::string m_frameInterpolate;
                    bool m_frameInterpolateHasBeenSet;

                    /**
                     * <p>是否开启图标水印。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li><br>目前支持的模型有 Vidu，其他模型暂不支持。</p>
                     */
                    std::string m_logoAdd;
                    bool m_logoAddHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
