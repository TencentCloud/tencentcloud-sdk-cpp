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
                     * 
                     */
                    int64_t GetImageId() const;

                    /**
                     * 设置图片Id
                     * @param _imageId 图片Id
                     * 
                     */
                    void SetImageId(const int64_t& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取授权场景Id
                     * @return LicenseScopeId 授权场景Id
                     * 
                     */
                    int64_t GetLicenseScopeId() const;

                    /**
                     * 设置授权场景Id
                     * @param _licenseScopeId 授权场景Id
                     * 
                     */
                    void SetLicenseScopeId(const int64_t& _licenseScopeId);

                    /**
                     * 判断参数 LicenseScopeId 是否已赋值
                     * @return LicenseScopeId 是否已赋值
                     * 
                     */
                    bool LicenseScopeIdHasBeenSet() const;

                    /**
                     * 获取尺寸名称Id
                     * @return DimensionsNameId 尺寸名称Id
                     * 
                     */
                    int64_t GetDimensionsNameId() const;

                    /**
                     * 设置尺寸名称Id
                     * @param _dimensionsNameId 尺寸名称Id
                     * 
                     */
                    void SetDimensionsNameId(const int64_t& _dimensionsNameId);

                    /**
                     * 判断参数 DimensionsNameId 是否已赋值
                     * @return DimensionsNameId 是否已赋值
                     * 
                     */
                    bool DimensionsNameIdHasBeenSet() const;

                    /**
                     * 获取平台用户标识
                     * @return UserId 平台用户标识
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置平台用户标识
                     * @param _userId 平台用户标识
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取平台用户下载图片购买的价格(单位:分)
                     * @return DownloadPrice 平台用户下载图片购买的价格(单位:分)
                     * 
                     */
                    uint64_t GetDownloadPrice() const;

                    /**
                     * 设置平台用户下载图片购买的价格(单位:分)
                     * @param _downloadPrice 平台用户下载图片购买的价格(单位:分)
                     * 
                     */
                    void SetDownloadPrice(const uint64_t& _downloadPrice);

                    /**
                     * 判断参数 DownloadPrice 是否已赋值
                     * @return DownloadPrice 是否已赋值
                     * 
                     */
                    bool DownloadPriceHasBeenSet() const;

                    /**
                     * 获取下载类型。匹配集合中的任意元素：
<li>Single: 单张购买下载</li>
<li>BasicEnterpriseMember: 企业基础会员下载</li>
<li>AdvancedEnterpriseMember: 企业高级会员下载</li>
<li>DistinguishedEnterpriseMember: 企业尊享会员下载</li>
                     * @return DownloadType 下载类型。匹配集合中的任意元素：
<li>Single: 单张购买下载</li>
<li>BasicEnterpriseMember: 企业基础会员下载</li>
<li>AdvancedEnterpriseMember: 企业高级会员下载</li>
<li>DistinguishedEnterpriseMember: 企业尊享会员下载</li>
                     * 
                     */
                    std::string GetDownloadType() const;

                    /**
                     * 设置下载类型。匹配集合中的任意元素：
<li>Single: 单张购买下载</li>
<li>BasicEnterpriseMember: 企业基础会员下载</li>
<li>AdvancedEnterpriseMember: 企业高级会员下载</li>
<li>DistinguishedEnterpriseMember: 企业尊享会员下载</li>
                     * @param _downloadType 下载类型。匹配集合中的任意元素：
<li>Single: 单张购买下载</li>
<li>BasicEnterpriseMember: 企业基础会员下载</li>
<li>AdvancedEnterpriseMember: 企业高级会员下载</li>
<li>DistinguishedEnterpriseMember: 企业尊享会员下载</li>
                     * 
                     */
                    void SetDownloadType(const std::string& _downloadType);

                    /**
                     * 判断参数 DownloadType 是否已赋值
                     * @return DownloadType 是否已赋值
                     * 
                     */
                    bool DownloadTypeHasBeenSet() const;

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

                    /**
                     * 平台用户标识
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 平台用户下载图片购买的价格(单位:分)
                     */
                    uint64_t m_downloadPrice;
                    bool m_downloadPriceHasBeenSet;

                    /**
                     * 下载类型。匹配集合中的任意元素：
<li>Single: 单张购买下载</li>
<li>BasicEnterpriseMember: 企业基础会员下载</li>
<li>AdvancedEnterpriseMember: 企业高级会员下载</li>
<li>DistinguishedEnterpriseMember: 企业尊享会员下载</li>
                     */
                    std::string m_downloadType;
                    bool m_downloadTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_IMAGEINFO_H_
