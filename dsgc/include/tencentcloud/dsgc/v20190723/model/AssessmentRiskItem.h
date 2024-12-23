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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTRISKITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTRISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/TemplateInfo.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 风险项列表详细数据
                */
                class AssessmentRiskItem : public AbstractModel
                {
                public:
                    AssessmentRiskItem();
                    ~AssessmentRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脆弱项id
                     * @return Id 脆弱项id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置脆弱项id
                     * @param _id 脆弱项id
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
                     * 获取名称
                     * @return RiskName 名称
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置名称
                     * @param _riskName 名称
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取脆弱性级别
                     * @return Level 脆弱性级别
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置脆弱性级别
                     * @param _level 脆弱性级别
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Description 说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置说明
                     * @param _description 说明
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
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取关联模板个数
                     * @return ReferTemplateCount 关联模板个数
                     * 
                     */
                    int64_t GetReferTemplateCount() const;

                    /**
                     * 设置关联模板个数
                     * @param _referTemplateCount 关联模板个数
                     * 
                     */
                    void SetReferTemplateCount(const int64_t& _referTemplateCount);

                    /**
                     * 判断参数 ReferTemplateCount 是否已赋值
                     * @return ReferTemplateCount 是否已赋值
                     * 
                     */
                    bool ReferTemplateCountHasBeenSet() const;

                    /**
                     * 获取支持的数据源
                     * @return SupportDataSource 支持的数据源
                     * 
                     */
                    std::vector<std::string> GetSupportDataSource() const;

                    /**
                     * 设置支持的数据源
                     * @param _supportDataSource 支持的数据源
                     * 
                     */
                    void SetSupportDataSource(const std::vector<std::string>& _supportDataSource);

                    /**
                     * 判断参数 SupportDataSource 是否已赋值
                     * @return SupportDataSource 是否已赋值
                     * 
                     */
                    bool SupportDataSourceHasBeenSet() const;

                    /**
                     * 获取风险面
                     * @return RiskSide 风险面
                     * 
                     */
                    std::string GetRiskSide() const;

                    /**
                     * 设置风险面
                     * @param _riskSide 风险面
                     * 
                     */
                    void SetRiskSide(const std::string& _riskSide);

                    /**
                     * 判断参数 RiskSide 是否已赋值
                     * @return RiskSide 是否已赋值
                     * 
                     */
                    bool RiskSideHasBeenSet() const;

                    /**
                     * 获取关联模板列表
                     * @return ReferTemplateList 关联模板列表
                     * 
                     */
                    std::vector<TemplateInfo> GetReferTemplateList() const;

                    /**
                     * 设置关联模板列表
                     * @param _referTemplateList 关联模板列表
                     * 
                     */
                    void SetReferTemplateList(const std::vector<TemplateInfo>& _referTemplateList);

                    /**
                     * 判断参数 ReferTemplateList 是否已赋值
                     * @return ReferTemplateList 是否已赋值
                     * 
                     */
                    bool ReferTemplateListHasBeenSet() const;

                private:

                    /**
                     * 脆弱项id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 脆弱性级别
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 关联模板个数
                     */
                    int64_t m_referTemplateCount;
                    bool m_referTemplateCountHasBeenSet;

                    /**
                     * 支持的数据源
                     */
                    std::vector<std::string> m_supportDataSource;
                    bool m_supportDataSourceHasBeenSet;

                    /**
                     * 风险面
                     */
                    std::string m_riskSide;
                    bool m_riskSideHasBeenSet;

                    /**
                     * 关联模板列表
                     */
                    std::vector<TemplateInfo> m_referTemplateList;
                    bool m_referTemplateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTRISKITEM_H_
