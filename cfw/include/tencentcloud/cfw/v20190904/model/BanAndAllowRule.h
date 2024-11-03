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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CustomWhiteRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 封禁列表和放通列表结构体
                */
                class BanAndAllowRule : public AbstractModel
                {
                public:
                    BanAndAllowRule();
                    ~BanAndAllowRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则评论
                     * @return Comment 规则评论
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置规则评论
                     * @param _comment 规则评论
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取自定义白名单规则
                     * @return CustomRule 自定义白名单规则
                     * 
                     */
                    CustomWhiteRule GetCustomRule() const;

                    /**
                     * 设置自定义白名单规则
                     * @param _customRule 自定义白名单规则
                     * 
                     */
                    void SetCustomRule(const CustomWhiteRule& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取0互联网出站 1互联网入站 5内网访问源 6内网访问目的
                     * @return DirectionList 0互联网出站 1互联网入站 5内网访问源 6内网访问目的
                     * 
                     */
                    std::string GetDirectionList() const;

                    /**
                     * 设置0互联网出站 1互联网入站 5内网访问源 6内网访问目的
                     * @param _directionList 0互联网出站 1互联网入站 5内网访问源 6内网访问目的
                     * 
                     */
                    void SetDirectionList(const std::string& _directionList);

                    /**
                     * 判断参数 DirectionList 是否已赋值
                     * @return DirectionList 是否已赋值
                     * 
                     */
                    bool DirectionListHasBeenSet() const;

                    /**
                     * 获取规则截止时间
                     * @return EndTime 规则截止时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置规则截止时间
                     * @param _endTime 规则截止时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取放通的引擎: 1针对互联网边界 2针对nat防火墙 4针对vpc防火墙
                     * @return FwType 放通的引擎: 1针对互联网边界 2针对nat防火墙 4针对vpc防火墙
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置放通的引擎: 1针对互联网边界 2针对nat防火墙 4针对vpc防火墙
                     * @param _fwType 放通的引擎: 1针对互联网边界 2针对nat防火墙 4针对vpc防火墙
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
                     * 获取封禁和放通对象
                     * @return Ioc 封禁和放通对象
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置封禁和放通对象
                     * @param _ioc 封禁和放通对象
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                private:

                    /**
                     * 规则评论
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 自定义白名单规则
                     */
                    CustomWhiteRule m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * 0互联网出站 1互联网入站 5内网访问源 6内网访问目的
                     */
                    std::string m_directionList;
                    bool m_directionListHasBeenSet;

                    /**
                     * 规则截止时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 放通的引擎: 1针对互联网边界 2针对nat防火墙 4针对vpc防火墙
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 封禁和放通对象
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_
