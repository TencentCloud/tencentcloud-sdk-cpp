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
                     * 获取证件边缘是否完整
0：正常
1：边缘不完整
                     * @return BorderCheck 证件边缘是否完整
0：正常
1：边缘不完整
                     * 
                     */
                    int64_t GetBorderCheck() const;

                    /**
                     * 设置证件边缘是否完整
0：正常
1：边缘不完整
                     * @param _borderCheck 证件边缘是否完整
0：正常
1：边缘不完整
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
                     * 获取证件是否被遮挡
0：正常
1：有遮挡
                     * @return OcclusionCheck 证件是否被遮挡
0：正常
1：有遮挡
                     * 
                     */
                    int64_t GetOcclusionCheck() const;

                    /**
                     * 设置证件是否被遮挡
0：正常
1：有遮挡
                     * @param _occlusionCheck 证件是否被遮挡
0：正常
1：有遮挡
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
                     * 获取是否复印
0:正常
1:复印件
                     * @return CopyCheck 是否复印
0:正常
1:复印件
                     * 
                     */
                    int64_t GetCopyCheck() const;

                    /**
                     * 设置是否复印
0:正常
1:复印件
                     * @param _copyCheck 是否复印
0:正常
1:复印件
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
                     * 获取是否屏幕翻拍
0:正常
1:翻拍
                     * @return ReshootCheck 是否屏幕翻拍
0:正常
1:翻拍
                     * 
                     */
                    int64_t GetReshootCheck() const;

                    /**
                     * 设置是否屏幕翻拍
0:正常
1:翻拍
                     * @param _reshootCheck 是否屏幕翻拍
0:正常
1:翻拍
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
                     * 获取证件是否有PS
0：正常
1：有PS
                     * @return PSCheck 证件是否有PS
0：正常
1：有PS
                     * 
                     */
                    int64_t GetPSCheck() const;

                    /**
                     * 设置证件是否有PS
0：正常
1：有PS
                     * @param _pSCheck 证件是否有PS
0：正常
1：有PS
                     * 
                     */
                    void SetPSCheck(const int64_t& _pSCheck);

                    /**
                     * 判断参数 PSCheck 是否已赋值
                     * @return PSCheck 是否已赋值
                     * 
                     */
                    bool PSCheckHasBeenSet() const;

                private:

                    /**
                     * 证件边缘是否完整
0：正常
1：边缘不完整
                     */
                    int64_t m_borderCheck;
                    bool m_borderCheckHasBeenSet;

                    /**
                     * 证件是否被遮挡
0：正常
1：有遮挡
                     */
                    int64_t m_occlusionCheck;
                    bool m_occlusionCheckHasBeenSet;

                    /**
                     * 是否复印
0:正常
1:复印件
                     */
                    int64_t m_copyCheck;
                    bool m_copyCheckHasBeenSet;

                    /**
                     * 是否屏幕翻拍
0:正常
1:翻拍
                     */
                    int64_t m_reshootCheck;
                    bool m_reshootCheckHasBeenSet;

                    /**
                     * 证件是否有PS
0：正常
1：有PS
                     */
                    int64_t m_pSCheck;
                    bool m_pSCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CARDWARNINFO_H_
