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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFO_H_

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
                * 发起流程快速注册相关信息
                */
                class RegisterInfo : public AbstractModel
                {
                public:
                    RegisterInfo();
                    ~RegisterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取法人姓名
                     * @return LegalName 法人姓名
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置法人姓名
                     * @param LegalName 法人姓名
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取社会统一信用代码
                     * @return Uscc 社会统一信用代码
                     */
                    std::string GetUscc() const;

                    /**
                     * 设置社会统一信用代码
                     * @param Uscc 社会统一信用代码
                     */
                    void SetUscc(const std::string& _uscc);

                    /**
                     * 判断参数 Uscc 是否已赋值
                     * @return Uscc 是否已赋值
                     */
                    bool UsccHasBeenSet() const;

                private:

                    /**
                     * 法人姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 社会统一信用代码
                     */
                    std::string m_uscc;
                    bool m_usccHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFO_H_
