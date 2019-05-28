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
#include <tencentcloud/cms/v20190321/model/ImageIllegalDetect.h>
#include <tencentcloud/cms/v20190321/model/ImagePolityDetect.h>
#include <tencentcloud/cms/v20190321/model/ImagePornDetect.h>
#include <tencentcloud/cms/v20190321/model/Similar.h>
#include <tencentcloud/cms/v20190321/model/ImageTerrorDetect.h>


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
                     * 获取是否恶意 0：正常 1：可疑
                     * @return EvilFlag 是否恶意 0：正常 1：可疑
                     */
                    int64_t GetEvilFlag() const;

                    /**
                     * 设置是否恶意 0：正常 1：可疑
                     * @param EvilFlag 是否恶意 0：正常 1：可疑
                     */
                    void SetEvilFlag(const int64_t& _evilFlag);

                    /**
                     * 判断参数 EvilFlag 是否已赋值
                     * @return EvilFlag 是否已赋值
                     */
                    bool EvilFlagHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     * @return EvilType 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     * @param EvilType 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取图片违法详情
                     * @return IllegalDetect 图片违法详情
                     */
                    ImageIllegalDetect GetIllegalDetect() const;

                    /**
                     * 设置图片违法详情
                     * @param IllegalDetect 图片违法详情
                     */
                    void SetIllegalDetect(const ImageIllegalDetect& _illegalDetect);

                    /**
                     * 判断参数 IllegalDetect 是否已赋值
                     * @return IllegalDetect 是否已赋值
                     */
                    bool IllegalDetectHasBeenSet() const;

                    /**
                     * 获取图片涉政详情
                     * @return PolityDetect 图片涉政详情
                     */
                    ImagePolityDetect GetPolityDetect() const;

                    /**
                     * 设置图片涉政详情
                     * @param PolityDetect 图片涉政详情
                     */
                    void SetPolityDetect(const ImagePolityDetect& _polityDetect);

                    /**
                     * 判断参数 PolityDetect 是否已赋值
                     * @return PolityDetect 是否已赋值
                     */
                    bool PolityDetectHasBeenSet() const;

                    /**
                     * 获取图片涉黄详情
                     * @return PornDetect 图片涉黄详情
                     */
                    ImagePornDetect GetPornDetect() const;

                    /**
                     * 设置图片涉黄详情
                     * @param PornDetect 图片涉黄详情
                     */
                    void SetPornDetect(const ImagePornDetect& _pornDetect);

                    /**
                     * 判断参数 PornDetect 是否已赋值
                     * @return PornDetect 是否已赋值
                     */
                    bool PornDetectHasBeenSet() const;

                    /**
                     * 获取图片相似度详情
                     * @return Similar 图片相似度详情
                     */
                    Similar GetSimilar() const;

                    /**
                     * 设置图片相似度详情
                     * @param Similar 图片相似度详情
                     */
                    void SetSimilar(const Similar& _similar);

                    /**
                     * 判断参数 Similar 是否已赋值
                     * @return Similar 是否已赋值
                     */
                    bool SimilarHasBeenSet() const;

                    /**
                     * 获取图片暴恐详情
                     * @return TerrorDetect 图片暴恐详情
                     */
                    ImageTerrorDetect GetTerrorDetect() const;

                    /**
                     * 设置图片暴恐详情
                     * @param TerrorDetect 图片暴恐详情
                     */
                    void SetTerrorDetect(const ImageTerrorDetect& _terrorDetect);

                    /**
                     * 判断参数 TerrorDetect 是否已赋值
                     * @return TerrorDetect 是否已赋值
                     */
                    bool TerrorDetectHasBeenSet() const;

                private:

                    /**
                     * 是否恶意 0：正常 1：可疑
                     */
                    int64_t m_evilFlag;
                    bool m_evilFlagHasBeenSet;

                    /**
                     * 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 图片违法详情
                     */
                    ImageIllegalDetect m_illegalDetect;
                    bool m_illegalDetectHasBeenSet;

                    /**
                     * 图片涉政详情
                     */
                    ImagePolityDetect m_polityDetect;
                    bool m_polityDetectHasBeenSet;

                    /**
                     * 图片涉黄详情
                     */
                    ImagePornDetect m_pornDetect;
                    bool m_pornDetectHasBeenSet;

                    /**
                     * 图片相似度详情
                     */
                    Similar m_similar;
                    bool m_similarHasBeenSet;

                    /**
                     * 图片暴恐详情
                     */
                    ImageTerrorDetect m_terrorDetect;
                    bool m_terrorDetectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEDATA_H_
