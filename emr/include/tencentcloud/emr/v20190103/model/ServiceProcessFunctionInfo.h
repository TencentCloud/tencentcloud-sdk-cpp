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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEPROCESSFUNCTIONINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEPROCESSFUNCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 进程检测信息
                */
                class ServiceProcessFunctionInfo : public AbstractModel
                {
                public:
                    ServiceProcessFunctionInfo();
                    ~ServiceProcessFunctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探测告警级别
                     * @return DetectAlert 探测告警级别
                     * 
                     */
                    std::string GetDetectAlert() const;

                    /**
                     * 设置探测告警级别
                     * @param _detectAlert 探测告警级别
                     * 
                     */
                    void SetDetectAlert(const std::string& _detectAlert);

                    /**
                     * 判断参数 DetectAlert 是否已赋值
                     * @return DetectAlert 是否已赋值
                     * 
                     */
                    bool DetectAlertHasBeenSet() const;

                    /**
                     * 获取探测功能描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetetcFunctionKey 探测功能描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDetetcFunctionKey() const;

                    /**
                     * 设置探测功能描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detetcFunctionKey 探测功能描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDetetcFunctionKey(const std::string& _detetcFunctionKey);

                    /**
                     * 判断参数 DetetcFunctionKey 是否已赋值
                     * @return DetetcFunctionKey 是否已赋值
                     * @deprecated
                     */
                    bool DetetcFunctionKeyHasBeenSet() const;

                    /**
                     * 获取探测功能结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetetcFunctionValue 探测功能结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDetetcFunctionValue() const;

                    /**
                     * 设置探测功能结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detetcFunctionValue 探测功能结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDetetcFunctionValue(const std::string& _detetcFunctionValue);

                    /**
                     * 判断参数 DetetcFunctionValue 是否已赋值
                     * @return DetetcFunctionValue 是否已赋值
                     * @deprecated
                     */
                    bool DetetcFunctionValueHasBeenSet() const;

                    /**
                     * 获取探测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetetcTime 探测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDetetcTime() const;

                    /**
                     * 设置探测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detetcTime 探测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDetetcTime(const std::string& _detetcTime);

                    /**
                     * 判断参数 DetetcTime 是否已赋值
                     * @return DetetcTime 是否已赋值
                     * @deprecated
                     */
                    bool DetetcTimeHasBeenSet() const;

                    /**
                     * 获取探测功能描述
                     * @return DetectFunctionKey 探测功能描述
                     * 
                     */
                    std::string GetDetectFunctionKey() const;

                    /**
                     * 设置探测功能描述
                     * @param _detectFunctionKey 探测功能描述
                     * 
                     */
                    void SetDetectFunctionKey(const std::string& _detectFunctionKey);

                    /**
                     * 判断参数 DetectFunctionKey 是否已赋值
                     * @return DetectFunctionKey 是否已赋值
                     * 
                     */
                    bool DetectFunctionKeyHasBeenSet() const;

                    /**
                     * 获取探测功能结果
                     * @return DetectFunctionValue 探测功能结果
                     * 
                     */
                    std::string GetDetectFunctionValue() const;

                    /**
                     * 设置探测功能结果
                     * @param _detectFunctionValue 探测功能结果
                     * 
                     */
                    void SetDetectFunctionValue(const std::string& _detectFunctionValue);

                    /**
                     * 判断参数 DetectFunctionValue 是否已赋值
                     * @return DetectFunctionValue 是否已赋值
                     * 
                     */
                    bool DetectFunctionValueHasBeenSet() const;

                    /**
                     * 获取探测结果
                     * @return DetectTime 探测结果
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置探测结果
                     * @param _detectTime 探测结果
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                private:

                    /**
                     * 探测告警级别
                     */
                    std::string m_detectAlert;
                    bool m_detectAlertHasBeenSet;

                    /**
                     * 探测功能描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detetcFunctionKey;
                    bool m_detetcFunctionKeyHasBeenSet;

                    /**
                     * 探测功能结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detetcFunctionValue;
                    bool m_detetcFunctionValueHasBeenSet;

                    /**
                     * 探测结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detetcTime;
                    bool m_detetcTimeHasBeenSet;

                    /**
                     * 探测功能描述
                     */
                    std::string m_detectFunctionKey;
                    bool m_detectFunctionKeyHasBeenSet;

                    /**
                     * 探测功能结果
                     */
                    std::string m_detectFunctionValue;
                    bool m_detectFunctionValueHasBeenSet;

                    /**
                     * 探测结果
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEPROCESSFUNCTIONINFO_H_
