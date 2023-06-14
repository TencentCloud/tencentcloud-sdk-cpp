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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_HLFUNCTION_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_HLFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 检索配置开关项
                */
                class HLFunction : public AbstractModel
                {
                public:
                    HLFunction();
                    ~HLFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启人脸检测
                     * @return EnableFaceDetect 是否开启人脸检测
                     * 
                     */
                    bool GetEnableFaceDetect() const;

                    /**
                     * 设置是否开启人脸检测
                     * @param _enableFaceDetect 是否开启人脸检测
                     * 
                     */
                    void SetEnableFaceDetect(const bool& _enableFaceDetect);

                    /**
                     * 判断参数 EnableFaceDetect 是否已赋值
                     * @return EnableFaceDetect 是否已赋值
                     * 
                     */
                    bool EnableFaceDetectHasBeenSet() const;

                    /**
                     * 获取是否开启表情识别
                     * @return EnableFaceExpression 是否开启表情识别
                     * 
                     */
                    bool GetEnableFaceExpression() const;

                    /**
                     * 设置是否开启表情识别
                     * @param _enableFaceExpression 是否开启表情识别
                     * 
                     */
                    void SetEnableFaceExpression(const bool& _enableFaceExpression);

                    /**
                     * 判断参数 EnableFaceExpression 是否已赋值
                     * @return EnableFaceExpression 是否已赋值
                     * 
                     */
                    bool EnableFaceExpressionHasBeenSet() const;

                    /**
                     * 获取是否开启人脸检索
                     * @return EnableFaceIdent 是否开启人脸检索
                     * 
                     */
                    bool GetEnableFaceIdent() const;

                    /**
                     * 设置是否开启人脸检索
                     * @param _enableFaceIdent 是否开启人脸检索
                     * 
                     */
                    void SetEnableFaceIdent(const bool& _enableFaceIdent);

                    /**
                     * 判断参数 EnableFaceIdent 是否已赋值
                     * @return EnableFaceIdent 是否已赋值
                     * 
                     */
                    bool EnableFaceIdentHasBeenSet() const;

                    /**
                     * 获取是否开启视频集锦-老师关键字识别
                     * @return EnableKeywordWonderfulTime 是否开启视频集锦-老师关键字识别
                     * 
                     */
                    bool GetEnableKeywordWonderfulTime() const;

                    /**
                     * 设置是否开启视频集锦-老师关键字识别
                     * @param _enableKeywordWonderfulTime 是否开启视频集锦-老师关键字识别
                     * 
                     */
                    void SetEnableKeywordWonderfulTime(const bool& _enableKeywordWonderfulTime);

                    /**
                     * 判断参数 EnableKeywordWonderfulTime 是否已赋值
                     * @return EnableKeywordWonderfulTime 是否已赋值
                     * 
                     */
                    bool EnableKeywordWonderfulTimeHasBeenSet() const;

                    /**
                     * 获取是否开启视频集锦-微笑识别
                     * @return EnableSmileWonderfulTime 是否开启视频集锦-微笑识别
                     * 
                     */
                    bool GetEnableSmileWonderfulTime() const;

                    /**
                     * 设置是否开启视频集锦-微笑识别
                     * @param _enableSmileWonderfulTime 是否开启视频集锦-微笑识别
                     * 
                     */
                    void SetEnableSmileWonderfulTime(const bool& _enableSmileWonderfulTime);

                    /**
                     * 判断参数 EnableSmileWonderfulTime 是否已赋值
                     * @return EnableSmileWonderfulTime 是否已赋值
                     * 
                     */
                    bool EnableSmileWonderfulTimeHasBeenSet() const;

                private:

                    /**
                     * 是否开启人脸检测
                     */
                    bool m_enableFaceDetect;
                    bool m_enableFaceDetectHasBeenSet;

                    /**
                     * 是否开启表情识别
                     */
                    bool m_enableFaceExpression;
                    bool m_enableFaceExpressionHasBeenSet;

                    /**
                     * 是否开启人脸检索
                     */
                    bool m_enableFaceIdent;
                    bool m_enableFaceIdentHasBeenSet;

                    /**
                     * 是否开启视频集锦-老师关键字识别
                     */
                    bool m_enableKeywordWonderfulTime;
                    bool m_enableKeywordWonderfulTimeHasBeenSet;

                    /**
                     * 是否开启视频集锦-微笑识别
                     */
                    bool m_enableSmileWonderfulTime;
                    bool m_enableSmileWonderfulTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_HLFUNCTION_H_
