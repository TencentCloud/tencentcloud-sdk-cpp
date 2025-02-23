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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_SLOTNETINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_SLOTNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 网卡流量指标数据
                */
                class SlotNetInfo : public AbstractModel
                {
                public:
                    SlotNetInfo();
                    ~SlotNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网卡名
                     * @return NetInfoName 网卡名
                     * 
                     */
                    std::string GetNetInfoName() const;

                    /**
                     * 设置网卡名
                     * @param _netInfoName 网卡名
                     * 
                     */
                    void SetNetInfoName(const std::string& _netInfoName);

                    /**
                     * 判断参数 NetInfoName 是否已赋值
                     * @return NetInfoName 是否已赋值
                     * 
                     */
                    bool NetInfoNameHasBeenSet() const;

                    /**
                     * 获取公网IP
                     * @return PublicIP 公网IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置公网IP
                     * @param _publicIP 公网IP
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取指标数据（bps/ms/%）
                     * @return Current 指标数据（bps/ms/%）
                     * 
                     */
                    double GetCurrent() const;

                    /**
                     * 设置指标数据（bps/ms/%）
                     * @param _current 指标数据（bps/ms/%）
                     * 
                     */
                    void SetCurrent(const double& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * 网卡名
                     */
                    std::string m_netInfoName;
                    bool m_netInfoNameHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 指标数据（bps/ms/%）
                     */
                    double m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_SLOTNETINFO_H_
