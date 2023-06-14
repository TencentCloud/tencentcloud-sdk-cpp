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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_UPDATESTACKVERSIONREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_UPDATESTACKVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * UpdateStackVersion请求参数结构体
                */
                class UpdateStackVersionRequest : public AbstractModel
                {
                public:
                    UpdateStackVersionRequest();
                    ~UpdateStackVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更新的版本ID
                     * @return VersionId 待更新的版本ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置待更新的版本ID
                     * @param _versionId 待更新的版本ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取模板 URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * @return TemplateUrl 模板 URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * 
                     */
                    std::string GetTemplateUrl() const;

                    /**
                     * 设置模板 URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * @param _templateUrl 模板 URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * 
                     */
                    void SetTemplateUrl(const std::string& _templateUrl);

                    /**
                     * 判断参数 TemplateUrl 是否已赋值
                     * @return TemplateUrl 是否已赋值
                     * 
                     */
                    bool TemplateUrlHasBeenSet() const;

                    /**
                     * 获取版本名称，不得超过60个字符
                     * @return VersionName 版本名称，不得超过60个字符
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称，不得超过60个字符
                     * @param _versionName 版本名称，不得超过60个字符
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取版本描述，不得超过200个字符
                     * @return Description 版本描述，不得超过200个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置版本描述，不得超过200个字符
                     * @param _description 版本描述，不得超过200个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 待更新的版本ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 模板 URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     */
                    std::string m_templateUrl;
                    bool m_templateUrlHasBeenSet;

                    /**
                     * 版本名称，不得超过60个字符
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本描述，不得超过200个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_UPDATESTACKVERSIONREQUEST_H_
