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
                     * 获取加入成功的人脸数量。
                     * @return SucFaceNum 加入成功的人脸数量。
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
                     * 获取加入成功的人脸ID列表。
                     * @return SucFaceIds 加入成功的人脸ID列表。
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
                     * 获取每张人脸图片添加结果。
- 其他非 0 值代表算法服务异常，取值范围：
-1101 代表未检测到人脸。
-1102 代表图片解码失败。
-1109 代表图片尺寸过大或者过小。
-1601代表不符合图片质量控制要求。
-1604 代表人脸相似度没有超过FaceMatchThreshold。 
- RetCode的顺序和入参中 Images 或 Urls 的顺序一致。
                     * @return RetCode 每张人脸图片添加结果。
- 其他非 0 值代表算法服务异常，取值范围：
-1101 代表未检测到人脸。
-1102 代表图片解码失败。
-1109 代表图片尺寸过大或者过小。
-1601代表不符合图片质量控制要求。
-1604 代表人脸相似度没有超过FaceMatchThreshold。 
- RetCode的顺序和入参中 Images 或 Urls 的顺序一致。
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
                     * 获取加入成功的人脸索引。
- 索引顺序和入参中 Images 或 Urls 的顺序一致。 
- 例如， Urls 中 有 3 个 url，第二个 url 失败，则 SucIndexes 值为 [0,2] 。
                     * @return SucIndexes 加入成功的人脸索引。
- 索引顺序和入参中 Images 或 Urls 的顺序一致。 
- 例如， Urls 中 有 3 个 url，第二个 url 失败，则 SucIndexes 值为 [0,2] 。
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
                     * 获取加入成功的人脸框位置。顺序和入参中 Images 或 Urls 的顺序一致。
                     * @return SucFaceRects 加入成功的人脸框位置。顺序和入参中 Images 或 Urls 的顺序一致。
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
                     * 获取人脸识别所用的算法模型版本。
                     * @return FaceModelVersion 人脸识别所用的算法模型版本。
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
                     * 加入成功的人脸数量。
                     */
                    uint64_t m_sucFaceNum;
                    bool m_sucFaceNumHasBeenSet;

                    /**
                     * 加入成功的人脸ID列表。
                     */
                    std::vector<std::string> m_sucFaceIds;
                    bool m_sucFaceIdsHasBeenSet;

                    /**
                     * 每张人脸图片添加结果。
- 其他非 0 值代表算法服务异常，取值范围：
-1101 代表未检测到人脸。
-1102 代表图片解码失败。
-1109 代表图片尺寸过大或者过小。
-1601代表不符合图片质量控制要求。
-1604 代表人脸相似度没有超过FaceMatchThreshold。 
- RetCode的顺序和入参中 Images 或 Urls 的顺序一致。
                     */
                    std::vector<int64_t> m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 加入成功的人脸索引。
- 索引顺序和入参中 Images 或 Urls 的顺序一致。 
- 例如， Urls 中 有 3 个 url，第二个 url 失败，则 SucIndexes 值为 [0,2] 。
                     */
                    std::vector<uint64_t> m_sucIndexes;
                    bool m_sucIndexesHasBeenSet;

                    /**
                     * 加入成功的人脸框位置。顺序和入参中 Images 或 Urls 的顺序一致。
                     */
                    std::vector<FaceRect> m_sucFaceRects;
                    bool m_sucFaceRectsHasBeenSet;

                    /**
                     * 人脸识别所用的算法模型版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_
