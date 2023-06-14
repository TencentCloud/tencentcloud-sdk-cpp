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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKREDIRECTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKREDIRECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankFormInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-跳转参数，用于小程序前端跳转
                */
                class OpenBankRedirectInfo : public AbstractModel
                {
                public:
                    OpenBankRedirectInfo();
                    ~OpenBankRedirectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成二维码，引导用户扫码
                     * @return QRCodeUrl 生成二维码，引导用户扫码
                     * 
                     */
                    std::string GetQRCodeUrl() const;

                    /**
                     * 设置生成二维码，引导用户扫码
                     * @param _qRCodeUrl 生成二维码，引导用户扫码
                     * 
                     */
                    void SetQRCodeUrl(const std::string& _qRCodeUrl);

                    /**
                     * 判断参数 QRCodeUrl 是否已赋值
                     * @return QRCodeUrl 是否已赋值
                     * 
                     */
                    bool QRCodeUrlHasBeenSet() const;

                    /**
                     * 获取二维码凭证
                     * @return QRCodeKey 二维码凭证
                     * 
                     */
                    std::string GetQRCodeKey() const;

                    /**
                     * 设置二维码凭证
                     * @param _qRCodeKey 二维码凭证
                     * 
                     */
                    void SetQRCodeKey(const std::string& _qRCodeKey);

                    /**
                     * 判断参数 QRCodeKey 是否已赋值
                     * @return QRCodeKey 是否已赋值
                     * 
                     */
                    bool QRCodeKeyHasBeenSet() const;

                    /**
                     * 获取跳转 URL,用于客户端跳转，订单未支付时返回该参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 跳转 URL,用于客户端跳转，订单未支付时返回该参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置跳转 URL,用于客户端跳转，订单未支付时返回该参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 跳转 URL,用于客户端跳转，订单未支付时返回该参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取跳转凭证过期时间,yyyy-MM-dd HH:mm:ss
                     * @return ExpireTime 跳转凭证过期时间,yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置跳转凭证过期时间,yyyy-MM-dd HH:mm:ss
                     * @param _expireTime 跳转凭证过期时间,yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取小程序 appid
                     * @return MpAppId 小程序 appid
                     * 
                     */
                    std::string GetMpAppId() const;

                    /**
                     * 设置小程序 appid
                     * @param _mpAppId 小程序 appid
                     * 
                     */
                    void SetMpAppId(const std::string& _mpAppId);

                    /**
                     * 判断参数 MpAppId 是否已赋值
                     * @return MpAppId 是否已赋值
                     * 
                     */
                    bool MpAppIdHasBeenSet() const;

                    /**
                     * 获取小程序路径
                     * @return MpPath 小程序路径
                     * 
                     */
                    std::string GetMpPath() const;

                    /**
                     * 设置小程序路径
                     * @param _mpPath 小程序路径
                     * 
                     */
                    void SetMpPath(const std::string& _mpPath);

                    /**
                     * 判断参数 MpPath 是否已赋值
                     * @return MpPath 是否已赋值
                     * 
                     */
                    bool MpPathHasBeenSet() const;

                    /**
                     * 获取小程序原始 id
                     * @return MpUserName 小程序原始 id
                     * 
                     */
                    std::string GetMpUserName() const;

                    /**
                     * 设置小程序原始 id
                     * @param _mpUserName 小程序原始 id
                     * 
                     */
                    void SetMpUserName(const std::string& _mpUserName);

                    /**
                     * 判断参数 MpUserName 是否已赋值
                     * @return MpUserName 是否已赋值
                     * 
                     */
                    bool MpUserNameHasBeenSet() const;

                    /**
                     * 获取网银支付提交页面信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FormInfo 网银支付提交页面信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OpenBankFormInfo GetFormInfo() const;

                    /**
                     * 设置网银支付提交页面信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _formInfo 网银支付提交页面信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormInfo(const OpenBankFormInfo& _formInfo);

                    /**
                     * 判断参数 FormInfo 是否已赋值
                     * @return FormInfo 是否已赋值
                     * 
                     */
                    bool FormInfoHasBeenSet() const;

                private:

                    /**
                     * 生成二维码，引导用户扫码
                     */
                    std::string m_qRCodeUrl;
                    bool m_qRCodeUrlHasBeenSet;

                    /**
                     * 二维码凭证
                     */
                    std::string m_qRCodeKey;
                    bool m_qRCodeKeyHasBeenSet;

                    /**
                     * 跳转 URL,用于客户端跳转，订单未支付时返回该参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 跳转凭证过期时间,yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 小程序 appid
                     */
                    std::string m_mpAppId;
                    bool m_mpAppIdHasBeenSet;

                    /**
                     * 小程序路径
                     */
                    std::string m_mpPath;
                    bool m_mpPathHasBeenSet;

                    /**
                     * 小程序原始 id
                     */
                    std::string m_mpUserName;
                    bool m_mpUserNameHasBeenSet;

                    /**
                     * 网银支付提交页面信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpenBankFormInfo m_formInfo;
                    bool m_formInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKREDIRECTINFO_H_
