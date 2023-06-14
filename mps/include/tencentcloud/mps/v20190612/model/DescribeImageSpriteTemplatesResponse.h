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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGESPRITETEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGESPRITETEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageSpriteTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeImageSpriteTemplates返回参数结构体
                */
                class DescribeImageSpriteTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeImageSpriteTemplatesResponse();
                    ~DescribeImageSpriteTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的记录总数。
                     * @return TotalCount 符合过滤条件的记录总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取雪碧图模板详情列表。
                     * @return ImageSpriteTemplateSet 雪碧图模板详情列表。
                     * 
                     */
                    std::vector<ImageSpriteTemplate> GetImageSpriteTemplateSet() const;

                    /**
                     * 判断参数 ImageSpriteTemplateSet 是否已赋值
                     * @return ImageSpriteTemplateSet 是否已赋值
                     * 
                     */
                    bool ImageSpriteTemplateSetHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 雪碧图模板详情列表。
                     */
                    std::vector<ImageSpriteTemplate> m_imageSpriteTemplateSet;
                    bool m_imageSpriteTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGESPRITETEMPLATESRESPONSE_H_
