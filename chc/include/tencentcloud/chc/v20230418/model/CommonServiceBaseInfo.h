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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_COMMONSERVICEBASEINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_COMMONSERVICEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 通用服务的基本信息
                */
                class CommonServiceBaseInfo : public AbstractModel
                {
                public:
                    CommonServiceBaseInfo();
                    ~CommonServiceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机房名称
                     * @return IdcName 机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机房名称
                     * @param _idcName 机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取业务联系人
                     * @return ContactName 业务联系人
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置业务联系人
                     * @param _contactName 业务联系人
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取联系人电话
                     * @return ContactPhone 联系人电话
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置联系人电话
                     * @param _contactPhone 联系人电话
                     * 
                     */
                    void SetContactPhone(const std::string& _contactPhone);

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     * 
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取操作说明
                     * @return Instructions 操作说明
                     * 
                     */
                    std::string GetInstructions() const;

                    /**
                     * 设置操作说明
                     * @param _instructions 操作说明
                     * 
                     */
                    void SetInstructions(const std::string& _instructions);

                    /**
                     * 判断参数 Instructions 是否已赋值
                     * @return Instructions 是否已赋值
                     * 
                     */
                    bool InstructionsHasBeenSet() const;

                    /**
                     * 获取1 、2 、3 分别代表 L1、L2、L3
                     * @return ServiceLevel 1 、2 、3 分别代表 L1、L2、L3
                     * 
                     */
                    uint64_t GetServiceLevel() const;

                    /**
                     * 设置1 、2 、3 分别代表 L1、L2、L3
                     * @param _serviceLevel 1 、2 、3 分别代表 L1、L2、L3
                     * 
                     */
                    void SetServiceLevel(const uint64_t& _serviceLevel);

                    /**
                     * 判断参数 ServiceLevel 是否已赋值
                     * @return ServiceLevel 是否已赋值
                     * 
                     */
                    bool ServiceLevelHasBeenSet() const;

                    /**
                     * 获取操作预授权
                     * @return PreAuthorization 操作预授权
                     * 
                     */
                    bool GetPreAuthorization() const;

                    /**
                     * 设置操作预授权
                     * @param _preAuthorization 操作预授权
                     * 
                     */
                    void SetPreAuthorization(const bool& _preAuthorization);

                    /**
                     * 判断参数 PreAuthorization 是否已赋值
                     * @return PreAuthorization 是否已赋值
                     * 
                     */
                    bool PreAuthorizationHasBeenSet() const;

                private:

                    /**
                     * 机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 业务联系人
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * 操作说明
                     */
                    std::string m_instructions;
                    bool m_instructionsHasBeenSet;

                    /**
                     * 1 、2 、3 分别代表 L1、L2、L3
                     */
                    uint64_t m_serviceLevel;
                    bool m_serviceLevelHasBeenSet;

                    /**
                     * 操作预授权
                     */
                    bool m_preAuthorization;
                    bool m_preAuthorizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_COMMONSERVICEBASEINFO_H_
