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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWARE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/SoftwareDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述镜像软件信息。
                */
                class Software : public AbstractModel
                {
                public:
                    Software();
                    ~Software() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取软件名称。
                     * @return Name 软件名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置软件名称。
                     * @param _name 软件名称。
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
                     * 获取软件版本。
                     * @return Version 软件版本。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置软件版本。
                     * @param _version 软件版本。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取软件图片 URL。
                     * @return ImageUrl 软件图片 URL。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置软件图片 URL。
                     * @param _imageUrl 软件图片 URL。
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
                     * 获取软件安装目录。
                     * @return InstallDir 软件安装目录。
                     * 
                     */
                    std::string GetInstallDir() const;

                    /**
                     * 设置软件安装目录。
                     * @param _installDir 软件安装目录。
                     * 
                     */
                    void SetInstallDir(const std::string& _installDir);

                    /**
                     * 判断参数 InstallDir 是否已赋值
                     * @return InstallDir 是否已赋值
                     * 
                     */
                    bool InstallDirHasBeenSet() const;

                    /**
                     * 获取软件详情列表。
                     * @return DetailSet 软件详情列表。
                     * 
                     */
                    std::vector<SoftwareDetail> GetDetailSet() const;

                    /**
                     * 设置软件详情列表。
                     * @param _detailSet 软件详情列表。
                     * 
                     */
                    void SetDetailSet(const std::vector<SoftwareDetail>& _detailSet);

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                private:

                    /**
                     * 软件名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 软件版本。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 软件图片 URL。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 软件安装目录。
                     */
                    std::string m_installDir;
                    bool m_installDirHasBeenSet;

                    /**
                     * 软件详情列表。
                     */
                    std::vector<SoftwareDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWARE_H_
