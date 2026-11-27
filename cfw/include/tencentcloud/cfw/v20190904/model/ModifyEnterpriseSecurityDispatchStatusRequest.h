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
                     * 获取<p>0：打开立即下发开关；</p><p>1：关闭立即下发开关；</p><p>2：关闭立即下发开关情况下，触发开始下发</p>
                     * @return Status <p>0：打开立即下发开关；</p><p>1：关闭立即下发开关；</p><p>2：关闭立即下发开关情况下，触发开始下发</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>0：打开立即下发开关；</p><p>1：关闭立即下发开关；</p><p>2：关闭立即下发开关情况下，触发开始下发</p>
                     * @param _status <p>0：打开立即下发开关；</p><p>1：关闭立即下发开关；</p><p>2：关闭立即下发开关情况下，触发开始下发</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>开启自动下发时，注明本次修改是否为空绑资产绑定兜底安全组</p>
                     * @return BindFallbackOnce <p>开启自动下发时，注明本次修改是否为空绑资产绑定兜底安全组</p>
                     * 
                     */
                    int64_t GetBindFallbackOnce() const;

                    /**
                     * 设置<p>开启自动下发时，注明本次修改是否为空绑资产绑定兜底安全组</p>
                     * @param _bindFallbackOnce <p>开启自动下发时，注明本次修改是否为空绑资产绑定兜底安全组</p>
                     * 
                     */
                    void SetBindFallbackOnce(const int64_t& _bindFallbackOnce);

                    /**
                     * 判断参数 BindFallbackOnce 是否已赋值
                     * @return BindFallbackOnce 是否已赋值
                     * 
                     */
                    bool BindFallbackOnceHasBeenSet() const;

                private:

                    /**
                     * <p>0：打开立即下发开关；</p><p>1：关闭立即下发开关；</p><p>2：关闭立即下发开关情况下，触发开始下发</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>开启自动下发时，注明本次修改是否为空绑资产绑定兜底安全组</p>
                     */
                    int64_t m_bindFallbackOnce;
                    bool m_bindFallbackOnceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYDISPATCHSTATUSREQUEST_H_
