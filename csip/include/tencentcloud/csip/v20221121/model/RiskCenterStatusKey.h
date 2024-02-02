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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTERSTATUSKEY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTERSTATUSKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 风险中心状态处理Key
                */
                class RiskCenterStatusKey : public AbstractModel
                {
                public:
                    RiskCenterStatusKey();
                    ~RiskCenterStatusKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险ID
                     * @return Id 风险ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置风险ID
                     * @param _id 风险ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公网IP/域名
                     * @return PublicIPDomain 公网IP/域名
                     * 
                     */
                    std::string GetPublicIPDomain() const;

                    /**
                     * 设置公网IP/域名
                     * @param _publicIPDomain 公网IP/域名
                     * 
                     */
                    void SetPublicIPDomain(const std::string& _publicIPDomain);

                    /**
                     * 判断参数 PublicIPDomain 是否已赋值
                     * @return PublicIPDomain 是否已赋值
                     * 
                     */
                    bool PublicIPDomainHasBeenSet() const;

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
                     * 获取APP ID
                     * @return AppId APP ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置APP ID
                     * @param _appId APP ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 风险ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公网IP/域名
                     */
                    std::string m_publicIPDomain;
                    bool m_publicIPDomainHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * APP ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTERSTATUSKEY_H_
