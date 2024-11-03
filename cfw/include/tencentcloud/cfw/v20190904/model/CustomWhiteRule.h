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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CUSTOMWHITERULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CUSTOMWHITERULE_H_

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
                * 自定义白名单规则
                */
                class CustomWhiteRule : public AbstractModel
                {
                public:
                    CustomWhiteRule();
                    ~CustomWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问目的
                     * @return DstIP 访问目的
                     * 
                     */
                    std::string GetDstIP() const;

                    /**
                     * 设置访问目的
                     * @param _dstIP 访问目的
                     * 
                     */
                    void SetDstIP(const std::string& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return IdsRuleId 规则ID
                     * 
                     */
                    std::string GetIdsRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _idsRuleId 规则ID
                     * 
                     */
                    void SetIdsRuleId(const std::string& _idsRuleId);

                    /**
                     * 判断参数 IdsRuleId 是否已赋值
                     * @return IdsRuleId 是否已赋值
                     * 
                     */
                    bool IdsRuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return IdsRuleName 规则名称
                     * 
                     */
                    std::string GetIdsRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _idsRuleName 规则名称
                     * 
                     */
                    void SetIdsRuleName(const std::string& _idsRuleName);

                    /**
                     * 判断参数 IdsRuleName 是否已赋值
                     * @return IdsRuleName 是否已赋值
                     * 
                     */
                    bool IdsRuleNameHasBeenSet() const;

                    /**
                     * 获取访问源
                     * @return SrcIP 访问源
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置访问源
                     * @param _srcIP 访问源
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                private:

                    /**
                     * 访问目的
                     */
                    std::string m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_idsRuleId;
                    bool m_idsRuleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_idsRuleName;
                    bool m_idsRuleNameHasBeenSet;

                    /**
                     * 访问源
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CUSTOMWHITERULE_H_
