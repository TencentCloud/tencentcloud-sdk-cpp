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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATION_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 自定义规则评估结果
                */
                class Evaluation : public AbstractModel
                {
                public:
                    Evaluation();
                    ~Evaluation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已评估资源ID。长度为0~256个字符
                     * @return ComplianceResourceId 已评估资源ID。长度为0~256个字符
                     * 
                     */
                    std::string GetComplianceResourceId() const;

                    /**
                     * 设置已评估资源ID。长度为0~256个字符
                     * @param _complianceResourceId 已评估资源ID。长度为0~256个字符
                     * 
                     */
                    void SetComplianceResourceId(const std::string& _complianceResourceId);

                    /**
                     * 判断参数 ComplianceResourceId 是否已赋值
                     * @return ComplianceResourceId 是否已赋值
                     * 
                     */
                    bool ComplianceResourceIdHasBeenSet() const;

                    /**
                     * 获取已评估资源类型。
支持:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * @return ComplianceResourceType 已评估资源类型。
支持:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * 
                     */
                    std::string GetComplianceResourceType() const;

                    /**
                     * 设置已评估资源类型。
支持:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * @param _complianceResourceType 已评估资源类型。
支持:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * 
                     */
                    void SetComplianceResourceType(const std::string& _complianceResourceType);

                    /**
                     * 判断参数 ComplianceResourceType 是否已赋值
                     * @return ComplianceResourceType 是否已赋值
                     * 
                     */
                    bool ComplianceResourceTypeHasBeenSet() const;

                    /**
                     * 获取已评估资源地域。
长度为0~32个字符
                     * @return ComplianceRegion 已评估资源地域。
长度为0~32个字符
                     * 
                     */
                    std::string GetComplianceRegion() const;

                    /**
                     * 设置已评估资源地域。
长度为0~32个字符
                     * @param _complianceRegion 已评估资源地域。
长度为0~32个字符
                     * 
                     */
                    void SetComplianceRegion(const std::string& _complianceRegion);

                    /**
                     * 判断参数 ComplianceRegion 是否已赋值
                     * @return ComplianceRegion 是否已赋值
                     * 
                     */
                    bool ComplianceRegionHasBeenSet() const;

                    /**
                     * 获取合规类型。取值：
COMPLIANT：合规、
NON_COMPLIANT：不合规
                     * @return ComplianceType 合规类型。取值：
COMPLIANT：合规、
NON_COMPLIANT：不合规
                     * 
                     */
                    std::string GetComplianceType() const;

                    /**
                     * 设置合规类型。取值：
COMPLIANT：合规、
NON_COMPLIANT：不合规
                     * @param _complianceType 合规类型。取值：
COMPLIANT：合规、
NON_COMPLIANT：不合规
                     * 
                     */
                    void SetComplianceType(const std::string& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                    /**
                     * 获取不合规资源的补充信息。
                     * @return Annotation 不合规资源的补充信息。
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置不合规资源的补充信息。
                     * @param _annotation 不合规资源的补充信息。
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                private:

                    /**
                     * 已评估资源ID。长度为0~256个字符
                     */
                    std::string m_complianceResourceId;
                    bool m_complianceResourceIdHasBeenSet;

                    /**
                     * 已评估资源类型。
支持:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     */
                    std::string m_complianceResourceType;
                    bool m_complianceResourceTypeHasBeenSet;

                    /**
                     * 已评估资源地域。
长度为0~32个字符
                     */
                    std::string m_complianceRegion;
                    bool m_complianceRegionHasBeenSet;

                    /**
                     * 合规类型。取值：
COMPLIANT：合规、
NON_COMPLIANT：不合规
                     */
                    std::string m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                    /**
                     * 不合规资源的补充信息。
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATION_H_
