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
                     * 获取存储模式。取值有： <li>Permanent：永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li>
默认值：Temporary
                     * @return StorageMode 存储模式。取值有： <li>Permanent：永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li>
默认值：Temporary
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置存储模式。取值有： <li>Permanent：永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li>
默认值：Temporary
                     * @param _storageMode 存储模式。取值有： <li>Permanent：永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li>
默认值：Temporary
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
                     * 获取输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     * @return MediaName 输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     * @param _mediaName 输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。
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
                     * 获取分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @param _classId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
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
                     * 获取输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return ExpireTime 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _expireTime 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Jimeng，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li>
                     * @return Duration 生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Jimeng，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Jimeng，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li>
                     * @param _duration 生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Jimeng，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li>
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
                     * 获取生成视频的分辨率。
<li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li>
<li>当 ModelName 是 Jimeng，可选值为 1080P；</li>
<li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 OS，可选值为 720P；</li>
说明：除模型可支持的分辨率外，还支持 2K、4K分辨率。
                     * @return Resolution 生成视频的分辨率。
<li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li>
<li>当 ModelName 是 Jimeng，可选值为 1080P；</li>
<li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 OS，可选值为 720P；</li>
说明：除模型可支持的分辨率外，还支持 2K、4K分辨率。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置生成视频的分辨率。
<li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li>
<li>当 ModelName 是 Jimeng，可选值为 1080P；</li>
<li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 OS，可选值为 720P；</li>
说明：除模型可支持的分辨率外，还支持 2K、4K分辨率。
                     * @param _resolution 生成视频的分辨率。
<li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li>
<li>当 ModelName 是 Jimeng，可选值为 1080P；</li>
<li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 OS，可选值为 720P；</li>
说明：除模型可支持的分辨率外，还支持 2K、4K分辨率。
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
                     * 获取指定所生成视频的宽高比。
<li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li>
<li>当 ModelName 是 Jimeng，当文生视频时，则可选值为 16:9、4:3、1:1、3:4、9:16、21:9</li>
<li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li>
<li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     * @return AspectRatio 指定所生成视频的宽高比。
<li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li>
<li>当 ModelName 是 Jimeng，当文生视频时，则可选值为 16:9、4:3、1:1、3:4、9:16、21:9</li>
<li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li>
<li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置指定所生成视频的宽高比。
<li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li>
<li>当 ModelName 是 Jimeng，当文生视频时，则可选值为 16:9、4:3、1:1、3:4、9:16、21:9</li>
<li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li>
<li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     * @param _aspectRatio 指定所生成视频的宽高比。
<li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li>
<li>当 ModelName 是 Jimeng，当文生视频时，则可选值为 16:9、4:3、1:1、3:4、9:16、21:9</li>
<li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li>
<li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 Hailuo，则暂不支持。</li>
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
                     * 获取是否生成音频。支持的模型包括 GV、OS。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li>
默认值：Enabled
                     * @return AudioGeneration 是否生成音频。支持的模型包括 GV、OS。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li>
默认值：Enabled
                     * 
                     */
                    std::string GetAudioGeneration() const;

                    /**
                     * 设置是否生成音频。支持的模型包括 GV、OS。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li>
默认值：Enabled
                     * @param _audioGeneration 是否生成音频。支持的模型包括 GV、OS。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li>
默认值：Enabled
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
                     * 获取是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li> 
                     * @return PersonGeneration 是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li> 
                     * 
                     */
                    std::string GetPersonGeneration() const;

                    /**
                     * 设置是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li> 
                     * @param _personGeneration 是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li> 
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
                     * 获取是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @return InputComplianceCheck 是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * 
                     */
                    std::string GetInputComplianceCheck() const;

                    /**
                     * 设置是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @param _inputComplianceCheck 是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
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
                     * 获取是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @return OutputComplianceCheck 是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * 
                     */
                    std::string GetOutputComplianceCheck() const;

                    /**
                     * 设置是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @param _outputComplianceCheck 是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
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
                     * 获取是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
说明：
1. 对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。
2. 对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。
                     * @return EnhanceSwitch 是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
说明：
1. 对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。
2. 对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。
                     * 
                     */
                    std::string GetEnhanceSwitch() const;

                    /**
                     * 设置是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
说明：
1. 对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。
2. 对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。
                     * @param _enhanceSwitch 是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
说明：
1. 对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。
2. 对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。
                     * 
                     */
                    void SetEnhanceSwitch(const std::string& _enhanceSwitch);

                    /**
                     * 判断参数 EnhanceSwitch 是否已赋值
                     * @return EnhanceSwitch 是否已赋值
                     * 
                     */
                    bool EnhanceSwitchHasBeenSet() const;

                private:

                    /**
                     * 存储模式。取值有： <li>Permanent：永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li>
默认值：Temporary
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 输出媒体文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 生成视频的时长，单位：秒。<li>当 ModelName 是 Kling，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Jimeng，可选值为 5、10，默认为 5；</li><li>当 ModelName 是 Hailuo，可选值为 6、10，默认为 6；</li><li>当 ModelName 是 Vidu，可指定1-10；</li><li>当 ModelName 是 GV，可选值为 8，默认为 8；</li><li>当 ModelName 是 OS，可选值为 4、8、12，默认为 8；</li>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 生成视频的分辨率。
<li>当 ModelName 是 Kling，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 Hailuo，可选值为 768P、1080P，默认为 768P；</li>
<li>当 ModelName 是 Jimeng，可选值为 1080P；</li>
<li>当 ModelName 是 Vidu，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 GV，可选值为 720P、1080P，默认为 720P；</li>
<li>当 ModelName 是 OS，可选值为 720P；</li>
说明：除模型可支持的分辨率外，还支持 2K、4K分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 指定所生成视频的宽高比。
<li>当 ModelName 是 Kling，当文生视频时，则可选值为 16:9、9:16、 1:1，默认为16:9；</li>
<li>当 ModelName 是 Jimeng，当文生视频时，则可选值为 16:9、4:3、1:1、3:4、9:16、21:9</li>
<li>当 ModelName 是 Vidu，当文生视频时和使用参考图片生成时，则可选值为 16:9、9:16、4:3、3:4、1:1，其中仅版本q2支持4:3、3:4</li>
<li>当 ModelName 是 GV，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 OS，当文生视频时，则可选值为 16:9、9:16，默认为 16:9；</li>
<li>当 ModelName 是 Hailuo，则暂不支持。</li>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 是否生成音频。支持的模型包括 GV、OS。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li>
默认值：Enabled
                     */
                    std::string m_audioGeneration;
                    bool m_audioGenerationHasBeenSet;

                    /**
                     * 是否允许人物或人脸生成。取值有： <li>AllowAdult：允许生成成人；</li> <li>Disallowed：禁止在图片中包含人物或人脸；</li> 
                     */
                    std::string m_personGeneration;
                    bool m_personGenerationHasBeenSet;

                    /**
                     * 是否开启输入内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     */
                    std::string m_inputComplianceCheck;
                    bool m_inputComplianceCheckHasBeenSet;

                    /**
                     * 是否开启输出内容的合规性检查。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     */
                    std::string m_outputComplianceCheck;
                    bool m_outputComplianceCheckHasBeenSet;

                    /**
                     * 是否启用视频增强。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
说明：
1. 对于选择的分辨率超过模型可生成分辨率时，默认会启用增强。
2. 对于模型可以直出的分辨率，也可以主动选择模型直出低分辨率，使用增强获得指定分辨率。
                     */
                    std::string m_enhanceSwitch;
                    bool m_enhanceSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
