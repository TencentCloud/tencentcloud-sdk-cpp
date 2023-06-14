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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERINPUTDATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERINPUTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 收件人明细输入参数，包含收件人邮箱，以及模板参数
                */
                class ReceiverInputData : public AbstractModel
                {
                public:
                    ReceiverInputData();
                    ~ReceiverInputData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收件人邮箱
                     * @return Email 收件人邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置收件人邮箱
                     * @param _email 收件人邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取模板中的变量参数，请使用json.dump将json对象格式化为string类型。该对象是一组键值对，每个Key代表模板中的一个变量，模板中的变量使用{{键}}表示，相应的值在发送时会被替换为{{值}}。
注意：参数值不能是html等复杂类型的数据。TemplateData (整个 JSON 结构) 总长度限制为 800 bytes。
                     * @return TemplateData 模板中的变量参数，请使用json.dump将json对象格式化为string类型。该对象是一组键值对，每个Key代表模板中的一个变量，模板中的变量使用{{键}}表示，相应的值在发送时会被替换为{{值}}。
注意：参数值不能是html等复杂类型的数据。TemplateData (整个 JSON 结构) 总长度限制为 800 bytes。
                     * 
                     */
                    std::string GetTemplateData() const;

                    /**
                     * 设置模板中的变量参数，请使用json.dump将json对象格式化为string类型。该对象是一组键值对，每个Key代表模板中的一个变量，模板中的变量使用{{键}}表示，相应的值在发送时会被替换为{{值}}。
注意：参数值不能是html等复杂类型的数据。TemplateData (整个 JSON 结构) 总长度限制为 800 bytes。
                     * @param _templateData 模板中的变量参数，请使用json.dump将json对象格式化为string类型。该对象是一组键值对，每个Key代表模板中的一个变量，模板中的变量使用{{键}}表示，相应的值在发送时会被替换为{{值}}。
注意：参数值不能是html等复杂类型的数据。TemplateData (整个 JSON 结构) 总长度限制为 800 bytes。
                     * 
                     */
                    void SetTemplateData(const std::string& _templateData);

                    /**
                     * 判断参数 TemplateData 是否已赋值
                     * @return TemplateData 是否已赋值
                     * 
                     */
                    bool TemplateDataHasBeenSet() const;

                private:

                    /**
                     * 收件人邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 模板中的变量参数，请使用json.dump将json对象格式化为string类型。该对象是一组键值对，每个Key代表模板中的一个变量，模板中的变量使用{{键}}表示，相应的值在发送时会被替换为{{值}}。
注意：参数值不能是html等复杂类型的数据。TemplateData (整个 JSON 结构) 总长度限制为 800 bytes。
                     */
                    std::string m_templateData;
                    bool m_templateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERINPUTDATA_H_
