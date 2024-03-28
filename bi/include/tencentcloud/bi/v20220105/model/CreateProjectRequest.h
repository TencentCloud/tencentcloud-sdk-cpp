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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名称
                     * @return Name 项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
                     * @param _name 项目名称
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
                     * 获取logo底色
                     * @return ColorCode logo底色
                     * 
                     */
                    std::string GetColorCode() const;

                    /**
                     * 设置logo底色
                     * @param _colorCode logo底色
                     * 
                     */
                    void SetColorCode(const std::string& _colorCode);

                    /**
                     * 判断参数 ColorCode 是否已赋值
                     * @return ColorCode 是否已赋值
                     * 
                     */
                    bool ColorCodeHasBeenSet() const;

                    /**
                     * 获取项目Logo
                     * @return Logo 项目Logo
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置项目Logo
                     * @param _logo 项目Logo
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Mark 备注
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置备注
                     * @param _mark 备注
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取是否允许用户申请
                     * @return IsApply 是否允许用户申请
                     * 
                     */
                    bool GetIsApply() const;

                    /**
                     * 设置是否允许用户申请
                     * @param _isApply 是否允许用户申请
                     * 
                     */
                    void SetIsApply(const bool& _isApply);

                    /**
                     * 判断参数 IsApply 是否已赋值
                     * @return IsApply 是否已赋值
                     * 
                     */
                    bool IsApplyHasBeenSet() const;

                    /**
                     * 获取默认看板
                     * @return DefaultPanelType 默认看板
                     * 
                     */
                    int64_t GetDefaultPanelType() const;

                    /**
                     * 设置默认看板
                     * @param _defaultPanelType 默认看板
                     * 
                     */
                    void SetDefaultPanelType(const int64_t& _defaultPanelType);

                    /**
                     * 判断参数 DefaultPanelType 是否已赋值
                     * @return DefaultPanelType 是否已赋值
                     * 
                     */
                    bool DefaultPanelTypeHasBeenSet() const;

                    /**
                     * 获取管理平台
                     * @return ManagePlatform 管理平台
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置管理平台
                     * @param _managePlatform 管理平台
                     * 
                     */
                    void SetManagePlatform(const std::string& _managePlatform);

                    /**
                     * 判断参数 ManagePlatform 是否已赋值
                     * @return ManagePlatform 是否已赋值
                     * 
                     */
                    bool ManagePlatformHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * logo底色
                     */
                    std::string m_colorCode;
                    bool m_colorCodeHasBeenSet;

                    /**
                     * 项目Logo
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * 是否允许用户申请
                     */
                    bool m_isApply;
                    bool m_isApplyHasBeenSet;

                    /**
                     * 默认看板
                     */
                    int64_t m_defaultPanelType;
                    bool m_defaultPanelTypeHasBeenSet;

                    /**
                     * 管理平台
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEPROJECTREQUEST_H_
