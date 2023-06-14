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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKFACEIDENTIFYREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKFACEIDENTIFYREQUEST_H_

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
                * CheckFaceIdentify请求参数结构体
                */
                class CheckFaceIdentifyRequest : public AbstractModel
                {
                public:
                    CheckFaceIdentifyRequest();
                    ~CheckFaceIdentifyRequest() = default;
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
                     * 获取人脸核身渠道; 必选; WEIXINAPP:腾讯电子签小程序,FACEID:腾讯电子签慧眼,None:白名单中的客户直接通过
                     * @return VerifyChannel 人脸核身渠道; 必选; WEIXINAPP:腾讯电子签小程序,FACEID:腾讯电子签慧眼,None:白名单中的客户直接通过
                     * 
                     */
                    std::string GetVerifyChannel() const;

                    /**
                     * 设置人脸核身渠道; 必选; WEIXINAPP:腾讯电子签小程序,FACEID:腾讯电子签慧眼,None:白名单中的客户直接通过
                     * @param _verifyChannel 人脸核身渠道; 必选; WEIXINAPP:腾讯电子签小程序,FACEID:腾讯电子签慧眼,None:白名单中的客户直接通过
                     * 
                     */
                    void SetVerifyChannel(const std::string& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     * 
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取核身订单号; 必选; 对于WEIXINAPP,直接取响应的{VerifyResult};对于FACEID,使用{WbAppId}:{OrderNo}拼接
                     * @return VerifyResult 核身订单号; 必选; 对于WEIXINAPP,直接取响应的{VerifyResult};对于FACEID,使用{WbAppId}:{OrderNo}拼接
                     * 
                     */
                    std::string GetVerifyResult() const;

                    /**
                     * 设置核身订单号; 必选; 对于WEIXINAPP,直接取响应的{VerifyResult};对于FACEID,使用{WbAppId}:{OrderNo}拼接
                     * @param _verifyResult 核身订单号; 必选; 对于WEIXINAPP,直接取响应的{VerifyResult};对于FACEID,使用{WbAppId}:{OrderNo}拼接
                     * 
                     */
                    void SetVerifyResult(const std::string& _verifyResult);

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取要对比的姓名; 可选; 未填写时对比caller.OperatorId的实名信息
                     * @return Name 要对比的姓名; 可选; 未填写时对比caller.OperatorId的实名信息
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置要对比的姓名; 可选; 未填写时对比caller.OperatorId的实名信息
                     * @param _name 要对比的姓名; 可选; 未填写时对比caller.OperatorId的实名信息
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
                     * 获取要对比的身份证号码; 可选; 未填写时对比caller.OperatorId的实名信息
                     * @return IdCardNumber 要对比的身份证号码; 可选; 未填写时对比caller.OperatorId的实名信息
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置要对比的身份证号码; 可选; 未填写时对比caller.OperatorId的实名信息
                     * @param _idCardNumber 要对比的身份证号码; 可选; 未填写时对比caller.OperatorId的实名信息
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
                     * 获取是否取认证时的照片
                     * @return GetPhoto 是否取认证时的照片
                     * 
                     */
                    bool GetGetPhoto() const;

                    /**
                     * 设置是否取认证时的照片
                     * @param _getPhoto 是否取认证时的照片
                     * 
                     */
                    void SetGetPhoto(const bool& _getPhoto);

                    /**
                     * 判断参数 GetPhoto 是否已赋值
                     * @return GetPhoto 是否已赋值
                     * 
                     */
                    bool GetPhotoHasBeenSet() const;

                private:

                    /**
                     * 调用方信息; 必选
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 人脸核身渠道; 必选; WEIXINAPP:腾讯电子签小程序,FACEID:腾讯电子签慧眼,None:白名单中的客户直接通过
                     */
                    std::string m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 核身订单号; 必选; 对于WEIXINAPP,直接取响应的{VerifyResult};对于FACEID,使用{WbAppId}:{OrderNo}拼接
                     */
                    std::string m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 要对比的姓名; 可选; 未填写时对比caller.OperatorId的实名信息
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 要对比的身份证号码; 可选; 未填写时对比caller.OperatorId的实名信息
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 是否取认证时的照片
                     */
                    bool m_getPhoto;
                    bool m_getPhotoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKFACEIDENTIFYREQUEST_H_
