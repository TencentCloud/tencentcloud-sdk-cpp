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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETDBINSTANCEDELETIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETDBINSTANCEDELETIONPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * SetDBInstanceDeletionProtection请求参数结构体
                */
                class SetDBInstanceDeletionProtectionRequest : public AbstractModel
                {
                public:
                    SetDBInstanceDeletionProtectionRequest();
                    ~SetDBInstanceDeletionProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceIds 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @param _instanceIds 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例销毁保护选项，取值范围：0-关闭销毁保护，1-开启销毁保护
                     * @return EnableDeletionProtection 实例销毁保护选项，取值范围：0-关闭销毁保护，1-开启销毁保护
                     * 
                     */
                    uint64_t GetEnableDeletionProtection() const;

                    /**
                     * 设置实例销毁保护选项，取值范围：0-关闭销毁保护，1-开启销毁保护
                     * @param _enableDeletionProtection 实例销毁保护选项，取值范围：0-关闭销毁保护，1-开启销毁保护
                     * 
                     */
                    void SetEnableDeletionProtection(const uint64_t& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例销毁保护选项，取值范围：0-关闭销毁保护，1-开启销毁保护
                     */
                    uint64_t m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETDBINSTANCEDELETIONPROTECTIONREQUEST_H_
