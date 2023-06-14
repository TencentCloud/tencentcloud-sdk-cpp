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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 质检异常项。
                */
                class QualityControlResult : public AbstractModel
                {
                public:
                    QualityControlResult();
                    ~QualityControlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常类型，取值范围：
Jitter：抖动，
Blur：模糊，
LowLighting：低光照，
HighLighting：过曝，
CrashScreen：花屏，
BlackWhiteEdge：黑白边，
SolidColorScreen：纯色屏，
Noise：噪点，
Mosaic：马赛克，
QRCode：二维码，
AppletCode：小程序码，
BarCode：条形码，
LowVoice：低音，
HighVoice：爆音，
NoVoice：静音，
LowEvaluation：无参考打分低于阈值。
                     * @return Type 异常类型，取值范围：
Jitter：抖动，
Blur：模糊，
LowLighting：低光照，
HighLighting：过曝，
CrashScreen：花屏，
BlackWhiteEdge：黑白边，
SolidColorScreen：纯色屏，
Noise：噪点，
Mosaic：马赛克，
QRCode：二维码，
AppletCode：小程序码，
BarCode：条形码，
LowVoice：低音，
HighVoice：爆音，
NoVoice：静音，
LowEvaluation：无参考打分低于阈值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置异常类型，取值范围：
Jitter：抖动，
Blur：模糊，
LowLighting：低光照，
HighLighting：过曝，
CrashScreen：花屏，
BlackWhiteEdge：黑白边，
SolidColorScreen：纯色屏，
Noise：噪点，
Mosaic：马赛克，
QRCode：二维码，
AppletCode：小程序码，
BarCode：条形码，
LowVoice：低音，
HighVoice：爆音，
NoVoice：静音，
LowEvaluation：无参考打分低于阈值。
                     * @param _type 异常类型，取值范围：
Jitter：抖动，
Blur：模糊，
LowLighting：低光照，
HighLighting：过曝，
CrashScreen：花屏，
BlackWhiteEdge：黑白边，
SolidColorScreen：纯色屏，
Noise：噪点，
Mosaic：马赛克，
QRCode：二维码，
AppletCode：小程序码，
BarCode：条形码，
LowVoice：低音，
HighVoice：爆音，
NoVoice：静音，
LowEvaluation：无参考打分低于阈值。
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
                     * 获取质检结果项。
                     * @return QualityControlItems 质检结果项。
                     * 
                     */
                    std::vector<QualityControlItem> GetQualityControlItems() const;

                    /**
                     * 设置质检结果项。
                     * @param _qualityControlItems 质检结果项。
                     * 
                     */
                    void SetQualityControlItems(const std::vector<QualityControlItem>& _qualityControlItems);

                    /**
                     * 判断参数 QualityControlItems 是否已赋值
                     * @return QualityControlItems 是否已赋值
                     * 
                     */
                    bool QualityControlItemsHasBeenSet() const;

                private:

                    /**
                     * 异常类型，取值范围：
Jitter：抖动，
Blur：模糊，
LowLighting：低光照，
HighLighting：过曝，
CrashScreen：花屏，
BlackWhiteEdge：黑白边，
SolidColorScreen：纯色屏，
Noise：噪点，
Mosaic：马赛克，
QRCode：二维码，
AppletCode：小程序码，
BarCode：条形码，
LowVoice：低音，
HighVoice：爆音，
NoVoice：静音，
LowEvaluation：无参考打分低于阈值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 质检结果项。
                     */
                    std::vector<QualityControlItem> m_qualityControlItems;
                    bool m_qualityControlItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
