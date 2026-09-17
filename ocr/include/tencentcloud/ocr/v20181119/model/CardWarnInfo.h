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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CARDWARNINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CARDWARNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 卡证告警信息返回
                */
                class CardWarnInfo : public AbstractModel
                {
                public:
                    CardWarnInfo();
                    ~CardWarnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>证件边缘是否完整<br>0：正常<br>1：边缘不完整</p>
                     * @return BorderCheck <p>证件边缘是否完整<br>0：正常<br>1：边缘不完整</p>
                     * 
                     */
                    int64_t GetBorderCheck() const;

                    /**
                     * 设置<p>证件边缘是否完整<br>0：正常<br>1：边缘不完整</p>
                     * @param _borderCheck <p>证件边缘是否完整<br>0：正常<br>1：边缘不完整</p>
                     * 
                     */
                    void SetBorderCheck(const int64_t& _borderCheck);

                    /**
                     * 判断参数 BorderCheck 是否已赋值
                     * @return BorderCheck 是否已赋值
                     * 
                     */
                    bool BorderCheckHasBeenSet() const;

                    /**
                     * 获取<p>证件是否被遮挡<br>0：正常<br>1：有遮挡</p>
                     * @return OcclusionCheck <p>证件是否被遮挡<br>0：正常<br>1：有遮挡</p>
                     * 
                     */
                    int64_t GetOcclusionCheck() const;

                    /**
                     * 设置<p>证件是否被遮挡<br>0：正常<br>1：有遮挡</p>
                     * @param _occlusionCheck <p>证件是否被遮挡<br>0：正常<br>1：有遮挡</p>
                     * 
                     */
                    void SetOcclusionCheck(const int64_t& _occlusionCheck);

                    /**
                     * 判断参数 OcclusionCheck 是否已赋值
                     * @return OcclusionCheck 是否已赋值
                     * 
                     */
                    bool OcclusionCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否复印<br>0:正常<br>1:复印件</p>
                     * @return CopyCheck <p>是否复印<br>0:正常<br>1:复印件</p>
                     * 
                     */
                    int64_t GetCopyCheck() const;

                    /**
                     * 设置<p>是否复印<br>0:正常<br>1:复印件</p>
                     * @param _copyCheck <p>是否复印<br>0:正常<br>1:复印件</p>
                     * 
                     */
                    void SetCopyCheck(const int64_t& _copyCheck);

                    /**
                     * 判断参数 CopyCheck 是否已赋值
                     * @return CopyCheck 是否已赋值
                     * 
                     */
                    bool CopyCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否屏幕翻拍<br>0:正常<br>1:翻拍</p>
                     * @return ReshootCheck <p>是否屏幕翻拍<br>0:正常<br>1:翻拍</p>
                     * 
                     */
                    int64_t GetReshootCheck() const;

                    /**
                     * 设置<p>是否屏幕翻拍<br>0:正常<br>1:翻拍</p>
                     * @param _reshootCheck <p>是否屏幕翻拍<br>0:正常<br>1:翻拍</p>
                     * 
                     */
                    void SetReshootCheck(const int64_t& _reshootCheck);

                    /**
                     * 判断参数 ReshootCheck 是否已赋值
                     * @return ReshootCheck 是否已赋值
                     * 
                     */
                    bool ReshootCheckHasBeenSet() const;

                    /**
                     * 获取<p>证件是否有PS<br>0：正常<br>1：有PS</p>
                     * @return PSCheck <p>证件是否有PS<br>0：正常<br>1：有PS</p>
                     * 
                     */
                    int64_t GetPSCheck() const;

                    /**
                     * 设置<p>证件是否有PS<br>0：正常<br>1：有PS</p>
                     * @param _pSCheck <p>证件是否有PS<br>0：正常<br>1：有PS</p>
                     * 
                     */
                    void SetPSCheck(const int64_t& _pSCheck);

                    /**
                     * 判断参数 PSCheck 是否已赋值
                     * @return PSCheck 是否已赋值
                     * 
                     */
                    bool PSCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否模糊：<br>0:正常<br>1:模糊</p>
                     * @return BlurCheck <p>是否模糊：<br>0:正常<br>1:模糊</p>
                     * 
                     */
                    int64_t GetBlurCheck() const;

                    /**
                     * 设置<p>是否模糊：<br>0:正常<br>1:模糊</p>
                     * @param _blurCheck <p>是否模糊：<br>0:正常<br>1:模糊</p>
                     * 
                     */
                    void SetBlurCheck(const int64_t& _blurCheck);

                    /**
                     * 判断参数 BlurCheck 是否已赋值
                     * @return BlurCheck 是否已赋值
                     * 
                     */
                    bool BlurCheckHasBeenSet() const;

                    /**
                     * 获取<p>模糊分数， 范围：0.0-1.0，分数越高越模糊，建议阈值为0.5</p>
                     * @return BlurScore <p>模糊分数， 范围：0.0-1.0，分数越高越模糊，建议阈值为0.5</p>
                     * 
                     */
                    double GetBlurScore() const;

                    /**
                     * 设置<p>模糊分数， 范围：0.0-1.0，分数越高越模糊，建议阈值为0.5</p>
                     * @param _blurScore <p>模糊分数， 范围：0.0-1.0，分数越高越模糊，建议阈值为0.5</p>
                     * 
                     */
                    void SetBlurScore(const double& _blurScore);

                    /**
                     * 判断参数 BlurScore 是否已赋值
                     * @return BlurScore 是否已赋值
                     * 
                     */
                    bool BlurScoreHasBeenSet() const;

                    /**
                     * 获取<p>是否电子身份证<br>0：否<br>1：是电子身份证</p>
                     * @return ElectronCheck <p>是否电子身份证<br>0：否<br>1：是电子身份证</p>
                     * 
                     */
                    int64_t GetElectronCheck() const;

                    /**
                     * 设置<p>是否电子身份证<br>0：否<br>1：是电子身份证</p>
                     * @param _electronCheck <p>是否电子身份证<br>0：否<br>1：是电子身份证</p>
                     * 
                     */
                    void SetElectronCheck(const int64_t& _electronCheck);

                    /**
                     * 判断参数 ElectronCheck 是否已赋值
                     * @return ElectronCheck 是否已赋值
                     * 
                     */
                    bool ElectronCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否存在反光</p><p>枚举值：</p><ul><li>0： 正常</li><li>1： 反光</li></ul><p>默认值：0</p>
                     * @return ReflectCheck <p>是否存在反光</p><p>枚举值：</p><ul><li>0： 正常</li><li>1： 反光</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetReflectCheck() const;

                    /**
                     * 设置<p>是否存在反光</p><p>枚举值：</p><ul><li>0： 正常</li><li>1： 反光</li></ul><p>默认值：0</p>
                     * @param _reflectCheck <p>是否存在反光</p><p>枚举值：</p><ul><li>0： 正常</li><li>1： 反光</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetReflectCheck(const int64_t& _reflectCheck);

                    /**
                     * 判断参数 ReflectCheck 是否已赋值
                     * @return ReflectCheck 是否已赋值
                     * 
                     */
                    bool ReflectCheckHasBeenSet() const;

                private:

                    /**
                     * <p>证件边缘是否完整<br>0：正常<br>1：边缘不完整</p>
                     */
                    int64_t m_borderCheck;
                    bool m_borderCheckHasBeenSet;

                    /**
                     * <p>证件是否被遮挡<br>0：正常<br>1：有遮挡</p>
                     */
                    int64_t m_occlusionCheck;
                    bool m_occlusionCheckHasBeenSet;

                    /**
                     * <p>是否复印<br>0:正常<br>1:复印件</p>
                     */
                    int64_t m_copyCheck;
                    bool m_copyCheckHasBeenSet;

                    /**
                     * <p>是否屏幕翻拍<br>0:正常<br>1:翻拍</p>
                     */
                    int64_t m_reshootCheck;
                    bool m_reshootCheckHasBeenSet;

                    /**
                     * <p>证件是否有PS<br>0：正常<br>1：有PS</p>
                     */
                    int64_t m_pSCheck;
                    bool m_pSCheckHasBeenSet;

                    /**
                     * <p>是否模糊：<br>0:正常<br>1:模糊</p>
                     */
                    int64_t m_blurCheck;
                    bool m_blurCheckHasBeenSet;

                    /**
                     * <p>模糊分数， 范围：0.0-1.0，分数越高越模糊，建议阈值为0.5</p>
                     */
                    double m_blurScore;
                    bool m_blurScoreHasBeenSet;

                    /**
                     * <p>是否电子身份证<br>0：否<br>1：是电子身份证</p>
                     */
                    int64_t m_electronCheck;
                    bool m_electronCheckHasBeenSet;

                    /**
                     * <p>是否存在反光</p><p>枚举值：</p><ul><li>0： 正常</li><li>1： 反光</li></ul><p>默认值：0</p>
                     */
                    int64_t m_reflectCheck;
                    bool m_reflectCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CARDWARNINFO_H_
