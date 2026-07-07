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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERRESOURCEPACKAGEDEDUCTION_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERRESOURCEPACKAGEDEDUCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由资源包抵扣信息
                */
                class ModelRouterResourcePackageDeduction : public AbstractModel
                {
                public:
                    ModelRouterResourcePackageDeduction();
                    ~ModelRouterResourcePackageDeduction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实际抵扣量</p>
                     * @return ActualDosage <p>实际抵扣量</p>
                     * 
                     */
                    std::string GetActualDosage() const;

                    /**
                     * 设置<p>实际抵扣量</p>
                     * @param _actualDosage <p>实际抵扣量</p>
                     * 
                     */
                    void SetActualDosage(const std::string& _actualDosage);

                    /**
                     * 判断参数 ActualDosage 是否已赋值
                     * @return ActualDosage 是否已赋值
                     * 
                     */
                    bool ActualDosageHasBeenSet() const;

                    /**
                     * 获取<p>抵扣后包剩余量</p>
                     * @return AfterDeductionRemain <p>抵扣后包剩余量</p>
                     * 
                     */
                    std::string GetAfterDeductionRemain() const;

                    /**
                     * 设置<p>抵扣后包剩余量</p>
                     * @param _afterDeductionRemain <p>抵扣后包剩余量</p>
                     * 
                     */
                    void SetAfterDeductionRemain(const std::string& _afterDeductionRemain);

                    /**
                     * 判断参数 AfterDeductionRemain 是否已赋值
                     * @return AfterDeductionRemain 是否已赋值
                     * 
                     */
                    bool AfterDeductionRemainHasBeenSet() const;

                    /**
                     * 获取<p>抵扣前包剩余量</p>
                     * @return BeforeDeductionRemain <p>抵扣前包剩余量</p>
                     * 
                     */
                    std::string GetBeforeDeductionRemain() const;

                    /**
                     * 设置<p>抵扣前包剩余量</p>
                     * @param _beforeDeductionRemain <p>抵扣前包剩余量</p>
                     * 
                     */
                    void SetBeforeDeductionRemain(const std::string& _beforeDeductionRemain);

                    /**
                     * 判断参数 BeforeDeductionRemain 是否已赋值
                     * @return BeforeDeductionRemain 是否已赋值
                     * 
                     */
                    bool BeforeDeductionRemainHasBeenSet() const;

                    /**
                     * 获取<p>抵扣时间</p>
                     * @return DeductionTime <p>抵扣时间</p>
                     * 
                     */
                    std::string GetDeductionTime() const;

                    /**
                     * 设置<p>抵扣时间</p>
                     * @param _deductionTime <p>抵扣时间</p>
                     * 
                     */
                    void SetDeductionTime(const std::string& _deductionTime);

                    /**
                     * 判断参数 DeductionTime 是否已赋值
                     * @return DeductionTime 是否已赋值
                     * 
                     */
                    bool DeductionTimeHasBeenSet() const;

                    /**
                     * 获取<p>原始用量</p>
                     * @return Dosage <p>原始用量</p>
                     * 
                     */
                    std::string GetDosage() const;

                    /**
                     * 设置<p>原始用量</p>
                     * @param _dosage <p>原始用量</p>
                     * 
                     */
                    void SetDosage(const std::string& _dosage);

                    /**
                     * 判断参数 Dosage 是否已赋值
                     * @return Dosage 是否已赋值
                     * 
                     */
                    bool DosageHasBeenSet() const;

                    /**
                     * 获取<p>用量结束时间</p>
                     * @return EndTime <p>用量结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>用量结束时间</p>
                     * @param _endTime <p>用量结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>产生用量的模型路由实例Id</p>
                     * @return ModelRouterId <p>产生用量的模型路由实例Id</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>产生用量的模型路由实例Id</p>
                     * @param _modelRouterId <p>产生用量的模型路由实例Id</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包Id</p>
                     * @return ModelRouterResourcePackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    std::string GetModelRouterResourcePackageId() const;

                    /**
                     * 设置<p>模型路由资源包Id</p>
                     * @param _modelRouterResourcePackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    void SetModelRouterResourcePackageId(const std::string& _modelRouterResourcePackageId);

                    /**
                     * 判断参数 ModelRouterResourcePackageId 是否已赋值
                     * @return ModelRouterResourcePackageId 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageIdHasBeenSet() const;

                    /**
                     * 获取<p>用量开始时间</p>
                     * @return StartTime <p>用量开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>用量开始时间</p>
                     * @param _startTime <p>用量开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实际抵扣量</p>
                     */
                    std::string m_actualDosage;
                    bool m_actualDosageHasBeenSet;

                    /**
                     * <p>抵扣后包剩余量</p>
                     */
                    std::string m_afterDeductionRemain;
                    bool m_afterDeductionRemainHasBeenSet;

                    /**
                     * <p>抵扣前包剩余量</p>
                     */
                    std::string m_beforeDeductionRemain;
                    bool m_beforeDeductionRemainHasBeenSet;

                    /**
                     * <p>抵扣时间</p>
                     */
                    std::string m_deductionTime;
                    bool m_deductionTimeHasBeenSet;

                    /**
                     * <p>原始用量</p>
                     */
                    std::string m_dosage;
                    bool m_dosageHasBeenSet;

                    /**
                     * <p>用量结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>产生用量的模型路由实例Id</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>模型路由资源包Id</p>
                     */
                    std::string m_modelRouterResourcePackageId;
                    bool m_modelRouterResourcePackageIdHasBeenSet;

                    /**
                     * <p>用量开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERRESOURCEPACKAGEDEDUCTION_H_
