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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEFEATURELISTRESPONSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEFEATURELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/VideoFeature.h>
#include <tencentcloud/vcube/v20220410/model/XMagicFeature.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeFeatureList返回参数结构体
                */
                class DescribeFeatureListResponse : public AbstractModel
                {
                public:
                    DescribeFeatureListResponse();
                    ~DescribeFeatureListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取功能列表
                     * @return FeatureList 功能列表
                     * 
                     */
                    std::vector<VideoFeature> GetFeatureList() const;

                    /**
                     * 判断参数 FeatureList 是否已赋值
                     * @return FeatureList 是否已赋值
                     * 
                     */
                    bool FeatureListHasBeenSet() const;

                    /**
                     * 获取优图功能列表
                     * @return XMagicFeatureList 优图功能列表
                     * 
                     */
                    std::vector<XMagicFeature> GetXMagicFeatureList() const;

                    /**
                     * 判断参数 XMagicFeatureList 是否已赋值
                     * @return XMagicFeatureList 是否已赋值
                     * 
                     */
                    bool XMagicFeatureListHasBeenSet() const;

                private:

                    /**
                     * 功能列表
                     */
                    std::vector<VideoFeature> m_featureList;
                    bool m_featureListHasBeenSet;

                    /**
                     * 优图功能列表
                     */
                    std::vector<XMagicFeature> m_xMagicFeatureList;
                    bool m_xMagicFeatureListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEFEATURELISTRESPONSE_H_
