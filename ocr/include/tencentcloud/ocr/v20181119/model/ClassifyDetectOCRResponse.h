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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CLASSIFYDETECTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CLASSIFYDETECTOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ClassifyDetectInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ClassifyDetectOCR返回参数结构体
                */
                class ClassifyDetectOCRResponse : public AbstractModel
                {
                public:
                    ClassifyDetectOCRResponse();
                    ~ClassifyDetectOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取智能卡证分类结果。当图片类型不支持分类识别或者识别出的类型不在请求参数DiscernType指定的范围内时，返回结果中的Type字段将为空字符串，Name字段将返回"其它"
                     * @return ClassifyDetectInfos 智能卡证分类结果。当图片类型不支持分类识别或者识别出的类型不在请求参数DiscernType指定的范围内时，返回结果中的Type字段将为空字符串，Name字段将返回"其它"
                     * 
                     */
                    std::vector<ClassifyDetectInfo> GetClassifyDetectInfos() const;

                    /**
                     * 判断参数 ClassifyDetectInfos 是否已赋值
                     * @return ClassifyDetectInfos 是否已赋值
                     * 
                     */
                    bool ClassifyDetectInfosHasBeenSet() const;

                private:

                    /**
                     * 智能卡证分类结果。当图片类型不支持分类识别或者识别出的类型不在请求参数DiscernType指定的范围内时，返回结果中的Type字段将为空字符串，Name字段将返回"其它"
                     */
                    std::vector<ClassifyDetectInfo> m_classifyDetectInfos;
                    bool m_classifyDetectInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CLASSIFYDETECTOCRRESPONSE_H_
