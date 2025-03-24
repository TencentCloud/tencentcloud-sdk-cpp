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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_POWEROFFCONFIRM_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_POWEROFFCONFIRM_H_

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
                * 关电确认信息
                */
                class PowerOffConfirm : public AbstractModel
                {
                public:
                    PowerOffConfirm();
                    ~PowerOffConfirm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联系人
                     * @return ConfirmContact 联系人
                     * 
                     */
                    std::string GetConfirmContact() const;

                    /**
                     * 设置联系人
                     * @param _confirmContact 联系人
                     * 
                     */
                    void SetConfirmContact(const std::string& _confirmContact);

                    /**
                     * 判断参数 ConfirmContact 是否已赋值
                     * @return ConfirmContact 是否已赋值
                     * 
                     */
                    bool ConfirmContactHasBeenSet() const;

                    /**
                     * 获取联系人电话
                     * @return ConfirmContactNumber 联系人电话
                     * 
                     */
                    std::string GetConfirmContactNumber() const;

                    /**
                     * 设置联系人电话
                     * @param _confirmContactNumber 联系人电话
                     * 
                     */
                    void SetConfirmContactNumber(const std::string& _confirmContactNumber);

                    /**
                     * 判断参数 ConfirmContactNumber 是否已赋值
                     * @return ConfirmContactNumber 是否已赋值
                     * 
                     */
                    bool ConfirmContactNumberHasBeenSet() const;

                private:

                    /**
                     * 联系人
                     */
                    std::string m_confirmContact;
                    bool m_confirmContactHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_confirmContactNumber;
                    bool m_confirmContactNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_POWEROFFCONFIRM_H_
