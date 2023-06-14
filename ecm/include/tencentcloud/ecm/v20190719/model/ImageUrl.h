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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMAGEURL_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMAGEURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 镜像文件信息
                */
                class ImageUrl : public AbstractModel
                {
                public:
                    ImageUrl();
                    ~ImageUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像文件COS链接，如设置私有读写，需授权腾讯云ECM运营账号访问权限。
                     * @return ImageFile 镜像文件COS链接，如设置私有读写，需授权腾讯云ECM运营账号访问权限。
                     * 
                     */
                    std::string GetImageFile() const;

                    /**
                     * 设置镜像文件COS链接，如设置私有读写，需授权腾讯云ECM运营账号访问权限。
                     * @param _imageFile 镜像文件COS链接，如设置私有读写，需授权腾讯云ECM运营账号访问权限。
                     * 
                     */
                    void SetImageFile(const std::string& _imageFile);

                    /**
                     * 判断参数 ImageFile 是否已赋值
                     * @return ImageFile 是否已赋值
                     * 
                     */
                    bool ImageFileHasBeenSet() const;

                private:

                    /**
                     * 镜像文件COS链接，如设置私有读写，需授权腾讯云ECM运营账号访问权限。
                     */
                    std::string m_imageFile;
                    bool m_imageFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMAGEURL_H_
