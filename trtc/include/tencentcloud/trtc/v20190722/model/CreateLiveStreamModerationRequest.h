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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATELIVESTREAMMODERATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATELIVESTREAMMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/Input.h>
#include <tencentcloud/trtc/v20190722/model/LiveModerationParams.h>
#include <tencentcloud/trtc/v20190722/model/SourceInfo.h>
#include <tencentcloud/trtc/v20190722/model/LiveModerationStorageParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateLiveStreamModeration请求参数结构体
                */
                class CreateLiveStreamModerationRequest : public AbstractModel
                {
                public:
                    CreateLiveStreamModerationRequest();
                    ~CreateLiveStreamModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>。</p>
                     * @return SdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>。</p>
                     * @param _sdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>直播流输入源</p>
                     * @return Input <p>直播流输入源</p>
                     * 
                     */
                    Input GetInput() const;

                    /**
                     * 设置<p>直播流输入源</p>
                     * @param _input <p>直播流输入源</p>
                     * 
                     */
                    void SetInput(const Input& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>直播流ai理解审核参数</p>
                     * @return LiveModerationParams <p>直播流ai理解审核参数</p>
                     * 
                     */
                    LiveModerationParams GetLiveModerationParams() const;

                    /**
                     * 设置<p>直播流ai理解审核参数</p>
                     * @param _liveModerationParams <p>直播流ai理解审核参数</p>
                     * 
                     */
                    void SetLiveModerationParams(const LiveModerationParams& _liveModerationParams);

                    /**
                     * 判断参数 LiveModerationParams 是否已赋值
                     * @return LiveModerationParams 是否已赋值
                     * 
                     */
                    bool LiveModerationParamsHasBeenSet() const;

                    /**
                     * 获取<p>业务自定义唯一标识，原样透传到回调</p><p>入参限制：长度限制60字符</p>
                     * @return DataId <p>业务自定义唯一标识，原样透传到回调</p><p>入参限制：长度限制60字符</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置<p>业务自定义唯一标识，原样透传到回调</p><p>入参限制：长度限制60字符</p>
                     * @param _dataId <p>业务自定义唯一标识，原样透传到回调</p><p>入参限制：长度限制60字符</p>
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>额外信息透传结构体（房间/主播/业务自定义），原样回带到回调</p>
                     * @return SourceInfo <p>额外信息透传结构体（房间/主播/业务自定义），原样回带到回调</p>
                     * 
                     */
                    SourceInfo GetSourceInfo() const;

                    /**
                     * 设置<p>额外信息透传结构体（房间/主播/业务自定义），原样回带到回调</p>
                     * @param _sourceInfo <p>额外信息透传结构体（房间/主播/业务自定义），原样回带到回调</p>
                     * 
                     */
                    void SetSourceInfo(const SourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取<p>直播流ai理解转存文件存储参数</p>
                     * @return LiveModerationStorageParams <p>直播流ai理解转存文件存储参数</p>
                     * 
                     */
                    LiveModerationStorageParams GetLiveModerationStorageParams() const;

                    /**
                     * 设置<p>直播流ai理解转存文件存储参数</p>
                     * @param _liveModerationStorageParams <p>直播流ai理解转存文件存储参数</p>
                     * 
                     */
                    void SetLiveModerationStorageParams(const LiveModerationStorageParams& _liveModerationStorageParams);

                    /**
                     * 判断参数 LiveModerationStorageParams 是否已赋值
                     * @return LiveModerationStorageParams 是否已赋值
                     * 
                     */
                    bool LiveModerationStorageParamsHasBeenSet() const;

                    /**
                     * 获取<p>单路任务最大的生命周期</p><p>取值范围：[1, 72]</p><p>单位：小时</p><p>默认值：48</p>
                     * @return ResourceExpiredHour <p>单路任务最大的生命周期</p><p>取值范围：[1, 72]</p><p>单位：小时</p><p>默认值：48</p>
                     * 
                     */
                    uint64_t GetResourceExpiredHour() const;

                    /**
                     * 设置<p>单路任务最大的生命周期</p><p>取值范围：[1, 72]</p><p>单位：小时</p><p>默认值：48</p>
                     * @param _resourceExpiredHour <p>单路任务最大的生命周期</p><p>取值范围：[1, 72]</p><p>单位：小时</p><p>默认值：48</p>
                     * 
                     */
                    void SetResourceExpiredHour(const uint64_t& _resourceExpiredHour);

                    /**
                     * 判断参数 ResourceExpiredHour 是否已赋值
                     * @return ResourceExpiredHour 是否已赋值
                     * 
                     */
                    bool ResourceExpiredHourHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>直播流输入源</p>
                     */
                    Input m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>直播流ai理解审核参数</p>
                     */
                    LiveModerationParams m_liveModerationParams;
                    bool m_liveModerationParamsHasBeenSet;

                    /**
                     * <p>业务自定义唯一标识，原样透传到回调</p><p>入参限制：长度限制60字符</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>额外信息透传结构体（房间/主播/业务自定义），原样回带到回调</p>
                     */
                    SourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * <p>直播流ai理解转存文件存储参数</p>
                     */
                    LiveModerationStorageParams m_liveModerationStorageParams;
                    bool m_liveModerationStorageParamsHasBeenSet;

                    /**
                     * <p>单路任务最大的生命周期</p><p>取值范围：[1, 72]</p><p>单位：小时</p><p>默认值：48</p>
                     */
                    uint64_t m_resourceExpiredHour;
                    bool m_resourceExpiredHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATELIVESTREAMMODERATIONREQUEST_H_
