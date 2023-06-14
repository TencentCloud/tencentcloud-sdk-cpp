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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_PHONEEMAILDATA_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_PHONEEMAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 手机号邮箱列表
                */
                class PhoneEmailData : public AbstractModel
                {
                public:
                    PhoneEmailData();
                    ~PhoneEmailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手机号或者邮箱
                     * @return Code 手机号或者邮箱
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置手机号或者邮箱
                     * @param _code 手机号或者邮箱
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取1：手机  2：邮箱
                     * @return Type 1：手机  2：邮箱
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置1：手机  2：邮箱
                     * @param _type 1：手机  2：邮箱
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param _createdOn 创建时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取1=控制台校验，2=第三方校验
                     * @return CheckStatus 1=控制台校验，2=第三方校验
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置1=控制台校验，2=第三方校验
                     * @param _checkStatus 1=控制台校验，2=第三方校验
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                private:

                    /**
                     * 手机号或者邮箱
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 1：手机  2：邮箱
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 1=控制台校验，2=第三方校验
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_PHONEEMAILDATA_H_
