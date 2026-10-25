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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOOUTPUTCONFIG_H_

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
                * AIGC 场景化生视频任务的输出媒体文件配置。
                */
                class SceneAigcVideoOutputConfig : public AbstractModel
                {
                public:
                    SceneAigcVideoOutputConfig();
                    ~SceneAigcVideoOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储模式。取值有： <li>Permanent：永久存储，生成的图片文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的图片文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li><br>默认值：Temporary</p><p>当使用角色场景时，不支持指定为 Permanent。</p>
                     * @return StorageMode <p>存储模式。取值有： <li>Permanent：永久存储，生成的图片文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的图片文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li><br>默认值：Temporary</p><p>当使用角色场景时，不支持指定为 Permanent。</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式。取值有： <li>Permanent：永久存储，生成的图片文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的图片文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li><br>默认值：Temporary</p><p>当使用角色场景时，不支持指定为 Permanent。</p>
                     * @param _storageMode <p>存储模式。取值有： <li>Permanent：永久存储，生成的图片文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的图片文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li><br>默认值：Temporary</p><p>当使用角色场景时，不支持指定为 Permanent。</p>
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
                     * 获取<p>指定所生成视频的宽高比。输入格式为 W:H。</p><ul><li>当生商品图场景时，可选：16:9、9:16。</li><li>当角色场景时，可选：21:9、16:9、9:16、4:3、3:4、1:1。</li></ul>
                     * @return AspectRatio <p>指定所生成视频的宽高比。输入格式为 W:H。</p><ul><li>当生商品图场景时，可选：16:9、9:16。</li><li>当角色场景时，可选：21:9、16:9、9:16、4:3、3:4、1:1。</li></ul>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>指定所生成视频的宽高比。输入格式为 W:H。</p><ul><li>当生商品图场景时，可选：16:9、9:16。</li><li>当角色场景时，可选：21:9、16:9、9:16、4:3、3:4、1:1。</li></ul>
                     * @param _aspectRatio <p>指定所生成视频的宽高比。输入格式为 W:H。</p><ul><li>当生商品图场景时，可选：16:9、9:16。</li><li>当角色场景时，可选：21:9、16:9、9:16、4:3、3:4、1:1。</li></ul>
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
                     * 获取<p>生成视频时长。</p><ul><li>当使用生商品图场景时，可选值4、6、8秒。</li><li>当使用角色场景时，可选值为4到15秒。</li></ul>
                     * @return Duration <p>生成视频时长。</p><ul><li>当使用生商品图场景时，可选值4、6、8秒。</li><li>当使用角色场景时，可选值为4到15秒。</li></ul>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>生成视频时长。</p><ul><li>当使用生商品图场景时，可选值4、6、8秒。</li><li>当使用角色场景时，可选值为4到15秒。</li></ul>
                     * @param _duration <p>生成视频时长。</p><ul><li>当使用生商品图场景时，可选值4、6、8秒。</li><li>当使用角色场景时，可选值为4到15秒。</li></ul>
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
                     * 获取<p>分辨率。仅当角色场景时有效。取值如下：</p><ul><li>当 Model 是 character_scene_standard 时，支持 480p、720p、1080p、4K；</li><li>当 Model 是 character_scene_mini 时，支持 480p、720p；</li><li>当 Model 是 character_scene_fast 时，支持 720p。</li></ul>
                     * @return Resolution <p>分辨率。仅当角色场景时有效。取值如下：</p><ul><li>当 Model 是 character_scene_standard 时，支持 480p、720p、1080p、4K；</li><li>当 Model 是 character_scene_mini 时，支持 480p、720p；</li><li>当 Model 是 character_scene_fast 时，支持 720p。</li></ul>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>分辨率。仅当角色场景时有效。取值如下：</p><ul><li>当 Model 是 character_scene_standard 时，支持 480p、720p、1080p、4K；</li><li>当 Model 是 character_scene_mini 时，支持 480p、720p；</li><li>当 Model 是 character_scene_fast 时，支持 720p。</li></ul>
                     * @param _resolution <p>分辨率。仅当角色场景时有效。取值如下：</p><ul><li>当 Model 是 character_scene_standard 时，支持 480p、720p、1080p、4K；</li><li>当 Model 是 character_scene_mini 时，支持 480p、720p；</li><li>当 Model 是 character_scene_fast 时，支持 720p。</li></ul>
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
                     * <p>存储模式。取值有： <li>Permanent：永久存储，生成的图片文件将存储到云点播，可在事件通知中获取到 FileId；</li> <li>Temporary：临时存储，生成的图片文件不会存储到云点播，可在事件通知中获取到临时访问的 URL；</li><br>默认值：Temporary</p><p>当使用角色场景时，不支持指定为 Permanent。</p>
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
                     * <p>指定所生成视频的宽高比。输入格式为 W:H。</p><ul><li>当生商品图场景时，可选：16:9、9:16。</li><li>当角色场景时，可选：21:9、16:9、9:16、4:3、3:4、1:1。</li></ul>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>生成视频时长。</p><ul><li>当使用生商品图场景时，可选值4、6、8秒。</li><li>当使用角色场景时，可选值为4到15秒。</li></ul>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>分辨率。仅当角色场景时有效。取值如下：</p><ul><li>当 Model 是 character_scene_standard 时，支持 480p、720p、1080p、4K；</li><li>当 Model 是 character_scene_mini 时，支持 480p、720p；</li><li>当 Model 是 character_scene_fast 时，支持 720p。</li></ul>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOOUTPUTCONFIG_H_
