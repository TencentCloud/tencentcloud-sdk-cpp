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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SWITCHERPGMOUTPUTCONFIG_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SWITCHERPGMOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 导播台主监输出配置信息
                */
                class SwitcherPgmOutputConfig : public AbstractModel
                {
                public:
                    SwitcherPgmOutputConfig();
                    ~SwitcherPgmOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导播台输出模板 ID，可取值：
<li>10001：分辨率为1080 P；</li>
<li>10002：分辨率为720 P；</li>
<li>10003：分辨率为480 P。</li>
                     * @return TemplateId 导播台输出模板 ID，可取值：
<li>10001：分辨率为1080 P；</li>
<li>10002：分辨率为720 P；</li>
<li>10003：分辨率为480 P。</li>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置导播台输出模板 ID，可取值：
<li>10001：分辨率为1080 P；</li>
<li>10002：分辨率为720 P；</li>
<li>10003：分辨率为480 P。</li>
                     * @param _templateId 导播台输出模板 ID，可取值：
<li>10001：分辨率为1080 P；</li>
<li>10002：分辨率为720 P；</li>
<li>10003：分辨率为480 P。</li>
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取导播台输出宽，单位：像素。
                     * @return Width 导播台输出宽，单位：像素。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置导播台输出宽，单位：像素。
                     * @param _width 导播台输出宽，单位：像素。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取导播台输出高，单位：像素。
                     * @return Height 导播台输出高，单位：像素。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置导播台输出高，单位：像素。
                     * @param _height 导播台输出高，单位：像素。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取导播台输出帧率，单位：帧/秒
                     * @return Fps 导播台输出帧率，单位：帧/秒
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置导播台输出帧率，单位：帧/秒
                     * @param _fps 导播台输出帧率，单位：帧/秒
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取导播台输出码率， 单位：bit/s。
                     * @return BitRate 导播台输出码率， 单位：bit/s。
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置导播台输出码率， 单位：bit/s。
                     * @param _bitRate 导播台输出码率， 单位：bit/s。
                     * 
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                private:

                    /**
                     * 导播台输出模板 ID，可取值：
<li>10001：分辨率为1080 P；</li>
<li>10002：分辨率为720 P；</li>
<li>10003：分辨率为480 P。</li>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 导播台输出宽，单位：像素。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 导播台输出高，单位：像素。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 导播台输出帧率，单位：帧/秒
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 导播台输出码率， 单位：bit/s。
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SWITCHERPGMOUTPUTCONFIG_H_
