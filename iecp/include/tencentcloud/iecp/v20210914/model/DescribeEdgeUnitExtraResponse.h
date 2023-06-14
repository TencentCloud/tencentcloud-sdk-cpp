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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITEXTRARESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITEXTRARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitExtra返回参数结构体
                */
                class DescribeEdgeUnitExtraResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitExtraResponse();
                    ~DescribeEdgeUnitExtraResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取APIServer类型
                     * @return APIServerType APIServer类型
                     * 
                     */
                    std::string GetAPIServerType() const;

                    /**
                     * 判断参数 APIServerType 是否已赋值
                     * @return APIServerType 是否已赋值
                     * 
                     */
                    bool APIServerTypeHasBeenSet() const;

                    /**
                     * 获取域名URL
                     * @return APIServerURL 域名URL
                     * 
                     */
                    std::string GetAPIServerURL() const;

                    /**
                     * 判断参数 APIServerURL 是否已赋值
                     * @return APIServerURL 是否已赋值
                     * 
                     */
                    bool APIServerURLHasBeenSet() const;

                    /**
                     * 获取域名URL对应的端口
                     * @return APIServerURLPort 域名URL对应的端口
                     * 
                     */
                    std::string GetAPIServerURLPort() const;

                    /**
                     * 判断参数 APIServerURLPort 是否已赋值
                     * @return APIServerURLPort 是否已赋值
                     * 
                     */
                    bool APIServerURLPortHasBeenSet() const;

                    /**
                     * 获取域名URL对应的端口
                     * @return APIServerResolveIP 域名URL对应的端口
                     * 
                     */
                    std::string GetAPIServerResolveIP() const;

                    /**
                     * 判断参数 APIServerResolveIP 是否已赋值
                     * @return APIServerResolveIP 是否已赋值
                     * 
                     */
                    bool APIServerResolveIPHasBeenSet() const;

                    /**
                     * 获取对外可访问的IP
                     * @return APIServerExposeAddress 对外可访问的IP
                     * 
                     */
                    std::string GetAPIServerExposeAddress() const;

                    /**
                     * 判断参数 APIServerExposeAddress 是否已赋值
                     * @return APIServerExposeAddress 是否已赋值
                     * 
                     */
                    bool APIServerExposeAddressHasBeenSet() const;

                    /**
                     * 获取是否开启监控
                     * @return IsCreatePrometheus 是否开启监控
                     * 
                     */
                    bool GetIsCreatePrometheus() const;

                    /**
                     * 判断参数 IsCreatePrometheus 是否已赋值
                     * @return IsCreatePrometheus 是否已赋值
                     * 
                     */
                    bool IsCreatePrometheusHasBeenSet() const;

                private:

                    /**
                     * APIServer类型
                     */
                    std::string m_aPIServerType;
                    bool m_aPIServerTypeHasBeenSet;

                    /**
                     * 域名URL
                     */
                    std::string m_aPIServerURL;
                    bool m_aPIServerURLHasBeenSet;

                    /**
                     * 域名URL对应的端口
                     */
                    std::string m_aPIServerURLPort;
                    bool m_aPIServerURLPortHasBeenSet;

                    /**
                     * 域名URL对应的端口
                     */
                    std::string m_aPIServerResolveIP;
                    bool m_aPIServerResolveIPHasBeenSet;

                    /**
                     * 对外可访问的IP
                     */
                    std::string m_aPIServerExposeAddress;
                    bool m_aPIServerExposeAddressHasBeenSet;

                    /**
                     * 是否开启监控
                     */
                    bool m_isCreatePrometheus;
                    bool m_isCreatePrometheusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITEXTRARESPONSE_H_
