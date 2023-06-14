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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCERENEWFLAGREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCERENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/InstanceRenewInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceRenewFlag请求参数结构体
                */
                class ModifyDBInstanceRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceRenewFlagRequest();
                    ~ModifyDBInstanceRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例续费状态标记信息
                     * @return RenewFlags 实例续费状态标记信息
                     * 
                     */
                    std::vector<InstanceRenewInfo> GetRenewFlags() const;

                    /**
                     * 设置实例续费状态标记信息
                     * @param _renewFlags 实例续费状态标记信息
                     * 
                     */
                    void SetRenewFlags(const std::vector<InstanceRenewInfo>& _renewFlags);

                    /**
                     * 判断参数 RenewFlags 是否已赋值
                     * @return RenewFlags 是否已赋值
                     * 
                     */
                    bool RenewFlagsHasBeenSet() const;

                private:

                    /**
                     * 实例续费状态标记信息
                     */
                    std::vector<InstanceRenewInfo> m_renewFlags;
                    bool m_renewFlagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCERENEWFLAGREQUEST_H_
