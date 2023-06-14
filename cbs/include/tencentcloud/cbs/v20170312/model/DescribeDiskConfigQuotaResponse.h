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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTARESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DiskConfig.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskConfigQuota返回参数结构体
                */
                class DescribeDiskConfigQuotaResponse : public AbstractModel
                {
                public:
                    DescribeDiskConfigQuotaResponse();
                    ~DescribeDiskConfigQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云盘配置列表。
                     * @return DiskConfigSet 云盘配置列表。
                     * 
                     */
                    std::vector<DiskConfig> GetDiskConfigSet() const;

                    /**
                     * 判断参数 DiskConfigSet 是否已赋值
                     * @return DiskConfigSet 是否已赋值
                     * 
                     */
                    bool DiskConfigSetHasBeenSet() const;

                private:

                    /**
                     * 云盘配置列表。
                     */
                    std::vector<DiskConfig> m_diskConfigSet;
                    bool m_diskConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTARESPONSE_H_
