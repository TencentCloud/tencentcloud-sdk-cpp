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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aa/v20200224/model/QQAccountInfo.h>
#include <tencentcloud/aa/v20200224/model/WeChatAccountInfo.h>
#include <tencentcloud/aa/v20200224/model/OtherAccountInfo.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * 账号信息。
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户账号类型（默认开通 QQ 开放账号、手机号，手机 MD5 账号类型查询。如需使用微信开放账号，则需要 提交工单 由腾讯云进行资格审核，审核通过后方可正常使用微信开放账号）：
1：QQ开放账号。
2：微信开放账号。
4：手机号（暂仅支持国内手机号）。
8：设备号（imei/imeiMD5/idfa/idfaMd5）。
0：其他。
10004：手机号MD5。
                     * @return AccountType 用户账号类型（默认开通 QQ 开放账号、手机号，手机 MD5 账号类型查询。如需使用微信开放账号，则需要 提交工单 由腾讯云进行资格审核，审核通过后方可正常使用微信开放账号）：
1：QQ开放账号。
2：微信开放账号。
4：手机号（暂仅支持国内手机号）。
8：设备号（imei/imeiMD5/idfa/idfaMd5）。
0：其他。
10004：手机号MD5。
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置用户账号类型（默认开通 QQ 开放账号、手机号，手机 MD5 账号类型查询。如需使用微信开放账号，则需要 提交工单 由腾讯云进行资格审核，审核通过后方可正常使用微信开放账号）：
1：QQ开放账号。
2：微信开放账号。
4：手机号（暂仅支持国内手机号）。
8：设备号（imei/imeiMD5/idfa/idfaMd5）。
0：其他。
10004：手机号MD5。
                     * @param AccountType 用户账号类型（默认开通 QQ 开放账号、手机号，手机 MD5 账号类型查询。如需使用微信开放账号，则需要 提交工单 由腾讯云进行资格审核，审核通过后方可正常使用微信开放账号）：
1：QQ开放账号。
2：微信开放账号。
4：手机号（暂仅支持国内手机号）。
8：设备号（imei/imeiMD5/idfa/idfaMd5）。
0：其他。
10004：手机号MD5。
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取QQ账号信息，AccountType是1时，该字段必填。
                     * @return QQAccount QQ账号信息，AccountType是1时，该字段必填。
                     */
                    QQAccountInfo GetQQAccount() const;

                    /**
                     * 设置QQ账号信息，AccountType是1时，该字段必填。
                     * @param QQAccount QQ账号信息，AccountType是1时，该字段必填。
                     */
                    void SetQQAccount(const QQAccountInfo& _qQAccount);

                    /**
                     * 判断参数 QQAccount 是否已赋值
                     * @return QQAccount 是否已赋值
                     */
                    bool QQAccountHasBeenSet() const;

                    /**
                     * 获取微信账号信息，AccountType是2时，该字段必填。
                     * @return WeChatAccount 微信账号信息，AccountType是2时，该字段必填。
                     */
                    WeChatAccountInfo GetWeChatAccount() const;

                    /**
                     * 设置微信账号信息，AccountType是2时，该字段必填。
                     * @param WeChatAccount 微信账号信息，AccountType是2时，该字段必填。
                     */
                    void SetWeChatAccount(const WeChatAccountInfo& _weChatAccount);

                    /**
                     * 判断参数 WeChatAccount 是否已赋值
                     * @return WeChatAccount 是否已赋值
                     */
                    bool WeChatAccountHasBeenSet() const;

                    /**
                     * 获取其它账号信息，AccountType是0、4、8或10004时，该字段必填。
                     * @return OtherAccount 其它账号信息，AccountType是0、4、8或10004时，该字段必填。
                     */
                    OtherAccountInfo GetOtherAccount() const;

                    /**
                     * 设置其它账号信息，AccountType是0、4、8或10004时，该字段必填。
                     * @param OtherAccount 其它账号信息，AccountType是0、4、8或10004时，该字段必填。
                     */
                    void SetOtherAccount(const OtherAccountInfo& _otherAccount);

                    /**
                     * 判断参数 OtherAccount 是否已赋值
                     * @return OtherAccount 是否已赋值
                     */
                    bool OtherAccountHasBeenSet() const;

                private:

                    /**
                     * 用户账号类型（默认开通 QQ 开放账号、手机号，手机 MD5 账号类型查询。如需使用微信开放账号，则需要 提交工单 由腾讯云进行资格审核，审核通过后方可正常使用微信开放账号）：
1：QQ开放账号。
2：微信开放账号。
4：手机号（暂仅支持国内手机号）。
8：设备号（imei/imeiMD5/idfa/idfaMd5）。
0：其他。
10004：手机号MD5。
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * QQ账号信息，AccountType是1时，该字段必填。
                     */
                    QQAccountInfo m_qQAccount;
                    bool m_qQAccountHasBeenSet;

                    /**
                     * 微信账号信息，AccountType是2时，该字段必填。
                     */
                    WeChatAccountInfo m_weChatAccount;
                    bool m_weChatAccountHasBeenSet;

                    /**
                     * 其它账号信息，AccountType是0、4、8或10004时，该字段必填。
                     */
                    OtherAccountInfo m_otherAccount;
                    bool m_otherAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_ACCOUNTINFO_H_
