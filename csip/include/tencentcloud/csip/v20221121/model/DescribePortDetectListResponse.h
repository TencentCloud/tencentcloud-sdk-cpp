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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTDETECTLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTDETECTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/PortDetectInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribePortDetectList返回参数结构体
                */
                class DescribePortDetectListResponse : public AbstractModel
                {
                public:
                    DescribePortDetectListResponse();
                    ~DescribePortDetectListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取端口探测数量
                     * @return TotalCount 端口探测数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取端口探测列表
                     * @return PortDetectList 端口探测列表
                     * 
                     */
                    std::vector<PortDetectInfo> GetPortDetectList() const;

                    /**
                     * 判断参数 PortDetectList 是否已赋值
                     * @return PortDetectList 是否已赋值
                     * 
                     */
                    bool PortDetectListHasBeenSet() const;

                private:

                    /**
                     * 端口探测数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 端口探测列表
                     */
                    std::vector<PortDetectInfo> m_portDetectList;
                    bool m_portDetectListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTDETECTLISTRESPONSE_H_
