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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEPOSITIONSPACEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEPOSITIONSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreatePositionSpace请求参数结构体
                */
                class CreatePositionSpaceRequest : public AbstractModel
                {
                public:
                    CreatePositionSpaceRequest();
                    ~CreatePositionSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取空间名称
                     * @return SpaceName 空间名称
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置空间名称
                     * @param _spaceName 空间名称
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
                     * 获取授权类型，0：只读 1：读写
                     * @return AuthorizeType 授权类型，0：只读 1：读写
                     * 
                     */
                    int64_t GetAuthorizeType() const;

                    /**
                     * 设置授权类型，0：只读 1：读写
                     * @param _authorizeType 授权类型，0：只读 1：读写
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

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 空间名称
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * 授权类型，0：只读 1：读写
                     */
                    int64_t m_authorizeType;
                    bool m_authorizeTypeHasBeenSet;

                    /**
                     * 产品列表
                     */
                    std::vector<std::string> m_productIdList;
                    bool m_productIdListHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 缩略图
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEPOSITIONSPACEREQUEST_H_
