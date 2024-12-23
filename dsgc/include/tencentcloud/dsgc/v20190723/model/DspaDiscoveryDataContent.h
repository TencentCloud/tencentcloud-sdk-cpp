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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYDATACONTENT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYDATACONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 扫描规则内容
                */
                class DspaDiscoveryDataContent : public AbstractModel
                {
                public:
                    DspaDiscoveryDataContent();
                    ~DspaDiscoveryDataContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则内容，可以是正则规则，关键词，
忽略词扥
                     * @return RuleContent 规则内容，可以是正则规则，关键词，
忽略词扥
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置规则内容，可以是正则规则，关键词，
忽略词扥
                     * @param _ruleContent 规则内容，可以是正则规则，关键词，
忽略词扥
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取是否区分大小写
false: 不区分大小写
true:区分大小写
                     * @return IsIgnoreCase 是否区分大小写
false: 不区分大小写
true:区分大小写
                     * 
                     */
                    bool GetIsIgnoreCase() const;

                    /**
                     * 设置是否区分大小写
false: 不区分大小写
true:区分大小写
                     * @param _isIgnoreCase 是否区分大小写
false: 不区分大小写
true:区分大小写
                     * 
                     */
                    void SetIsIgnoreCase(const bool& _isIgnoreCase);

                    /**
                     * 判断参数 IsIgnoreCase 是否已赋值
                     * @return IsIgnoreCase 是否已赋值
                     * 
                     */
                    bool IsIgnoreCaseHasBeenSet() const;

                private:

                    /**
                     * 规则内容，可以是正则规则，关键词，
忽略词扥
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * 是否区分大小写
false: 不区分大小写
true:区分大小写
                     */
                    bool m_isIgnoreCase;
                    bool m_isIgnoreCaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYDATACONTENT_H_
