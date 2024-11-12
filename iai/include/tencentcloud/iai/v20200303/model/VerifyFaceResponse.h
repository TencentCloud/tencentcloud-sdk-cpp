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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * VerifyFace返回参数结构体
                */
                class VerifyFaceResponse : public AbstractModel
                {
                public:
                    VerifyFaceResponse();
                    ~VerifyFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取给定的人脸图片与 PersonId 对应人脸的相似度。
- 若 PersonId 下有多张人脸（Face），返回相似度最大的分数。
- 不同算法版本返回的相似度分数不同。
- 若需要验证两张图片中人脸是否为同一人，3.0版本误识率千分之一对应分数为40分，误识率万分之一对应分数为50分，误识率十万分之一对应分数为60分。 一般超过50分则可认定为同一人。
- 2.0版本误识率千分之一对应分数为70分，误识率万分之一对应分数为80分，误识率十万分之一对应分数为90分。 一般超过80分则可认定为同一人。
                     * @return Score 给定的人脸图片与 PersonId 对应人脸的相似度。
- 若 PersonId 下有多张人脸（Face），返回相似度最大的分数。
- 不同算法版本返回的相似度分数不同。
- 若需要验证两张图片中人脸是否为同一人，3.0版本误识率千分之一对应分数为40分，误识率万分之一对应分数为50分，误识率十万分之一对应分数为60分。 一般超过50分则可认定为同一人。
- 2.0版本误识率千分之一对应分数为70分，误识率万分之一对应分数为80分，误识率十万分之一对应分数为90分。 一般超过80分则可认定为同一人。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取是否为同一人判断，固定阈值分数为60分，若想更灵活地调整阈值可取Score参数返回进行判断。
                     * @return IsMatch 是否为同一人判断，固定阈值分数为60分，若想更灵活地调整阈值可取Score参数返回进行判断。
                     * 
                     */
                    bool GetIsMatch() const;

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     * 
                     */
                    bool IsMatchHasBeenSet() const;

                    /**
                     * 获取人脸识别所用的算法模型版本，是该 Person 所在的人员库的算法模型版本。
- 在创建人员库时设置，详情可参考[算法模型版本](https://cloud.tencent.com/document/product/867/40042)
                     * @return FaceModelVersion 人脸识别所用的算法模型版本，是该 Person 所在的人员库的算法模型版本。
- 在创建人员库时设置，详情可参考[算法模型版本](https://cloud.tencent.com/document/product/867/40042)
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
                     * 给定的人脸图片与 PersonId 对应人脸的相似度。
- 若 PersonId 下有多张人脸（Face），返回相似度最大的分数。
- 不同算法版本返回的相似度分数不同。
- 若需要验证两张图片中人脸是否为同一人，3.0版本误识率千分之一对应分数为40分，误识率万分之一对应分数为50分，误识率十万分之一对应分数为60分。 一般超过50分则可认定为同一人。
- 2.0版本误识率千分之一对应分数为70分，误识率万分之一对应分数为80分，误识率十万分之一对应分数为90分。 一般超过80分则可认定为同一人。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 是否为同一人判断，固定阈值分数为60分，若想更灵活地调整阈值可取Score参数返回进行判断。
                     */
                    bool m_isMatch;
                    bool m_isMatchHasBeenSet;

                    /**
                     * 人脸识别所用的算法模型版本，是该 Person 所在的人员库的算法模型版本。
- 在创建人员库时设置，详情可参考[算法模型版本](https://cloud.tencent.com/document/product/867/40042)
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYFACERESPONSE_H_
