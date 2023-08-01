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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 补充签署人信息
- RecipientId 必须指定
-  通过企业自定义账号ID补充签署人时，ApproverSource 和 CustomUserId 必填，ApproverSource取值：WEWORKAPP
- 通过二要素（姓名/手机号）补充签署人时，ApproverName 和 ApproverMobile 必填，ApproverSource设置为空
                */
                class FillApproverInfo : public AbstractModel
                {
                public:
                    FillApproverInfo();
                    ~FillApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应模板中的参与方ID
                     * @return RecipientId 对应模板中的参与方ID
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置对应模板中的参与方ID
                     * @param _recipientId 对应模板中的参与方ID
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取签署人来源
WEWORKAPP: 企业微信
<br/>仅【企微或签】时指定WEWORKAPP
                     * @return ApproverSource 签署人来源
WEWORKAPP: 企业微信
<br/>仅【企微或签】时指定WEWORKAPP
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署人来源
WEWORKAPP: 企业微信
<br/>仅【企微或签】时指定WEWORKAPP
                     * @param _approverSource 签署人来源
WEWORKAPP: 企业微信
<br/>仅【企微或签】时指定WEWORKAPP
                     * 
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     * 
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取企业自定义账号ID
<br/>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企微明文的userid
                     * @return CustomUserId 企业自定义账号ID
<br/>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企微明文的userid
                     * 
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置企业自定义账号ID
<br/>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企微明文的userid
                     * @param _customUserId 企业自定义账号ID
<br/>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企微明文的userid
                     * 
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     * 
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取补充签署人姓名
                     * @return ApproverName 补充签署人姓名
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置补充签署人姓名
                     * @param _approverName 补充签署人姓名
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取补充签署人手机号
                     * @return ApproverMobile 补充签署人手机号
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置补充签署人手机号
                     * @param _approverMobile 补充签署人手机号
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                private:

                    /**
                     * 对应模板中的参与方ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署人来源
WEWORKAPP: 企业微信
<br/>仅【企微或签】时指定WEWORKAPP
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 企业自定义账号ID
<br/>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企微明文的userid
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * 补充签署人姓名
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 补充签署人手机号
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_
