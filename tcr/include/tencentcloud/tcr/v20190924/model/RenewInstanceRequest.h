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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RENEWINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RegistryChargePrepaid.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * RenewInstance请求参数结构体
                */
                class RenewInstanceRequest : public AbstractModel
                {
                public:
                    RenewInstanceRequest();
                    ~RenewInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取预付费自动续费标识和购买时长,0：手动续费，1：自动续费，2：不续费并且不通知;单位为月
                     * @return RegistryChargePrepaid 预付费自动续费标识和购买时长,0：手动续费，1：自动续费，2：不续费并且不通知;单位为月
                     * 
                     */
                    RegistryChargePrepaid GetRegistryChargePrepaid() const;

                    /**
                     * 设置预付费自动续费标识和购买时长,0：手动续费，1：自动续费，2：不续费并且不通知;单位为月
                     * @param _registryChargePrepaid 预付费自动续费标识和购买时长,0：手动续费，1：自动续费，2：不续费并且不通知;单位为月
                     * 
                     */
                    void SetRegistryChargePrepaid(const RegistryChargePrepaid& _registryChargePrepaid);

                    /**
                     * 判断参数 RegistryChargePrepaid 是否已赋值
                     * @return RegistryChargePrepaid 是否已赋值
                     * 
                     */
                    bool RegistryChargePrepaidHasBeenSet() const;

                    /**
                     * 获取0 续费， 1按量转包年包月
                     * @return Flag 0 续费， 1按量转包年包月
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置0 续费， 1按量转包年包月
                     * @param _flag 0 续费， 1按量转包年包月
                     * 
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 预付费自动续费标识和购买时长,0：手动续费，1：自动续费，2：不续费并且不通知;单位为月
                     */
                    RegistryChargePrepaid m_registryChargePrepaid;
                    bool m_registryChargePrepaidHasBeenSet;

                    /**
                     * 0 续费， 1按量转包年包月
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RENEWINSTANCEREQUEST_H_
