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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYPROJECTREQUEST_H_

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
                * ModifyProject请求参数结构体
                */
                class ModifyProjectRequest : public AbstractModel
                {
                public:
                    ModifyProjectRequest();
                    ~ModifyProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return Id 项目Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置项目Id
                     * @param _id 项目Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
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
                     * 获取颜色值
                     * @return ColorCode 颜色值
                     * 
                     */
                    std::string GetColorCode() const;

                    /**
                     * 设置颜色值
                     * @param _colorCode 颜色值
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
                     * 获取图标
                     * @return Logo 图标
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置图标
                     * @param _logo 图标
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
                     * 获取可申请
                     * @return IsApply 可申请
                     * 
                     */
                    bool GetIsApply() const;

                    /**
                     * 设置可申请
                     * @param _isApply 可申请
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
                     * 获取种子
                     * @return Seed 种子
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置种子
                     * @param _seed 种子
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

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
                     * 获取2
                     * @return PanelScope 2
                     * 
                     */
                    std::string GetPanelScope() const;

                    /**
                     * 设置2
                     * @param _panelScope 2
                     * 
                     */
                    void SetPanelScope(const std::string& _panelScope);

                    /**
                     * 判断参数 PanelScope 是否已赋值
                     * @return PanelScope 是否已赋值
                     * 
                     */
                    bool PanelScopeHasBeenSet() const;

                    /**
                     * 获取项目管理平台
                     * @return ManagePlatform 项目管理平台
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置项目管理平台
                     * @param _managePlatform 项目管理平台
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
                     * 项目Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 颜色值
                     */
                    std::string m_colorCode;
                    bool m_colorCodeHasBeenSet;

                    /**
                     * 图标
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * 可申请
                     */
                    bool m_isApply;
                    bool m_isApplyHasBeenSet;

                    /**
                     * 种子
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 默认看板
                     */
                    int64_t m_defaultPanelType;
                    bool m_defaultPanelTypeHasBeenSet;

                    /**
                     * 2
                     */
                    std::string m_panelScope;
                    bool m_panelScopeHasBeenSet;

                    /**
                     * 项目管理平台
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYPROJECTREQUEST_H_
