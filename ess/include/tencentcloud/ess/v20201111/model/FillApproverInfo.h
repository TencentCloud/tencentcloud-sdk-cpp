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
                */
                class FillApproverInfo : public AbstractModel
                {
                public:
                    FillApproverInfo();
                    ~FillApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人签署Id
                     * @return RecipientId 签署人签署Id
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署人签署Id
                     * @param RecipientId 签署人签署Id
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取签署人来源
WEWORKAPP: 企业微信
                     * @return ApproverSource 签署人来源
WEWORKAPP: 企业微信
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署人来源
WEWORKAPP: 企业微信
                     * @param ApproverSource 签署人来源
WEWORKAPP: 企业微信
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取企业自定义账号Id
WEWORKAPP场景下指企业自有应用获取企微明文的userid
                     * @return CustomUserId 企业自定义账号Id
WEWORKAPP场景下指企业自有应用获取企微明文的userid
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置企业自定义账号Id
WEWORKAPP场景下指企业自有应用获取企微明文的userid
                     * @param CustomUserId 企业自定义账号Id
WEWORKAPP场景下指企业自有应用获取企微明文的userid
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     */
                    bool CustomUserIdHasBeenSet() const;

                private:

                    /**
                     * 签署人签署Id
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署人来源
WEWORKAPP: 企业微信
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 企业自定义账号Id
WEWORKAPP场景下指企业自有应用获取企微明文的userid
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_
