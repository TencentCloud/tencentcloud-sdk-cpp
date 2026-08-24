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
                     * 获取<p>输入视频 / 图片的 URL</p>
                     * @return InputURL <p>输入视频 / 图片的 URL</p>
                     * 
                     */
                    std::string GetInputURL() const;

                    /**
                     * 设置<p>输入视频 / 图片的 URL</p>
                     * @param _inputURL <p>输入视频 / 图片的 URL</p>
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
                     * 获取<p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li></ul>
                     * @return ServiceType <p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li></ul>
                     * @param _serviceType <p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li></ul>
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
                     * 获取<p>任务元数据</p>
                     * @return Metadata <p>任务元数据</p>
                     * 
                     */
                    SeeTaskMetadata GetMetadata() const;

                    /**
                     * 设置<p>任务元数据</p>
                     * @param _metadata <p>任务元数据</p>
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
                     * 获取<p>视觉理解配置项</p>
                     * @return ComprehensionConfig <p>视觉理解配置项</p>
                     * 
                     */
                    SeeComprehensionConfig GetComprehensionConfig() const;

                    /**
                     * 设置<p>视觉理解配置项</p>
                     * @param _comprehensionConfig <p>视觉理解配置项</p>
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
                     * 获取<p>等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。</p>
                     * @return WaitResultTimeout <p>等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。</p>
                     * 
                     */
                    int64_t GetWaitResultTimeout() const;

                    /**
                     * 设置<p>等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。</p>
                     * @param _waitResultTimeout <p>等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。</p>
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
                     * 获取<p>回调目标 ID</p>
                     * @return CallbackId <p>回调目标 ID</p>
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置<p>回调目标 ID</p>
                     * @param _callbackId <p>回调目标 ID</p>
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
                     * <p>输入视频 / 图片的 URL</p>
                     */
                    std::string m_inputURL;
                    bool m_inputURLHasBeenSet;

                    /**
                     * <p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>任务元数据</p>
                     */
                    SeeTaskMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>视觉理解配置项</p>
                     */
                    SeeComprehensionConfig m_comprehensionConfig;
                    bool m_comprehensionConfigHasBeenSet;

                    /**
                     * <p>等待结果的超时时间（单位：秒）。填 0 表示无需等待结果。最大超时时长 25 秒，默认超时时长 20 秒。</p>
                     */
                    int64_t m_waitResultTimeout;
                    bool m_waitResultTimeoutHasBeenSet;

                    /**
                     * <p>回调目标 ID</p>
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONREQUEST_H_
