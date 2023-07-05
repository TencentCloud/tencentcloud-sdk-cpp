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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FAILEDCREATESTAFFDATA_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FAILEDCREATESTAFFDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建员工的失败数据
                */
                class FailedCreateStaffData : public AbstractModel
                {
                public:
                    FailedCreateStaffData();
                    ~FailedCreateStaffData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取员工名
                     * @return DisplayName 员工名
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置员工名
                     * @param _displayName 员工名
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取员工手机号
                     * @return Mobile 员工手机号
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置员工手机号
                     * @param _mobile 员工手机号
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取传入的企微账号id
                     * @return WeworkOpenId 传入的企微账号id
                     * 
                     */
                    std::string GetWeworkOpenId() const;

                    /**
                     * 设置传入的企微账号id
                     * @param _weworkOpenId 传入的企微账号id
                     * 
                     */
                    void SetWeworkOpenId(const std::string& _weworkOpenId);

                    /**
                     * 判断参数 WeworkOpenId 是否已赋值
                     * @return WeworkOpenId 是否已赋值
                     * 
                     */
                    bool WeworkOpenIdHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return Reason 失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因
                     * @param _reason 失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 员工名
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 员工手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 传入的企微账号id
                     */
                    std::string m_weworkOpenId;
                    bool m_weworkOpenIdHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FAILEDCREATESTAFFDATA_H_
