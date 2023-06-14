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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALUSERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALUSERINFO_H_

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
                * 渠道方用户信息
                */
                class CloudExternalUserInfo : public AbstractModel
                {
                public:
                    CloudExternalUserInfo();
                    ~CloudExternalUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道方用户类型
                     * @return ExternalUserType 渠道方用户类型
                     * 
                     */
                    std::string GetExternalUserType() const;

                    /**
                     * 设置渠道方用户类型
                     * @param _externalUserType 渠道方用户类型
                     * 
                     */
                    void SetExternalUserType(const std::string& _externalUserType);

                    /**
                     * 判断参数 ExternalUserType 是否已赋值
                     * @return ExternalUserType 是否已赋值
                     * 
                     */
                    bool ExternalUserTypeHasBeenSet() const;

                    /**
                     * 获取渠道方用户ID
                     * @return ExternalUserId 渠道方用户ID
                     * 
                     */
                    std::string GetExternalUserId() const;

                    /**
                     * 设置渠道方用户ID
                     * @param _externalUserId 渠道方用户ID
                     * 
                     */
                    void SetExternalUserId(const std::string& _externalUserId);

                    /**
                     * 判断参数 ExternalUserId 是否已赋值
                     * @return ExternalUserId 是否已赋值
                     * 
                     */
                    bool ExternalUserIdHasBeenSet() const;

                private:

                    /**
                     * 渠道方用户类型
                     */
                    std::string m_externalUserType;
                    bool m_externalUserTypeHasBeenSet;

                    /**
                     * 渠道方用户ID
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALUSERINFO_H_
