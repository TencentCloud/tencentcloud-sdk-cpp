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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEFACEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEFACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI 样本管理，人脸信息。
                */
                class AiSampleFaceInfo : public AbstractModel
                {
                public:
                    AiSampleFaceInfo();
                    ~AiSampleFaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸图片 ID。
                     * @return FaceId 人脸图片 ID。
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置人脸图片 ID。
                     * @param _faceId 人脸图片 ID。
                     * 
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取人脸图片地址。
                     * @return Url 人脸图片地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置人脸图片地址。
                     * @param _url 人脸图片地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 人脸图片 ID。
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 人脸图片地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEFACEINFO_H_
