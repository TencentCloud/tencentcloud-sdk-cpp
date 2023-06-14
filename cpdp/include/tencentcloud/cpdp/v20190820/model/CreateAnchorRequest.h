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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEANCHORREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEANCHORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/AnchorExtendInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateAnchor请求参数结构体
                */
                class CreateAnchorRequest : public AbstractModel
                {
                public:
                    CreateAnchorRequest();
                    ~CreateAnchorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主播业务ID，唯一
                     * @return AnchorUid 主播业务ID，唯一
                     * 
                     */
                    std::string GetAnchorUid() const;

                    /**
                     * 设置主播业务ID，唯一
                     * @param _anchorUid 主播业务ID，唯一
                     * 
                     */
                    void SetAnchorUid(const std::string& _anchorUid);

                    /**
                     * 判断参数 AnchorUid 是否已赋值
                     * @return AnchorUid 是否已赋值
                     * 
                     */
                    bool AnchorUidHasBeenSet() const;

                    /**
                     * 获取主播姓名
                     * @return AnchorName 主播姓名
                     * 
                     */
                    std::string GetAnchorName() const;

                    /**
                     * 设置主播姓名
                     * @param _anchorName 主播姓名
                     * 
                     */
                    void SetAnchorName(const std::string& _anchorName);

                    /**
                     * 判断参数 AnchorName 是否已赋值
                     * @return AnchorName 是否已赋值
                     * 
                     */
                    bool AnchorNameHasBeenSet() const;

                    /**
                     * 获取主播电话
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @return AnchorPhone 主播电话
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    std::string GetAnchorPhone() const;

                    /**
                     * 设置主播电话
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @param _anchorPhone 主播电话
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    void SetAnchorPhone(const std::string& _anchorPhone);

                    /**
                     * 判断参数 AnchorPhone 是否已赋值
                     * @return AnchorPhone 是否已赋值
                     * 
                     */
                    bool AnchorPhoneHasBeenSet() const;

                    /**
                     * 获取主播邮箱
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @return AnchorEmail 主播邮箱
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    std::string GetAnchorEmail() const;

                    /**
                     * 设置主播邮箱
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @param _anchorEmail 主播邮箱
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    void SetAnchorEmail(const std::string& _anchorEmail);

                    /**
                     * 判断参数 AnchorEmail 是否已赋值
                     * @return AnchorEmail 是否已赋值
                     * 
                     */
                    bool AnchorEmailHasBeenSet() const;

                    /**
                     * 获取主播地址
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @return AnchorAddress 主播地址
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    std::string GetAnchorAddress() const;

                    /**
                     * 设置主播地址
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @param _anchorAddress 主播地址
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    void SetAnchorAddress(const std::string& _anchorAddress);

                    /**
                     * 判断参数 AnchorAddress 是否已赋值
                     * @return AnchorAddress 是否已赋值
                     * 
                     */
                    bool AnchorAddressHasBeenSet() const;

                    /**
                     * 获取主播身份证号
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @return AnchorIdNo 主播身份证号
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    std::string GetAnchorIdNo() const;

                    /**
                     * 设置主播身份证号
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * @param _anchorIdNo 主播身份证号
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     * 
                     */
                    void SetAnchorIdNo(const std::string& _anchorIdNo);

                    /**
                     * 判断参数 AnchorIdNo 是否已赋值
                     * @return AnchorIdNo 是否已赋值
                     * 
                     */
                    bool AnchorIdNoHasBeenSet() const;

                    /**
                     * 获取主播类型
__KMusic__:全民K歌
__QMusic__:QQ音乐
__WeChat__:微信视频号
                     * @return AnchorType 主播类型
__KMusic__:全民K歌
__QMusic__:QQ音乐
__WeChat__:微信视频号
                     * 
                     */
                    std::string GetAnchorType() const;

                    /**
                     * 设置主播类型
__KMusic__:全民K歌
__QMusic__:QQ音乐
__WeChat__:微信视频号
                     * @param _anchorType 主播类型
__KMusic__:全民K歌
__QMusic__:QQ音乐
__WeChat__:微信视频号
                     * 
                     */
                    void SetAnchorType(const std::string& _anchorType);

                    /**
                     * 判断参数 AnchorType 是否已赋值
                     * @return AnchorType 是否已赋值
                     * 
                     */
                    bool AnchorTypeHasBeenSet() const;

                    /**
                     * 获取主播扩展信息
                     * @return AnchorExtendInfo 主播扩展信息
                     * 
                     */
                    std::vector<AnchorExtendInfo> GetAnchorExtendInfo() const;

                    /**
                     * 设置主播扩展信息
                     * @param _anchorExtendInfo 主播扩展信息
                     * 
                     */
                    void SetAnchorExtendInfo(const std::vector<AnchorExtendInfo>& _anchorExtendInfo);

                    /**
                     * 判断参数 AnchorExtendInfo 是否已赋值
                     * @return AnchorExtendInfo 是否已赋值
                     * 
                     */
                    bool AnchorExtendInfoHasBeenSet() const;

                private:

                    /**
                     * 主播业务ID，唯一
                     */
                    std::string m_anchorUid;
                    bool m_anchorUidHasBeenSet;

                    /**
                     * 主播姓名
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 主播电话
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     */
                    std::string m_anchorPhone;
                    bool m_anchorPhoneHasBeenSet;

                    /**
                     * 主播邮箱
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     */
                    std::string m_anchorEmail;
                    bool m_anchorEmailHasBeenSet;

                    /**
                     * 主播地址
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     */
                    std::string m_anchorAddress;
                    bool m_anchorAddressHasBeenSet;

                    /**
                     * 主播身份证号
_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密
                     */
                    std::string m_anchorIdNo;
                    bool m_anchorIdNoHasBeenSet;

                    /**
                     * 主播类型
__KMusic__:全民K歌
__QMusic__:QQ音乐
__WeChat__:微信视频号
                     */
                    std::string m_anchorType;
                    bool m_anchorTypeHasBeenSet;

                    /**
                     * 主播扩展信息
                     */
                    std::vector<AnchorExtendInfo> m_anchorExtendInfo;
                    bool m_anchorExtendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEANCHORREQUEST_H_
