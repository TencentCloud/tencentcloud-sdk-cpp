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
                     * 获取<p>错误码，0 表示成功，非0表示失败错误码。<br>0：成功<br>1002：参数错误<br>6000：系统内部错误</p>
                     * @return Code <p>错误码，0 表示成功，非0表示失败错误码。<br>0：成功<br>1002：参数错误<br>6000：系统内部错误</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>错误码，0 表示成功，非0表示失败错误码。<br>0：成功<br>1002：参数错误<br>6000：系统内部错误</p>
                     * @param _code <p>错误码，0 表示成功，非0表示失败错误码。<br>0：成功<br>1002：参数错误<br>6000：系统内部错误</p>
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
                     * 获取<p>返回消息</p>
                     * @return Message <p>返回消息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>返回消息</p>
                     * @param _message <p>返回消息</p>
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
                     * 获取<p>结果</p>
                     * @return Value <p>结果</p>
                     * 
                     */
                    ManageIPPortraitRiskValueOutput GetValue() const;

                    /**
                     * 设置<p>结果</p>
                     * @param _value <p>结果</p>
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
                     * <p>错误码，0 表示成功，非0表示失败错误码。<br>0：成功<br>1002：参数错误<br>6000：系统内部错误</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>返回消息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>结果</p>
                     */
                    ManageIPPortraitRiskValueOutput m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKOUTPUT_H_
