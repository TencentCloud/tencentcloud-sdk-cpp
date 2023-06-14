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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETEIMAGEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteImage请求参数结构体
                */
                class DeleteImageRequest : public AbstractModel
                {
                public:
                    DeleteImageRequest();
                    ~DeleteImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID列表。
                     * @return ImageIDSet 镜像ID列表。
                     * 
                     */
                    std::vector<std::string> GetImageIDSet() const;

                    /**
                     * 设置镜像ID列表。
                     * @param _imageIDSet 镜像ID列表。
                     * 
                     */
                    void SetImageIDSet(const std::vector<std::string>& _imageIDSet);

                    /**
                     * 判断参数 ImageIDSet 是否已赋值
                     * @return ImageIDSet 是否已赋值
                     * 
                     */
                    bool ImageIDSetHasBeenSet() const;

                private:

                    /**
                     * 镜像ID列表。
                     */
                    std::vector<std::string> m_imageIDSet;
                    bool m_imageIDSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETEIMAGEREQUEST_H_
