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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_COVIDITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_COVIDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 核酸报告结论结构
                */
                class CovidItem : public AbstractModel
                {
                public:
                    CovidItem();
                    ~CovidItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采样时间
                     * @return SampleTime 采样时间
                     * 
                     */
                    BaseItem GetSampleTime() const;

                    /**
                     * 设置采样时间
                     * @param _sampleTime 采样时间
                     * 
                     */
                    void SetSampleTime(const BaseItem& _sampleTime);

                    /**
                     * 判断参数 SampleTime 是否已赋值
                     * @return SampleTime 是否已赋值
                     * 
                     */
                    bool SampleTimeHasBeenSet() const;

                    /**
                     * 获取检测时间
                     * @return TestTime 检测时间
                     * 
                     */
                    BaseItem GetTestTime() const;

                    /**
                     * 设置检测时间
                     * @param _testTime 检测时间
                     * 
                     */
                    void SetTestTime(const BaseItem& _testTime);

                    /**
                     * 判断参数 TestTime 是否已赋值
                     * @return TestTime 是否已赋值
                     * 
                     */
                    bool TestTimeHasBeenSet() const;

                    /**
                     * 获取检测机构
                     * @return TestOrganization 检测机构
                     * 
                     */
                    BaseItem GetTestOrganization() const;

                    /**
                     * 设置检测机构
                     * @param _testOrganization 检测机构
                     * 
                     */
                    void SetTestOrganization(const BaseItem& _testOrganization);

                    /**
                     * 判断参数 TestOrganization 是否已赋值
                     * @return TestOrganization 是否已赋值
                     * 
                     */
                    bool TestOrganizationHasBeenSet() const;

                    /**
                     * 获取检测结果
                     * @return TestResult 检测结果
                     * 
                     */
                    BaseItem GetTestResult() const;

                    /**
                     * 设置检测结果
                     * @param _testResult 检测结果
                     * 
                     */
                    void SetTestResult(const BaseItem& _testResult);

                    /**
                     * 判断参数 TestResult 是否已赋值
                     * @return TestResult 是否已赋值
                     * 
                     */
                    bool TestResultHasBeenSet() const;

                    /**
                     * 获取健康码颜色
                     * @return CodeColor 健康码颜色
                     * 
                     */
                    BaseItem GetCodeColor() const;

                    /**
                     * 设置健康码颜色
                     * @param _codeColor 健康码颜色
                     * 
                     */
                    void SetCodeColor(const BaseItem& _codeColor);

                    /**
                     * 判断参数 CodeColor 是否已赋值
                     * @return CodeColor 是否已赋值
                     * 
                     */
                    bool CodeColorHasBeenSet() const;

                private:

                    /**
                     * 采样时间
                     */
                    BaseItem m_sampleTime;
                    bool m_sampleTimeHasBeenSet;

                    /**
                     * 检测时间
                     */
                    BaseItem m_testTime;
                    bool m_testTimeHasBeenSet;

                    /**
                     * 检测机构
                     */
                    BaseItem m_testOrganization;
                    bool m_testOrganizationHasBeenSet;

                    /**
                     * 检测结果
                     */
                    BaseItem m_testResult;
                    bool m_testResultHasBeenSet;

                    /**
                     * 健康码颜色
                     */
                    BaseItem m_codeColor;
                    bool m_codeColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_COVIDITEM_H_
