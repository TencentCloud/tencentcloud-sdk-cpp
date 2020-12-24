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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetRealNameAuthToken请求参数结构体
                */
                class GetRealNameAuthTokenRequest : public AbstractModel
                {
                public:
                    GetRealNameAuthTokenRequest();
                    ~GetRealNameAuthTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取姓名
                     * @return Name 姓名
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param Name 姓名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return IDCard 身份证号
                     */
                    std::string GetIDCard() const;

                    /**
                     * 设置身份证号
                     * @param IDCard 身份证号
                     */
                    void SetIDCard(const std::string& _iDCard);

                    /**
                     * 判断参数 IDCard 是否已赋值
                     * @return IDCard 是否已赋值
                     */
                    bool IDCardHasBeenSet() const;

                    /**
                     * 获取回调地址。实名认证完成后，将会重定向到这个地址通知认证发起方
                     * @return CallbackURL 回调地址。实名认证完成后，将会重定向到这个地址通知认证发起方
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置回调地址。实名认证完成后，将会重定向到这个地址通知认证发起方
                     * @param CallbackURL 回调地址。实名认证完成后，将会重定向到这个地址通知认证发起方
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     */
                    bool CallbackURLHasBeenSet() const;

                private:

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_iDCard;
                    bool m_iDCardHasBeenSet;

                    /**
                     * 回调地址。实名认证完成后，将会重定向到这个地址通知认证发起方
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHTOKENREQUEST_H_
