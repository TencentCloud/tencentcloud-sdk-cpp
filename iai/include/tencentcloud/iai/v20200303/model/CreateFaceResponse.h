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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * CreateFace返回参数结构体
                */
                class CreateFaceResponse : public AbstractModel
                {
                public:
                    CreateFaceResponse();
                    ~CreateFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>加入成功的人脸数量。</p>
                     * @return SucFaceNum <p>加入成功的人脸数量。</p>
                     * 
                     */
                    uint64_t GetSucFaceNum() const;

                    /**
                     * 判断参数 SucFaceNum 是否已赋值
                     * @return SucFaceNum 是否已赋值
                     * 
                     */
                    bool SucFaceNumHasBeenSet() const;

                    /**
                     * 获取<p>加入成功的人脸ID列表。</p>
                     * @return SucFaceIds <p>加入成功的人脸ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetSucFaceIds() const;

                    /**
                     * 判断参数 SucFaceIds 是否已赋值
                     * @return SucFaceIds 是否已赋值
                     * 
                     */
                    bool SucFaceIdsHasBeenSet() const;

                    /**
                     * 获取<p>每张人脸图片添加结果。</p><ul><li>其他非 0 值代表算法服务异常，取值范围：<br>-1101 代表未检测到人脸。<br>-1102 代表图片解码失败。<br>-1109 代表图片尺寸过大或者过小。<br>-1601代表不符合图片质量控制要求。<br>-1604 代表人脸相似度没有超过FaceMatchThreshold。 </li><li>RetCode的顺序和入参中 Images 或 Urls 的顺序一致。</li></ul>
                     * @return RetCode <p>每张人脸图片添加结果。</p><ul><li>其他非 0 值代表算法服务异常，取值范围：<br>-1101 代表未检测到人脸。<br>-1102 代表图片解码失败。<br>-1109 代表图片尺寸过大或者过小。<br>-1601代表不符合图片质量控制要求。<br>-1604 代表人脸相似度没有超过FaceMatchThreshold。 </li><li>RetCode的顺序和入参中 Images 或 Urls 的顺序一致。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetRetCode() const;

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取<p>加入成功的人脸索引。</p><ul><li>索引顺序和入参中 Images 或 Urls 的顺序一致。 </li><li>例如， Urls 中 有 3 个 url，第二个 url 失败，则 SucIndexes 值为 [0,2] 。</li></ul>
                     * @return SucIndexes <p>加入成功的人脸索引。</p><ul><li>索引顺序和入参中 Images 或 Urls 的顺序一致。 </li><li>例如， Urls 中 有 3 个 url，第二个 url 失败，则 SucIndexes 值为 [0,2] 。</li></ul>
                     * 
                     */
                    std::vector<uint64_t> GetSucIndexes() const;

                    /**
                     * 判断参数 SucIndexes 是否已赋值
                     * @return SucIndexes 是否已赋值
                     * 
                     */
                    bool SucIndexesHasBeenSet() const;

                    /**
                     * 获取<p>加入成功的人脸框位置。顺序和入参中 Images 或 Urls 的顺序一致。</p>
                     * @return SucFaceRects <p>加入成功的人脸框位置。顺序和入参中 Images 或 Urls 的顺序一致。</p>
                     * 
                     */
                    std::vector<FaceRect> GetSucFaceRects() const;

                    /**
                     * 判断参数 SucFaceRects 是否已赋值
                     * @return SucFaceRects 是否已赋值
                     * 
                     */
                    bool SucFaceRectsHasBeenSet() const;

                    /**
                     * 获取<p>人脸识别所用的算法模型版本。</p>
                     * @return FaceModelVersion <p>人脸识别所用的算法模型版本。</p>
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * <p>加入成功的人脸数量。</p>
                     */
                    uint64_t m_sucFaceNum;
                    bool m_sucFaceNumHasBeenSet;

                    /**
                     * <p>加入成功的人脸ID列表。</p>
                     */
                    std::vector<std::string> m_sucFaceIds;
                    bool m_sucFaceIdsHasBeenSet;

                    /**
                     * <p>每张人脸图片添加结果。</p><ul><li>其他非 0 值代表算法服务异常，取值范围：<br>-1101 代表未检测到人脸。<br>-1102 代表图片解码失败。<br>-1109 代表图片尺寸过大或者过小。<br>-1601代表不符合图片质量控制要求。<br>-1604 代表人脸相似度没有超过FaceMatchThreshold。 </li><li>RetCode的顺序和入参中 Images 或 Urls 的顺序一致。</li></ul>
                     */
                    std::vector<int64_t> m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * <p>加入成功的人脸索引。</p><ul><li>索引顺序和入参中 Images 或 Urls 的顺序一致。 </li><li>例如， Urls 中 有 3 个 url，第二个 url 失败，则 SucIndexes 值为 [0,2] 。</li></ul>
                     */
                    std::vector<uint64_t> m_sucIndexes;
                    bool m_sucIndexesHasBeenSet;

                    /**
                     * <p>加入成功的人脸框位置。顺序和入参中 Images 或 Urls 的顺序一致。</p>
                     */
                    std::vector<FaceRect> m_sucFaceRects;
                    bool m_sucFaceRectsHasBeenSet;

                    /**
                     * <p>人脸识别所用的算法模型版本。</p>
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_
