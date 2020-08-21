/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述了镜像信息。
                */
                class Blueprint : public AbstractModel
                {
                public:
                    Blueprint();
                    ~Blueprint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像 ID  ，是 blueprint 的唯一标识。
                     * @return BlueprintId 镜像 ID  ，是 blueprint 的唯一标识。
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像 ID  ，是 blueprint 的唯一标识。
                     * @param BlueprintId 镜像 ID  ，是 blueprint 的唯一标识。
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取镜像对外展示标题。
                     * @return DisplayTitle 镜像对外展示标题。
                     */
                    std::string GetDisplayTitle() const;

                    /**
                     * 设置镜像对外展示标题。
                     * @param DisplayTitle 镜像对外展示标题。
                     */
                    void SetDisplayTitle(const std::string& _displayTitle);

                    /**
                     * 判断参数 DisplayTitle 是否已赋值
                     * @return DisplayTitle 是否已赋值
                     */
                    bool DisplayTitleHasBeenSet() const;

                    /**
                     * 获取镜像对外展示版本。
                     * @return DisplayVersion 镜像对外展示版本。
                     */
                    std::string GetDisplayVersion() const;

                    /**
                     * 设置镜像对外展示版本。
                     * @param DisplayVersion 镜像对外展示版本。
                     */
                    void SetDisplayVersion(const std::string& _displayVersion);

                    /**
                     * 判断参数 DisplayVersion 是否已赋值
                     * @return DisplayVersion 是否已赋值
                     */
                    bool DisplayVersionHasBeenSet() const;

                    /**
                     * 获取镜像描述信息。
                     * @return Description 镜像描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置镜像描述信息。
                     * @param Description 镜像描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取操作系统名称。
                     * @return OsName 操作系统名称。
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称。
                     * @param OsName 操作系统名称。
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取操作系统平台。
                     * @return Platform 操作系统平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置操作系统平台。
                     * @param Platform 操作系统平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * @return PlatformType 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     */
                    std::string GetPlatformType() const;

                    /**
                     * 设置操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * @param PlatformType 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     */
                    void SetPlatformType(const std::string& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取镜像类型，如 APP_OS、PURE_OS。
                     * @return BlueprintType 镜像类型，如 APP_OS、PURE_OS。
                     */
                    std::string GetBlueprintType() const;

                    /**
                     * 设置镜像类型，如 APP_OS、PURE_OS。
                     * @param BlueprintType 镜像类型，如 APP_OS、PURE_OS。
                     */
                    void SetBlueprintType(const std::string& _blueprintType);

                    /**
                     * 判断参数 BlueprintType 是否已赋值
                     * @return BlueprintType 是否已赋值
                     */
                    bool BlueprintTypeHasBeenSet() const;

                    /**
                     * 获取镜像图片 URL。
                     * @return ImageUrl 镜像图片 URL。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像图片 URL。
                     * @param ImageUrl 镜像图片 URL。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 镜像 ID  ，是 blueprint 的唯一标识。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 镜像对外展示标题。
                     */
                    std::string m_displayTitle;
                    bool m_displayTitleHasBeenSet;

                    /**
                     * 镜像对外展示版本。
                     */
                    std::string m_displayVersion;
                    bool m_displayVersionHasBeenSet;

                    /**
                     * 镜像描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 操作系统名称。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 操作系统平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     */
                    std::string m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 镜像类型，如 APP_OS、PURE_OS。
                     */
                    std::string m_blueprintType;
                    bool m_blueprintTypeHasBeenSet;

                    /**
                     * 镜像图片 URL。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_
