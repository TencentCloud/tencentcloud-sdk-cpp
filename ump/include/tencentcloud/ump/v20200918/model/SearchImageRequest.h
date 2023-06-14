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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHIMAGEREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * SearchImage请求参数结构体
                */
                class SearchImageRequest : public AbstractModel
                {
                public:
                    SearchImageRequest();
                    ~SearchImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取广场ID
                     * @return MallId 广场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置广场ID
                     * @param _mallId 广场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取图片base64字符串
                     * @return Image 图片base64字符串
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片base64字符串
                     * @param _image 图片base64字符串
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取时间戳，毫秒
                     * @return ImageTime 时间戳，毫秒
                     * 
                     */
                    uint64_t GetImageTime() const;

                    /**
                     * 设置时间戳，毫秒
                     * @param _imageTime 时间戳，毫秒
                     * 
                     */
                    void SetImageTime(const uint64_t& _imageTime);

                    /**
                     * 判断参数 ImageTime 是否已赋值
                     * @return ImageTime 是否已赋值
                     * 
                     */
                    bool ImageTimeHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 广场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 图片base64字符串
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 时间戳，毫秒
                     */
                    uint64_t m_imageTime;
                    bool m_imageTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHIMAGEREQUEST_H_
