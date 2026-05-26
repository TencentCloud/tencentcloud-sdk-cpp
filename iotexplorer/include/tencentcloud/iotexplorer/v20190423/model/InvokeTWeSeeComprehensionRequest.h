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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskMetadata.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InvokeTWeSeeComprehension请求参数结构体
                */
                class InvokeTWeSeeComprehensionRequest : public AbstractModel
                {
                public:
                    InvokeTWeSeeComprehensionRequest();
                    ~InvokeTWeSeeComprehensionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入视频 / 图片的 URL
                     * @return InputURL 输入视频 / 图片的 URL
                     * 
                     */
                    std::string GetInputURL() const;

                    /**
                     * 设置输入视频 / 图片的 URL
                     * @param _inputURL 输入视频 / 图片的 URL
                     * 
                     */
                    void SetInputURL(const std::string& _inputURL);

                    /**
                     * 判断参数 InputURL 是否已赋值
                     * @return InputURL 是否已赋值
                     * 
                     */
                    bool InputURLHasBeenSet() const;

                    /**
                     * 获取算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * @return ServiceType 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * @param _serviceType 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取任务元数据
                     * @return Metadata 任务元数据
                     * 
                     */
                    SeeTaskMetadata GetMetadata() const;

                    /**
                     * 设置任务元数据
                     * @param _metadata 任务元数据
                     * 
                     */
                    void SetMetadata(const SeeTaskMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取视觉理解配置项
                     * @return ComprehensionConfig 视觉理解配置项
                     * 
                     */
                    SeeComprehensionConfig GetComprehensionConfig() const;

                    /**
                     * 设置视觉理解配置项
                     * @param _comprehensionConfig 视觉理解配置项
                     * 
                     */
                    void SetComprehensionConfig(const SeeComprehensionConfig& _comprehensionConfig);

                    /**
                     * 判断参数 ComprehensionConfig 是否已赋值
                     * @return ComprehensionConfig 是否已赋值
                     * 
                     */
                    bool ComprehensionConfigHasBeenSet() const;

                    /**
                     * 获取等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。
                     * @return WaitResultTimeout 等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。
                     * 
                     */
                    int64_t GetWaitResultTimeout() const;

                    /**
                     * 设置等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。
                     * @param _waitResultTimeout 等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。
                     * 
                     */
                    void SetWaitResultTimeout(const int64_t& _waitResultTimeout);

                    /**
                     * 判断参数 WaitResultTimeout 是否已赋值
                     * @return WaitResultTimeout 是否已赋值
                     * 
                     */
                    bool WaitResultTimeoutHasBeenSet() const;

                    /**
                     * 获取回调目标 ID
                     * @return CallbackId 回调目标 ID
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置回调目标 ID
                     * @param _callbackId 回调目标 ID
                     * 
                     */
                    void SetCallbackId(const std::string& _callbackId);

                    /**
                     * 判断参数 CallbackId 是否已赋值
                     * @return CallbackId 是否已赋值
                     * 
                     */
                    bool CallbackIdHasBeenSet() const;

                private:

                    /**
                     * 输入视频 / 图片的 URL
                     */
                    std::string m_inputURL;
                    bool m_inputURLHasBeenSet;

                    /**
                     * 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 任务元数据
                     */
                    SeeTaskMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 视觉理解配置项
                     */
                    SeeComprehensionConfig m_comprehensionConfig;
                    bool m_comprehensionConfigHasBeenSet;

                    /**
                     * 等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。
                     */
                    int64_t m_waitResultTimeout;
                    bool m_waitResultTimeoutHasBeenSet;

                    /**
                     * 回调目标 ID
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONREQUEST_H_
