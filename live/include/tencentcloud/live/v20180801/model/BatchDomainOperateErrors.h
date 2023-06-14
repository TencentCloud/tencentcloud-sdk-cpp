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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BATCHDOMAINOPERATEERRORS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BATCHDOMAINOPERATEERRORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 批量操作域名相关接口，若其中个别域名操作失败将会跳过，相应的域名错误信息将统一汇总在此类型中
                */
                class BatchDomainOperateErrors : public AbstractModel
                {
                public:
                    BatchDomainOperateErrors();
                    ~BatchDomainOperateErrors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作失败的域名。
                     * @return DomainName 操作失败的域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置操作失败的域名。
                     * @param _domainName 操作失败的域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取API3.0错误码。
                     * @return Code API3.0错误码。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置API3.0错误码。
                     * @param _code API3.0错误码。
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
                     * 获取API3.0错误信息。
                     * @return Message API3.0错误信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置API3.0错误信息。
                     * @param _message API3.0错误信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 操作失败的域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * API3.0错误码。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * API3.0错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BATCHDOMAINOPERATEERRORS_H_
