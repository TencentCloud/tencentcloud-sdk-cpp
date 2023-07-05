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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYDISPATCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYDISPATCHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyEnterpriseSecurityDispatchStatus请求参数结构体
                */
                class ModifyEnterpriseSecurityDispatchStatusRequest : public AbstractModel
                {
                public:
                    ModifyEnterpriseSecurityDispatchStatusRequest();
                    ~ModifyEnterpriseSecurityDispatchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0：打开立即下发开关；

1：关闭立即下发开关；

2：关闭立即下发开关情况下，触发开始下发
                     * @return Status 0：打开立即下发开关；

1：关闭立即下发开关；

2：关闭立即下发开关情况下，触发开始下发
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0：打开立即下发开关；

1：关闭立即下发开关；

2：关闭立即下发开关情况下，触发开始下发
                     * @param _status 0：打开立即下发开关；

1：关闭立即下发开关；

2：关闭立即下发开关情况下，触发开始下发
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 0：打开立即下发开关；

1：关闭立即下发开关；

2：关闭立即下发开关情况下，触发开始下发
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYDISPATCHSTATUSREQUEST_H_
