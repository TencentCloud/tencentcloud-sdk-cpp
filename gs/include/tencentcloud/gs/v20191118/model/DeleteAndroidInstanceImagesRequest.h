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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDINSTANCEIMAGESREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDINSTANCEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DeleteAndroidInstanceImages请求参数结构体
                */
                class DeleteAndroidInstanceImagesRequest : public AbstractModel
                {
                public:
                    DeleteAndroidInstanceImagesRequest();
                    ~DeleteAndroidInstanceImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像 ID 列表
                     * @return AndroidInstanceImageIds 镜像 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceImageIds() const;

                    /**
                     * 设置镜像 ID 列表
                     * @param _androidInstanceImageIds 镜像 ID 列表
                     * 
                     */
                    void SetAndroidInstanceImageIds(const std::vector<std::string>& _androidInstanceImageIds);

                    /**
                     * 判断参数 AndroidInstanceImageIds 是否已赋值
                     * @return AndroidInstanceImageIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageIdsHasBeenSet() const;

                private:

                    /**
                     * 镜像 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceImageIds;
                    bool m_androidInstanceImageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDINSTANCEIMAGESREQUEST_H_
