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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTUCBRULERSP_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTUCBRULERSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/InOutputBotUCBRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 获取自定义规则列表时的出参
                */
                class DescribeBotUCBRuleRsp : public AbstractModel
                {
                public:
                    DescribeBotUCBRuleRsp();
                    ~DescribeBotUCBRuleRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则列表
                     * @return Res 规则列表
                     * 
                     */
                    std::vector<InOutputBotUCBRule> GetRes() const;

                    /**
                     * 设置规则列表
                     * @param _res 规则列表
                     * 
                     */
                    void SetRes(const std::vector<InOutputBotUCBRule>& _res);

                    /**
                     * 判断参数 Res 是否已赋值
                     * @return Res 是否已赋值
                     * 
                     */
                    bool ResHasBeenSet() const;

                    /**
                     * 获取规则总数
                     * @return TotalCount 规则总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置规则总数
                     * @param _totalCount 规则总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    std::vector<InOutputBotUCBRule> m_res;
                    bool m_resHasBeenSet;

                    /**
                     * 规则总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTUCBRULERSP_H_
