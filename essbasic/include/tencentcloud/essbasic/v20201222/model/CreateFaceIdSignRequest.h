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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEFACEIDSIGNREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEFACEIDSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreateFaceIdSign请求参数结构体
                */
                class CreateFaceIdSignRequest : public AbstractModel
                {
                public:
                    CreateFaceIdSignRequest();
                    ~CreateFaceIdSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息; 必选
                     * @return Caller 调用方信息; 必选
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息; 必选
                     * @param _caller 调用方信息; 必选
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取除api_ticket之外的其它要参与签名的参数值,包括UserId
                     * @return Values 除api_ticket之外的其它要参与签名的参数值,包括UserId
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置除api_ticket之外的其它要参与签名的参数值,包括UserId
                     * @param _values 除api_ticket之外的其它要参与签名的参数值,包括UserId
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 调用方信息; 必选
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 除api_ticket之外的其它要参与签名的参数值,包括UserId
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEFACEIDSIGNREQUEST_H_
