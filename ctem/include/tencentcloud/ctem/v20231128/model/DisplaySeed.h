/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSEED_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSEED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 种子详情
                */
                class DisplaySeed : public AbstractModel
                {
                public:
                    DisplaySeed();
                    ~DisplaySeed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
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
                     * 获取<p>企业ID</p>
                     * @return CustomerId <p>企业ID</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _customerId <p>企业ID</p>
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取<p>分类，包括：domain(主域名)、icon(图标)、ip(IP)、<br>keyword(关键词)、parent_company(母公司)、sub_domain(子域名)、title(标题)</p>
                     * @return Category <p>分类，包括：domain(主域名)、icon(图标)、ip(IP)、<br>keyword(关键词)、parent_company(母公司)、sub_domain(子域名)、title(标题)</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>分类，包括：domain(主域名)、icon(图标)、ip(IP)、<br>keyword(关键词)、parent_company(母公司)、sub_domain(子域名)、title(标题)</p>
                     * @param _category <p>分类，包括：domain(主域名)、icon(图标)、ip(IP)、<br>keyword(关键词)、parent_company(母公司)、sub_domain(子域名)、title(标题)</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>值</p>
                     * @return Value <p>值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>值</p>
                     * @param _value <p>值</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>md5值</p>
                     * @return Md5 <p>md5值</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>md5值</p>
                     * @param _md5 <p>md5值</p>
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取<p>来源</p>
                     * @return Source <p>来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>来源</p>
                     * @param _source <p>来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createAt <p>创建时间</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>是否可信</p>
                     * @return IsValid <p>是否可信</p>
                     * 
                     */
                    bool GetIsValid() const;

                    /**
                     * 设置<p>是否可信</p>
                     * @param _isValid <p>是否可信</p>
                     * 
                     */
                    void SetIsValid(const bool& _isValid);

                    /**
                     * 判断参数 IsValid 是否已赋值
                     * @return IsValid 是否已赋值
                     * 
                     */
                    bool IsValidHasBeenSet() const;

                    /**
                     * 获取<p>关键词用途，可多选：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号；不填=全部用途</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Purposes <p>关键词用途，可多选：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号；不填=全部用途</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPurposes() const;

                    /**
                     * 设置<p>关键词用途，可多选：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号；不填=全部用途</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _purposes <p>关键词用途，可多选：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号；不填=全部用途</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPurposes(const std::vector<std::string>& _purposes);

                    /**
                     * 判断参数 Purposes 是否已赋值
                     * @return Purposes 是否已赋值
                     * 
                     */
                    bool PurposesHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>企业ID</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * <p>分类，包括：domain(主域名)、icon(图标)、ip(IP)、<br>keyword(关键词)、parent_company(母公司)、sub_domain(子域名)、title(标题)</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>md5值</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>是否可信</p>
                     */
                    bool m_isValid;
                    bool m_isValidHasBeenSet;

                    /**
                     * <p>关键词用途，可多选：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号；不填=全部用途</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_purposes;
                    bool m_purposesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSEED_H_
