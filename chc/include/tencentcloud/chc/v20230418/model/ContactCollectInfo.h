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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CONTACTCOLLECTINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CONTACTCOLLECTINFO_H_

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
                * 归集业务联系人信息
                */
                class ContactCollectInfo : public AbstractModel
                {
                public:
                    ContactCollectInfo();
                    ~ContactCollectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务联系人姓名
                     * @return ContactName 业务联系人姓名
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置业务联系人姓名
                     * @param _contactName 业务联系人姓名
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

                private:

                    /**
                     * 业务联系人姓名
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CONTACTCOLLECTINFO_H_
