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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_USERWHITERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_USERWHITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 用户规则白名单
                */
                class UserWhiteRule : public AbstractModel
                {
                public:
                    UserWhiteRule();
                    ~UserWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单的id
                     * @return WhiteRuleId 白名单的id
                     * 
                     */
                    uint64_t GetWhiteRuleId() const;

                    /**
                     * 设置白名单的id
                     * @param _whiteRuleId 白名单的id
                     * 
                     */
                    void SetWhiteRuleId(const uint64_t& _whiteRuleId);

                    /**
                     * 判断参数 WhiteRuleId 是否已赋值
                     * @return WhiteRuleId 是否已赋值
                     * 
                     */
                    bool WhiteRuleIdHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return SignatureId 规则id
                     * 
                     */
                    std::string GetSignatureId() const;

                    /**
                     * 设置规则id
                     * @param _signatureId 规则id
                     * 
                     */
                    void SetSignatureId(const std::string& _signatureId);

                    /**
                     * 判断参数 SignatureId 是否已赋值
                     * @return SignatureId 是否已赋值
                     * 
                     */
                    bool SignatureIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取匹配域
                     * @return MatchField 匹配域
                     * 
                     */
                    std::string GetMatchField() const;

                    /**
                     * 设置匹配域
                     * @param _matchField 匹配域
                     * 
                     */
                    void SetMatchField(const std::string& _matchField);

                    /**
                     * 判断参数 MatchField 是否已赋值
                     * @return MatchField 是否已赋值
                     * 
                     */
                    bool MatchFieldHasBeenSet() const;

                    /**
                     * 获取匹配方法
                     * @return MatchMethod 匹配方法
                     * 
                     */
                    std::string GetMatchMethod() const;

                    /**
                     * 设置匹配方法
                     * @param _matchMethod 匹配方法
                     * 
                     */
                    void SetMatchMethod(const std::string& _matchMethod);

                    /**
                     * 判断参数 MatchMethod 是否已赋值
                     * @return MatchMethod 是否已赋值
                     * 
                     */
                    bool MatchMethodHasBeenSet() const;

                    /**
                     * 获取匹配内容
                     * @return MatchContent 匹配内容
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置匹配内容
                     * @param _matchContent 匹配内容
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 白名单的id
                     */
                    uint64_t m_whiteRuleId;
                    bool m_whiteRuleIdHasBeenSet;

                    /**
                     * 规则id
                     */
                    std::string m_signatureId;
                    bool m_signatureIdHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 匹配域
                     */
                    std::string m_matchField;
                    bool m_matchFieldHasBeenSet;

                    /**
                     * 匹配方法
                     */
                    std::string m_matchMethod;
                    bool m_matchMethodHasBeenSet;

                    /**
                     * 匹配内容
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_USERWHITERULE_H_
