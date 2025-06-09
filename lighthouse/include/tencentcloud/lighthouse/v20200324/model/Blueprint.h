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
                     * 获取镜像 ID  ，是 Blueprint 的唯一标识。
                     * @return BlueprintId 镜像 ID  ，是 Blueprint 的唯一标识。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像 ID  ，是 Blueprint 的唯一标识。
                     * @param _blueprintId 镜像 ID  ，是 Blueprint 的唯一标识。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取镜像对外展示标题。
                     * @return DisplayTitle 镜像对外展示标题。
                     * 
                     */
                    std::string GetDisplayTitle() const;

                    /**
                     * 设置镜像对外展示标题。
                     * @param _displayTitle 镜像对外展示标题。
                     * 
                     */
                    void SetDisplayTitle(const std::string& _displayTitle);

                    /**
                     * 判断参数 DisplayTitle 是否已赋值
                     * @return DisplayTitle 是否已赋值
                     * 
                     */
                    bool DisplayTitleHasBeenSet() const;

                    /**
                     * 获取镜像对外展示版本。
                     * @return DisplayVersion 镜像对外展示版本。
                     * 
                     */
                    std::string GetDisplayVersion() const;

                    /**
                     * 设置镜像对外展示版本。
                     * @param _displayVersion 镜像对外展示版本。
                     * 
                     */
                    void SetDisplayVersion(const std::string& _displayVersion);

                    /**
                     * 判断参数 DisplayVersion 是否已赋值
                     * @return DisplayVersion 是否已赋值
                     * 
                     */
                    bool DisplayVersionHasBeenSet() const;

                    /**
                     * 获取镜像描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 镜像描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置镜像描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 镜像描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取操作系统名称。
                     * @return OsName 操作系统名称。
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称。
                     * @param _osName 操作系统名称。
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取操作系统平台。
                     * @return Platform 操作系统平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置操作系统平台。
                     * @param _platform 操作系统平台。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * @return PlatformType 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * 
                     */
                    std::string GetPlatformType() const;

                    /**
                     * 设置操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * @param _platformType 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * 
                     */
                    void SetPlatformType(const std::string& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取镜像类型，如 APP_OS（应用镜像）, PURE_OS（系统镜像）, DOCKER（容器）, PRIVATE（私有镜像）, SHARED（共享镜像）, GAME_PORTAL（游戏专区镜像）。
                     * @return BlueprintType 镜像类型，如 APP_OS（应用镜像）, PURE_OS（系统镜像）, DOCKER（容器）, PRIVATE（私有镜像）, SHARED（共享镜像）, GAME_PORTAL（游戏专区镜像）。
                     * 
                     */
                    std::string GetBlueprintType() const;

                    /**
                     * 设置镜像类型，如 APP_OS（应用镜像）, PURE_OS（系统镜像）, DOCKER（容器）, PRIVATE（私有镜像）, SHARED（共享镜像）, GAME_PORTAL（游戏专区镜像）。
                     * @param _blueprintType 镜像类型，如 APP_OS（应用镜像）, PURE_OS（系统镜像）, DOCKER（容器）, PRIVATE（私有镜像）, SHARED（共享镜像）, GAME_PORTAL（游戏专区镜像）。
                     * 
                     */
                    void SetBlueprintType(const std::string& _blueprintType);

                    /**
                     * 判断参数 BlueprintType 是否已赋值
                     * @return BlueprintType 是否已赋值
                     * 
                     */
                    bool BlueprintTypeHasBeenSet() const;

                    /**
                     * 获取镜像图片 URL。
                     * @return ImageUrl 镜像图片 URL。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像图片 URL。
                     * @param _imageUrl 镜像图片 URL。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取镜像所需系统盘大小，单位 GB。
                     * @return RequiredSystemDiskSize 镜像所需系统盘大小，单位 GB。
                     * 
                     */
                    int64_t GetRequiredSystemDiskSize() const;

                    /**
                     * 设置镜像所需系统盘大小，单位 GB。
                     * @param _requiredSystemDiskSize 镜像所需系统盘大小，单位 GB。
                     * 
                     */
                    void SetRequiredSystemDiskSize(const int64_t& _requiredSystemDiskSize);

                    /**
                     * 判断参数 RequiredSystemDiskSize 是否已赋值
                     * @return RequiredSystemDiskSize 是否已赋值
                     * 
                     */
                    bool RequiredSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取镜像状态。
可选值：
NORMAL（正常）、SYNCING（同步中）、OFFLINE（下线）、ISOLATED（已隔离）、CREATEFAILED（创建失败）、SYNCING_FAILED（目的地域同步失败）、ISOLATING（隔离中）、ISOLATED（已隔离）、DELETING（删除中）、DESTROYING（销毁中）。
                     * @return BlueprintState 镜像状态。
可选值：
NORMAL（正常）、SYNCING（同步中）、OFFLINE（下线）、ISOLATED（已隔离）、CREATEFAILED（创建失败）、SYNCING_FAILED（目的地域同步失败）、ISOLATING（隔离中）、ISOLATED（已隔离）、DELETING（删除中）、DESTROYING（销毁中）。
                     * 
                     */
                    std::string GetBlueprintState() const;

                    /**
                     * 设置镜像状态。
可选值：
NORMAL（正常）、SYNCING（同步中）、OFFLINE（下线）、ISOLATED（已隔离）、CREATEFAILED（创建失败）、SYNCING_FAILED（目的地域同步失败）、ISOLATING（隔离中）、ISOLATED（已隔离）、DELETING（删除中）、DESTROYING（销毁中）。
                     * @param _blueprintState 镜像状态。
可选值：
NORMAL（正常）、SYNCING（同步中）、OFFLINE（下线）、ISOLATED（已隔离）、CREATEFAILED（创建失败）、SYNCING_FAILED（目的地域同步失败）、ISOLATING（隔离中）、ISOLATED（已隔离）、DELETING（删除中）、DESTROYING（销毁中）。
                     * 
                     */
                    void SetBlueprintState(const std::string& _blueprintState);

                    /**
                     * 判断参数 BlueprintState 是否已赋值
                     * @return BlueprintState 是否已赋值
                     * 
                     */
                    bool BlueprintStateHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取镜像名称。
                     * @return BlueprintName 镜像名称。
                     * 
                     */
                    std::string GetBlueprintName() const;

                    /**
                     * 设置镜像名称。
                     * @param _blueprintName 镜像名称。
                     * 
                     */
                    void SetBlueprintName(const std::string& _blueprintName);

                    /**
                     * 判断参数 BlueprintName 是否已赋值
                     * @return BlueprintName 是否已赋值
                     * 
                     */
                    bool BlueprintNameHasBeenSet() const;

                    /**
                     * 获取镜像是否支持自动化助手。
                     * @return SupportAutomationTools 镜像是否支持自动化助手。
                     * 
                     */
                    bool GetSupportAutomationTools() const;

                    /**
                     * 设置镜像是否支持自动化助手。
                     * @param _supportAutomationTools 镜像是否支持自动化助手。
                     * 
                     */
                    void SetSupportAutomationTools(const bool& _supportAutomationTools);

                    /**
                     * 判断参数 SupportAutomationTools 是否已赋值
                     * @return SupportAutomationTools 是否已赋值
                     * 
                     */
                    bool SupportAutomationToolsHasBeenSet() const;

                    /**
                     * 获取镜像所需内存大小, 单位: GB
                     * @return RequiredMemorySize 镜像所需内存大小, 单位: GB
                     * 
                     */
                    int64_t GetRequiredMemorySize() const;

                    /**
                     * 设置镜像所需内存大小, 单位: GB
                     * @param _requiredMemorySize 镜像所需内存大小, 单位: GB
                     * 
                     */
                    void SetRequiredMemorySize(const int64_t& _requiredMemorySize);

                    /**
                     * 判断参数 RequiredMemorySize 是否已赋值
                     * @return RequiredMemorySize 是否已赋值
                     * 
                     */
                    bool RequiredMemorySizeHasBeenSet() const;

                    /**
                     * 获取CVM镜像共享到轻量应用服务器轻量应用服务器后的CVM镜像ID。
                     * @return ImageId CVM镜像共享到轻量应用服务器轻量应用服务器后的CVM镜像ID。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置CVM镜像共享到轻量应用服务器轻量应用服务器后的CVM镜像ID。
                     * @param _imageId CVM镜像共享到轻量应用服务器轻量应用服务器后的CVM镜像ID。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取官方网站Url。
                     * @return CommunityUrl 官方网站Url。
                     * 
                     */
                    std::string GetCommunityUrl() const;

                    /**
                     * 设置官方网站Url。
                     * @param _communityUrl 官方网站Url。
                     * 
                     */
                    void SetCommunityUrl(const std::string& _communityUrl);

                    /**
                     * 判断参数 CommunityUrl 是否已赋值
                     * @return CommunityUrl 是否已赋值
                     * 
                     */
                    bool CommunityUrlHasBeenSet() const;

                    /**
                     * 获取指导文章Url。
                     * @return GuideUrl 指导文章Url。
                     * 
                     */
                    std::string GetGuideUrl() const;

                    /**
                     * 设置指导文章Url。
                     * @param _guideUrl 指导文章Url。
                     * 
                     */
                    void SetGuideUrl(const std::string& _guideUrl);

                    /**
                     * 判断参数 GuideUrl 是否已赋值
                     * @return GuideUrl 是否已赋值
                     * 
                     */
                    bool GuideUrlHasBeenSet() const;

                    /**
                     * 获取镜像关联使用场景Id列表。
                     * @return SceneIdSet 镜像关联使用场景Id列表。
                     * 
                     */
                    std::vector<std::string> GetSceneIdSet() const;

                    /**
                     * 设置镜像关联使用场景Id列表。
                     * @param _sceneIdSet 镜像关联使用场景Id列表。
                     * 
                     */
                    void SetSceneIdSet(const std::vector<std::string>& _sceneIdSet);

                    /**
                     * 判断参数 SceneIdSet 是否已赋值
                     * @return SceneIdSet 是否已赋值
                     * 
                     */
                    bool SceneIdSetHasBeenSet() const;

                    /**
                     * 获取Docker版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DockerVersion Docker版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置Docker版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dockerVersion Docker版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取镜像是否已共享。
                     * @return BlueprintShared 镜像是否已共享。
                     * 
                     */
                    bool GetBlueprintShared() const;

                    /**
                     * 设置镜像是否已共享。
                     * @param _blueprintShared 镜像是否已共享。
                     * 
                     */
                    void SetBlueprintShared(const bool& _blueprintShared);

                    /**
                     * 判断参数 BlueprintShared 是否已赋值
                     * @return BlueprintShared 是否已赋值
                     * 
                     */
                    bool BlueprintSharedHasBeenSet() const;

                private:

                    /**
                     * 镜像 ID  ，是 Blueprint 的唯一标识。
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
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 镜像类型，如 APP_OS（应用镜像）, PURE_OS（系统镜像）, DOCKER（容器）, PRIVATE（私有镜像）, SHARED（共享镜像）, GAME_PORTAL（游戏专区镜像）。
                     */
                    std::string m_blueprintType;
                    bool m_blueprintTypeHasBeenSet;

                    /**
                     * 镜像图片 URL。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 镜像所需系统盘大小，单位 GB。
                     */
                    int64_t m_requiredSystemDiskSize;
                    bool m_requiredSystemDiskSizeHasBeenSet;

                    /**
                     * 镜像状态。
可选值：
NORMAL（正常）、SYNCING（同步中）、OFFLINE（下线）、ISOLATED（已隔离）、CREATEFAILED（创建失败）、SYNCING_FAILED（目的地域同步失败）、ISOLATING（隔离中）、ISOLATED（已隔离）、DELETING（删除中）、DESTROYING（销毁中）。
                     */
                    std::string m_blueprintState;
                    bool m_blueprintStateHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 镜像名称。
                     */
                    std::string m_blueprintName;
                    bool m_blueprintNameHasBeenSet;

                    /**
                     * 镜像是否支持自动化助手。
                     */
                    bool m_supportAutomationTools;
                    bool m_supportAutomationToolsHasBeenSet;

                    /**
                     * 镜像所需内存大小, 单位: GB
                     */
                    int64_t m_requiredMemorySize;
                    bool m_requiredMemorySizeHasBeenSet;

                    /**
                     * CVM镜像共享到轻量应用服务器轻量应用服务器后的CVM镜像ID。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 官方网站Url。
                     */
                    std::string m_communityUrl;
                    bool m_communityUrlHasBeenSet;

                    /**
                     * 指导文章Url。
                     */
                    std::string m_guideUrl;
                    bool m_guideUrlHasBeenSet;

                    /**
                     * 镜像关联使用场景Id列表。
                     */
                    std::vector<std::string> m_sceneIdSet;
                    bool m_sceneIdSetHasBeenSet;

                    /**
                     * Docker版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * 镜像是否已共享。
                     */
                    bool m_blueprintShared;
                    bool m_blueprintSharedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_
