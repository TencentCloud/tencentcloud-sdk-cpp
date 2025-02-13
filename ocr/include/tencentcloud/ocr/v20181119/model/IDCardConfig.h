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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDCONFIG_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDCONFIG_H_

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
                * 身份证配置信息
                */
                class IDCardConfig : public AbstractModel
                {
                public:
                    IDCardConfig();
                    ~IDCardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取复印件告警，默认为false
                     * @return CopyWarn 复印件告警，默认为false
                     * 
                     */
                    bool GetCopyWarn() const;

                    /**
                     * 设置复印件告警，默认为false
                     * @param _copyWarn 复印件告警，默认为false
                     * 
                     */
                    void SetCopyWarn(const bool& _copyWarn);

                    /**
                     * 判断参数 CopyWarn 是否已赋值
                     * @return CopyWarn 是否已赋值
                     * 
                     */
                    bool CopyWarnHasBeenSet() const;

                    /**
                     * 获取边框和框内遮挡告警，默认为false
                     * @return BorderCheckWarn 边框和框内遮挡告警，默认为false
                     * 
                     */
                    bool GetBorderCheckWarn() const;

                    /**
                     * 设置边框和框内遮挡告警，默认为false
                     * @param _borderCheckWarn 边框和框内遮挡告警，默认为false
                     * 
                     */
                    void SetBorderCheckWarn(const bool& _borderCheckWarn);

                    /**
                     * 判断参数 BorderCheckWarn 是否已赋值
                     * @return BorderCheckWarn 是否已赋值
                     * 
                     */
                    bool BorderCheckWarnHasBeenSet() const;

                    /**
                     * 获取翻拍告警，默认为false
                     * @return ReshootWarn 翻拍告警，默认为false
                     * 
                     */
                    bool GetReshootWarn() const;

                    /**
                     * 设置翻拍告警，默认为false
                     * @param _reshootWarn 翻拍告警，默认为false
                     * 
                     */
                    void SetReshootWarn(const bool& _reshootWarn);

                    /**
                     * 判断参数 ReshootWarn 是否已赋值
                     * @return ReshootWarn 是否已赋值
                     * 
                     */
                    bool ReshootWarnHasBeenSet() const;

                    /**
                     * 获取疑似存在PS痕迹告警，默认为false
                     * @return DetectPsWarn 疑似存在PS痕迹告警，默认为false
                     * 
                     */
                    bool GetDetectPsWarn() const;

                    /**
                     * 设置疑似存在PS痕迹告警，默认为false
                     * @param _detectPsWarn 疑似存在PS痕迹告警，默认为false
                     * 
                     */
                    void SetDetectPsWarn(const bool& _detectPsWarn);

                    /**
                     * 判断参数 DetectPsWarn 是否已赋值
                     * @return DetectPsWarn 是否已赋值
                     * 
                     */
                    bool DetectPsWarnHasBeenSet() const;

                    /**
                     * 获取临时身份证告警，默认为false
                     * @return TempIdWarn 临时身份证告警，默认为false
                     * 
                     */
                    bool GetTempIdWarn() const;

                    /**
                     * 设置临时身份证告警，默认为false
                     * @param _tempIdWarn 临时身份证告警，默认为false
                     * 
                     */
                    void SetTempIdWarn(const bool& _tempIdWarn);

                    /**
                     * 判断参数 TempIdWarn 是否已赋值
                     * @return TempIdWarn 是否已赋值
                     * 
                     */
                    bool TempIdWarnHasBeenSet() const;

                    /**
                     * 获取身份证有效日期不合法告警，默认为false
                     * @return InvalidDateWarn 身份证有效日期不合法告警，默认为false
                     * 
                     */
                    bool GetInvalidDateWarn() const;

                    /**
                     * 设置身份证有效日期不合法告警，默认为false
                     * @param _invalidDateWarn 身份证有效日期不合法告警，默认为false
                     * 
                     */
                    void SetInvalidDateWarn(const bool& _invalidDateWarn);

                    /**
                     * 判断参数 InvalidDateWarn 是否已赋值
                     * @return InvalidDateWarn 是否已赋值
                     * 
                     */
                    bool InvalidDateWarnHasBeenSet() const;

                    /**
                     * 获取是否开启反光检测，默认为false
                     * @return ReflectWarn 是否开启反光检测，默认为false
                     * 
                     */
                    bool GetReflectWarn() const;

                    /**
                     * 设置是否开启反光检测，默认为false
                     * @param _reflectWarn 是否开启反光检测，默认为false
                     * 
                     */
                    void SetReflectWarn(const bool& _reflectWarn);

                    /**
                     * 判断参数 ReflectWarn 是否已赋值
                     * @return ReflectWarn 是否已赋值
                     * 
                     */
                    bool ReflectWarnHasBeenSet() const;

                    /**
                     * 获取是否开启头像剪切
                     * @return CropPortrait 是否开启头像剪切
                     * 
                     */
                    bool GetCropPortrait() const;

                    /**
                     * 设置是否开启头像剪切
                     * @param _cropPortrait 是否开启头像剪切
                     * 
                     */
                    void SetCropPortrait(const bool& _cropPortrait);

                    /**
                     * 判断参数 CropPortrait 是否已赋值
                     * @return CropPortrait 是否已赋值
                     * 
                     */
                    bool CropPortraitHasBeenSet() const;

                private:

                    /**
                     * 复印件告警，默认为false
                     */
                    bool m_copyWarn;
                    bool m_copyWarnHasBeenSet;

                    /**
                     * 边框和框内遮挡告警，默认为false
                     */
                    bool m_borderCheckWarn;
                    bool m_borderCheckWarnHasBeenSet;

                    /**
                     * 翻拍告警，默认为false
                     */
                    bool m_reshootWarn;
                    bool m_reshootWarnHasBeenSet;

                    /**
                     * 疑似存在PS痕迹告警，默认为false
                     */
                    bool m_detectPsWarn;
                    bool m_detectPsWarnHasBeenSet;

                    /**
                     * 临时身份证告警，默认为false
                     */
                    bool m_tempIdWarn;
                    bool m_tempIdWarnHasBeenSet;

                    /**
                     * 身份证有效日期不合法告警，默认为false
                     */
                    bool m_invalidDateWarn;
                    bool m_invalidDateWarnHasBeenSet;

                    /**
                     * 是否开启反光检测，默认为false
                     */
                    bool m_reflectWarn;
                    bool m_reflectWarnHasBeenSet;

                    /**
                     * 是否开启头像剪切
                     */
                    bool m_cropPortrait;
                    bool m_cropPortraitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDCONFIG_H_
