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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMPORTIMAGEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMPORTIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ImportImage请求参数结构体
                */
                class ImportImageRequest : public AbstractModel
                {
                public:
                    ImportImageRequest();
                    ~ImportImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像的Id。
                     * @return ImageId 镜像的Id。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像的Id。
                     * @param _imageId 镜像的Id。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像的描述。
                     * @return ImageDescription 镜像的描述。
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像的描述。
                     * @param _imageDescription 镜像的描述。
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取源地域
                     * @return SourceRegion 源地域
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置源地域
                     * @param _sourceRegion 源地域
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                private:

                    /**
                     * 镜像的Id。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像的描述。
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 源地域
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMPORTIMAGEREQUEST_H_
