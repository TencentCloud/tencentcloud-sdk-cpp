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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_

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
                * AIGC 生图任务的输出媒体文件配置。
                */
                class AigcImageOutputConfig : public AbstractModel
                {
                public:
                    AigcImageOutputConfig();
                    ~AigcImageOutputConfig() = default;
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
                     * 获取<p>输出文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * @return MediaName <p>输出文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>输出文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
                     * @param _mediaName <p>输出文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
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
                     * 获取<p>生成图片的分辨率。各模型可选值：</p><ul><li>GG 2.5：1K、2K、4K，默认1K；</li><li>GG 3.0：1K、2K、4K，默认1K；</li><li>GG 3.1：512、1K、2K、4K，默认1K；</li><li>Kling 2.1：1k、2k，默认1k；</li><li>Kling 3.0：1k、2k，默认1k；</li><li>Kling 3.0-Omni：1k、2k、4k，默认1k；</li><li>Kling O1：1k、2k、4k，默认1k；</li><li>SI 4.0：1K、2K、4K，默认1K；</li><li>SI 4.5：2K、4K，默认2K；</li><li>SI 5.0-lite：2K、3K，默认2K；</li><li>Vidu q2：1080p、2K、4K，默认1080p；</li><li>Hunyuan 3.0：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li><li>Qwen 0925：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li></ul>
                     * @return Resolution <p>生成图片的分辨率。各模型可选值：</p><ul><li>GG 2.5：1K、2K、4K，默认1K；</li><li>GG 3.0：1K、2K、4K，默认1K；</li><li>GG 3.1：512、1K、2K、4K，默认1K；</li><li>Kling 2.1：1k、2k，默认1k；</li><li>Kling 3.0：1k、2k，默认1k；</li><li>Kling 3.0-Omni：1k、2k、4k，默认1k；</li><li>Kling O1：1k、2k、4k，默认1k；</li><li>SI 4.0：1K、2K、4K，默认1K；</li><li>SI 4.5：2K、4K，默认2K；</li><li>SI 5.0-lite：2K、3K，默认2K；</li><li>Vidu q2：1080p、2K、4K，默认1080p；</li><li>Hunyuan 3.0：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li><li>Qwen 0925：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li></ul>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>生成图片的分辨率。各模型可选值：</p><ul><li>GG 2.5：1K、2K、4K，默认1K；</li><li>GG 3.0：1K、2K、4K，默认1K；</li><li>GG 3.1：512、1K、2K、4K，默认1K；</li><li>Kling 2.1：1k、2k，默认1k；</li><li>Kling 3.0：1k、2k，默认1k；</li><li>Kling 3.0-Omni：1k、2k、4k，默认1k；</li><li>Kling O1：1k、2k、4k，默认1k；</li><li>SI 4.0：1K、2K、4K，默认1K；</li><li>SI 4.5：2K、4K，默认2K；</li><li>SI 5.0-lite：2K、3K，默认2K；</li><li>Vidu q2：1080p、2K、4K，默认1080p；</li><li>Hunyuan 3.0：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li><li>Qwen 0925：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li></ul>
                     * @param _resolution <p>生成图片的分辨率。各模型可选值：</p><ul><li>GG 2.5：1K、2K、4K，默认1K；</li><li>GG 3.0：1K、2K、4K，默认1K；</li><li>GG 3.1：512、1K、2K、4K，默认1K；</li><li>Kling 2.1：1k、2k，默认1k；</li><li>Kling 3.0：1k、2k，默认1k；</li><li>Kling 3.0-Omni：1k、2k、4k，默认1k；</li><li>Kling O1：1k、2k、4k，默认1k；</li><li>SI 4.0：1K、2K、4K，默认1K；</li><li>SI 4.5：2K、4K，默认2K；</li><li>SI 5.0-lite：2K、3K，默认2K；</li><li>Vidu q2：1080p、2K、4K，默认1080p；</li><li>Hunyuan 3.0：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li><li>Qwen 0925：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li></ul>
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
                     * 获取<p>指定所生成图片的宽高比。</p><ul><li>GG 2.5：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.0：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.1：1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9；</li><li>Kling 2.1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0-Omni：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Kling O1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Vidu q2：16:9、9:16、1:1、3:4、4:3、21:9、2:3、3:2；</li><li>SI 4.0：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 4.5：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 5.0-lite：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Hunyuan 3.0：不支持；</li><li>Qwen 2.0：不支持；</li><li>Qwen 0925：不支持；</li></ul>
                     * @return AspectRatio <p>指定所生成图片的宽高比。</p><ul><li>GG 2.5：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.0：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.1：1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9；</li><li>Kling 2.1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0-Omni：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Kling O1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Vidu q2：16:9、9:16、1:1、3:4、4:3、21:9、2:3、3:2；</li><li>SI 4.0：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 4.5：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 5.0-lite：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Hunyuan 3.0：不支持；</li><li>Qwen 2.0：不支持；</li><li>Qwen 0925：不支持；</li></ul>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>指定所生成图片的宽高比。</p><ul><li>GG 2.5：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.0：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.1：1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9；</li><li>Kling 2.1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0-Omni：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Kling O1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Vidu q2：16:9、9:16、1:1、3:4、4:3、21:9、2:3、3:2；</li><li>SI 4.0：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 4.5：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 5.0-lite：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Hunyuan 3.0：不支持；</li><li>Qwen 2.0：不支持；</li><li>Qwen 0925：不支持；</li></ul>
                     * @param _aspectRatio <p>指定所生成图片的宽高比。</p><ul><li>GG 2.5：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.0：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.1：1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9；</li><li>Kling 2.1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0-Omni：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Kling O1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Vidu q2：16:9、9:16、1:1、3:4、4:3、21:9、2:3、3:2；</li><li>SI 4.0：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 4.5：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 5.0-lite：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Hunyuan 3.0：不支持；</li><li>Qwen 2.0：不支持；</li><li>Qwen 0925：不支持；</li></ul>
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
                     * 获取<p>生成图片张数。*<em>仅ModelName为Kling时有效，可选值 1-9 *</em>。</p>
                     * @return OutputImageCount <p>生成图片张数。*<em>仅ModelName为Kling时有效，可选值 1-9 *</em>。</p>
                     * 
                     */
                    uint64_t GetOutputImageCount() const;

                    /**
                     * 设置<p>生成图片张数。*<em>仅ModelName为Kling时有效，可选值 1-9 *</em>。</p>
                     * @param _outputImageCount <p>生成图片张数。*<em>仅ModelName为Kling时有效，可选值 1-9 *</em>。</p>
                     * 
                     */
                    void SetOutputImageCount(const uint64_t& _outputImageCount);

                    /**
                     * 判断参数 OutputImageCount 是否已赋值
                     * @return OutputImageCount 是否已赋值
                     * 
                     */
                    bool OutputImageCountHasBeenSet() const;

                private:

                    /**
                     * <p>存储模式</p><p>枚举值：</p><ul><li>Temporary： 临时存储，生成的视频文件不会存储到云点播，可在事件通知中获取到临时访问的 URL，有效期 7 天</li><li>Permanent： 永久存储，生成的视频文件将存储到云点播，可在事件通知中获取到 FileId</li></ul><p>默认值：Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>输出文件名，最长 64 个字符。缺省由系统指定生成文件名。</p>
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
                     * <p>生成图片的分辨率。各模型可选值：</p><ul><li>GG 2.5：1K、2K、4K，默认1K；</li><li>GG 3.0：1K、2K、4K，默认1K；</li><li>GG 3.1：512、1K、2K、4K，默认1K；</li><li>Kling 2.1：1k、2k，默认1k；</li><li>Kling 3.0：1k、2k，默认1k；</li><li>Kling 3.0-Omni：1k、2k、4k，默认1k；</li><li>Kling O1：1k、2k、4k，默认1k；</li><li>SI 4.0：1K、2K、4K，默认1K；</li><li>SI 4.5：2K、4K，默认2K；</li><li>SI 5.0-lite：2K、3K，默认2K；</li><li>Vidu q2：1080p、2K、4K，默认1080p；</li><li>Hunyuan 3.0：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li><li>Qwen 0925：暂不支持本字段，可通过<code>ExtInfo</code>字段设置分辨率；</li></ul>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>指定所生成图片的宽高比。</p><ul><li>GG 2.5：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.0：1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9；</li><li>GG 3.1：1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9；</li><li>Kling 2.1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Kling 3.0-Omni：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Kling O1：16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto；</li><li>Vidu q2：16:9、9:16、1:1、3:4、4:3、21:9、2:3、3:2；</li><li>SI 4.0：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 4.5：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>SI 5.0-lite：<strong>不支持</strong>此参数，可通过prompt指定16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9；</li><li>Hunyuan 3.0：不支持；</li><li>Qwen 2.0：不支持；</li><li>Qwen 0925：不支持；</li></ul>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

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
                     * <p>生成图片张数。*<em>仅ModelName为Kling时有效，可选值 1-9 *</em>。</p>
                     */
                    uint64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_
