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

#ifndef TENCENTCLOUD_CII_V20201210_MODEL_CREATESTRUCTURETASKREQUEST_H_
#define TENCENTCLOUD_CII_V20201210_MODEL_CREATESTRUCTURETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20201210
        {
            namespace Model
            {
                /**
                * CreateStructureTask请求参数结构体
                */
                class CreateStructureTaskRequest : public AbstractModel
                {
                public:
                    CreateStructureTaskRequest();
                    ~CreateStructureTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取保单号
                     * @return PolicyId 保单号
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置保单号
                     * @param _policyId 保单号
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取客户号
                     * @return CustomerId 客户号
                     * 
                     */
                    std::string GetCustomerId() const;

                    /**
                     * 设置客户号
                     * @param _customerId 客户号
                     * 
                     */
                    void SetCustomerId(const std::string& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return CustomerName 客户姓名
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置客户姓名
                     * @param _customerName 客户姓名
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取文件类型，目前只支持体检报告类型，对应的值为：HealthReport
                     * @return TaskType 文件类型，目前只支持体检报告类型，对应的值为：HealthReport
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置文件类型，目前只支持体检报告类型，对应的值为：HealthReport
                     * @param _taskType 文件类型，目前只支持体检报告类型，对应的值为：HealthReport
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取报告年份
                     * @return Year 报告年份
                     * 
                     */
                    std::string GetYear() const;

                    /**
                     * 设置报告年份
                     * @param _year 报告年份
                     * 
                     */
                    void SetYear(const std::string& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     * @return FileList 报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     * 
                     */
                    std::vector<std::string> GetFileList() const;

                    /**
                     * 设置报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     * @param _fileList 报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     * 
                     */
                    void SetFileList(const std::vector<std::string>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                    /**
                     * 获取险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * @return InsuranceTypes 险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * 
                     */
                    std::vector<std::string> GetInsuranceTypes() const;

                    /**
                     * 设置险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * @param _insuranceTypes 险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * 
                     */
                    void SetInsuranceTypes(const std::vector<std::string>& _insuranceTypes);

                    /**
                     * 判断参数 InsuranceTypes 是否已赋值
                     * @return InsuranceTypes 是否已赋值
                     * 
                     */
                    bool InsuranceTypesHasBeenSet() const;

                    /**
                     * 获取报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     * @return ImageList 报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     * 
                     */
                    std::vector<std::string> GetImageList() const;

                    /**
                     * 设置报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     * @param _imageList 报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     * 
                     */
                    void SetImageList(const std::vector<std::string>& _imageList);

                    /**
                     * 判断参数 ImageList 是否已赋值
                     * @return ImageList 是否已赋值
                     * 
                     */
                    bool ImageListHasBeenSet() const;

                private:

                    /**
                     * 保单号
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 客户号
                     */
                    std::string m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 文件类型，目前只支持体检报告类型，对应的值为：HealthReport
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 报告年份
                     */
                    std::string m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * 报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     */
                    std::vector<std::string> m_fileList;
                    bool m_fileListHasBeenSet;

                    /**
                     * 险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     */
                    std::vector<std::string> m_insuranceTypes;
                    bool m_insuranceTypesHasBeenSet;

                    /**
                     * 报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     */
                    std::vector<std::string> m_imageList;
                    bool m_imageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20201210_MODEL_CREATESTRUCTURETASKREQUEST_H_
