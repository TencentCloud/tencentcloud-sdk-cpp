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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkTaskConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ExtractBlindWatermark请求参数结构体
                */
                class ExtractBlindWatermarkRequest : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkRequest();
                    ~ExtractBlindWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数字水印类型，可选值：</p><li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li><li>blind-vega：vega数字水印；</li>
                     * @return Type <p>数字水印类型，可选值：</p><li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li><li>blind-vega：vega数字水印；</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数字水印类型，可选值：</p><li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li><li>blind-vega：vega数字水印；</li>
                     * @param _type <p>数字水印类型，可选值：</p><li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li><li>blind-vega：vega数字水印；</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>媒体处理的文件输入信息。</p>
                     * @return InputInfo <p>媒体处理的文件输入信息。</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>媒体处理的文件输入信息。</p>
                     * @param _inputInfo <p>媒体处理的文件输入信息。</p>
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
                     * 获取<p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * @return TaskNotifyConfig <p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置<p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * @param _taskNotifyConfig <p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取<p>提取数字水印任务配置</p>
                     * @return ExtractBlindWatermarkConfig <p>提取数字水印任务配置</p>
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置<p>提取数字水印任务配置</p>
                     * @param _extractBlindWatermarkConfig <p>提取数字水印任务配置</p>
                     * 
                     */
                    void SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig);

                    /**
                     * 判断参数 ExtractBlindWatermarkConfig 是否已赋值
                     * @return ExtractBlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * @return ResourceId <p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * @param _resourceId <p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>数字水印类型，可选值：</p><li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li><li>blind-vega：vega数字水印；</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>媒体处理的文件输入信息。</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * <p>提取数字水印任务配置</p>
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                    /**
                     * <p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
