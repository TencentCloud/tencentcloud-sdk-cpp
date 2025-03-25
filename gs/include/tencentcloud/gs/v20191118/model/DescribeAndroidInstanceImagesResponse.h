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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEIMAGESRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceImage.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidInstanceImages返回参数结构体
                */
                class DescribeAndroidInstanceImagesResponse : public AbstractModel
                {
                public:
                    DescribeAndroidInstanceImagesResponse();
                    ~DescribeAndroidInstanceImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像总数
                     * @return Total 镜像总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取镜像列表
                     * @return AndroidInstanceImages 镜像列表
                     * 
                     */
                    std::vector<AndroidInstanceImage> GetAndroidInstanceImages() const;

                    /**
                     * 判断参数 AndroidInstanceImages 是否已赋值
                     * @return AndroidInstanceImages 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImagesHasBeenSet() const;

                private:

                    /**
                     * 镜像总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 镜像列表
                     */
                    std::vector<AndroidInstanceImage> m_androidInstanceImages;
                    bool m_androidInstanceImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEIMAGESRESPONSE_H_
