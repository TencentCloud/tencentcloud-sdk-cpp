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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESOURCEGROUPUSAGEINFORESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESOURCEGROUPUSAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeResourceGroupUsageInfo返回参数结构体
                */
                class DescribeResourceGroupUsageInfoResponse : public AbstractModel
                {
                public:
                    DescribeResourceGroupUsageInfoResponse();
                    ~DescribeResourceGroupUsageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源上限
                     * @return Total 资源上限
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
                     * 获取已占用资源
                     * @return Used 已占用资源
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取剩余可用资源
                     * @return Available 剩余可用资源
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * 资源上限
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已占用资源
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 剩余可用资源
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESOURCEGROUPUSAGEINFORESPONSE_H_
