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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEVASSTATISTICRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEVASSTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/VASStatisticItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeVASStatistic返回参数结构体
                */
                class DescribeVASStatisticResponse : public AbstractModel
                {
                public:
                    DescribeVASStatisticResponse();
                    ~DescribeVASStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取增值服务用量列表
                     * @return VASList 增值服务用量列表
                     * 
                     */
                    std::vector<VASStatisticItem> GetVASList() const;

                    /**
                     * 判断参数 VASList 是否已赋值
                     * @return VASList 是否已赋值
                     * 
                     */
                    bool VASListHasBeenSet() const;

                private:

                    /**
                     * 增值服务用量列表
                     */
                    std::vector<VASStatisticItem> m_vASList;
                    bool m_vASListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEVASSTATISTICRESPONSE_H_
