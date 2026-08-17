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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DESCRIBEACCESSPOINTLISTRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DESCRIBEACCESSPOINTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/AccessPointInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DescribeAccessPointList返回参数结构体
                */
                class DescribeAccessPointListResponse : public AbstractModel
                {
                public:
                    DescribeAccessPointListResponse();
                    ~DescribeAccessPointListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入点列表</p>
                     * @return AccessPointList <p>接入点列表</p>
                     * 
                     */
                    std::vector<AccessPointInfo> GetAccessPointList() const;

                    /**
                     * 判断参数 AccessPointList 是否已赋值
                     * @return AccessPointList 是否已赋值
                     * 
                     */
                    bool AccessPointListHasBeenSet() const;

                private:

                    /**
                     * <p>接入点列表</p>
                     */
                    std::vector<AccessPointInfo> m_accessPointList;
                    bool m_accessPointListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DESCRIBEACCESSPOINTLISTRESPONSE_H_
