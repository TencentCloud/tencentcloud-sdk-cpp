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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_

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
                * DetectAuth请求参数结构体
                */
                class DetectAuthRequest : public AbstractModel
                {
                public:
                    DetectAuthRequest();
                    ~DetectAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     * @return RuleId 用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     * @param RuleId 用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取本接口不需要传递此参数。
                     * @return TerminalType 本接口不需要传递此参数。
                     */
                    std::string GetTerminalType() const;

                    /**
                     * 设置本接口不需要传递此参数。
                     * @param TerminalType 本接口不需要传递此参数。
                     */
                    void SetTerminalType(const std::string& _terminalType);

                    /**
                     * 判断参数 TerminalType 是否已赋值
                     * @return TerminalType 是否已赋值
                     */
                    bool TerminalTypeHasBeenSet() const;

                    /**
                     * 获取身份标识（与公安权威库比对时必须是身份证号）。
规则：a-zA-Z0-9组合。最长长度32位。
                     * @return IdCard 身份标识（与公安权威库比对时必须是身份证号）。
规则：a-zA-Z0-9组合。最长长度32位。
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份标识（与公安权威库比对时必须是身份证号）。
规则：a-zA-Z0-9组合。最长长度32位。
                     * @param IdCard 身份标识（与公安权威库比对时必须是身份证号）。
规则：a-zA-Z0-9组合。最长长度32位。
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名。最长长度32位。中文请使用UTF-8编码。
                     * @return Name 姓名。最长长度32位。中文请使用UTF-8编码。
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。最长长度32位。中文请使用UTF-8编码。
                     * @param Name 姓名。最长长度32位。中文请使用UTF-8编码。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取认证结束后重定向的回调链接地址。最长长度1024位。
                     * @return RedirectUrl 认证结束后重定向的回调链接地址。最长长度1024位。
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置认证结束后重定向的回调链接地址。最长长度1024位。
                     * @param RedirectUrl 认证结束后重定向的回调链接地址。最长长度1024位。
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取透传字段，在获取验证结果时返回。
                     * @return Extra 透传字段，在获取验证结果时返回。
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，在获取验证结果时返回。
                     * @param Extra 透传字段，在获取验证结果时返回。
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取用于人脸比对的照片，图片的BASE64值；
BASE64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
                     * @return ImageBase64 用于人脸比对的照片，图片的BASE64值；
BASE64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置用于人脸比对的照片，图片的BASE64值；
BASE64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
                     * @param ImageBase64 用于人脸比对的照片，图片的BASE64值；
BASE64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * 用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 本接口不需要传递此参数。
                     */
                    std::string m_terminalType;
                    bool m_terminalTypeHasBeenSet;

                    /**
                     * 身份标识（与公安权威库比对时必须是身份证号）。
规则：a-zA-Z0-9组合。最长长度32位。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。最长长度32位。中文请使用UTF-8编码。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 认证结束后重定向的回调链接地址。最长长度1024位。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 透传字段，在获取验证结果时返回。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 用于人脸比对的照片，图片的BASE64值；
BASE64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_
