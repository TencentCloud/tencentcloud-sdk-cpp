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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEDATA_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/ImageHotDetect.h>
#include <tencentcloud/cms/v20190321/model/CodeDetect.h>
#include <tencentcloud/cms/v20190321/model/ImagePolityDetect.h>
#include <tencentcloud/cms/v20190321/model/ImageIllegalDetect.h>
#include <tencentcloud/cms/v20190321/model/ImagePornDetect.h>
#include <tencentcloud/cms/v20190321/model/ImageTerrorDetect.h>
#include <tencentcloud/cms/v20190321/model/OCRDetect.h>
#include <tencentcloud/cms/v20190321/model/LogoDetail.h>
#include <tencentcloud/cms/v20190321/model/Similar.h>
#include <tencentcloud/cms/v20190321/model/PhoneDetect.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 图片识别结果详情
                */
                class ImageData : public AbstractModel
                {
                public:
                    ImageData();
                    ~ImageData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
20103：性感
24001：暴恐
                     * @return EvilType 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
20103：性感
24001：暴恐
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
20103：性感
24001：暴恐
                     * @param _evilType 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
20103：性感
24001：暴恐
                     * 
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取图片性感详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HotDetect 图片性感详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageHotDetect GetHotDetect() const;

                    /**
                     * 设置图片性感详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hotDetect 图片性感详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHotDetect(const ImageHotDetect& _hotDetect);

                    /**
                     * 判断参数 HotDetect 是否已赋值
                     * @return HotDetect 是否已赋值
                     * 
                     */
                    bool HotDetectHasBeenSet() const;

                    /**
                     * 获取是否恶意 0：正常 1：可疑
                     * @return EvilFlag 是否恶意 0：正常 1：可疑
                     * 
                     */
                    int64_t GetEvilFlag() const;

                    /**
                     * 设置是否恶意 0：正常 1：可疑
                     * @param _evilFlag 是否恶意 0：正常 1：可疑
                     * 
                     */
                    void SetEvilFlag(const int64_t& _evilFlag);

                    /**
                     * 判断参数 EvilFlag 是否已赋值
                     * @return EvilFlag 是否已赋值
                     * 
                     */
                    bool EvilFlagHasBeenSet() const;

                    /**
                     * 获取图片二维码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeDetect 图片二维码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CodeDetect GetCodeDetect() const;

                    /**
                     * 设置图片二维码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeDetect 图片二维码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeDetect(const CodeDetect& _codeDetect);

                    /**
                     * 判断参数 CodeDetect 是否已赋值
                     * @return CodeDetect 是否已赋值
                     * 
                     */
                    bool CodeDetectHasBeenSet() const;

                    /**
                     * 获取图片涉政详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolityDetect 图片涉政详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImagePolityDetect GetPolityDetect() const;

                    /**
                     * 设置图片涉政详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _polityDetect 图片涉政详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolityDetect(const ImagePolityDetect& _polityDetect);

                    /**
                     * 判断参数 PolityDetect 是否已赋值
                     * @return PolityDetect 是否已赋值
                     * 
                     */
                    bool PolityDetectHasBeenSet() const;

                    /**
                     * 获取图片违法详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IllegalDetect 图片违法详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageIllegalDetect GetIllegalDetect() const;

                    /**
                     * 设置图片违法详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _illegalDetect 图片违法详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIllegalDetect(const ImageIllegalDetect& _illegalDetect);

                    /**
                     * 判断参数 IllegalDetect 是否已赋值
                     * @return IllegalDetect 是否已赋值
                     * 
                     */
                    bool IllegalDetectHasBeenSet() const;

                    /**
                     * 获取图片涉黄详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornDetect 图片涉黄详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImagePornDetect GetPornDetect() const;

                    /**
                     * 设置图片涉黄详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornDetect 图片涉黄详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornDetect(const ImagePornDetect& _pornDetect);

                    /**
                     * 判断参数 PornDetect 是否已赋值
                     * @return PornDetect 是否已赋值
                     * 
                     */
                    bool PornDetectHasBeenSet() const;

                    /**
                     * 获取图片暴恐详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorDetect 图片暴恐详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageTerrorDetect GetTerrorDetect() const;

                    /**
                     * 设置图片暴恐详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terrorDetect 图片暴恐详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerrorDetect(const ImageTerrorDetect& _terrorDetect);

                    /**
                     * 判断参数 TerrorDetect 是否已赋值
                     * @return TerrorDetect 是否已赋值
                     * 
                     */
                    bool TerrorDetectHasBeenSet() const;

                    /**
                     * 获取图片OCR详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OCRDetect 图片OCR详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OCRDetect GetOCRDetect() const;

                    /**
                     * 设置图片OCR详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oCRDetect 图片OCR详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOCRDetect(const OCRDetect& _oCRDetect);

                    /**
                     * 判断参数 OCRDetect 是否已赋值
                     * @return OCRDetect 是否已赋值
                     * 
                     */
                    bool OCRDetectHasBeenSet() const;

                    /**
                     * 获取logo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogoDetect logo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogoDetail GetLogoDetect() const;

                    /**
                     * 设置logo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logoDetect logo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogoDetect(const LogoDetail& _logoDetect);

                    /**
                     * 判断参数 LogoDetect 是否已赋值
                     * @return LogoDetect 是否已赋值
                     * 
                     */
                    bool LogoDetectHasBeenSet() const;

                    /**
                     * 获取图片相似度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Similar 图片相似度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Similar GetSimilar() const;

                    /**
                     * 设置图片相似度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _similar 图片相似度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimilar(const Similar& _similar);

                    /**
                     * 判断参数 Similar 是否已赋值
                     * @return Similar 是否已赋值
                     * 
                     */
                    bool SimilarHasBeenSet() const;

                    /**
                     * 获取手机检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneDetect 手机检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PhoneDetect GetPhoneDetect() const;

                    /**
                     * 设置手机检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneDetect 手机检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneDetect(const PhoneDetect& _phoneDetect);

                    /**
                     * 判断参数 PhoneDetect 是否已赋值
                     * @return PhoneDetect 是否已赋值
                     * 
                     */
                    bool PhoneDetectHasBeenSet() const;

                private:

                    /**
                     * 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
20103：性感
24001：暴恐
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 图片性感详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageHotDetect m_hotDetect;
                    bool m_hotDetectHasBeenSet;

                    /**
                     * 是否恶意 0：正常 1：可疑
                     */
                    int64_t m_evilFlag;
                    bool m_evilFlagHasBeenSet;

                    /**
                     * 图片二维码详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CodeDetect m_codeDetect;
                    bool m_codeDetectHasBeenSet;

                    /**
                     * 图片涉政详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImagePolityDetect m_polityDetect;
                    bool m_polityDetectHasBeenSet;

                    /**
                     * 图片违法详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageIllegalDetect m_illegalDetect;
                    bool m_illegalDetectHasBeenSet;

                    /**
                     * 图片涉黄详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImagePornDetect m_pornDetect;
                    bool m_pornDetectHasBeenSet;

                    /**
                     * 图片暴恐详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageTerrorDetect m_terrorDetect;
                    bool m_terrorDetectHasBeenSet;

                    /**
                     * 图片OCR详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OCRDetect m_oCRDetect;
                    bool m_oCRDetectHasBeenSet;

                    /**
                     * logo详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogoDetail m_logoDetect;
                    bool m_logoDetectHasBeenSet;

                    /**
                     * 图片相似度详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Similar m_similar;
                    bool m_similarHasBeenSet;

                    /**
                     * 手机检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PhoneDetect m_phoneDetect;
                    bool m_phoneDetectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEDATA_H_
