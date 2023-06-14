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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_HTTPHEADERPATHRULE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_HTTPHEADERPATHRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 分路径的http头部设置规则。
                */
                class HttpHeaderPathRule : public AbstractModel
                {
                public:
                    HttpHeaderPathRule();
                    ~HttpHeaderPathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
请求头部暂不支持set。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderMode http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
请求头部暂不支持set。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
请求头部暂不支持set。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerMode http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
请求头部暂不支持set。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderMode(const std::string& _headerMode);

                    /**
                     * 判断参数 HeaderMode 是否已赋值
                     * @return HeaderMode 是否已赋值
                     * 
                     */
                    bool HeaderModeHasBeenSet() const;

                    /**
                     * 获取http头部名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderName http头部名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置http头部名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerName http头部名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                    /**
                     * 获取http头部值。del时可不填写该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderValue http头部值。del时可不填写该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置http头部值。del时可不填写该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerValue http头部值。del时可不填写该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderValue(const std::string& _headerValue);

                    /**
                     * 判断参数 HeaderValue 是否已赋值
                     * @return HeaderValue 是否已赋值
                     * 
                     */
                    bool HeaderValueHasBeenSet() const;

                    /**
                     * 获取生效的url路径规则类型，支持all，file，directory或path，分别表示全部路径，文件后缀类型，目录或绝对路径生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 生效的url路径规则类型，支持all，file，directory或path，分别表示全部路径，文件后缀类型，目录或绝对路径生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置生效的url路径规则类型，支持all，file，directory或path，分别表示全部路径，文件后缀类型，目录或绝对路径生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 生效的url路径规则类型，支持all，file，directory或path，分别表示全部路径，文件后缀类型，目录或绝对路径生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取url路径或文件类型列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulePaths url路径或文件类型列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置url路径或文件类型列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rulePaths url路径或文件类型列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
请求头部暂不支持set。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * http头部名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * http头部值。del时可不填写该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                    /**
                     * 生效的url路径规则类型，支持all，file，directory或path，分别表示全部路径，文件后缀类型，目录或绝对路径生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * url路径或文件类型列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_HTTPHEADERPATHRULE_H_
