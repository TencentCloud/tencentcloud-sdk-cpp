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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_EVENTSTAFFELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_EVENTSTAFFELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 座席信息
                */
                class EventStaffElement : public AbstractModel
                {
                public:
                    EventStaffElement();
                    ~EventStaffElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席邮箱账号
                     * @return Mail 座席邮箱账号
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置座席邮箱账号
                     * @param _mail 座席邮箱账号
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取座席工号
                     * @return StaffNumber 座席工号
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置座席工号
                     * @param _staffNumber 座席工号
                     * 
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     * 
                     */
                    bool StaffNumberHasBeenSet() const;

                private:

                    /**
                     * 座席邮箱账号
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 座席工号
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_EVENTSTAFFELEMENT_H_
