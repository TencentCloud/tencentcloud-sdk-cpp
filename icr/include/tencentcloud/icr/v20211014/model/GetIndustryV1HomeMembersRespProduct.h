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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPPRODUCT_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPPRODUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespIndustry.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 获取成员列表接口回包ProductList
                */
                class GetIndustryV1HomeMembersRespProduct : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersRespProduct();
                    ~GetIndustryV1HomeMembersRespProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditTime 编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEditTime() const;

                    /**
                     * 设置编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _editTime 编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEditTime(const std::string& _editTime);

                    /**
                     * 判断参数 EditTime 是否已赋值
                     * @return EditTime 是否已赋值
                     * 
                     */
                    bool EditTimeHasBeenSet() const;

                    /**
                     * 获取机器人ID（AppKey信息）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppKey 机器人ID（AppKey信息）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置机器人ID（AppKey信息）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appKey 机器人ID（AppKey信息）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取机器人图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 机器人图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置机器人图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 机器人图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取行业信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Industry 行业信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GetIndustryV1HomeMembersRespIndustry> GetIndustry() const;

                    /**
                     * 设置行业信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _industry 行业信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndustry(const std::vector<GetIndustryV1HomeMembersRespIndustry>& _industry);

                    /**
                     * 判断参数 Industry 是否已赋值
                     * @return Industry 是否已赋值
                     * 
                     */
                    bool IndustryHasBeenSet() const;

                    /**
                     * 获取操作员列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorList 操作员列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorList() const;

                    /**
                     * 设置操作员列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorList 操作员列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorList(const std::string& _operatorList);

                    /**
                     * 判断参数 OperatorList 是否已赋值
                     * @return OperatorList 是否已赋值
                     * 
                     */
                    bool OperatorListHasBeenSet() const;

                    /**
                     * 获取机器人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 机器人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置机器人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 机器人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateList 模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateList() const;

                    /**
                     * 设置模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateList 模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateList(const std::string& _templateList);

                    /**
                     * 判断参数 TemplateList 是否已赋值
                     * @return TemplateList 是否已赋值
                     * 
                     */
                    bool TemplateListHasBeenSet() const;

                private:

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_editTime;
                    bool m_editTimeHasBeenSet;

                    /**
                     * 机器人ID（AppKey信息）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * 机器人图标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 行业信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GetIndustryV1HomeMembersRespIndustry> m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * 操作员列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorList;
                    bool m_operatorListHasBeenSet;

                    /**
                     * 机器人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateList;
                    bool m_templateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPPRODUCT_H_
