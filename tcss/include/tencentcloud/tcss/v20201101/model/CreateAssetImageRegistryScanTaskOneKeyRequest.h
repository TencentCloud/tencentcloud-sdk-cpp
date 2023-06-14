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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageRegistryScanTaskOneKey请求参数结构体
                */
                class CreateAssetImageRegistryScanTaskOneKeyRequest : public AbstractModel
                {
                public:
                    CreateAssetImageRegistryScanTaskOneKeyRequest();
                    ~CreateAssetImageRegistryScanTaskOneKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否扫描全部镜像
                     * @return All 是否扫描全部镜像
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否扫描全部镜像
                     * @param _all 是否扫描全部镜像
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取扫描的镜像列表
                     * @return Images 扫描的镜像列表
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置扫描的镜像列表
                     * @param _images 扫描的镜像列表
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取扫描类型数组
                     * @return ScanType 扫描类型数组
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置扫描类型数组
                     * @param _scanType 扫描类型数组
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取扫描的镜像列表Id
                     * @return Id 扫描的镜像列表Id
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置扫描的镜像列表Id
                     * @param _id 扫描的镜像列表Id
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 是否扫描全部镜像
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 扫描的镜像列表
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 扫描类型数组
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * 扫描的镜像列表Id
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
