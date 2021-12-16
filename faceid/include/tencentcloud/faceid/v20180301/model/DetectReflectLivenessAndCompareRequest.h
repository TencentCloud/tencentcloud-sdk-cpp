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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTREFLECTLIVENESSANDCOMPAREREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTREFLECTLIVENESSANDCOMPAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectReflectLivenessAndCompare请求参数结构体
                */
                class DetectReflectLivenessAndCompareRequest : public AbstractModel
                {
                public:
                    DetectReflectLivenessAndCompareRequest();
                    ~DetectReflectLivenessAndCompareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK生成的数据包活体数据包的资源地址。
                     * @return LiveDataUrl SDK生成的数据包活体数据包的资源地址。
                     */
                    std::string GetLiveDataUrl() const;

                    /**
                     * 设置SDK生成的数据包活体数据包的资源地址。
                     * @param LiveDataUrl SDK生成的数据包活体数据包的资源地址。
                     */
                    void SetLiveDataUrl(const std::string& _liveDataUrl);

                    /**
                     * 判断参数 LiveDataUrl 是否已赋值
                     * @return LiveDataUrl 是否已赋值
                     */
                    bool LiveDataUrlHasBeenSet() const;

                    /**
                     * 获取SDK生成的数据包活体数据包的资源Md5。
                     * @return LiveDataMd5 SDK生成的数据包活体数据包的资源Md5。
                     */
                    std::string GetLiveDataMd5() const;

                    /**
                     * 设置SDK生成的数据包活体数据包的资源Md5。
                     * @param LiveDataMd5 SDK生成的数据包活体数据包的资源Md5。
                     */
                    void SetLiveDataMd5(const std::string& _liveDataMd5);

                    /**
                     * 判断参数 LiveDataMd5 是否已赋值
                     * @return LiveDataMd5 是否已赋值
                     */
                    bool LiveDataMd5HasBeenSet() const;

                    /**
                     * 获取用于比对的目标图片的资源地址。
                     * @return ImageUrl 用于比对的目标图片的资源地址。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置用于比对的目标图片的资源地址。
                     * @param ImageUrl 用于比对的目标图片的资源地址。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取用于比对的目标图片的资源Md5。
                     * @return ImageMd5 用于比对的目标图片的资源Md5。
                     */
                    std::string GetImageMd5() const;

                    /**
                     * 设置用于比对的目标图片的资源Md5。
                     * @param ImageMd5 用于比对的目标图片的资源Md5。
                     */
                    void SetImageMd5(const std::string& _imageMd5);

                    /**
                     * 判断参数 ImageMd5 是否已赋值
                     * @return ImageMd5 是否已赋值
                     */
                    bool ImageMd5HasBeenSet() const;

                private:

                    /**
                     * SDK生成的数据包活体数据包的资源地址。
                     */
                    std::string m_liveDataUrl;
                    bool m_liveDataUrlHasBeenSet;

                    /**
                     * SDK生成的数据包活体数据包的资源Md5。
                     */
                    std::string m_liveDataMd5;
                    bool m_liveDataMd5HasBeenSet;

                    /**
                     * 用于比对的目标图片的资源地址。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 用于比对的目标图片的资源Md5。
                     */
                    std::string m_imageMd5;
                    bool m_imageMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTREFLECTLIVENESSANDCOMPAREREQUEST_H_
