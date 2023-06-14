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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEPICTUREREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEPICTUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribePicture请求参数结构体
                */
                class DescribePictureRequest : public AbstractModel
                {
                public:
                    DescribePictureRequest();
                    ~DescribePictureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return SdkAppId 应用ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID
                     * @param _sdkAppId 应用ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取图片ID，不填时返回该应用下所有图片
                     * @return PictureId 图片ID，不填时返回该应用下所有图片
                     * 
                     */
                    uint64_t GetPictureId() const;

                    /**
                     * 设置图片ID，不填时返回该应用下所有图片
                     * @param _pictureId 图片ID，不填时返回该应用下所有图片
                     * 
                     */
                    void SetPictureId(const uint64_t& _pictureId);

                    /**
                     * 判断参数 PictureId 是否已赋值
                     * @return PictureId 是否已赋值
                     * 
                     */
                    bool PictureIdHasBeenSet() const;

                    /**
                     * 获取每页数量，不填时默认为10
                     * @return PageSize 每页数量，不填时默认为10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量，不填时默认为10
                     * @param _pageSize 每页数量，不填时默认为10
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页码，不填时默认为1
                     * @return PageNo 页码，不填时默认为1
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置页码，不填时默认为1
                     * @param _pageNo 页码，不填时默认为1
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 图片ID，不填时返回该应用下所有图片
                     */
                    uint64_t m_pictureId;
                    bool m_pictureIdHasBeenSet;

                    /**
                     * 每页数量，不填时默认为10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码，不填时默认为1
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEPICTUREREQUEST_H_
