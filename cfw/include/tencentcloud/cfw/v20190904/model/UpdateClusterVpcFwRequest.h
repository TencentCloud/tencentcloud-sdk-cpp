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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_UPDATECLUSTERVPCFWREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_UPDATECLUSTERVPCFWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CcnSwitchInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * UpdateClusterVpcFw请求参数结构体
                */
                class UpdateClusterVpcFwRequest : public AbstractModel
                {
                public:
                    UpdateClusterVpcFwRequest();
                    ~UpdateClusterVpcFwRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ccn防火墙开关配置信息
                     * @return CcnSwitch ccn防火墙开关配置信息
                     * 
                     */
                    CcnSwitchInfo GetCcnSwitch() const;

                    /**
                     * 设置ccn防火墙开关配置信息
                     * @param _ccnSwitch ccn防火墙开关配置信息
                     * 
                     */
                    void SetCcnSwitch(const CcnSwitchInfo& _ccnSwitch);

                    /**
                     * 判断参数 CcnSwitch 是否已赋值
                     * @return CcnSwitch 是否已赋值
                     * 
                     */
                    bool CcnSwitchHasBeenSet() const;

                private:

                    /**
                     * ccn防火墙开关配置信息
                     */
                    CcnSwitchInfo m_ccnSwitch;
                    bool m_ccnSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_UPDATECLUSTERVPCFWREQUEST_H_
