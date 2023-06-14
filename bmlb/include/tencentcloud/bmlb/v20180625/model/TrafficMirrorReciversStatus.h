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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORRECIVERSSTATUS_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORRECIVERSSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/TrafficMirrorPortStatus.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 流量镜像健康检查返回的接收机状态信息。
                */
                class TrafficMirrorReciversStatus : public AbstractModel
                {
                public:
                    TrafficMirrorReciversStatus();
                    ~TrafficMirrorReciversStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网IP。
                     * @return LanIp 内网IP。
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置内网IP。
                     * @param _lanIp 内网IP。
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取端口及对应的状态。
                     * @return ReceiversPortStatusSet 端口及对应的状态。
                     * 
                     */
                    std::vector<TrafficMirrorPortStatus> GetReceiversPortStatusSet() const;

                    /**
                     * 设置端口及对应的状态。
                     * @param _receiversPortStatusSet 端口及对应的状态。
                     * 
                     */
                    void SetReceiversPortStatusSet(const std::vector<TrafficMirrorPortStatus>& _receiversPortStatusSet);

                    /**
                     * 判断参数 ReceiversPortStatusSet 是否已赋值
                     * @return ReceiversPortStatusSet 是否已赋值
                     * 
                     */
                    bool ReceiversPortStatusSetHasBeenSet() const;

                private:

                    /**
                     * 内网IP。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 端口及对应的状态。
                     */
                    std::vector<TrafficMirrorPortStatus> m_receiversPortStatusSet;
                    bool m_receiversPortStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORRECIVERSSTATUS_H_
