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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageSceneAigcEncodeConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 场景化生图任务的输出媒体文件配置。
                */
                class SceneAigcImageOutputConfig : public AbstractModel
                {
                public:
                    SceneAigcImageOutputConfig();
                    ~SceneAigcImageOutputConfig() = default;
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
                     * 获取<p>指定所生成图片的宽高比。输入格式为 W:H。<br>本字段在以下场景有效：</p><ul><li>生商品图场景，可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、16:9、9:16、21:9</li><li>AI扩图场景。可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9，可以配合 ImageWidth 和 ImageHeight 使用，规则如下： <ol><li>仅指定 AspectRatio 时，根据原图输入进行自适应调整。</li><li>指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。</li><li>当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。</li></ol></li></ul>
                     * @return AspectRatio <p>指定所生成图片的宽高比。输入格式为 W:H。<br>本字段在以下场景有效：</p><ul><li>生商品图场景，可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、16:9、9:16、21:9</li><li>AI扩图场景。可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9，可以配合 ImageWidth 和 ImageHeight 使用，规则如下： <ol><li>仅指定 AspectRatio 时，根据原图输入进行自适应调整。</li><li>指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。</li><li>当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。</li></ol></li></ul>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>指定所生成图片的宽高比。输入格式为 W:H。<br>本字段在以下场景有效：</p><ul><li>生商品图场景，可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、16:9、9:16、21:9</li><li>AI扩图场景。可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9，可以配合 ImageWidth 和 ImageHeight 使用，规则如下： <ol><li>仅指定 AspectRatio 时，根据原图输入进行自适应调整。</li><li>指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。</li><li>当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。</li></ol></li></ul>
                     * @param _aspectRatio <p>指定所生成图片的宽高比。输入格式为 W:H。<br>本字段在以下场景有效：</p><ul><li>生商品图场景，可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、16:9、9:16、21:9</li><li>AI扩图场景。可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9，可以配合 ImageWidth 和 ImageHeight 使用，规则如下： <ol><li>仅指定 AspectRatio 时，根据原图输入进行自适应调整。</li><li>指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。</li><li>当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。</li></ol></li></ul>
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
                     * 获取<p>输出图片编码格式参数。<strong>仅AI换衣场景有效。</strong></p>
                     * @return EncodeConfig <p>输出图片编码格式参数。<strong>仅AI换衣场景有效。</strong></p>
                     * 
                     */
                    ImageSceneAigcEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>输出图片编码格式参数。<strong>仅AI换衣场景有效。</strong></p>
                     * @param _encodeConfig <p>输出图片编码格式参数。<strong>仅AI换衣场景有效。</strong></p>
                     * 
                     */
                    void SetEncodeConfig(const ImageSceneAigcEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>输出图像宽度，<strong>仅AI扩图场景有效</strong>。</p>
                     * @return ImageWidth <p>输出图像宽度，<strong>仅AI扩图场景有效</strong>。</p>
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置<p>输出图像宽度，<strong>仅AI扩图场景有效</strong>。</p>
                     * @param _imageWidth <p>输出图像宽度，<strong>仅AI扩图场景有效</strong>。</p>
                     * 
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取<p>输出图像高度，<strong>仅AI扩图场景有效</strong>。</p>
                     * @return ImageHeight <p>输出图像高度，<strong>仅AI扩图场景有效</strong>。</p>
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置<p>输出图像高度，<strong>仅AI扩图场景有效</strong>。</p>
                     * @param _imageHeight <p>输出图像高度，<strong>仅AI扩图场景有效</strong>。</p>
                     * 
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取<p>输出分辨率。仅change_clothes、change_clothes_under场景有效。可选值：1K、2K、4K。</p>
                     * @return Resolution <p>输出分辨率。仅change_clothes、change_clothes_under场景有效。可选值：1K、2K、4K。</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>输出分辨率。仅change_clothes、change_clothes_under场景有效。可选值：1K、2K、4K。</p>
                     * @param _resolution <p>输出分辨率。仅change_clothes、change_clothes_under场景有效。可选值：1K、2K、4K。</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

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
                     * <p>指定所生成图片的宽高比。输入格式为 W:H。<br>本字段在以下场景有效：</p><ul><li>生商品图场景，可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、16:9、9:16、21:9</li><li>AI扩图场景。可选值为：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9，可以配合 ImageWidth 和 ImageHeight 使用，规则如下： <ol><li>仅指定 AspectRatio 时，根据原图输入进行自适应调整。</li><li>指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。</li><li>当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。</li></ol></li></ul>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>输出图片编码格式参数。<strong>仅AI换衣场景有效。</strong></p>
                     */
                    ImageSceneAigcEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>输出图像宽度，<strong>仅AI扩图场景有效</strong>。</p>
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * <p>输出图像高度，<strong>仅AI扩图场景有效</strong>。</p>
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * <p>输出分辨率。仅change_clothes、change_clothes_under场景有效。可选值：1K、2K、4K。</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_
