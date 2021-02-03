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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * 图片基础信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片Id
                     * @return ImageId 图片Id
                     */
                    int64_t GetImageId() const;

                    /**
                     * 设置图片Id
                     * @param ImageId 图片Id
                     */
                    void SetImageId(const int64_t& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取授权场景Id
                     * @return LicenseScopeId 授权场景Id
                     */
                    int64_t GetLicenseScopeId() const;

                    /**
                     * 设置授权场景Id
                     * @param LicenseScopeId 授权场景Id
                     */
                    void SetLicenseScopeId(const int64_t& _licenseScopeId);

                    /**
                     * 判断参数 LicenseScopeId 是否已赋值
                     * @return LicenseScopeId 是否已赋值
                     */
                    bool LicenseScopeIdHasBeenSet() const;

                    /**
                     * 获取尺寸名称Id
                     * @return DimensionsNameId 尺寸名称Id
                     */
                    int64_t GetDimensionsNameId() const;

                    /**
                     * 设置尺寸名称Id
                     * @param DimensionsNameId 尺寸名称Id
                     */
                    void SetDimensionsNameId(const int64_t& _dimensionsNameId);

                    /**
                     * 判断参数 DimensionsNameId 是否已赋值
                     * @return DimensionsNameId 是否已赋值
                     */
                    bool DimensionsNameIdHasBeenSet() const;

                private:

                    /**
                     * 图片Id
                     */
                    int64_t m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 授权场景Id
                     */
                    int64_t m_licenseScopeId;
                    bool m_licenseScopeIdHasBeenSet;

                    /**
                     * 尺寸名称Id
                     */
                    int64_t m_dimensionsNameId;
                    bool m_dimensionsNameIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_IMAGEINFO_H_
