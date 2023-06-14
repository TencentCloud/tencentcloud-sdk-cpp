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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/TrafficMirror.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrors返回参数结构体
                */
                class DescribeTrafficMirrorsResponse : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorsResponse();
                    ~DescribeTrafficMirrorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像总数。
                     * @return TotalCount 流量镜像总数。
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
                     * 获取对象数组。数组元素为流量镜像信息，具体结构描述如list结构所示。
                     * @return TrafficMirrorSet 对象数组。数组元素为流量镜像信息，具体结构描述如list结构所示。
                     * 
                     */
                    std::vector<TrafficMirror> GetTrafficMirrorSet() const;

                    /**
                     * 判断参数 TrafficMirrorSet 是否已赋值
                     * @return TrafficMirrorSet 是否已赋值
                     * 
                     */
                    bool TrafficMirrorSetHasBeenSet() const;

                private:

                    /**
                     * 流量镜像总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 对象数组。数组元素为流量镜像信息，具体结构描述如list结构所示。
                     */
                    std::vector<TrafficMirror> m_trafficMirrorSet;
                    bool m_trafficMirrorSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSRESPONSE_H_
