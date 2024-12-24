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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_ABNORMALS_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_ABNORMALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 异常提醒
                */
                class Abnormals : public AbstractModel
                {
                public:
                    Abnormals();
                    ~Abnormals() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取异常原因 PatientInfo 病人信息缺失；OrderInfo 医嘱信息缺失； PrescriptionError 处方异常提醒
                     * @return AbnormalReason 异常原因 PatientInfo 病人信息缺失；OrderInfo 医嘱信息缺失； PrescriptionError 处方异常提醒
                     * 
                     */
                    std::string GetAbnormalReason() const;

                    /**
                     * 设置异常原因 PatientInfo 病人信息缺失；OrderInfo 医嘱信息缺失； PrescriptionError 处方异常提醒
                     * @param _abnormalReason 异常原因 PatientInfo 病人信息缺失；OrderInfo 医嘱信息缺失； PrescriptionError 处方异常提醒
                     * 
                     */
                    void SetAbnormalReason(const std::string& _abnormalReason);

                    /**
                     * 判断参数 AbnormalReason 是否已赋值
                     * @return AbnormalReason 是否已赋值
                     * 
                     */
                    bool AbnormalReasonHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 异常原因 PatientInfo 病人信息缺失；OrderInfo 医嘱信息缺失； PrescriptionError 处方异常提醒
                     */
                    std::string m_abnormalReason;
                    bool m_abnormalReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_ABNORMALS_H_
