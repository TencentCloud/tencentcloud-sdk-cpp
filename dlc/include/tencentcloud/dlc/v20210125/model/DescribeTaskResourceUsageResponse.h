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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKRESOURCEUSAGERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKRESOURCEUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CoreInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTaskResourceUsage返回参数结构体
                */
                class DescribeTaskResourceUsageResponse : public AbstractModel
                {
                public:
                    DescribeTaskResourceUsageResponse();
                    ~DescribeTaskResourceUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取core 用量信息
                     * @return CoreInfo core 用量信息
                     * 
                     */
                    CoreInfo GetCoreInfo() const;

                    /**
                     * 判断参数 CoreInfo 是否已赋值
                     * @return CoreInfo 是否已赋值
                     * 
                     */
                    bool CoreInfoHasBeenSet() const;

                private:

                    /**
                     * core 用量信息
                     */
                    CoreInfo m_coreInfo;
                    bool m_coreInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKRESOURCEUSAGERESPONSE_H_
