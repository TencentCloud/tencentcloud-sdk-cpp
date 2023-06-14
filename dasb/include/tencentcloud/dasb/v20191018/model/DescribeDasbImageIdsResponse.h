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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDASBIMAGEIDSRESPONSE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDASBIMAGEIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeDasbImageIds返回参数结构体
                */
                class DescribeDasbImageIdsResponse : public AbstractModel
                {
                public:
                    DescribeDasbImageIdsResponse();
                    ~DescribeDasbImageIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基础镜像ID
                     * @return BaseImageId 基础镜像ID
                     * 
                     */
                    std::string GetBaseImageId() const;

                    /**
                     * 判断参数 BaseImageId 是否已赋值
                     * @return BaseImageId 是否已赋值
                     * 
                     */
                    bool BaseImageIdHasBeenSet() const;

                    /**
                     * 获取AI镜像ID
                     * @return AiImageId AI镜像ID
                     * 
                     */
                    std::string GetAiImageId() const;

                    /**
                     * 判断参数 AiImageId 是否已赋值
                     * @return AiImageId 是否已赋值
                     * 
                     */
                    bool AiImageIdHasBeenSet() const;

                private:

                    /**
                     * 基础镜像ID
                     */
                    std::string m_baseImageId;
                    bool m_baseImageIdHasBeenSet;

                    /**
                     * AI镜像ID
                     */
                    std::string m_aiImageId;
                    bool m_aiImageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDASBIMAGEIDSRESPONSE_H_
