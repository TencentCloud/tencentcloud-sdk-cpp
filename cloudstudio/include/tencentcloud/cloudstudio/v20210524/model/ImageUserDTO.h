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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_IMAGEUSERDTO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_IMAGEUSERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 可用镜像模板列表
                */
                class ImageUserDTO : public AbstractModel
                {
                public:
                    ImageUserDTO();
                    ~ImageUserDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像模板ID
                     * @return Id 镜像模板ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置镜像模板ID
                     * @param _id 镜像模板ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取镜像模板名称
                     * @return Name 镜像模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置镜像模板名称
                     * @param _name 镜像模板名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Tag时间
                     * @return Tag Tag时间
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Tag时间
                     * @param _tag Tag时间
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取中文描述
                     * @return DescriptionCN 中文描述
                     * 
                     */
                    std::string GetDescriptionCN() const;

                    /**
                     * 设置中文描述
                     * @param _descriptionCN 中文描述
                     * 
                     */
                    void SetDescriptionCN(const std::string& _descriptionCN);

                    /**
                     * 判断参数 DescriptionCN 是否已赋值
                     * @return DescriptionCN 是否已赋值
                     * 
                     */
                    bool DescriptionCNHasBeenSet() const;

                    /**
                     * 获取图标地址
                     * @return IconUrl 图标地址
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置图标地址
                     * @param _iconUrl 图标地址
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Author 创建人
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置创建人
                     * @param _author 创建人
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取访问状态
                     * @return Visible 访问状态
                     * 
                     */
                    std::string GetVisible() const;

                    /**
                     * 设置访问状态
                     * @param _visible 访问状态
                     * 
                     */
                    void SetVisible(const std::string& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return WorkspaceVersion 版本
                     * 
                     */
                    int64_t GetWorkspaceVersion() const;

                    /**
                     * 设置版本
                     * @param _workspaceVersion 版本
                     * 
                     */
                    void SetWorkspaceVersion(const int64_t& _workspaceVersion);

                    /**
                     * 判断参数 WorkspaceVersion 是否已赋值
                     * @return WorkspaceVersion 是否已赋值
                     * 
                     */
                    bool WorkspaceVersionHasBeenSet() const;

                    /**
                     * 获取分类
                     * @return Sort 分类
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置分类
                     * @param _sort 分类
                     * 
                     */
                    void SetSort(const int64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 镜像模板ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 镜像模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag时间
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 中文描述
                     */
                    std::string m_descriptionCN;
                    bool m_descriptionCNHasBeenSet;

                    /**
                     * 图标地址
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 访问状态
                     */
                    std::string m_visible;
                    bool m_visibleHasBeenSet;

                    /**
                     * 版本
                     */
                    int64_t m_workspaceVersion;
                    bool m_workspaceVersionHasBeenSet;

                    /**
                     * 分类
                     */
                    int64_t m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_IMAGEUSERDTO_H_
