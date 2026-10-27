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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEIMAGESRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeImages返回参数结构体
                */
                class DescribeImagesResponse : public AbstractModel
                {
                public:
                    DescribeImagesResponse();
                    ~DescribeImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回查询到的所有镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Images <p>返回查询到的所有镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>返回当前查询到的镜像总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>返回当前查询到的镜像总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>返回查询到的所有镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>返回当前查询到的镜像总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEIMAGESRESPONSE_H_
