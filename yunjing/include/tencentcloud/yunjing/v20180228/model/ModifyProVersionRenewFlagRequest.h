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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYPROVERSIONRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYPROVERSIONRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyProVersionRenewFlag请求参数结构体
                */
                class ModifyProVersionRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyProVersionRenewFlagRequest();
                    ~ModifyProVersionRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * @return RenewFlag 自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * @param _renewFlag 自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取主机唯一ID，对应CVM的uuid、BM的instanceId。
                     * @return Quuid 主机唯一ID，对应CVM的uuid、BM的instanceId。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机唯一ID，对应CVM的uuid、BM的instanceId。
                     * @param _quuid 主机唯一ID，对应CVM的uuid、BM的instanceId。
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 自动续费标识。取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 主机唯一ID，对应CVM的uuid、BM的instanceId。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYPROVERSIONRENEWFLAGREQUEST_H_
