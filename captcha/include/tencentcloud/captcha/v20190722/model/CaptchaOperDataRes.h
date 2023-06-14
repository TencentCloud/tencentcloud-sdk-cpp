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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATARES_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATARES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataLoadTimeUnit.h>
#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataInterceptUnit.h>
#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataTryTimesUnit.h>
#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataTryTimesDistributeUnit.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaOperData 接口 返回数据类型集合
                */
                class CaptchaOperDataRes : public AbstractModel
                {
                public:
                    CaptchaOperDataRes();
                    ~CaptchaOperDataRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取验证码加载耗时数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperDataLoadTimeUnitArray 验证码加载耗时数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CaptchaOperDataLoadTimeUnit> GetOperDataLoadTimeUnitArray() const;

                    /**
                     * 设置验证码加载耗时数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operDataLoadTimeUnitArray 验证码加载耗时数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperDataLoadTimeUnitArray(const std::vector<CaptchaOperDataLoadTimeUnit>& _operDataLoadTimeUnitArray);

                    /**
                     * 判断参数 OperDataLoadTimeUnitArray 是否已赋值
                     * @return OperDataLoadTimeUnitArray 是否已赋值
                     * 
                     */
                    bool OperDataLoadTimeUnitArrayHasBeenSet() const;

                    /**
                     * 获取验证码拦截情况数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperDataInterceptUnitArray 验证码拦截情况数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CaptchaOperDataInterceptUnit> GetOperDataInterceptUnitArray() const;

                    /**
                     * 设置验证码拦截情况数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operDataInterceptUnitArray 验证码拦截情况数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperDataInterceptUnitArray(const std::vector<CaptchaOperDataInterceptUnit>& _operDataInterceptUnitArray);

                    /**
                     * 判断参数 OperDataInterceptUnitArray 是否已赋值
                     * @return OperDataInterceptUnitArray 是否已赋值
                     * 
                     */
                    bool OperDataInterceptUnitArrayHasBeenSet() const;

                    /**
                     * 获取验证码尝试次数数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperDataTryTimesUnitArray 验证码尝试次数数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CaptchaOperDataTryTimesUnit> GetOperDataTryTimesUnitArray() const;

                    /**
                     * 设置验证码尝试次数数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operDataTryTimesUnitArray 验证码尝试次数数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperDataTryTimesUnitArray(const std::vector<CaptchaOperDataTryTimesUnit>& _operDataTryTimesUnitArray);

                    /**
                     * 判断参数 OperDataTryTimesUnitArray 是否已赋值
                     * @return OperDataTryTimesUnitArray 是否已赋值
                     * 
                     */
                    bool OperDataTryTimesUnitArrayHasBeenSet() const;

                    /**
                     * 获取验证码尝试次数分布数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperDataTryTimesDistributeUnitArray 验证码尝试次数分布数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CaptchaOperDataTryTimesDistributeUnit> GetOperDataTryTimesDistributeUnitArray() const;

                    /**
                     * 设置验证码尝试次数分布数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operDataTryTimesDistributeUnitArray 验证码尝试次数分布数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperDataTryTimesDistributeUnitArray(const std::vector<CaptchaOperDataTryTimesDistributeUnit>& _operDataTryTimesDistributeUnitArray);

                    /**
                     * 判断参数 OperDataTryTimesDistributeUnitArray 是否已赋值
                     * @return OperDataTryTimesDistributeUnitArray 是否已赋值
                     * 
                     */
                    bool OperDataTryTimesDistributeUnitArrayHasBeenSet() const;

                private:

                    /**
                     * 验证码加载耗时数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CaptchaOperDataLoadTimeUnit> m_operDataLoadTimeUnitArray;
                    bool m_operDataLoadTimeUnitArrayHasBeenSet;

                    /**
                     * 验证码拦截情况数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CaptchaOperDataInterceptUnit> m_operDataInterceptUnitArray;
                    bool m_operDataInterceptUnitArrayHasBeenSet;

                    /**
                     * 验证码尝试次数数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CaptchaOperDataTryTimesUnit> m_operDataTryTimesUnitArray;
                    bool m_operDataTryTimesUnitArrayHasBeenSet;

                    /**
                     * 验证码尝试次数分布数据返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CaptchaOperDataTryTimesDistributeUnit> m_operDataTryTimesDistributeUnitArray;
                    bool m_operDataTryTimesDistributeUnitArrayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATARES_H_
