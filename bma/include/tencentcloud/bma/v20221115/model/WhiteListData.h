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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_WHITELISTDATA_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_WHITELISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * 白名单数据
                */
                class WhiteListData : public AbstractModel
                {
                public:
                    WhiteListData();
                    ~WhiteListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhiteListId 白名单id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWhiteListId() const;

                    /**
                     * 设置白名单id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _whiteListId 白名单id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWhiteListId(const int64_t& _whiteListId);

                    /**
                     * 判断参数 WhiteListId 是否已赋值
                     * @return WhiteListId 是否已赋值
                     * 
                     */
                    bool WhiteListIdHasBeenSet() const;

                    /**
                     * 获取企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyId 企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyId 企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取资产类型：0-网站 1-app 2-公众号 3-小程序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetsType 资产类型：0-网站 1-app 2-公众号 3-小程序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetsType() const;

                    /**
                     * 设置资产类型：0-网站 1-app 2-公众号 3-小程序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetsType 资产类型：0-网站 1-app 2-公众号 3-小程序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetsType(const int64_t& _assetsType);

                    /**
                     * 判断参数 AssetsType 是否已赋值
                     * @return AssetsType 是否已赋值
                     * 
                     */
                    bool AssetsTypeHasBeenSet() const;

                    /**
                     * 获取白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhiteList 白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWhiteList() const;

                    /**
                     * 设置白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _whiteList 白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWhiteList(const std::string& _whiteList);

                    /**
                     * 判断参数 WhiteList 是否已赋值
                     * @return WhiteList 是否已赋值
                     * 
                     */
                    bool WhiteListHasBeenSet() const;

                    /**
                     * 获取白名单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 白名单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置白名单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 白名单备注
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
                     * 获取新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * 白名单id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_whiteListId;
                    bool m_whiteListIdHasBeenSet;

                    /**
                     * 企业id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 资产类型：0-网站 1-app 2-公众号 3-小程序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetsType;
                    bool m_assetsTypeHasBeenSet;

                    /**
                     * 白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_whiteList;
                    bool m_whiteListHasBeenSet;

                    /**
                     * 白名单备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_WHITELISTDATA_H_
