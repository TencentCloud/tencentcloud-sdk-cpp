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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ACCESSINSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ACCESSINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 接入防火墙实例信息
                */
                class AccessInstanceInfo : public AbstractModel
                {
                public:
                    AccessInstanceInfo();
                    ~AccessInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例类型VPC or DIRECTCONNECT等类型
                     * @return InstanceType 实例类型VPC or DIRECTCONNECT等类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型VPC or DIRECTCONNECT等类型
                     * @param _instanceType 实例类型VPC or DIRECTCONNECT等类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例所在地域
                     * @return InstanceRegion 实例所在地域
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置实例所在地域
                     * @param _instanceRegion 实例所在地域
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取接入防火墙的网段模式：0-不接入，1-接入实例关联的所有网段，2-接入用户自定义的网段
                     * @return AccessCidrMode 接入防火墙的网段模式：0-不接入，1-接入实例关联的所有网段，2-接入用户自定义的网段
                     * 
                     */
                    int64_t GetAccessCidrMode() const;

                    /**
                     * 设置接入防火墙的网段模式：0-不接入，1-接入实例关联的所有网段，2-接入用户自定义的网段
                     * @param _accessCidrMode 接入防火墙的网段模式：0-不接入，1-接入实例关联的所有网段，2-接入用户自定义的网段
                     * 
                     */
                    void SetAccessCidrMode(const int64_t& _accessCidrMode);

                    /**
                     * 判断参数 AccessCidrMode 是否已赋值
                     * @return AccessCidrMode 是否已赋值
                     * 
                     */
                    bool AccessCidrModeHasBeenSet() const;

                    /**
                     * 获取接入防火墙的网段列表
                     * @return AccessCidrList 接入防火墙的网段列表
                     * 
                     */
                    std::vector<std::string> GetAccessCidrList() const;

                    /**
                     * 设置接入防火墙的网段列表
                     * @param _accessCidrList 接入防火墙的网段列表
                     * 
                     */
                    void SetAccessCidrList(const std::vector<std::string>& _accessCidrList);

                    /**
                     * 判断参数 AccessCidrList 是否已赋值
                     * @return AccessCidrList 是否已赋值
                     * 
                     */
                    bool AccessCidrListHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例类型VPC or DIRECTCONNECT等类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例所在地域
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 接入防火墙的网段模式：0-不接入，1-接入实例关联的所有网段，2-接入用户自定义的网段
                     */
                    int64_t m_accessCidrMode;
                    bool m_accessCidrModeHasBeenSet;

                    /**
                     * 接入防火墙的网段列表
                     */
                    std::vector<std::string> m_accessCidrList;
                    bool m_accessCidrListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ACCESSINSTANCEINFO_H_
