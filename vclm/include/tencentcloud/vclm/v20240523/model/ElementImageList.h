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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_ELEMENTIMAGELIST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_ELEMENTIMAGELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/ReferImageItem.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 主体正面图 参考图列表
                */
                class ElementImageList : public AbstractModel
                {
                public:
                    ElementImageList();
                    ~ElementImageList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主体参考图</p>
                     * @return ReferImages <p>主体参考图</p>
                     * 
                     */
                    std::vector<ReferImageItem> GetReferImages() const;

                    /**
                     * 设置<p>主体参考图</p>
                     * @param _referImages <p>主体参考图</p>
                     * 
                     */
                    void SetReferImages(const std::vector<ReferImageItem>& _referImages);

                    /**
                     * 判断参数 ReferImages 是否已赋值
                     * @return ReferImages 是否已赋值
                     * 
                     */
                    bool ReferImagesHasBeenSet() const;

                    /**
                     * 获取<p>主体主图</p>
                     * @return FrontalImage <p>主体主图</p>
                     * 
                     */
                    std::string GetFrontalImage() const;

                    /**
                     * 设置<p>主体主图</p>
                     * @param _frontalImage <p>主体主图</p>
                     * 
                     */
                    void SetFrontalImage(const std::string& _frontalImage);

                    /**
                     * 判断参数 FrontalImage 是否已赋值
                     * @return FrontalImage 是否已赋值
                     * 
                     */
                    bool FrontalImageHasBeenSet() const;

                private:

                    /**
                     * <p>主体参考图</p>
                     */
                    std::vector<ReferImageItem> m_referImages;
                    bool m_referImagesHasBeenSet;

                    /**
                     * <p>主体主图</p>
                     */
                    std::string m_frontalImage;
                    bool m_frontalImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_ELEMENTIMAGELIST_H_
