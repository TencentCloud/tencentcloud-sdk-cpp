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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMENVUSAGERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMENVUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PlatformResUsageItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribePlatformEnvUsage返回参数结构体
                */
                class DescribePlatformEnvUsageResponse : public AbstractModel
                {
                public:
                    DescribePlatformEnvUsageResponse();
                    ~DescribePlatformEnvUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源用量信息</p>
                     * @return Resources <p>资源用量信息</p>
                     * 
                     */
                    std::vector<PlatformResUsageItem> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>资源点</p>
                     * @return TotalCredits <p>资源点</p>
                     * 
                     */
                    uint64_t GetTotalCredits() const;

                    /**
                     * 判断参数 TotalCredits 是否已赋值
                     * @return TotalCredits 是否已赋值
                     * 
                     */
                    bool TotalCreditsHasBeenSet() const;

                    /**
                     * 获取<p>资源点取整倍数</p>
                     * @return CreditsScale <p>资源点取整倍数</p>
                     * 
                     */
                    uint64_t GetCreditsScale() const;

                    /**
                     * 判断参数 CreditsScale 是否已赋值
                     * @return CreditsScale 是否已赋值
                     * 
                     */
                    bool CreditsScaleHasBeenSet() const;

                private:

                    /**
                     * <p>资源用量信息</p>
                     */
                    std::vector<PlatformResUsageItem> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>资源点</p>
                     */
                    uint64_t m_totalCredits;
                    bool m_totalCreditsHasBeenSet;

                    /**
                     * <p>资源点取整倍数</p>
                     */
                    uint64_t m_creditsScale;
                    bool m_creditsScaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMENVUSAGERESPONSE_H_
