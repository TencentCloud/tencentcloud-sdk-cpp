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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_ONLINESCAMINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_ONLINESCAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 诈骗信息。
                */
                class OnlineScamInfo : public AbstractModel
                {
                public:
                    OnlineScamInfo();
                    ~OnlineScamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容标签。
                     * @return ContentLabel 内容标签。
                     * 
                     */
                    std::string GetContentLabel() const;

                    /**
                     * 设置内容标签。
                     * @param _contentLabel 内容标签。
                     * 
                     */
                    void SetContentLabel(const std::string& _contentLabel);

                    /**
                     * 判断参数 ContentLabel 是否已赋值
                     * @return ContentLabel 是否已赋值
                     * 
                     */
                    bool ContentLabelHasBeenSet() const;

                    /**
                     * 获取内容风险等级：
0：正常。
1：可疑。
                     * @return ContentRiskLevel 内容风险等级：
0：正常。
1：可疑。
                     * 
                     */
                    int64_t GetContentRiskLevel() const;

                    /**
                     * 设置内容风险等级：
0：正常。
1：可疑。
                     * @param _contentRiskLevel 内容风险等级：
0：正常。
1：可疑。
                     * 
                     */
                    void SetContentRiskLevel(const int64_t& _contentRiskLevel);

                    /**
                     * 判断参数 ContentRiskLevel 是否已赋值
                     * @return ContentRiskLevel 是否已赋值
                     * 
                     */
                    bool ContentRiskLevelHasBeenSet() const;

                    /**
                     * 获取内容产生形式：
0：对话。
1：广播。
                     * @return ContentType 内容产生形式：
0：对话。
1：广播。
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置内容产生形式：
0：对话。
1：广播。
                     * @param _contentType 内容产生形式：
0：对话。
1：广播。
                     * 
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取账号类型
1：手机号
2：uin账号
                     * @return FraudType 账号类型
1：手机号
2：uin账号
                     * 
                     */
                    int64_t GetFraudType() const;

                    /**
                     * 设置账号类型
1：手机号
2：uin账号
                     * @param _fraudType 账号类型
1：手机号
2：uin账号
                     * 
                     */
                    void SetFraudType(const int64_t& _fraudType);

                    /**
                     * 判断参数 FraudType 是否已赋值
                     * @return FraudType 是否已赋值
                     * 
                     */
                    bool FraudTypeHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return FraudAccount 账号
                     * 
                     */
                    std::string GetFraudAccount() const;

                    /**
                     * 设置账号
                     * @param _fraudAccount 账号
                     * 
                     */
                    void SetFraudAccount(const std::string& _fraudAccount);

                    /**
                     * 判断参数 FraudAccount 是否已赋值
                     * @return FraudAccount 是否已赋值
                     * 
                     */
                    bool FraudAccountHasBeenSet() const;

                private:

                    /**
                     * 内容标签。
                     */
                    std::string m_contentLabel;
                    bool m_contentLabelHasBeenSet;

                    /**
                     * 内容风险等级：
0：正常。
1：可疑。
                     */
                    int64_t m_contentRiskLevel;
                    bool m_contentRiskLevelHasBeenSet;

                    /**
                     * 内容产生形式：
0：对话。
1：广播。
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 账号类型
1：手机号
2：uin账号
                     */
                    int64_t m_fraudType;
                    bool m_fraudTypeHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_fraudAccount;
                    bool m_fraudAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_ONLINESCAMINFO_H_
