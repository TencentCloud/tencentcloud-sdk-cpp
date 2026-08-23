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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANASSETTARGET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANASSETTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanAutoMatchConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像扫描镜像匹配配置
                */
                class ImageScanAssetTarget : public AbstractModel
                {
                public:
                    ImageScanAssetTarget();
                    ~ImageScanAssetTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标镜像匹配模式</p><p>枚举值：</p><ul><li>ALL： 全部镜像</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * @return Mode <p>目标镜像匹配模式</p><p>枚举值：</p><ul><li>ALL： 全部镜像</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>目标镜像匹配模式</p><p>枚举值：</p><ul><li>ALL： 全部镜像</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * @param _mode <p>目标镜像匹配模式</p><p>枚举值：</p><ul><li>ALL： 全部镜像</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
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
                     * 获取<p>全部镜像模式下扫描排除的镜像id</p>
                     * @return ExcludeImages <p>全部镜像模式下扫描排除的镜像id</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImages() const;

                    /**
                     * 设置<p>全部镜像模式下扫描排除的镜像id</p>
                     * @param _excludeImages <p>全部镜像模式下扫描排除的镜像id</p>
                     * 
                     */
                    void SetExcludeImages(const std::vector<std::string>& _excludeImages);

                    /**
                     * 判断参数 ExcludeImages 是否已赋值
                     * @return ExcludeImages 是否已赋值
                     * 
                     */
                    bool ExcludeImagesHasBeenSet() const;

                    /**
                     * 获取<p>手动选择模式下需要扫描的镜像id</p>
                     * @return Images <p>手动选择模式下需要扫描的镜像id</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>手动选择模式下需要扫描的镜像id</p>
                     * @param _images <p>手动选择模式下需要扫描的镜像id</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>自动匹配模式下匹配配置</p>
                     * @return AutoMatch <p>自动匹配模式下匹配配置</p>
                     * 
                     */
                    ImageScanAutoMatchConfig GetAutoMatch() const;

                    /**
                     * 设置<p>自动匹配模式下匹配配置</p>
                     * @param _autoMatch <p>自动匹配模式下匹配配置</p>
                     * 
                     */
                    void SetAutoMatch(const ImageScanAutoMatchConfig& _autoMatch);

                    /**
                     * 判断参数 AutoMatch 是否已赋值
                     * @return AutoMatch 是否已赋值
                     * 
                     */
                    bool AutoMatchHasBeenSet() const;

                private:

                    /**
                     * <p>目标镜像匹配模式</p><p>枚举值：</p><ul><li>ALL： 全部镜像</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>全部镜像模式下扫描排除的镜像id</p>
                     */
                    std::vector<std::string> m_excludeImages;
                    bool m_excludeImagesHasBeenSet;

                    /**
                     * <p>手动选择模式下需要扫描的镜像id</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>自动匹配模式下匹配配置</p>
                     */
                    ImageScanAutoMatchConfig m_autoMatch;
                    bool m_autoMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANASSETTARGET_H_
