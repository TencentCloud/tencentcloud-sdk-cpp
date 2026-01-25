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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AddOnParameter.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ProcessImage请求参数结构体
                */
                class ProcessImageRequest : public AbstractModel
                {
                public:
                    ProcessImageRequest();
                    ~ProcessImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片处理的文件输入信息。
                     * @return InputInfo 图片处理的文件输入信息。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置图片处理的文件输入信息。
                     * @param _inputInfo 图片处理的文件输入信息。
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取图片处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
                     * @return OutputStorage 图片处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置图片处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
                     * @param _outputStorage 图片处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取图片处理生成的文件输出的路径。如果不填表示与 InputInfo 中文件所在的目录一致。如果是目录，如`/image/201907/`，表示继承原文件名输出到该目录。
                     * @return OutputDir 图片处理生成的文件输出的路径。如果不填表示与 InputInfo 中文件所在的目录一致。如果是目录，如`/image/201907/`，表示继承原文件名输出到该目录。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置图片处理生成的文件输出的路径。如果不填表示与 InputInfo 中文件所在的目录一致。如果是目录，如`/image/201907/`，表示继承原文件名输出到该目录。
                     * @param _outputDir 图片处理生成的文件输出的路径。如果不填表示与 InputInfo 中文件所在的目录一致。如果是目录，如`/image/201907/`，表示继承原文件名输出到该目录。
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}.{format}。
                     * @return OutputPath 输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}.{format}。
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}.{format}。
                     * @param _outputPath 输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}.{format}。
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取图片处理模板唯一标识。
图片模板功能内测中，如需使用请提交工单申请。
                     * @return Definition 图片处理模板唯一标识。
图片模板功能内测中，如需使用请提交工单申请。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置图片处理模板唯一标识。
图片模板功能内测中，如需使用请提交工单申请。
                     * @param _definition 图片处理模板唯一标识。
图片模板功能内测中，如需使用请提交工单申请。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。
                     * @return ResourceId 资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。
                     * @param _resourceId 资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取图片处理参数。
                     * @return ImageTask 图片处理参数。
                     * 
                     */
                    ImageTaskInput GetImageTask() const;

                    /**
                     * 设置图片处理参数。
                     * @param _imageTask 图片处理参数。
                     * 
                     */
                    void SetImageTask(const ImageTaskInput& _imageTask);

                    /**
                     * 判断参数 ImageTask 是否已赋值
                     * @return ImageTask 是否已赋值
                     * 
                     */
                    bool ImageTaskHasBeenSet() const;

                    /**
                     * 获取图片处理编排场景 ID。

- 30000：文字水印擦除
- 30010：图片扩展
- 30100：换装场景
                     * @return ScheduleId 图片处理编排场景 ID。

- 30000：文字水印擦除
- 30010：图片扩展
- 30100：换装场景
                     * 
                     */
                    uint64_t GetScheduleId() const;

                    /**
                     * 设置图片处理编排场景 ID。

- 30000：文字水印擦除
- 30010：图片扩展
- 30100：换装场景
                     * @param _scheduleId 图片处理编排场景 ID。

- 30000：文字水印擦除
- 30010：图片扩展
- 30100：换装场景
                     * 
                     */
                    void SetScheduleId(const uint64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取图片处理附加参数。
                     * @return AddOnParameter 图片处理附加参数。
                     * 
                     */
                    AddOnParameter GetAddOnParameter() const;

                    /**
                     * 设置图片处理附加参数。
                     * @param _addOnParameter 图片处理附加参数。
                     * 
                     */
                    void SetAddOnParameter(const AddOnParameter& _addOnParameter);

                    /**
                     * 判断参数 AddOnParameter 是否已赋值
                     * @return AddOnParameter 是否已赋值
                     * 
                     */
                    bool AddOnParameterHasBeenSet() const;

                    /**
                     * 获取图片处理拓展参数。
                     * @return StdExtInfo 图片处理拓展参数。
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置图片处理拓展参数。
                     * @param _stdExtInfo 图片处理拓展参数。
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                private:

                    /**
                     * 图片处理的文件输入信息。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 图片处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 图片处理生成的文件输出的路径。如果不填表示与 InputInfo 中文件所在的目录一致。如果是目录，如`/image/201907/`，表示继承原文件名输出到该目录。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}.{format}。
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * 图片处理模板唯一标识。
图片模板功能内测中，如需使用请提交工单申请。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 图片处理参数。
                     */
                    ImageTaskInput m_imageTask;
                    bool m_imageTaskHasBeenSet;

                    /**
                     * 图片处理编排场景 ID。

- 30000：文字水印擦除
- 30010：图片扩展
- 30100：换装场景
                     */
                    uint64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * 图片处理附加参数。
                     */
                    AddOnParameter m_addOnParameter;
                    bool m_addOnParameterHasBeenSet;

                    /**
                     * 图片处理拓展参数。
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGEREQUEST_H_
