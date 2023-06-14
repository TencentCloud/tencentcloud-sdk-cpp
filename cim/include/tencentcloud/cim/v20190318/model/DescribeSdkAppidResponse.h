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

#ifndef TENCENTCLOUD_CIM_V20190318_MODEL_DESCRIBESDKAPPIDRESPONSE_H_
#define TENCENTCLOUD_CIM_V20190318_MODEL_DESCRIBESDKAPPIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cim
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeSdkAppid返回参数结构体
                */
                class DescribeSdkAppidResponse : public AbstractModel
                {
                public:
                    DescribeSdkAppidResponse();
                    ~DescribeSdkAppidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表示 appid 对应的 SdkAppid 的数据
                     * @return SdkAppids 表示 appid 对应的 SdkAppid 的数据
                     * 
                     */
                    std::vector<int64_t> GetSdkAppids() const;

                    /**
                     * 判断参数 SdkAppids 是否已赋值
                     * @return SdkAppids 是否已赋值
                     * 
                     */
                    bool SdkAppidsHasBeenSet() const;

                private:

                    /**
                     * 表示 appid 对应的 SdkAppid 的数据
                     */
                    std::vector<int64_t> m_sdkAppids;
                    bool m_sdkAppidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIM_V20190318_MODEL_DESCRIBESDKAPPIDRESPONSE_H_
