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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/StorageParams.h>
#include <tencentcloud/trtc/v20190722/model/WebRecordVideoParams.h>
#include <tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h>
#include <tencentcloud/trtc/v20190722/model/EmulateMobileParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartWebRecord请求参数结构体
                */
                class StartWebRecordRequest : public AbstractModel
                {
                public:
                    StartWebRecordRequest();
                    ~StartWebRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>【必填】需要录制的网页URL</p>
                     * @return RecordUrl <p>【必填】需要录制的网页URL</p>
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置<p>【必填】需要录制的网页URL</p>
                     * @param _recordUrl <p>【必填】需要录制的网页URL</p>
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取<p>【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4</p>
                     * @return StorageParams <p>【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4</p>
                     * 
                     */
                    StorageParams GetStorageParams() const;

                    /**
                     * 设置<p>【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4</p>
                     * @param _storageParams <p>【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4</p>
                     * 
                     */
                    void SetStorageParams(const StorageParams& _storageParams);

                    /**
                     * 判断参数 StorageParams 是否已赋值
                     * @return StorageParams 是否已赋值
                     * 
                     */
                    bool StorageParamsHasBeenSet() const;

                    /**
                     * 获取<p>【必填】TRTC的SdkAppId</p>
                     * @return SdkAppId <p>【必填】TRTC的SdkAppId</p>
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>【必填】TRTC的SdkAppId</p>
                     * @param _sdkAppId <p>【必填】TRTC的SdkAppId</p>
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>录制最大时长限制， 单位 s, 合法取值范围[1800, 86400], 默认 86400s(24 小时)</p>
                     * @return MaxDurationLimit <p>录制最大时长限制， 单位 s, 合法取值范围[1800, 86400], 默认 86400s(24 小时)</p>
                     * 
                     */
                    uint64_t GetMaxDurationLimit() const;

                    /**
                     * 设置<p>录制最大时长限制， 单位 s, 合法取值范围[1800, 86400], 默认 86400s(24 小时)</p>
                     * @param _maxDurationLimit <p>录制最大时长限制， 单位 s, 合法取值范围[1800, 86400], 默认 86400s(24 小时)</p>
                     * 
                     */
                    void SetMaxDurationLimit(const uint64_t& _maxDurationLimit);

                    /**
                     * 判断参数 MaxDurationLimit 是否已赋值
                     * @return MaxDurationLimit 是否已赋值
                     * 
                     */
                    bool MaxDurationLimitHasBeenSet() const;

                    /**
                     * 获取<p>页面录制视频参数</p>
                     * @return WebRecordVideoParams <p>页面录制视频参数</p>
                     * 
                     */
                    WebRecordVideoParams GetWebRecordVideoParams() const;

                    /**
                     * 设置<p>页面录制视频参数</p>
                     * @param _webRecordVideoParams <p>页面录制视频参数</p>
                     * 
                     */
                    void SetWebRecordVideoParams(const WebRecordVideoParams& _webRecordVideoParams);

                    /**
                     * 判断参数 WebRecordVideoParams 是否已赋值
                     * @return WebRecordVideoParams 是否已赋值
                     * 
                     */
                    bool WebRecordVideoParamsHasBeenSet() const;

                    /**
                     * 获取<p>当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复<br>传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。</p>
                     * @return RecordId <p>当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复<br>传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复<br>传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。</p>
                     * @param _recordId <p>当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复<br>传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1</p>
                     * @return PublishCdnParams <p>若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1</p>
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置<p>若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1</p>
                     * @param _publishCdnParams <p>若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1</p>
                     * 
                     */
                    void SetPublishCdnParams(const std::vector<McuPublishCdnParam>& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     * 
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                    /**
                     * 获取<p>录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。</p>
                     * @return ReadyTimeout <p>录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。</p>
                     * 
                     */
                    uint64_t GetReadyTimeout() const;

                    /**
                     * 设置<p>录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。</p>
                     * @param _readyTimeout <p>录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。</p>
                     * 
                     */
                    void SetReadyTimeout(const uint64_t& _readyTimeout);

                    /**
                     * 判断参数 ReadyTimeout 是否已赋值
                     * @return ReadyTimeout 是否已赋值
                     * 
                     */
                    bool ReadyTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。</p>
                     * @return EmulateMobileParams <p>渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。</p>
                     * 
                     */
                    EmulateMobileParams GetEmulateMobileParams() const;

                    /**
                     * 设置<p>渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。</p>
                     * @param _emulateMobileParams <p>渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。</p>
                     * 
                     */
                    void SetEmulateMobileParams(const EmulateMobileParams& _emulateMobileParams);

                    /**
                     * 判断参数 EmulateMobileParams 是否已赋值
                     * @return EmulateMobileParams 是否已赋值
                     * 
                     */
                    bool EmulateMobileParamsHasBeenSet() const;

                private:

                    /**
                     * <p>【必填】需要录制的网页URL</p>
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * <p>【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4</p>
                     */
                    StorageParams m_storageParams;
                    bool m_storageParamsHasBeenSet;

                    /**
                     * <p>【必填】TRTC的SdkAppId</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>录制最大时长限制， 单位 s, 合法取值范围[1800, 86400], 默认 86400s(24 小时)</p>
                     */
                    uint64_t m_maxDurationLimit;
                    bool m_maxDurationLimitHasBeenSet;

                    /**
                     * <p>页面录制视频参数</p>
                     */
                    WebRecordVideoParams m_webRecordVideoParams;
                    bool m_webRecordVideoParamsHasBeenSet;

                    /**
                     * <p>当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复<br>传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1</p>
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * <p>录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。</p>
                     */
                    uint64_t m_readyTimeout;
                    bool m_readyTimeoutHasBeenSet;

                    /**
                     * <p>渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。</p>
                     */
                    EmulateMobileParams m_emulateMobileParams;
                    bool m_emulateMobileParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_
