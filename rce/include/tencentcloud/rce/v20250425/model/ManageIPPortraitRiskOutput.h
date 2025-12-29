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

#ifndef TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKOUTPUT_H_
#define TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20250425/model/ManageIPPortraitRiskValueOutput.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20250425
        {
            namespace Model
            {
                /**
                * IP画像出参
                */
                class ManageIPPortraitRiskOutput : public AbstractModel
                {
                public:
                    ManageIPPortraitRiskOutput();
                    ~ManageIPPortraitRiskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回码
                     * @return Code 返回码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置返回码
                     * @param _code 返回码
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取返回消息
                     * @return Message 返回消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置返回消息
                     * @param _message 返回消息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Value 结果
                     * 
                     */
                    ManageIPPortraitRiskValueOutput GetValue() const;

                    /**
                     * 设置结果
                     * @param _value 结果
                     * 
                     */
                    void SetValue(const ManageIPPortraitRiskValueOutput& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 返回码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 返回消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 结果
                     */
                    ManageIPPortraitRiskValueOutput m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKOUTPUT_H_
