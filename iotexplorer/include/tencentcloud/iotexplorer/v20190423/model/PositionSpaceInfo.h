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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONSPACEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONSPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 位置空间详情
                */
                class PositionSpaceInfo : public AbstractModel
                {
                public:
                    PositionSpaceInfo();
                    ~PositionSpaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取位置空间Id
                     * @return SpaceId 位置空间Id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置位置空间Id
                     * @param _spaceId 位置空间Id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取位置空间名称
                     * @return SpaceName 位置空间名称
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置位置空间名称
                     * @param _spaceName 位置空间名称
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取授权类型
                     * @return AuthorizeType 授权类型
                     * 
                     */
                    int64_t GetAuthorizeType() const;

                    /**
                     * 设置授权类型
                     * @param _authorizeType 授权类型
                     * 
                     */
                    void SetAuthorizeType(const int64_t& _authorizeType);

                    /**
                     * 判断参数 AuthorizeType 是否已赋值
                     * @return AuthorizeType 是否已赋值
                     * 
                     */
                    bool AuthorizeTypeHasBeenSet() const;

                    /**
                     * 获取描述备注
                     * @return Description 描述备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述备注
                     * @param _description 描述备注
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
                     * 获取产品列表
                     * @return ProductIdList 产品列表
                     * 
                     */
                    std::vector<std::string> GetProductIdList() const;

                    /**
                     * 设置产品列表
                     * @param _productIdList 产品列表
                     * 
                     */
                    void SetProductIdList(const std::vector<std::string>& _productIdList);

                    /**
                     * 判断参数 ProductIdList 是否已赋值
                     * @return ProductIdList 是否已赋值
                     * 
                     */
                    bool ProductIdListHasBeenSet() const;

                    /**
                     * 获取缩略图
                     * @return Icon 缩略图
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置缩略图
                     * @param _icon 缩略图
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取用户自定义地图缩放
                     * @return Zoom 用户自定义地图缩放
                     * 
                     */
                    uint64_t GetZoom() const;

                    /**
                     * 设置用户自定义地图缩放
                     * @param _zoom 用户自定义地图缩放
                     * 
                     */
                    void SetZoom(const uint64_t& _zoom);

                    /**
                     * 判断参数 Zoom 是否已赋值
                     * @return Zoom 是否已赋值
                     * 
                     */
                    bool ZoomHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 位置空间Id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 位置空间名称
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * 授权类型
                     */
                    int64_t m_authorizeType;
                    bool m_authorizeTypeHasBeenSet;

                    /**
                     * 描述备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 产品列表
                     */
                    std::vector<std::string> m_productIdList;
                    bool m_productIdListHasBeenSet;

                    /**
                     * 缩略图
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 用户自定义地图缩放
                     */
                    uint64_t m_zoom;
                    bool m_zoomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONSPACEINFO_H_
