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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPATASKRESULTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPATASKRESULTREQUEST_H_

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
                * ModifyDSPATaskResult请求参数结构体
                */
                class ModifyDSPATaskResultRequest : public AbstractModel
                {
                public:
                    ModifyDSPATaskResultRequest();
                    ~ModifyDSPATaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
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
                     * 获取字段扫描结果ID
                     * @return FieldResultId 字段扫描结果ID
                     * 
                     */
                    int64_t GetFieldResultId() const;

                    /**
                     * 设置字段扫描结果ID
                     * @param _fieldResultId 字段扫描结果ID
                     * 
                     */
                    void SetFieldResultId(const int64_t& _fieldResultId);

                    /**
                     * 判断参数 FieldResultId 是否已赋值
                     * @return FieldResultId 是否已赋值
                     * 
                     */
                    bool FieldResultIdHasBeenSet() const;

                    /**
                     * 获取合规组ID
                     * @return ComplianceId 合规组ID
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceId 合规组ID
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取是否设置为非敏感字段
                     * @return IsSetNonSensitiveField 是否设置为非敏感字段
                     * 
                     */
                    bool GetIsSetNonSensitiveField() const;

                    /**
                     * 设置是否设置为非敏感字段
                     * @param _isSetNonSensitiveField 是否设置为非敏感字段
                     * 
                     */
                    void SetIsSetNonSensitiveField(const bool& _isSetNonSensitiveField);

                    /**
                     * 判断参数 IsSetNonSensitiveField 是否已赋值
                     * @return IsSetNonSensitiveField 是否已赋值
                     * 
                     */
                    bool IsSetNonSensitiveFieldHasBeenSet() const;

                    /**
                     * 获取调整后新的规则ID
                     * @return DestRuleId 调整后新的规则ID
                     * 
                     */
                    int64_t GetDestRuleId() const;

                    /**
                     * 设置调整后新的规则ID
                     * @param _destRuleId 调整后新的规则ID
                     * 
                     */
                    void SetDestRuleId(const int64_t& _destRuleId);

                    /**
                     * 判断参数 DestRuleId 是否已赋值
                     * @return DestRuleId 是否已赋值
                     * 
                     */
                    bool DestRuleIdHasBeenSet() const;

                    /**
                     * 获取调整后新的分类ID
                     * @return DestCategoryId 调整后新的分类ID
                     * 
                     */
                    int64_t GetDestCategoryId() const;

                    /**
                     * 设置调整后新的分类ID
                     * @param _destCategoryId 调整后新的分类ID
                     * 
                     */
                    void SetDestCategoryId(const int64_t& _destCategoryId);

                    /**
                     * 判断参数 DestCategoryId 是否已赋值
                     * @return DestCategoryId 是否已赋值
                     * 
                     */
                    bool DestCategoryIdHasBeenSet() const;

                    /**
                     * 获取调整后新的分级ID
                     * @return DestLevelId 调整后新的分级ID
                     * 
                     */
                    int64_t GetDestLevelId() const;

                    /**
                     * 设置调整后新的分级ID
                     * @param _destLevelId 调整后新的分级ID
                     * 
                     */
                    void SetDestLevelId(const int64_t& _destLevelId);

                    /**
                     * 判断参数 DestLevelId 是否已赋值
                     * @return DestLevelId 是否已赋值
                     * 
                     */
                    bool DestLevelIdHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 字段扫描结果ID
                     */
                    int64_t m_fieldResultId;
                    bool m_fieldResultIdHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 是否设置为非敏感字段
                     */
                    bool m_isSetNonSensitiveField;
                    bool m_isSetNonSensitiveFieldHasBeenSet;

                    /**
                     * 调整后新的规则ID
                     */
                    int64_t m_destRuleId;
                    bool m_destRuleIdHasBeenSet;

                    /**
                     * 调整后新的分类ID
                     */
                    int64_t m_destCategoryId;
                    bool m_destCategoryIdHasBeenSet;

                    /**
                     * 调整后新的分级ID
                     */
                    int64_t m_destLevelId;
                    bool m_destLevelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPATASKRESULTREQUEST_H_
