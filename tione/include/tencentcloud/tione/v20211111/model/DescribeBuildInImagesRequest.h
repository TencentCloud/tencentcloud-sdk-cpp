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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBUILDINIMAGESREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBUILDINIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageFIlter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBuildInImages请求参数结构体
                */
                class DescribeBuildInImagesRequest : public AbstractModel
                {
                public:
                    DescribeBuildInImagesRequest();
                    ~DescribeBuildInImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像过滤器
                     * @return ImageFilters 镜像过滤器
                     * 
                     */
                    std::vector<ImageFIlter> GetImageFilters() const;

                    /**
                     * 设置镜像过滤器
                     * @param _imageFilters 镜像过滤器
                     * 
                     */
                    void SetImageFilters(const std::vector<ImageFIlter>& _imageFilters);

                    /**
                     * 判断参数 ImageFilters 是否已赋值
                     * @return ImageFilters 是否已赋值
                     * 
                     */
                    bool ImageFiltersHasBeenSet() const;

                private:

                    /**
                     * 镜像过滤器
                     */
                    std::vector<ImageFIlter> m_imageFilters;
                    bool m_imageFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBUILDINIMAGESREQUEST_H_
