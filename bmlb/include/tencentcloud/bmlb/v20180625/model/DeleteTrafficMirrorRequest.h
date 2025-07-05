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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DELETETRAFFICMIRRORREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DELETETRAFFICMIRRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DeleteTrafficMirror请求参数结构体
                */
                class DeleteTrafficMirrorRequest : public AbstractModel
                {
                public:
                    DeleteTrafficMirrorRequest();
                    ~DeleteTrafficMirrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID数组，可以批量删除，每次删除上限为20
                     * @return TrafficMirrorIds 流量镜像实例ID数组，可以批量删除，每次删除上限为20
                     * 
                     */
                    std::vector<std::string> GetTrafficMirrorIds() const;

                    /**
                     * 设置流量镜像实例ID数组，可以批量删除，每次删除上限为20
                     * @param _trafficMirrorIds 流量镜像实例ID数组，可以批量删除，每次删除上限为20
                     * 
                     */
                    void SetTrafficMirrorIds(const std::vector<std::string>& _trafficMirrorIds);

                    /**
                     * 判断参数 TrafficMirrorIds 是否已赋值
                     * @return TrafficMirrorIds 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdsHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID数组，可以批量删除，每次删除上限为20
                     */
                    std::vector<std::string> m_trafficMirrorIds;
                    bool m_trafficMirrorIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DELETETRAFFICMIRRORREQUEST_H_
