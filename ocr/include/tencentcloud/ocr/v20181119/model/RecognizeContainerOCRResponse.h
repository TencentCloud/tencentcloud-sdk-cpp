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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZECONTAINEROCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZECONTAINEROCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeContainerOCR返回参数结构体
                */
                class RecognizeContainerOCRResponse : public AbstractModel
                {
                public:
                    RecognizeContainerOCRResponse();
                    ~RecognizeContainerOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集装箱箱号
                     * @return ContainerId 集装箱箱号
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取集装箱类型
                     * @return ContainerType 集装箱类型
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 判断参数 ContainerType 是否已赋值
                     * @return ContainerType 是否已赋值
                     * 
                     */
                    bool ContainerTypeHasBeenSet() const;

                    /**
                     * 获取集装箱总重量，单位：千克（KG）
                     * @return GrossKG 集装箱总重量，单位：千克（KG）
                     * 
                     */
                    std::string GetGrossKG() const;

                    /**
                     * 判断参数 GrossKG 是否已赋值
                     * @return GrossKG 是否已赋值
                     * 
                     */
                    bool GrossKGHasBeenSet() const;

                    /**
                     * 获取集装箱总重量，单位：磅（LB）
                     * @return GrossLB 集装箱总重量，单位：磅（LB）
                     * 
                     */
                    std::string GetGrossLB() const;

                    /**
                     * 判断参数 GrossLB 是否已赋值
                     * @return GrossLB 是否已赋值
                     * 
                     */
                    bool GrossLBHasBeenSet() const;

                    /**
                     * 获取集装箱有效承重，单位：千克（KG）
                     * @return PayloadKG 集装箱有效承重，单位：千克（KG）
                     * 
                     */
                    std::string GetPayloadKG() const;

                    /**
                     * 判断参数 PayloadKG 是否已赋值
                     * @return PayloadKG 是否已赋值
                     * 
                     */
                    bool PayloadKGHasBeenSet() const;

                    /**
                     * 获取集装箱有效承重，单位：磅（LB）
                     * @return PayloadLB 集装箱有效承重，单位：磅（LB）
                     * 
                     */
                    std::string GetPayloadLB() const;

                    /**
                     * 判断参数 PayloadLB 是否已赋值
                     * @return PayloadLB 是否已赋值
                     * 
                     */
                    bool PayloadLBHasBeenSet() const;

                    /**
                     * 获取集装箱容量，单位：立方米
                     * @return CapacityM3 集装箱容量，单位：立方米
                     * 
                     */
                    std::string GetCapacityM3() const;

                    /**
                     * 判断参数 CapacityM3 是否已赋值
                     * @return CapacityM3 是否已赋值
                     * 
                     */
                    bool CapacityM3HasBeenSet() const;

                    /**
                     * 获取集装箱容量，单位：立英尺
                     * @return CapacityFT3 集装箱容量，单位：立英尺
                     * 
                     */
                    std::string GetCapacityFT3() const;

                    /**
                     * 判断参数 CapacityFT3 是否已赋值
                     * @return CapacityFT3 是否已赋值
                     * 
                     */
                    bool CapacityFT3HasBeenSet() const;

                    /**
                     * 获取告警码
-9926	集装箱箱号不完整或者不清晰
-9927	集装箱类型不完整或者不清晰
                     * @return Warn 告警码
-9926	集装箱箱号不完整或者不清晰
-9927	集装箱类型不完整或者不清晰
                     * 
                     */
                    std::vector<int64_t> GetWarn() const;

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     * 
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取集装箱自身重量，单位：千克（KG）
                     * @return TareKG 集装箱自身重量，单位：千克（KG）
                     * 
                     */
                    std::string GetTareKG() const;

                    /**
                     * 判断参数 TareKG 是否已赋值
                     * @return TareKG 是否已赋值
                     * 
                     */
                    bool TareKGHasBeenSet() const;

                    /**
                     * 获取集装箱自身重量，单位：磅（LB）
                     * @return TareLB 集装箱自身重量，单位：磅（LB）
                     * 
                     */
                    std::string GetTareLB() const;

                    /**
                     * 判断参数 TareLB 是否已赋值
                     * @return TareLB 是否已赋值
                     * 
                     */
                    bool TareLBHasBeenSet() const;

                private:

                    /**
                     * 集装箱箱号
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 集装箱类型
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * 集装箱总重量，单位：千克（KG）
                     */
                    std::string m_grossKG;
                    bool m_grossKGHasBeenSet;

                    /**
                     * 集装箱总重量，单位：磅（LB）
                     */
                    std::string m_grossLB;
                    bool m_grossLBHasBeenSet;

                    /**
                     * 集装箱有效承重，单位：千克（KG）
                     */
                    std::string m_payloadKG;
                    bool m_payloadKGHasBeenSet;

                    /**
                     * 集装箱有效承重，单位：磅（LB）
                     */
                    std::string m_payloadLB;
                    bool m_payloadLBHasBeenSet;

                    /**
                     * 集装箱容量，单位：立方米
                     */
                    std::string m_capacityM3;
                    bool m_capacityM3HasBeenSet;

                    /**
                     * 集装箱容量，单位：立英尺
                     */
                    std::string m_capacityFT3;
                    bool m_capacityFT3HasBeenSet;

                    /**
                     * 告警码
-9926	集装箱箱号不完整或者不清晰
-9927	集装箱类型不完整或者不清晰
                     */
                    std::vector<int64_t> m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * 集装箱自身重量，单位：千克（KG）
                     */
                    std::string m_tareKG;
                    bool m_tareKGHasBeenSet;

                    /**
                     * 集装箱自身重量，单位：磅（LB）
                     */
                    std::string m_tareLB;
                    bool m_tareLBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZECONTAINEROCRRESPONSE_H_
