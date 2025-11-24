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
                     * 获取数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li>
                     * @return Type 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li>
                     * @param _type 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li>
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
                     * 获取媒体处理的文件输入信息。
                     * @return InputInfo 媒体处理的文件输入信息。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置媒体处理的文件输入信息。
                     * @param _inputInfo 媒体处理的文件输入信息。
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
                     * 获取任务的事件通知信息，不填代表不获取事件通知。
                     * @return TaskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知信息，不填代表不获取事件通知。
                     * @param _taskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
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
                     * 获取提取数字水印任务配置
                     * @return ExtractBlindWatermarkConfig 提取数字水印任务配置
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置提取数字水印任务配置
                     * @param _extractBlindWatermarkConfig 提取数字水印任务配置
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

                private:

                    /**
                     * 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-abseq：ab序列版权数字水印；</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 媒体处理的文件输入信息。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 任务的事件通知信息，不填代表不获取事件通知。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 提取数字水印任务配置
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                    /**
                     * 资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
