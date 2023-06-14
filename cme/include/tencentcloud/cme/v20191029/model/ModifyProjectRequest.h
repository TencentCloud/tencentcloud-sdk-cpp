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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MODIFYPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
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
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
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
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id。
                     * @param _projectId 项目 Id。
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
                     * 获取项目名称，不可超过30个字符。
                     * @return Name 项目名称，不可超过30个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称，不可超过30个字符。
                     * @param _name 项目名称，不可超过30个字符。
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
                     * 获取画布宽高比，值为视频编辑项目画布宽与高的像素值的比值，如 16:9、9:16 等。
                     * @return AspectRatio 画布宽高比，值为视频编辑项目画布宽与高的像素值的比值，如 16:9、9:16 等。
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置画布宽高比，值为视频编辑项目画布宽与高的像素值的比值，如 16:9、9:16 等。
                     * @param _aspectRatio 画布宽高比，值为视频编辑项目画布宽与高的像素值的比值，如 16:9、9:16 等。
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取项目所有者。目前仅支持个人项目，不支持团队项目。
                     * @return Owner 项目所有者。目前仅支持个人项目，不支持团队项目。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置项目所有者。目前仅支持个人项目，不支持团队项目。
                     * @param _owner 项目所有者。目前仅支持个人项目，不支持团队项目。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>
                     * @return Mode 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>
                     * @param _mode 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称，不可超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 画布宽高比，值为视频编辑项目画布宽与高的像素值的比值，如 16:9、9:16 等。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 项目所有者。目前仅支持个人项目，不支持团队项目。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MODIFYPROJECTREQUEST_H_
