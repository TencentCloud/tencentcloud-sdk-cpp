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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRECONNECTIONSETTINGREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRECONNECTIONSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyReconnectionSetting请求参数结构体
                */
                class ModifyReconnectionSettingRequest : public AbstractModel
                {
                public:
                    ModifyReconnectionSettingRequest();
                    ~ModifyReconnectionSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取重试次数,取值范围：0-20
                     * @return ReconnectionMaxCount 重试次数,取值范围：0-20
                     * 
                     */
                    uint64_t GetReconnectionMaxCount() const;

                    /**
                     * 设置重试次数,取值范围：0-20
                     * @param _reconnectionMaxCount 重试次数,取值范围：0-20
                     * 
                     */
                    void SetReconnectionMaxCount(const uint64_t& _reconnectionMaxCount);

                    /**
                     * 判断参数 ReconnectionMaxCount 是否已赋值
                     * @return ReconnectionMaxCount 是否已赋值
                     * 
                     */
                    bool ReconnectionMaxCountHasBeenSet() const;

                    /**
                     * 获取true：限制重连次数，false：不限制重连次数
                     * @return Enable true：限制重连次数，false：不限制重连次数
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置true：限制重连次数，false：不限制重连次数
                     * @param _enable true：限制重连次数，false：不限制重连次数
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 重试次数,取值范围：0-20
                     */
                    uint64_t m_reconnectionMaxCount;
                    bool m_reconnectionMaxCountHasBeenSet;

                    /**
                     * true：限制重连次数，false：不限制重连次数
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRECONNECTIONSETTINGREQUEST_H_
