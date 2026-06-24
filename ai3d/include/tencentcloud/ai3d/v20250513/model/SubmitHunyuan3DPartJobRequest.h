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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUAN3DPARTJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUAN3DPARTJOBREQUEST_H_

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
                * SubmitHunyuan3DPartJob请求参数结构体
                */
                class SubmitHunyuan3DPartJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuan3DPartJobRequest();
                    ~SubmitHunyuan3DPartJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需进行组件生成的3D模型文件，仅支持FBX格式。</p>
                     * @return File <p>需进行组件生成的3D模型文件，仅支持FBX格式。</p>
                     * 
                     */
                    InputFile3D GetFile() const;

                    /**
                     * 设置<p>需进行组件生成的3D模型文件，仅支持FBX格式。</p>
                     * @param _file <p>需进行组件生成的3D模型文件，仅支持FBX格式。</p>
                     * 
                     */
                    void SetFile(const InputFile3D& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取<p>组件生成模型版本，默认为1.5</p><p>枚举值：</p><ul><li>1.5： 1.5模型</li></ul><p>默认值：1.5</p>
                     * @return Model <p>组件生成模型版本，默认为1.5</p><p>枚举值：</p><ul><li>1.5： 1.5模型</li></ul><p>默认值：1.5</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>组件生成模型版本，默认为1.5</p><p>枚举值：</p><ul><li>1.5： 1.5模型</li></ul><p>默认值：1.5</p>
                     * @param _model <p>组件生成模型版本，默认为1.5</p><p>枚举值：</p><ul><li>1.5： 1.5模型</li></ul><p>默认值：1.5</p>
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
                     * 获取<p>是否分步骤进行组件生成；<br>开启后，输入原始模型后，可生成带分割信息的模型以及分割数据，可对此信息编辑后再传入带有分割信息的模型和分割数据进行编辑后的组件生成；<br>此参数默认关闭。</p>
                     * @return PartSegmentationInfo <p>是否分步骤进行组件生成；<br>开启后，输入原始模型后，可生成带分割信息的模型以及分割数据，可对此信息编辑后再传入带有分割信息的模型和分割数据进行编辑后的组件生成；<br>此参数默认关闭。</p>
                     * 
                     */
                    std::string GetPartSegmentationInfo() const;

                    /**
                     * 设置<p>是否分步骤进行组件生成；<br>开启后，输入原始模型后，可生成带分割信息的模型以及分割数据，可对此信息编辑后再传入带有分割信息的模型和分割数据进行编辑后的组件生成；<br>此参数默认关闭。</p>
                     * @param _partSegmentationInfo <p>是否分步骤进行组件生成；<br>开启后，输入原始模型后，可生成带分割信息的模型以及分割数据，可对此信息编辑后再传入带有分割信息的模型和分割数据进行编辑后的组件生成；<br>此参数默认关闭。</p>
                     * 
                     */
                    void SetPartSegmentationInfo(const std::string& _partSegmentationInfo);

                    /**
                     * 判断参数 PartSegmentationInfo 是否已赋值
                     * @return PartSegmentationInfo 是否已赋值
                     * 
                     */
                    bool PartSegmentationInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否开启后处理，开启后将只输出一个模型链接，默认关闭。 （开启此接口后，需额外增加20积分）</p>
                     * @return EnableStagedGeneration <p>是否开启后处理，开启后将只输出一个模型链接，默认关闭。 （开启此接口后，需额外增加20积分）</p>
                     * 
                     */
                    bool GetEnableStagedGeneration() const;

                    /**
                     * 设置<p>是否开启后处理，开启后将只输出一个模型链接，默认关闭。 （开启此接口后，需额外增加20积分）</p>
                     * @param _enableStagedGeneration <p>是否开启后处理，开启后将只输出一个模型链接，默认关闭。 （开启此接口后，需额外增加20积分）</p>
                     * 
                     */
                    void SetEnableStagedGeneration(const bool& _enableStagedGeneration);

                    /**
                     * 判断参数 EnableStagedGeneration 是否已赋值
                     * @return EnableStagedGeneration 是否已赋值
                     * 
                     */
                    bool EnableStagedGenerationHasBeenSet() const;

                private:

                    /**
                     * <p>需进行组件生成的3D模型文件，仅支持FBX格式。</p>
                     */
                    InputFile3D m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * <p>组件生成模型版本，默认为1.5</p><p>枚举值：</p><ul><li>1.5： 1.5模型</li></ul><p>默认值：1.5</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>是否分步骤进行组件生成；<br>开启后，输入原始模型后，可生成带分割信息的模型以及分割数据，可对此信息编辑后再传入带有分割信息的模型和分割数据进行编辑后的组件生成；<br>此参数默认关闭。</p>
                     */
                    std::string m_partSegmentationInfo;
                    bool m_partSegmentationInfoHasBeenSet;

                    /**
                     * <p>是否开启后处理，开启后将只输出一个模型链接，默认关闭。 （开启此接口后，需额外增加20积分）</p>
                     */
                    bool m_enableStagedGeneration;
                    bool m_enableStagedGenerationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUAN3DPARTJOBREQUEST_H_
