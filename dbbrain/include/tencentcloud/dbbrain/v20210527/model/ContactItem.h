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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CONTACTITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CONTACTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 联系人contact描述。
                */
                class ContactItem : public AbstractModel
                {
                public:
                    ContactItem();
                    ~ContactItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联系人id。
                     * @return Id 联系人id。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置联系人id。
                     * @param _id 联系人id。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取联系人姓名。
                     * @return Name 联系人姓名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置联系人姓名。
                     * @param _name 联系人姓名。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取联系人绑定的邮箱。
                     * @return Mail 联系人绑定的邮箱。
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置联系人绑定的邮箱。
                     * @param _mail 联系人绑定的邮箱。
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                private:

                    /**
                     * 联系人id。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 联系人姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 联系人绑定的邮箱。
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CONTACTITEM_H_
