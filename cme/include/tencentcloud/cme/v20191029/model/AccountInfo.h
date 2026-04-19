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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 制作云用户账号信息。
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户 Id。</p>
                     * @return UserId <p>用户 Id。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 Id。</p>
                     * @param _userId <p>用户 Id。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>用户手机号码。</p>
                     * @return Phone <p>用户手机号码。</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>用户手机号码。</p>
                     * @param _phone <p>用户手机号码。</p>
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取<p>用户昵称。</p>
                     * @return Nick <p>用户昵称。</p>
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置<p>用户昵称。</p>
                     * @param _nick <p>用户昵称。</p>
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取<p>账号状态，取值：</p><li>Normal：有效；</li><li>Stopped：无效。</li>
                     * @return Status <p>账号状态，取值：</p><li>Normal：有效；</li><li>Stopped：无效。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>账号状态，取值：</p><li>Normal：有效；</li><li>Stopped：无效。</li>
                     * @param _status <p>账号状态，取值：</p><li>Normal：有效；</li><li>Stopped：无效。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>账户的创建时间。</p><p>参数格式：使用 ISO 日期格式。</p>
                     * @return CreateTime <p>账户的创建时间。</p><p>参数格式：使用 ISO 日期格式。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>账户的创建时间。</p><p>参数格式：使用 ISO 日期格式。</p>
                     * @param _createTime <p>账户的创建时间。</p><p>参数格式：使用 ISO 日期格式。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>用户 Id。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户手机号码。</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>用户昵称。</p>
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * <p>账号状态，取值：</p><li>Normal：有效；</li><li>Stopped：无效。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>账户的创建时间。</p><p>参数格式：使用 ISO 日期格式。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_ACCOUNTINFO_H_
