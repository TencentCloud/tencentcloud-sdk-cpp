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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DELETEIMAGESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DELETEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DeleteImages请求参数结构体
                */
                class DeleteImagesRequest : public AbstractModel
                {
                public:
                    DeleteImagesRequest();
                    ~DeleteImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>准备删除的镜像Id列表</p>
                     * @return ImageIds <p>准备删除的镜像Id列表</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>准备删除的镜像Id列表</p>
                     * @param _imageIds <p>准备删除的镜像Id列表</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                private:

                    /**
                     * <p>准备删除的镜像Id列表</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DELETEIMAGESREQUEST_H_
