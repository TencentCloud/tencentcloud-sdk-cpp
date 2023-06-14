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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYPATHREWRITEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYPATHREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyPathRewrite请求参数结构体
                */
                class ModifyPathRewriteRequest : public AbstractModel
                {
                public:
                    ModifyPathRewriteRequest();
                    ~ModifyPathRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路径重写规则ID
                     * @return PathRewriteId 路径重写规则ID
                     * 
                     */
                    std::string GetPathRewriteId() const;

                    /**
                     * 设置路径重写规则ID
                     * @param _pathRewriteId 路径重写规则ID
                     * 
                     */
                    void SetPathRewriteId(const std::string& _pathRewriteId);

                    /**
                     * 判断参数 PathRewriteId 是否已赋值
                     * @return PathRewriteId 是否已赋值
                     * 
                     */
                    bool PathRewriteIdHasBeenSet() const;

                    /**
                     * 获取正则表达式
                     * @return Regex 正则表达式
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置正则表达式
                     * @param _regex 正则表达式
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取替换的内容
                     * @return Replacement 替换的内容
                     * 
                     */
                    std::string GetReplacement() const;

                    /**
                     * 设置替换的内容
                     * @param _replacement 替换的内容
                     * 
                     */
                    void SetReplacement(const std::string& _replacement);

                    /**
                     * 判断参数 Replacement 是否已赋值
                     * @return Replacement 是否已赋值
                     * 
                     */
                    bool ReplacementHasBeenSet() const;

                    /**
                     * 获取是否屏蔽映射后路径，Y: 是 N: 否
                     * @return Blocked 是否屏蔽映射后路径，Y: 是 N: 否
                     * 
                     */
                    std::string GetBlocked() const;

                    /**
                     * 设置是否屏蔽映射后路径，Y: 是 N: 否
                     * @param _blocked 是否屏蔽映射后路径，Y: 是 N: 否
                     * 
                     */
                    void SetBlocked(const std::string& _blocked);

                    /**
                     * 判断参数 Blocked 是否已赋值
                     * @return Blocked 是否已赋值
                     * 
                     */
                    bool BlockedHasBeenSet() const;

                    /**
                     * 获取规则顺序，越小优先级越高
                     * @return Order 规则顺序，越小优先级越高
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置规则顺序，越小优先级越高
                     * @param _order 规则顺序，越小优先级越高
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 路径重写规则ID
                     */
                    std::string m_pathRewriteId;
                    bool m_pathRewriteIdHasBeenSet;

                    /**
                     * 正则表达式
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 替换的内容
                     */
                    std::string m_replacement;
                    bool m_replacementHasBeenSet;

                    /**
                     * 是否屏蔽映射后路径，Y: 是 N: 否
                     */
                    std::string m_blocked;
                    bool m_blockedHasBeenSet;

                    /**
                     * 规则顺序，越小优先级越高
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYPATHREWRITEREQUEST_H_
