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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDFACERECOGNITIONFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDFACERECOGNITIONFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 大模型解析人脸识别配置
                */
                class LLMComprehendFaceRecognitionForUpdate : public AbstractModel
                {
                public:
                    LLMComprehendFaceRecognitionForUpdate();
                    ~LLMComprehendFaceRecognitionForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return Score 
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置
                     * @param _score 
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取
                     * @return DefaultLibraryLabelSet 
                     * 
                     */
                    std::vector<std::string> GetDefaultLibraryLabelSet() const;

                    /**
                     * 设置
                     * @param _defaultLibraryLabelSet 
                     * 
                     */
                    void SetDefaultLibraryLabelSet(const std::vector<std::string>& _defaultLibraryLabelSet);

                    /**
                     * 判断参数 DefaultLibraryLabelSet 是否已赋值
                     * @return DefaultLibraryLabelSet 是否已赋值
                     * 
                     */
                    bool DefaultLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return UserDefineLibraryLabelSet 
                     * 
                     */
                    std::vector<std::string> GetUserDefineLibraryLabelSet() const;

                    /**
                     * 设置
                     * @param _userDefineLibraryLabelSet 
                     * 
                     */
                    void SetUserDefineLibraryLabelSet(const std::vector<std::string>& _userDefineLibraryLabelSet);

                    /**
                     * 判断参数 UserDefineLibraryLabelSet 是否已赋值
                     * @return UserDefineLibraryLabelSet 是否已赋值
                     * 
                     */
                    bool UserDefineLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return FaceLibrary 
                     * 
                     */
                    std::string GetFaceLibrary() const;

                    /**
                     * 设置
                     * @param _faceLibrary 
                     * 
                     */
                    void SetFaceLibrary(const std::string& _faceLibrary);

                    /**
                     * 判断参数 FaceLibrary 是否已赋值
                     * @return FaceLibrary 是否已赋值
                     * 
                     */
                    bool FaceLibraryHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_defaultLibraryLabelSet;
                    bool m_defaultLibraryLabelSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_userDefineLibraryLabelSet;
                    bool m_userDefineLibraryLabelSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_faceLibrary;
                    bool m_faceLibraryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDFACERECOGNITIONFORUPDATE_H_
