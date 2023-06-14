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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_AGENCYCLIENTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_AGENCYCLIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 经办人信息
                */
                class AgencyClientInfo : public AbstractModel
                {
                public:
                    AgencyClientInfo();
                    ~AgencyClientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经办人姓名，存在经办人必输
                     * @return AgencyClientName 经办人姓名，存在经办人必输
                     * 
                     */
                    std::string GetAgencyClientName() const;

                    /**
                     * 设置经办人姓名，存在经办人必输
                     * @param _agencyClientName 经办人姓名，存在经办人必输
                     * 
                     */
                    void SetAgencyClientName(const std::string& _agencyClientName);

                    /**
                     * 判断参数 AgencyClientName 是否已赋值
                     * @return AgencyClientName 是否已赋值
                     * 
                     */
                    bool AgencyClientNameHasBeenSet() const;

                    /**
                     * 获取经办人证件类型，存在经办人必输
                     * @return AgencyClientGlobalType 经办人证件类型，存在经办人必输
                     * 
                     */
                    std::string GetAgencyClientGlobalType() const;

                    /**
                     * 设置经办人证件类型，存在经办人必输
                     * @param _agencyClientGlobalType 经办人证件类型，存在经办人必输
                     * 
                     */
                    void SetAgencyClientGlobalType(const std::string& _agencyClientGlobalType);

                    /**
                     * 判断参数 AgencyClientGlobalType 是否已赋值
                     * @return AgencyClientGlobalType 是否已赋值
                     * 
                     */
                    bool AgencyClientGlobalTypeHasBeenSet() const;

                    /**
                     * 获取经办人证件号，存在经办人必输
                     * @return AgencyClientGlobalId 经办人证件号，存在经办人必输
                     * 
                     */
                    std::string GetAgencyClientGlobalId() const;

                    /**
                     * 设置经办人证件号，存在经办人必输
                     * @param _agencyClientGlobalId 经办人证件号，存在经办人必输
                     * 
                     */
                    void SetAgencyClientGlobalId(const std::string& _agencyClientGlobalId);

                    /**
                     * 判断参数 AgencyClientGlobalId 是否已赋值
                     * @return AgencyClientGlobalId 是否已赋值
                     * 
                     */
                    bool AgencyClientGlobalIdHasBeenSet() const;

                    /**
                     * 获取经办人手机号，存在经办人必输
                     * @return AgencyClientMobile 经办人手机号，存在经办人必输
                     * 
                     */
                    std::string GetAgencyClientMobile() const;

                    /**
                     * 设置经办人手机号，存在经办人必输
                     * @param _agencyClientMobile 经办人手机号，存在经办人必输
                     * 
                     */
                    void SetAgencyClientMobile(const std::string& _agencyClientMobile);

                    /**
                     * 判断参数 AgencyClientMobile 是否已赋值
                     * @return AgencyClientMobile 是否已赋值
                     * 
                     */
                    bool AgencyClientMobileHasBeenSet() const;

                private:

                    /**
                     * 经办人姓名，存在经办人必输
                     */
                    std::string m_agencyClientName;
                    bool m_agencyClientNameHasBeenSet;

                    /**
                     * 经办人证件类型，存在经办人必输
                     */
                    std::string m_agencyClientGlobalType;
                    bool m_agencyClientGlobalTypeHasBeenSet;

                    /**
                     * 经办人证件号，存在经办人必输
                     */
                    std::string m_agencyClientGlobalId;
                    bool m_agencyClientGlobalIdHasBeenSet;

                    /**
                     * 经办人手机号，存在经办人必输
                     */
                    std::string m_agencyClientMobile;
                    bool m_agencyClientMobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_AGENCYCLIENTINFO_H_
