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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateApp请求参数结构体
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID
                     * @return SpaceId 空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID
                     * @param _spaceId 空间ID
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
                     * 获取应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * @return AppMode 应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * @param _appMode 应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                    /**
                     * 获取应用头像
                     * @return Avatar 应用头像
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置应用头像
                     * @param _avatar 应用头像
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取应用描述
                     * @return Description 应用描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用描述
                     * @param _description 应用描述
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
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                    /**
                     * 应用头像
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 应用描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPREQUEST_H_
