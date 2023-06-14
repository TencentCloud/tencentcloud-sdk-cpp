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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENT_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/PURL.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 描述一个第三方组件的源信息。
                */
                class Component : public AbstractModel
                {
                public:
                    Component();
                    ~Component() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方组件的PURL
                     * @return PURL 第三方组件的PURL
                     * 
                     */
                    PURL GetPURL() const;

                    /**
                     * 设置第三方组件的PURL
                     * @param _pURL 第三方组件的PURL
                     * 
                     */
                    void SetPURL(const PURL& _pURL);

                    /**
                     * 判断参数 PURL 是否已赋值
                     * @return PURL 是否已赋值
                     * 
                     */
                    bool PURLHasBeenSet() const;

                    /**
                     * 获取第三方组件的主页
                     * @return Homepage 第三方组件的主页
                     * 
                     */
                    std::string GetHomepage() const;

                    /**
                     * 设置第三方组件的主页
                     * @param _homepage 第三方组件的主页
                     * 
                     */
                    void SetHomepage(const std::string& _homepage);

                    /**
                     * 判断参数 Homepage 是否已赋值
                     * @return Homepage 是否已赋值
                     * 
                     */
                    bool HomepageHasBeenSet() const;

                    /**
                     * 获取第三方组件的简介
                     * @return Summary 第三方组件的简介
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置第三方组件的简介
                     * @param _summary 第三方组件的简介
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取第三方组件的别名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NicknameList 第三方组件的别名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNicknameList() const;

                    /**
                     * 设置第三方组件的别名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nicknameList 第三方组件的别名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNicknameList(const std::vector<std::string>& _nicknameList);

                    /**
                     * 判断参数 NicknameList 是否已赋值
                     * @return NicknameList 是否已赋值
                     * 
                     */
                    bool NicknameListHasBeenSet() const;

                    /**
                     * 获取第三方组件的代码位置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeLocationList 第三方组件的代码位置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCodeLocationList() const;

                    /**
                     * 设置第三方组件的代码位置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeLocationList 第三方组件的代码位置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeLocationList(const std::vector<std::string>& _codeLocationList);

                    /**
                     * 判断参数 CodeLocationList 是否已赋值
                     * @return CodeLocationList 是否已赋值
                     * 
                     */
                    bool CodeLocationListHasBeenSet() const;

                    /**
                     * 获取第三方组件的许可证表达式
                     * @return LicenseExpression 第三方组件的许可证表达式
                     * 
                     */
                    std::string GetLicenseExpression() const;

                    /**
                     * 设置第三方组件的许可证表达式
                     * @param _licenseExpression 第三方组件的许可证表达式
                     * 
                     */
                    void SetLicenseExpression(const std::string& _licenseExpression);

                    /**
                     * 判断参数 LicenseExpression 是否已赋值
                     * @return LicenseExpression 是否已赋值
                     * 
                     */
                    bool LicenseExpressionHasBeenSet() const;

                private:

                    /**
                     * 第三方组件的PURL
                     */
                    PURL m_pURL;
                    bool m_pURLHasBeenSet;

                    /**
                     * 第三方组件的主页
                     */
                    std::string m_homepage;
                    bool m_homepageHasBeenSet;

                    /**
                     * 第三方组件的简介
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 第三方组件的别名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nicknameList;
                    bool m_nicknameListHasBeenSet;

                    /**
                     * 第三方组件的代码位置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_codeLocationList;
                    bool m_codeLocationListHasBeenSet;

                    /**
                     * 第三方组件的许可证表达式
                     */
                    std::string m_licenseExpression;
                    bool m_licenseExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENT_H_
