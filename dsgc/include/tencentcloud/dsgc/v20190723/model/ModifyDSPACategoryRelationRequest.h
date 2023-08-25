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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACATEGORYRELATIONREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACATEGORYRELATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDSPACategoryRelation请求参数结构体
                */
                class ModifyDSPACategoryRelationRequest : public AbstractModel
                {
                public:
                    ModifyDSPACategoryRelationRequest();
                    ~ModifyDSPACategoryRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取当前分类id
                     * @return CategoryId 当前分类id
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置当前分类id
                     * @param _categoryId 当前分类id
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取合并到的分类id
                     * @return MergedCategoryId 合并到的分类id
                     * 
                     */
                    int64_t GetMergedCategoryId() const;

                    /**
                     * 设置合并到的分类id
                     * @param _mergedCategoryId 合并到的分类id
                     * 
                     */
                    void SetMergedCategoryId(const int64_t& _mergedCategoryId);

                    /**
                     * 判断参数 MergedCategoryId 是否已赋值
                     * @return MergedCategoryId 是否已赋值
                     * 
                     */
                    bool MergedCategoryIdHasBeenSet() const;

                    /**
                     * 获取合规组模板id
                     * @return ComplianceId 合规组模板id
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置合规组模板id
                     * @param _complianceId 合规组模板id
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 当前分类id
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 合并到的分类id
                     */
                    int64_t m_mergedCategoryId;
                    bool m_mergedCategoryIdHasBeenSet;

                    /**
                     * 合规组模板id
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACATEGORYRELATIONREQUEST_H_
