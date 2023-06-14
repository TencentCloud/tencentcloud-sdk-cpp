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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEH5FACEIDURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEH5FACEIDURLREQUEST_H_

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
                * CreateH5FaceIdUrl请求参数结构体
                */
                class CreateH5FaceIdUrlRequest : public AbstractModel
                {
                public:
                    CreateH5FaceIdUrlRequest();
                    ~CreateH5FaceIdUrlRequest() = default;
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
                     * 获取慧眼业务ID; 不填写时后台使用Caller反查
                     * @return WbAppId 慧眼业务ID; 不填写时后台使用Caller反查
                     * 
                     */
                    std::string GetWbAppId() const;

                    /**
                     * 设置慧眼业务ID; 不填写时后台使用Caller反查
                     * @param _wbAppId 慧眼业务ID; 不填写时后台使用Caller反查
                     * 
                     */
                    void SetWbAppId(const std::string& _wbAppId);

                    /**
                     * 判断参数 WbAppId 是否已赋值
                     * @return WbAppId 是否已赋值
                     * 
                     */
                    bool WbAppIdHasBeenSet() const;

                    /**
                     * 获取姓名; 可选(未通过实名认证的用户必选)
                     * @return Name 姓名; 可选(未通过实名认证的用户必选)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名; 可选(未通过实名认证的用户必选)
                     * @param _name 姓名; 可选(未通过实名认证的用户必选)
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户证件类型; 可选; 默认ID_CARD:中国居民身份证
                     * @return IdCardType 用户证件类型; 可选; 默认ID_CARD:中国居民身份证
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置用户证件类型; 可选; 默认ID_CARD:中国居民身份证
                     * @param _idCardType 用户证件类型; 可选; 默认ID_CARD:中国居民身份证
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取用户证件号; 可选(未通过实名认证的用户必选)
                     * @return IdCardNumber 用户证件号; 可选(未通过实名认证的用户必选)
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置用户证件号; 可选(未通过实名认证的用户必选)
                     * @param _idCardNumber 用户证件号; 可选(未通过实名认证的用户必选)
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取H5人脸核身完成后回调的第三方Url; 可选; 不需要做Encode, 跳转的参数: ?code=XX&orderNo=XX&liveRate=xx, code=0表示成功,orderNo为订单号,liveRate为百分制活体检测得分
                     * @return JumpUrl H5人脸核身完成后回调的第三方Url; 可选; 不需要做Encode, 跳转的参数: ?code=XX&orderNo=XX&liveRate=xx, code=0表示成功,orderNo为订单号,liveRate为百分制活体检测得分
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置H5人脸核身完成后回调的第三方Url; 可选; 不需要做Encode, 跳转的参数: ?code=XX&orderNo=XX&liveRate=xx, code=0表示成功,orderNo为订单号,liveRate为百分制活体检测得分
                     * @param _jumpUrl H5人脸核身完成后回调的第三方Url; 可选; 不需要做Encode, 跳转的参数: ?code=XX&orderNo=XX&liveRate=xx, code=0表示成功,orderNo为订单号,liveRate为百分制活体检测得分
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取参数值为"1":直接跳转到url回调地址; 可选; 其他值:跳转提供的结果页面
                     * @return JumpType 参数值为"1":直接跳转到url回调地址; 可选; 其他值:跳转提供的结果页面
                     * 
                     */
                    std::string GetJumpType() const;

                    /**
                     * 设置参数值为"1":直接跳转到url回调地址; 可选; 其他值:跳转提供的结果页面
                     * @param _jumpType 参数值为"1":直接跳转到url回调地址; 可选; 其他值:跳转提供的结果页面
                     * 
                     */
                    void SetJumpType(const std::string& _jumpType);

                    /**
                     * 判断参数 JumpType 是否已赋值
                     * @return JumpType 是否已赋值
                     * 
                     */
                    bool JumpTypeHasBeenSet() const;

                    /**
                     * 获取browser:表示在浏览器启动刷脸, app:表示在App里启动刷脸,默认值为browser; 可选
                     * @return OpenFrom browser:表示在浏览器启动刷脸, app:表示在App里启动刷脸,默认值为browser; 可选
                     * 
                     */
                    std::string GetOpenFrom() const;

                    /**
                     * 设置browser:表示在浏览器启动刷脸, app:表示在App里启动刷脸,默认值为browser; 可选
                     * @param _openFrom browser:表示在浏览器启动刷脸, app:表示在App里启动刷脸,默认值为browser; 可选
                     * 
                     */
                    void SetOpenFrom(const std::string& _openFrom);

                    /**
                     * 判断参数 OpenFrom 是否已赋值
                     * @return OpenFrom 是否已赋值
                     * 
                     */
                    bool OpenFromHasBeenSet() const;

                    /**
                     * 获取跳转类型; 可选; 参数值为"1"时,刷脸页面使用replace方式跳转,不在浏览器history中留下记录;不传或其他值则正常跳转
                     * @return RedirectType 跳转类型; 可选; 参数值为"1"时,刷脸页面使用replace方式跳转,不在浏览器history中留下记录;不传或其他值则正常跳转
                     * 
                     */
                    std::string GetRedirectType() const;

                    /**
                     * 设置跳转类型; 可选; 参数值为"1"时,刷脸页面使用replace方式跳转,不在浏览器history中留下记录;不传或其他值则正常跳转
                     * @param _redirectType 跳转类型; 可选; 参数值为"1"时,刷脸页面使用replace方式跳转,不在浏览器history中留下记录;不传或其他值则正常跳转
                     * 
                     */
                    void SetRedirectType(const std::string& _redirectType);

                    /**
                     * 判断参数 RedirectType 是否已赋值
                     * @return RedirectType 是否已赋值
                     * 
                     */
                    bool RedirectTypeHasBeenSet() const;

                private:

                    /**
                     * 调用方信息; 必选
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 慧眼业务ID; 不填写时后台使用Caller反查
                     */
                    std::string m_wbAppId;
                    bool m_wbAppIdHasBeenSet;

                    /**
                     * 姓名; 可选(未通过实名认证的用户必选)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户证件类型; 可选; 默认ID_CARD:中国居民身份证
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 用户证件号; 可选(未通过实名认证的用户必选)
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * H5人脸核身完成后回调的第三方Url; 可选; 不需要做Encode, 跳转的参数: ?code=XX&orderNo=XX&liveRate=xx, code=0表示成功,orderNo为订单号,liveRate为百分制活体检测得分
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 参数值为"1":直接跳转到url回调地址; 可选; 其他值:跳转提供的结果页面
                     */
                    std::string m_jumpType;
                    bool m_jumpTypeHasBeenSet;

                    /**
                     * browser:表示在浏览器启动刷脸, app:表示在App里启动刷脸,默认值为browser; 可选
                     */
                    std::string m_openFrom;
                    bool m_openFromHasBeenSet;

                    /**
                     * 跳转类型; 可选; 参数值为"1"时,刷脸页面使用replace方式跳转,不在浏览器history中留下记录;不传或其他值则正常跳转
                     */
                    std::string m_redirectType;
                    bool m_redirectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEH5FACEIDURLREQUEST_H_
