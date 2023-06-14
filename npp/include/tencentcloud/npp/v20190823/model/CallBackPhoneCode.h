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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_CALLBACKPHONECODE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_CALLBACKPHONECODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 回拨号码字段
                */
                class CallBackPhoneCode : public AbstractModel
                {
                public:
                    CallBackPhoneCode();
                    ~CallBackPhoneCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家码，统一以 00 开头
                     * @return Nation 国家码，统一以 00 开头
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 设置国家码，统一以 00 开头
                     * @param _nation 国家码，统一以 00 开头
                     * 
                     */
                    void SetNation(const std::string& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取号码（固话区号前加 0，如075586013388）
                     * @return Phone 号码（固话区号前加 0，如075586013388）
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置号码（固话区号前加 0，如075586013388）
                     * @param _phone 号码（固话区号前加 0，如075586013388）
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * 国家码，统一以 00 开头
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 号码（固话区号前加 0，如075586013388）
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_CALLBACKPHONECODE_H_
