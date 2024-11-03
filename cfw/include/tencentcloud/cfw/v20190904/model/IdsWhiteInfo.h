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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IDSWHITEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IDSWHITEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 入侵防御规则白名单详情
                */
                class IdsWhiteInfo : public AbstractModel
                {
                public:
                    IdsWhiteInfo();
                    ~IdsWhiteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单唯一ID
                     * @return Id 白名单唯一ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置白名单唯一ID
                     * @param _id 白名单唯一ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取源IP
                     * @return SrcIp 源IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置源IP
                     * @param _srcIp 源IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取目的IP
                     * @return DstIp 目的IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目的IP
                     * @param _dstIp 目的IP
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取规则类型
                     * @return WhiteRuleType 规则类型
                     * 
                     */
                    std::string GetWhiteRuleType() const;

                    /**
                     * 设置规则类型
                     * @param _whiteRuleType 规则类型
                     * 
                     */
                    void SetWhiteRuleType(const std::string& _whiteRuleType);

                    /**
                     * 判断参数 WhiteRuleType 是否已赋值
                     * @return WhiteRuleType 是否已赋值
                     * 
                     */
                    bool WhiteRuleTypeHasBeenSet() const;

                    /**
                     * 获取白名单生效防火墙范围： 1 边界防火墙 2 nat防火墙 4 vpc防火墙 7 = 1+2+4 所有防火墙
                     * @return FwType 白名单生效防火墙范围： 1 边界防火墙 2 nat防火墙 4 vpc防火墙 7 = 1+2+4 所有防火墙
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置白名单生效防火墙范围： 1 边界防火墙 2 nat防火墙 4 vpc防火墙 7 = 1+2+4 所有防火墙
                     * @param _fwType 白名单生效防火墙范围： 1 边界防火墙 2 nat防火墙 4 vpc防火墙 7 = 1+2+4 所有防火墙
                     * 
                     */
                    void SetFwType(const int64_t& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取入侵防御规则ID
                     * @return RuleId 入侵防御规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置入侵防御规则ID
                     * @param _ruleId 入侵防御规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 白名单唯一ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 源IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 目的IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 规则类型
                     */
                    std::string m_whiteRuleType;
                    bool m_whiteRuleTypeHasBeenSet;

                    /**
                     * 白名单生效防火墙范围： 1 边界防火墙 2 nat防火墙 4 vpc防火墙 7 = 1+2+4 所有防火墙
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 入侵防御规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IDSWHITEINFO_H_
