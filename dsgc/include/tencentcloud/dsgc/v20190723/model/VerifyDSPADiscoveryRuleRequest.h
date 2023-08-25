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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_VERIFYDSPADISCOVERYRULEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_VERIFYDSPADISCOVERYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DataRules.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * VerifyDSPADiscoveryRule请求参数结构体
                */
                class VerifyDSPADiscoveryRuleRequest : public AbstractModel
                {
                public:
                    VerifyDSPADiscoveryRuleRequest();
                    ~VerifyDSPADiscoveryRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * @return MatchOperator 只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * 
                     */
                    std::string GetMatchOperator() const;

                    /**
                     * 设置只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * @param _matchOperator 只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * 
                     */
                    void SetMatchOperator(const std::string& _matchOperator);

                    /**
                     * 判断参数 MatchOperator 是否已赋值
                     * @return MatchOperator 是否已赋值
                     * 
                     */
                    bool MatchOperatorHasBeenSet() const;

                    /**
                     * 获取字段名包含规则，最大支持选择9项
                     * @return MetaRule 字段名包含规则，最大支持选择9项
                     * 
                     */
                    DataRules GetMetaRule() const;

                    /**
                     * 设置字段名包含规则，最大支持选择9项
                     * @param _metaRule 字段名包含规则，最大支持选择9项
                     * 
                     */
                    void SetMetaRule(const DataRules& _metaRule);

                    /**
                     * 判断参数 MetaRule 是否已赋值
                     * @return MetaRule 是否已赋值
                     * 
                     */
                    bool MetaRuleHasBeenSet() const;

                    /**
                     * 获取内容包含规则，最大支持选择9项
                     * @return ContentRule 内容包含规则，最大支持选择9项
                     * 
                     */
                    DataRules GetContentRule() const;

                    /**
                     * 设置内容包含规则，最大支持选择9项
                     * @param _contentRule 内容包含规则，最大支持选择9项
                     * 
                     */
                    void SetContentRule(const DataRules& _contentRule);

                    /**
                     * 判断参数 ContentRule 是否已赋值
                     * @return ContentRule 是否已赋值
                     * 
                     */
                    bool ContentRuleHasBeenSet() const;

                    /**
                     * 获取验证规则字段名，最大长度为1024个字符
                     * @return VerifyMeta 验证规则字段名，最大长度为1024个字符
                     * 
                     */
                    std::string GetVerifyMeta() const;

                    /**
                     * 设置验证规则字段名，最大长度为1024个字符
                     * @param _verifyMeta 验证规则字段名，最大长度为1024个字符
                     * 
                     */
                    void SetVerifyMeta(const std::string& _verifyMeta);

                    /**
                     * 判断参数 VerifyMeta 是否已赋值
                     * @return VerifyMeta 是否已赋值
                     * 
                     */
                    bool VerifyMetaHasBeenSet() const;

                    /**
                     * 获取验证规则数据内容，最大长度为1024个字符
                     * @return VerifyContent 验证规则数据内容，最大长度为1024个字符
                     * 
                     */
                    std::string GetVerifyContent() const;

                    /**
                     * 设置验证规则数据内容，最大长度为1024个字符
                     * @param _verifyContent 验证规则数据内容，最大长度为1024个字符
                     * 
                     */
                    void SetVerifyContent(const std::string& _verifyContent);

                    /**
                     * 判断参数 VerifyContent 是否已赋值
                     * @return VerifyContent 是否已赋值
                     * 
                     */
                    bool VerifyContentHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     */
                    std::string m_matchOperator;
                    bool m_matchOperatorHasBeenSet;

                    /**
                     * 字段名包含规则，最大支持选择9项
                     */
                    DataRules m_metaRule;
                    bool m_metaRuleHasBeenSet;

                    /**
                     * 内容包含规则，最大支持选择9项
                     */
                    DataRules m_contentRule;
                    bool m_contentRuleHasBeenSet;

                    /**
                     * 验证规则字段名，最大长度为1024个字符
                     */
                    std::string m_verifyMeta;
                    bool m_verifyMetaHasBeenSet;

                    /**
                     * 验证规则数据内容，最大长度为1024个字符
                     */
                    std::string m_verifyContent;
                    bool m_verifyContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_VERIFYDSPADISCOVERYRULEREQUEST_H_
