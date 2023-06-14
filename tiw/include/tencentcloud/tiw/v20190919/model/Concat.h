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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CONCAT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CONCAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 实时录制视频拼接参数
                */
                class Concat : public AbstractModel
                {
                public:
                    Concat();
                    ~Concat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启拼接功能
在开启了视频拼接功能的情况下，实时录制服务会把同一个用户因为暂停导致的多段视频拼接成一个视频
                     * @return Enabled 是否开启拼接功能
在开启了视频拼接功能的情况下，实时录制服务会把同一个用户因为暂停导致的多段视频拼接成一个视频
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启拼接功能
在开启了视频拼接功能的情况下，实时录制服务会把同一个用户因为暂停导致的多段视频拼接成一个视频
                     * @param _enabled 是否开启拼接功能
在开启了视频拼接功能的情况下，实时录制服务会把同一个用户因为暂停导致的多段视频拼接成一个视频
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取视频拼接时使用的垫片图片下载地址，不填默认用全黑的图片进行视频垫片
                     * @return Image 视频拼接时使用的垫片图片下载地址，不填默认用全黑的图片进行视频垫片
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置视频拼接时使用的垫片图片下载地址，不填默认用全黑的图片进行视频垫片
                     * @param _image 视频拼接时使用的垫片图片下载地址，不填默认用全黑的图片进行视频垫片
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * 是否开启拼接功能
在开启了视频拼接功能的情况下，实时录制服务会把同一个用户因为暂停导致的多段视频拼接成一个视频
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 视频拼接时使用的垫片图片下载地址，不填默认用全黑的图片进行视频垫片
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CONCAT_H_
