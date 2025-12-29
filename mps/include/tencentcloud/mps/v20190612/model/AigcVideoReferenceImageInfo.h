/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEIMAGEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 用于AIGC生视频创作的参考图片信息。
                */
                class AigcVideoReferenceImageInfo : public AbstractModel
                {
                public:
                    AigcVideoReferenceImageInfo();
                    ~AigcVideoReferenceImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于指导视频生成的图片 URL。该URL需外网可访问。同时允许爬虫拉取。
                     * @return ImageUrl 用于指导视频生成的图片 URL。该URL需外网可访问。同时允许爬虫拉取。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置用于指导视频生成的图片 URL。该URL需外网可访问。同时允许爬虫拉取。
                     * @param _imageUrl 用于指导视频生成的图片 URL。该URL需外网可访问。同时允许爬虫拉取。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取参考类型。
注意：
1. 当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * @return ReferenceType 参考类型。
注意：
1. 当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置参考类型。
注意：
1. 当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * @param _referenceType 参考类型。
注意：
1. 当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                private:

                    /**
                     * 用于指导视频生成的图片 URL。该URL需外网可访问。同时允许爬虫拉取。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 参考类型。
注意：
1. 当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEIMAGEINFO_H_
