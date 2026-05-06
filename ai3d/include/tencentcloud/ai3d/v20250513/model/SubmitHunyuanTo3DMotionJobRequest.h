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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUANTO3DMOTIONJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUANTO3DMOTIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/InputFile3D.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitHunyuanTo3DMotionJob请求参数结构体
                */
                class SubmitHunyuanTo3DMotionJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanTo3DMotionJobRequest();
                    ~SubmitHunyuanTo3DMotionJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输入文本prompt，限定最大字符为128。</p>
                     * @return Prompt <p>输入文本prompt，限定最大字符为128。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>输入文本prompt，限定最大字符为128。</p>
                     * @param _prompt <p>输入文本prompt，限定最大字符为128。</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>模型名称：HY-Motion-1.0，默认HY-Motion-1.0。</p>
                     * @return Model <p>模型名称：HY-Motion-1.0，默认HY-Motion-1.0。</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称：HY-Motion-1.0，默认HY-Motion-1.0。</p>
                     * @param _model <p>模型名称：HY-Motion-1.0，默认HY-Motion-1.0。</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>需重定向的模型地址，只能支持混元生3D动画生成的模型（动画模板的接口）</p>
                     * @return RetargetFile <p>需重定向的模型地址，只能支持混元生3D动画生成的模型（动画模板的接口）</p>
                     * 
                     */
                    InputFile3D GetRetargetFile() const;

                    /**
                     * 设置<p>需重定向的模型地址，只能支持混元生3D动画生成的模型（动画模板的接口）</p>
                     * @param _retargetFile <p>需重定向的模型地址，只能支持混元生3D动画生成的模型（动画模板的接口）</p>
                     * 
                     */
                    void SetRetargetFile(const InputFile3D& _retargetFile);

                    /**
                     * 判断参数 RetargetFile 是否已赋值
                     * @return RetargetFile 是否已赋值
                     * 
                     */
                    bool RetargetFileHasBeenSet() const;

                    /**
                     * 获取<p>生成动画的时长，默认5，范围：1-12（单位s）</p>
                     * @return Duration <p>生成动画的时长，默认5，范围：1-12（单位s）</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>生成动画的时长，默认5，范围：1-12（单位s）</p>
                     * @param _duration <p>生成动画的时长，默认5，范围：1-12（单位s）</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>默认true，返回的fbx是否带蒙皮mesh</p>
                     * @return EnableMesh <p>默认true，返回的fbx是否带蒙皮mesh</p>
                     * 
                     */
                    bool GetEnableMesh() const;

                    /**
                     * 设置<p>默认true，返回的fbx是否带蒙皮mesh</p>
                     * @param _enableMesh <p>默认true，返回的fbx是否带蒙皮mesh</p>
                     * 
                     */
                    void SetEnableMesh(const bool& _enableMesh);

                    /**
                     * 判断参数 EnableMesh 是否已赋值
                     * @return EnableMesh 是否已赋值
                     * 
                     */
                    bool EnableMeshHasBeenSet() const;

                    /**
                     * 获取<p>是否开启prompt扩写，开启后将补充完善输入的prompt。<br>默认false。</p>
                     * @return EnableRewrite <p>是否开启prompt扩写，开启后将补充完善输入的prompt。<br>默认false。</p>
                     * 
                     */
                    bool GetEnableRewrite() const;

                    /**
                     * 设置<p>是否开启prompt扩写，开启后将补充完善输入的prompt。<br>默认false。</p>
                     * @param _enableRewrite <p>是否开启prompt扩写，开启后将补充完善输入的prompt。<br>默认false。</p>
                     * 
                     */
                    void SetEnableRewrite(const bool& _enableRewrite);

                    /**
                     * 判断参数 EnableRewrite 是否已赋值
                     * @return EnableRewrite 是否已赋值
                     * 
                     */
                    bool EnableRewriteHasBeenSet() const;

                    /**
                     * 获取<p>是否开启时长自动匹配，开启后将自动根据prompt匹配适合时长的动作数据<br>默认false。</p>
                     * @return EnableDurationEst <p>是否开启时长自动匹配，开启后将自动根据prompt匹配适合时长的动作数据<br>默认false。</p>
                     * 
                     */
                    bool GetEnableDurationEst() const;

                    /**
                     * 设置<p>是否开启时长自动匹配，开启后将自动根据prompt匹配适合时长的动作数据<br>默认false。</p>
                     * @param _enableDurationEst <p>是否开启时长自动匹配，开启后将自动根据prompt匹配适合时长的动作数据<br>默认false。</p>
                     * 
                     */
                    void SetEnableDurationEst(const bool& _enableDurationEst);

                    /**
                     * 判断参数 EnableDurationEst 是否已赋值
                     * @return EnableDurationEst 是否已赋值
                     * 
                     */
                    bool EnableDurationEstHasBeenSet() const;

                private:

                    /**
                     * <p>输入文本prompt，限定最大字符为128。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>模型名称：HY-Motion-1.0，默认HY-Motion-1.0。</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>需重定向的模型地址，只能支持混元生3D动画生成的模型（动画模板的接口）</p>
                     */
                    InputFile3D m_retargetFile;
                    bool m_retargetFileHasBeenSet;

                    /**
                     * <p>生成动画的时长，默认5，范围：1-12（单位s）</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>默认true，返回的fbx是否带蒙皮mesh</p>
                     */
                    bool m_enableMesh;
                    bool m_enableMeshHasBeenSet;

                    /**
                     * <p>是否开启prompt扩写，开启后将补充完善输入的prompt。<br>默认false。</p>
                     */
                    bool m_enableRewrite;
                    bool m_enableRewriteHasBeenSet;

                    /**
                     * <p>是否开启时长自动匹配，开启后将自动根据prompt匹配适合时长的动作数据<br>默认false。</p>
                     */
                    bool m_enableDurationEst;
                    bool m_enableDurationEstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUANTO3DMOTIONJOBREQUEST_H_
