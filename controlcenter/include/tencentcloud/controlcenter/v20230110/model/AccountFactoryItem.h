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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/DependsOnItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * 账号工厂基线项
                */
                class AccountFactoryItem : public AbstractModel
                {
                public:
                    AccountFactoryItem();
                    ~AccountFactoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号工厂基线项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @return Identifier 账号工厂基线项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置账号工厂基线项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @param _identifier 账号工厂基线项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取基线项名称，功能项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * @return Name 基线项名称，功能项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置基线项名称，功能项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * @param _name 基线项名称，功能项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取基线项英文名称，基线项名字唯一，仅支持英文字母、数字、空格、符号@、＆_[]-的组合，1-64个英文字符。
                     * @return NameEn 基线项英文名称，基线项名字唯一，仅支持英文字母、数字、空格、符号@、＆_[]-的组合，1-64个英文字符。
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置基线项英文名称，基线项名字唯一，仅支持英文字母、数字、空格、符号@、＆_[]-的组合，1-64个英文字符。
                     * @param _nameEn 基线项英文名称，基线项名字唯一，仅支持英文字母、数字、空格、符号@、＆_[]-的组合，1-64个英文字符。
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取基线项权重，数值小权重越高，取值范围大于等于0。
                     * @return Weight 基线项权重，数值小权重越高，取值范围大于等于0。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置基线项权重，数值小权重越高，取值范围大于等于0。
                     * @param _weight 基线项权重，数值小权重越高，取值范围大于等于0。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取基线项是否必填，1必填，0非必填
                     * @return Required 基线项是否必填，1必填，0非必填
                     * 
                     */
                    int64_t GetRequired() const;

                    /**
                     * 设置基线项是否必填，1必填，0非必填
                     * @param _required 基线项是否必填，1必填，0非必填
                     * 
                     */
                    void SetRequired(const int64_t& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取基线项依赖项，N的取值范围与该基线项依赖的其它基线项个数有关。
                     * @return DependsOn 基线项依赖项，N的取值范围与该基线项依赖的其它基线项个数有关。
                     * 
                     */
                    std::vector<DependsOnItem> GetDependsOn() const;

                    /**
                     * 设置基线项依赖项，N的取值范围与该基线项依赖的其它基线项个数有关。
                     * @param _dependsOn 基线项依赖项，N的取值范围与该基线项依赖的其它基线项个数有关。
                     * 
                     */
                    void SetDependsOn(const std::vector<DependsOnItem>& _dependsOn);

                    /**
                     * 判断参数 DependsOn 是否已赋值
                     * @return DependsOn 是否已赋值
                     * 
                     */
                    bool DependsOnHasBeenSet() const;

                    /**
                     * 获取基线描述，长度为2~256个英文或中文字符，默认值为空。
                     * @return Description 基线描述，长度为2~256个英文或中文字符，默认值为空。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置基线描述，长度为2~256个英文或中文字符，默认值为空。
                     * @param _description 基线描述，长度为2~256个英文或中文字符，默认值为空。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取基线项英文描述，长度为2~1024个英文字符，默认值为空。
                     * @return DescriptionEn 基线项英文描述，长度为2~1024个英文字符，默认值为空。
                     * 
                     */
                    std::string GetDescriptionEn() const;

                    /**
                     * 设置基线项英文描述，长度为2~1024个英文字符，默认值为空。
                     * @param _descriptionEn 基线项英文描述，长度为2~1024个英文字符，默认值为空。
                     * 
                     */
                    void SetDescriptionEn(const std::string& _descriptionEn);

                    /**
                     * 判断参数 DescriptionEn 是否已赋值
                     * @return DescriptionEn 是否已赋值
                     * 
                     */
                    bool DescriptionEnHasBeenSet() const;

                    /**
                     * 获取基线分类，长度为2~32个英文或中文字符，不能为空。
                     * @return Classify 基线分类，长度为2~32个英文或中文字符，不能为空。
                     * 
                     */
                    std::string GetClassify() const;

                    /**
                     * 设置基线分类，长度为2~32个英文或中文字符，不能为空。
                     * @param _classify 基线分类，长度为2~32个英文或中文字符，不能为空。
                     * 
                     */
                    void SetClassify(const std::string& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                    /**
                     * 获取基线英文分类，长度为2~64个英文字符，不能为空。
                     * @return ClassifyEn 基线英文分类，长度为2~64个英文字符，不能为空。
                     * 
                     */
                    std::string GetClassifyEn() const;

                    /**
                     * 设置基线英文分类，长度为2~64个英文字符，不能为空。
                     * @param _classifyEn 基线英文分类，长度为2~64个英文字符，不能为空。
                     * 
                     */
                    void SetClassifyEn(const std::string& _classifyEn);

                    /**
                     * 判断参数 ClassifyEn 是否已赋值
                     * @return ClassifyEn 是否已赋值
                     * 
                     */
                    bool ClassifyEnHasBeenSet() const;

                private:

                    /**
                     * 账号工厂基线项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 基线项名称，功能项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 基线项英文名称，基线项名字唯一，仅支持英文字母、数字、空格、符号@、＆_[]-的组合，1-64个英文字符。
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * 基线项权重，数值小权重越高，取值范围大于等于0。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 基线项是否必填，1必填，0非必填
                     */
                    int64_t m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 基线项依赖项，N的取值范围与该基线项依赖的其它基线项个数有关。
                     */
                    std::vector<DependsOnItem> m_dependsOn;
                    bool m_dependsOnHasBeenSet;

                    /**
                     * 基线描述，长度为2~256个英文或中文字符，默认值为空。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 基线项英文描述，长度为2~1024个英文字符，默认值为空。
                     */
                    std::string m_descriptionEn;
                    bool m_descriptionEnHasBeenSet;

                    /**
                     * 基线分类，长度为2~32个英文或中文字符，不能为空。
                     */
                    std::string m_classify;
                    bool m_classifyHasBeenSet;

                    /**
                     * 基线英文分类，长度为2~64个英文字符，不能为空。
                     */
                    std::string m_classifyEn;
                    bool m_classifyEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_
