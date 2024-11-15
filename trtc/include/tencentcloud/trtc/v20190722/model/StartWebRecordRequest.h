/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取需要录制的网页URL

                     * @return RecordUrl 需要录制的网页URL

                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置需要录制的网页URL

                     * @param _recordUrl 需要录制的网页URL

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
                     * 获取录制最大时长限制， 单位 s, 合法取值范围[1800, 36000], 默认 36000s(10 小时)

                     * @return MaxDurationLimit 录制最大时长限制， 单位 s, 合法取值范围[1800, 36000], 默认 36000s(10 小时)

                     * 
                     */
                    uint64_t GetMaxDurationLimit() const;

                    /**
                     * 设置录制最大时长限制， 单位 s, 合法取值范围[1800, 36000], 默认 36000s(10 小时)

                     * @param _maxDurationLimit 录制最大时长限制， 单位 s, 合法取值范围[1800, 36000], 默认 36000s(10 小时)

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
                     * 获取【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4
                     * @return StorageParams 【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4
                     * 
                     */
                    StorageParams GetStorageParams() const;

                    /**
                     * 设置【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4
                     * @param _storageParams 【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4
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
                     * 获取页面录制视频参数
                     * @return WebRecordVideoParams 页面录制视频参数
                     * 
                     */
                    WebRecordVideoParams GetWebRecordVideoParams() const;

                    /**
                     * 设置页面录制视频参数
                     * @param _webRecordVideoParams 页面录制视频参数
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
                     * 获取【必填】TRTC的SdkAppId
                     * @return SdkAppId 【必填】TRTC的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置【必填】TRTC的SdkAppId
                     * @param _sdkAppId 【必填】TRTC的SdkAppId
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
                     * 获取当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复
传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。
                     * @return RecordId 当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复
传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复
传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。
                     * @param _recordId 当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复
传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。
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
                     * 获取若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1
                     * @return PublishCdnParams 若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1
                     * @param _publishCdnParams 若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1
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
                     * 获取录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。
                     * @return ReadyTimeout 录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。
                     * 
                     */
                    uint64_t GetReadyTimeout() const;

                    /**
                     * 设置录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。
                     * @param _readyTimeout 录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。
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
                     * 获取渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。
                     * @return EmulateMobileParams 渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。
                     * 
                     */
                    EmulateMobileParams GetEmulateMobileParams() const;

                    /**
                     * 设置渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。
                     * @param _emulateMobileParams 渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。
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
                     * 需要录制的网页URL

                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * 录制最大时长限制， 单位 s, 合法取值范围[1800, 36000], 默认 36000s(10 小时)

                     */
                    uint64_t m_maxDurationLimit;
                    bool m_maxDurationLimitHasBeenSet;

                    /**
                     * 【必填】云存储相关的参数，目前支持腾讯云对象存储以及腾讯云云点播VOD，不支持第三方云存储；输出文件的存储格式仅支持hls或mp4
                     */
                    StorageParams m_storageParams;
                    bool m_storageParamsHasBeenSet;

                    /**
                     * 页面录制视频参数
                     */
                    WebRecordVideoParams m_webRecordVideoParams;
                    bool m_webRecordVideoParamsHasBeenSet;

                    /**
                     * 【必填】TRTC的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 当对重复任务敏感时，请关注此值： 为了避免任务在短时间内重复发起，导致任务重复
传入录制RecordId来标识此次任务， 小于32字节，若携带RecordId发起两次以上的开始录制请求，任务只会启动一个，第二个报错FailedOperation.TaskExist。注意StartWebRecord调用失败时而非FailedOperation.TaskExist错误，请更换RecordId重新发起。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 若您想要推流到CDN，可以使用PublishCdnParams.N参数设置，支持最多同时推流到10个CDN地址。若转推地址是腾讯云CDN时，请将IsTencentCdn明确设置为1
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * 录制页面资源加载的超时时间，单位：秒。默认值为 0 秒，该值需大于等于 0秒，且小于等于 60秒。录制页面未启用页面加载超时检测时，请勿设置此参数。
                     */
                    uint64_t m_readyTimeout;
                    bool m_readyTimeoutHasBeenSet;

                    /**
                     * 渲染移动模式参数；不准备渲染移动模式页面时，请勿设置此参数。
                     */
                    EmulateMobileParams m_emulateMobileParams;
                    bool m_emulateMobileParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_
