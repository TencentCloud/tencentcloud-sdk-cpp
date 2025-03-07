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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEOPENPOLICYLISTRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEOPENPOLICYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/OpenPolicyInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeOpenPolicyList返回参数结构体
                */
                class DescribeOpenPolicyListResponse : public AbstractModel
                {
                public:
                    DescribeOpenPolicyListResponse();
                    ~DescribeOpenPolicyListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略信息列表
                     * @return OpenPolicyInfoList 策略信息列表
                     * 
                     */
                    std::vector<OpenPolicyInfo> GetOpenPolicyInfoList() const;

                    /**
                     * 判断参数 OpenPolicyInfoList 是否已赋值
                     * @return OpenPolicyInfoList 是否已赋值
                     * 
                     */
                    bool OpenPolicyInfoListHasBeenSet() const;

                    /**
                     * 获取集群内是否安装了gatekeeper addon
                     * @return GatekeeperStatus 集群内是否安装了gatekeeper addon
                     * 
                     */
                    int64_t GetGatekeeperStatus() const;

                    /**
                     * 判断参数 GatekeeperStatus 是否已赋值
                     * @return GatekeeperStatus 是否已赋值
                     * 
                     */
                    bool GatekeeperStatusHasBeenSet() const;

                private:

                    /**
                     * 策略信息列表
                     */
                    std::vector<OpenPolicyInfo> m_openPolicyInfoList;
                    bool m_openPolicyInfoListHasBeenSet;

                    /**
                     * 集群内是否安装了gatekeeper addon
                     */
                    int64_t m_gatekeeperStatus;
                    bool m_gatekeeperStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEOPENPOLICYLISTRESPONSE_H_
