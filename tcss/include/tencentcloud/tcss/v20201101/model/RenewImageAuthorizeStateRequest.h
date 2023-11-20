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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RENEWIMAGEAUTHORIZESTATEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RENEWIMAGEAUTHORIZESTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * RenewImageAuthorizeState请求参数结构体
                */
                class RenewImageAuthorizeStateRequest : public AbstractModel
                {
                public:
                    RenewImageAuthorizeStateRequest();
                    ~RenewImageAuthorizeStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否全部未授权镜像
                     * @return AllImages 是否全部未授权镜像
                     * 
                     */
                    bool GetAllImages() const;

                    /**
                     * 设置是否全部未授权镜像
                     * @param _allImages 是否全部未授权镜像
                     * 
                     */
                    void SetAllImages(const bool& _allImages);

                    /**
                     * 判断参数 AllImages 是否已赋值
                     * @return AllImages 是否已赋值
                     * 
                     */
                    bool AllImagesHasBeenSet() const;

                    /**
                     * 获取镜像ids
                     * @return ImageIds 镜像ids
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置镜像ids
                     * @param _imageIds 镜像ids
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取是否授权后自动扫描
                     * @return NeedScan 是否授权后自动扫描
                     * 
                     */
                    bool GetNeedScan() const;

                    /**
                     * 设置是否授权后自动扫描
                     * @param _needScan 是否授权后自动扫描
                     * 
                     */
                    void SetNeedScan(const bool& _needScan);

                    /**
                     * 判断参数 NeedScan 是否已赋值
                     * @return NeedScan 是否已赋值
                     * 
                     */
                    bool NeedScanHasBeenSet() const;

                    /**
                     * 获取扫描类型
                     * @return ScanType 扫描类型
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置扫描类型
                     * @param _scanType 扫描类型
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * 是否全部未授权镜像
                     */
                    bool m_allImages;
                    bool m_allImagesHasBeenSet;

                    /**
                     * 镜像ids
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 是否授权后自动扫描
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

                    /**
                     * 扫描类型
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RENEWIMAGEAUTHORIZESTATEREQUEST_H_
