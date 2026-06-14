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
                     * 获取<p>项目Id</p>
                     * @return Id <p>项目Id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>项目Id</p>
                     * @param _id <p>项目Id</p>
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
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>颜色值</p>
                     * @return ColorCode <p>颜色值</p>
                     * 
                     */
                    std::string GetColorCode() const;

                    /**
                     * 设置<p>颜色值</p>
                     * @param _colorCode <p>颜色值</p>
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
                     * 获取<p>图标</p>
                     * @return Logo <p>图标</p>
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置<p>图标</p>
                     * @param _logo <p>图标</p>
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
                     * 获取<p>备注</p>
                     * @return Mark <p>备注</p>
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _mark <p>备注</p>
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
                     * 获取<p>可申请</p>
                     * @return IsApply <p>可申请</p>
                     * 
                     */
                    bool GetIsApply() const;

                    /**
                     * 设置<p>可申请</p>
                     * @param _isApply <p>可申请</p>
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
                     * 获取<p>种子</p>
                     * @return Seed <p>种子</p>
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置<p>种子</p>
                     * @param _seed <p>种子</p>
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
                     * 获取<p>默认看板</p><p>枚举值：</p><ul><li>1： 项目看板</li><li>2： 我的看板</li></ul>
                     * @return DefaultPanelType <p>默认看板</p><p>枚举值：</p><ul><li>1： 项目看板</li><li>2： 我的看板</li></ul>
                     * 
                     */
                    int64_t GetDefaultPanelType() const;

                    /**
                     * 设置<p>默认看板</p><p>枚举值：</p><ul><li>1： 项目看板</li><li>2： 我的看板</li></ul>
                     * @param _defaultPanelType <p>默认看板</p><p>枚举值：</p><ul><li>1： 项目看板</li><li>2： 我的看板</li></ul>
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
                     * 获取<p>2</p>
                     * @return PanelScope <p>2</p>
                     * 
                     */
                    std::string GetPanelScope() const;

                    /**
                     * 设置<p>2</p>
                     * @param _panelScope <p>2</p>
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
                     * 获取<p>项目管理平台</p>
                     * @return ManagePlatform <p>项目管理平台</p>
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置<p>项目管理平台</p>
                     * @param _managePlatform <p>项目管理平台</p>
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
                     * <p>项目Id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>颜色值</p>
                     */
                    std::string m_colorCode;
                    bool m_colorCodeHasBeenSet;

                    /**
                     * <p>图标</p>
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * <p>可申请</p>
                     */
                    bool m_isApply;
                    bool m_isApplyHasBeenSet;

                    /**
                     * <p>种子</p>
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>默认看板</p><p>枚举值：</p><ul><li>1： 项目看板</li><li>2： 我的看板</li></ul>
                     */
                    int64_t m_defaultPanelType;
                    bool m_defaultPanelTypeHasBeenSet;

                    /**
                     * <p>2</p>
                     */
                    std::string m_panelScope;
                    bool m_panelScopeHasBeenSet;

                    /**
                     * <p>项目管理平台</p>
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYPROJECTREQUEST_H_
