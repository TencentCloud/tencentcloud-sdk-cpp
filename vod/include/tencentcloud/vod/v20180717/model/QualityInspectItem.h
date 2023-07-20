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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测异常片段信息。
                */
                class QualityInspectItem : public AbstractModel
                {
                public:
                    QualityInspectItem();
                    ~QualityInspectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常片段起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 异常片段起始的偏移时间，单位：秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置异常片段起始的偏移时间，单位：秒。
                     * @param _startTimeOffset 异常片段起始的偏移时间，单位：秒。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取异常片段终止的偏移时间，单位：秒。
                     * @return EndTimeOffset 异常片段终止的偏移时间，单位：秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置异常片段终止的偏移时间，单位：秒。
                     * @param _endTimeOffset 异常片段终止的偏移时间，单位：秒。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取检测出异常的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>BlackWhiteEdge：黑白边；</li>
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * @return AreaCoordSet 检测出异常的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>BlackWhiteEdge：黑白边；</li>
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置检测出异常的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>BlackWhiteEdge：黑白边；</li>
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * @param _areaCoordSet 检测出异常的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>BlackWhiteEdge：黑白边；</li>
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取置信度，取值范围：[0, 100]。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * @return Confidence 置信度，取值范围：[0, 100]。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 设置置信度，取值范围：[0, 100]。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * @param _confidence 置信度，取值范围：[0, 100]。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     * 
                     */
                    void SetConfidence(const uint64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 异常片段起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 异常片段终止的偏移时间，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 检测出异常的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>BlackWhiteEdge：黑白边；</li>
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * 置信度，取值范围：[0, 100]。
<font color=red>注意：</font> 仅当 Type 取值为下列之一时，本字段取值有效：
<li>Mosaic：马赛克；</li>
<li>QRCode：二维码；</li>
<li>AppletCode：小程序码；</li>
<li>BarCode：条形码。</li>
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_
