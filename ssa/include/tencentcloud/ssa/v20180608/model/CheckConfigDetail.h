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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_CHECKCONFIGDETAIL_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_CHECKCONFIGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云安全配置检查项详情
                */
                class CheckConfigDetail : public AbstractModel
                {
                public:
                    CheckConfigDetail();
                    ~CheckConfigDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项Id
                     * @return Id 检查项Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项Id
                     * @param _id 检查项Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取检查项名称
                     * @return CheckName 检查项名称
                     * 
                     */
                    std::string GetCheckName() const;

                    /**
                     * 设置检查项名称
                     * @param _checkName 检查项名称
                     * 
                     */
                    void SetCheckName(const std::string& _checkName);

                    /**
                     * 判断参数 CheckName 是否已赋值
                     * @return CheckName 是否已赋值
                     * 
                     */
                    bool CheckNameHasBeenSet() const;

                    /**
                     * 获取检查项内容
                     * @return Content 检查项内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置检查项内容
                     * @param _content 检查项内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取检查项处置方案
                     * @return Method 检查项处置方案
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置检查项处置方案
                     * @param _method 检查项处置方案
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取检查项帮助文档
                     * @return Doc 检查项帮助文档
                     * 
                     */
                    std::string GetDoc() const;

                    /**
                     * 设置检查项帮助文档
                     * @param _doc 检查项帮助文档
                     * 
                     */
                    void SetDoc(const std::string& _doc);

                    /**
                     * 判断参数 Doc 是否已赋值
                     * @return Doc 是否已赋值
                     * 
                     */
                    bool DocHasBeenSet() const;

                    /**
                     * 获取未通过总数
                     * @return ErrorCount 未通过总数
                     * 
                     */
                    int64_t GetErrorCount() const;

                    /**
                     * 设置未通过总数
                     * @param _errorCount 未通过总数
                     * 
                     */
                    void SetErrorCount(const int64_t& _errorCount);

                    /**
                     * 判断参数 ErrorCount 是否已赋值
                     * @return ErrorCount 是否已赋值
                     * 
                     */
                    bool ErrorCountHasBeenSet() const;

                    /**
                     * 获取是否通过检查
                     * @return IsPass 是否通过检查
                     * 
                     */
                    int64_t GetIsPass() const;

                    /**
                     * 设置是否通过检查
                     * @param _isPass 是否通过检查
                     * 
                     */
                    void SetIsPass(const int64_t& _isPass);

                    /**
                     * 判断参数 IsPass 是否已赋值
                     * @return IsPass 是否已赋值
                     * 
                     */
                    bool IsPassHasBeenSet() const;

                    /**
                     * 获取通过检查项
                     * @return SafeCount 通过检查项
                     * 
                     */
                    int64_t GetSafeCount() const;

                    /**
                     * 设置通过检查项
                     * @param _safeCount 通过检查项
                     * 
                     */
                    void SetSafeCount(const int64_t& _safeCount);

                    /**
                     * 判断参数 SafeCount 是否已赋值
                     * @return SafeCount 是否已赋值
                     * 
                     */
                    bool SafeCountHasBeenSet() const;

                    /**
                     * 获取忽略检查项
                     * @return IgnoreCount 忽略检查项
                     * 
                     */
                    int64_t GetIgnoreCount() const;

                    /**
                     * 设置忽略检查项
                     * @param _ignoreCount 忽略检查项
                     * 
                     */
                    void SetIgnoreCount(const int64_t& _ignoreCount);

                    /**
                     * 判断参数 IgnoreCount 是否已赋值
                     * @return IgnoreCount 是否已赋值
                     * 
                     */
                    bool IgnoreCountHasBeenSet() const;

                    /**
                     * 获取风险检查项
                     * @return RiskCount 风险检查项
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置风险检查项
                     * @param _riskCount 风险检查项
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取检查项英文
                     * @return NameEn 检查项英文
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置检查项英文
                     * @param _nameEn 检查项英文
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
                     * 获取检查项类型
                     * @return AssetType 检查项类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置检查项类型
                     * @param _assetType 检查项类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取res_count
                     * @return ResCount res_count
                     * 
                     */
                    int64_t GetResCount() const;

                    /**
                     * 设置res_count
                     * @param _resCount res_count
                     * 
                     */
                    void SetResCount(const int64_t& _resCount);

                    /**
                     * 判断参数 ResCount 是否已赋值
                     * @return ResCount 是否已赋值
                     * 
                     */
                    bool ResCountHasBeenSet() const;

                    /**
                     * 获取是否忽略
                     * @return IsIgnore 是否忽略
                     * 
                     */
                    int64_t GetIsIgnore() const;

                    /**
                     * 设置是否忽略
                     * @param _isIgnore 是否忽略
                     * 
                     */
                    void SetIsIgnore(const int64_t& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                private:

                    /**
                     * 检查项Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 检查项名称
                     */
                    std::string m_checkName;
                    bool m_checkNameHasBeenSet;

                    /**
                     * 检查项内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 检查项处置方案
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 检查项帮助文档
                     */
                    std::string m_doc;
                    bool m_docHasBeenSet;

                    /**
                     * 未通过总数
                     */
                    int64_t m_errorCount;
                    bool m_errorCountHasBeenSet;

                    /**
                     * 是否通过检查
                     */
                    int64_t m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * 通过检查项
                     */
                    int64_t m_safeCount;
                    bool m_safeCountHasBeenSet;

                    /**
                     * 忽略检查项
                     */
                    int64_t m_ignoreCount;
                    bool m_ignoreCountHasBeenSet;

                    /**
                     * 风险检查项
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 检查项英文
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * 检查项类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * res_count
                     */
                    int64_t m_resCount;
                    bool m_resCountHasBeenSet;

                    /**
                     * 是否忽略
                     */
                    int64_t m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_CHECKCONFIGDETAIL_H_
