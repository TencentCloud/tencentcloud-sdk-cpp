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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DELETEPICTUREREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DELETEPICTUREREQUEST_H_

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
                * DeletePicture请求参数结构体
                */
                class DeletePictureRequest : public AbstractModel
                {
                public:
                    DeletePictureRequest();
                    ~DeletePictureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片id
                     * @return PictureId 图片id
                     * 
                     */
                    uint64_t GetPictureId() const;

                    /**
                     * 设置图片id
                     * @param _pictureId 图片id
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
                     * 获取应用id
                     * @return SdkAppId 应用id
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用id
                     * @param _sdkAppId 应用id
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 图片id
                     */
                    uint64_t m_pictureId;
                    bool m_pictureIdHasBeenSet;

                    /**
                     * 应用id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DELETEPICTUREREQUEST_H_
