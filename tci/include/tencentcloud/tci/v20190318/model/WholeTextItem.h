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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_WHOLETEXTITEM_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_WHOLETEXTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/TextItem.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 含有语速的句子信息
                */
                class WholeTextItem : public AbstractModel
                {
                public:
                    WholeTextItem();
                    ~WholeTextItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前句子的信息
                     * @return TextItem 当前句子的信息
                     * 
                     */
                    TextItem GetTextItem() const;

                    /**
                     * 设置当前句子的信息
                     * @param _textItem 当前句子的信息
                     * 
                     */
                    void SetTextItem(const TextItem& _textItem);

                    /**
                     * 判断参数 TextItem 是否已赋值
                     * @return TextItem 是否已赋值
                     * 
                     */
                    bool TextItemHasBeenSet() const;

                    /**
                     * 获取Vad的平均音量
                     * @return AvgVolume Vad的平均音量
                     * 
                     */
                    double GetAvgVolume() const;

                    /**
                     * 设置Vad的平均音量
                     * @param _avgVolume Vad的平均音量
                     * 
                     */
                    void SetAvgVolume(const double& _avgVolume);

                    /**
                     * 判断参数 AvgVolume 是否已赋值
                     * @return AvgVolume 是否已赋值
                     * 
                     */
                    bool AvgVolumeHasBeenSet() const;

                    /**
                     * 获取Vad的最大音量
                     * @return MaxVolume Vad的最大音量
                     * 
                     */
                    double GetMaxVolume() const;

                    /**
                     * 设置Vad的最大音量
                     * @param _maxVolume Vad的最大音量
                     * 
                     */
                    void SetMaxVolume(const double& _maxVolume);

                    /**
                     * 判断参数 MaxVolume 是否已赋值
                     * @return MaxVolume 是否已赋值
                     * 
                     */
                    bool MaxVolumeHasBeenSet() const;

                    /**
                     * 获取Vad的最小音量
                     * @return MinVolume Vad的最小音量
                     * 
                     */
                    double GetMinVolume() const;

                    /**
                     * 设置Vad的最小音量
                     * @param _minVolume Vad的最小音量
                     * 
                     */
                    void SetMinVolume(const double& _minVolume);

                    /**
                     * 判断参数 MinVolume 是否已赋值
                     * @return MinVolume 是否已赋值
                     * 
                     */
                    bool MinVolumeHasBeenSet() const;

                    /**
                     * 获取当前句子的语速
                     * @return Speed 当前句子的语速
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置当前句子的语速
                     * @param _speed 当前句子的语速
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * 当前句子的信息
                     */
                    TextItem m_textItem;
                    bool m_textItemHasBeenSet;

                    /**
                     * Vad的平均音量
                     */
                    double m_avgVolume;
                    bool m_avgVolumeHasBeenSet;

                    /**
                     * Vad的最大音量
                     */
                    double m_maxVolume;
                    bool m_maxVolumeHasBeenSet;

                    /**
                     * Vad的最小音量
                     */
                    double m_minVolume;
                    bool m_minVolumeHasBeenSet;

                    /**
                     * 当前句子的语速
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_WHOLETEXTITEM_H_
