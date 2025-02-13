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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECALLBACKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECALLBACKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveCallbackTemplate请求参数结构体
                */
                class CreateLiveCallbackTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveCallbackTemplateRequest();
                    ~CreateLiveCallbackTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * @return TemplateName 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * @param _templateName 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * @return Description 描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * @param _description 描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取开播回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @return StreamBeginNotifyUrl 开播回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    std::string GetStreamBeginNotifyUrl() const;

                    /**
                     * 设置开播回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @param _streamBeginNotifyUrl 开播回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    void SetStreamBeginNotifyUrl(const std::string& _streamBeginNotifyUrl);

                    /**
                     * 判断参数 StreamBeginNotifyUrl 是否已赋值
                     * @return StreamBeginNotifyUrl 是否已赋值
                     * 
                     */
                    bool StreamBeginNotifyUrlHasBeenSet() const;

                    /**
                     * 获取断流回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @return StreamEndNotifyUrl 断流回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    std::string GetStreamEndNotifyUrl() const;

                    /**
                     * 设置断流回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @param _streamEndNotifyUrl 断流回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    void SetStreamEndNotifyUrl(const std::string& _streamEndNotifyUrl);

                    /**
                     * 判断参数 StreamEndNotifyUrl 是否已赋值
                     * @return StreamEndNotifyUrl 是否已赋值
                     * 
                     */
                    bool StreamEndNotifyUrlHasBeenSet() const;

                    /**
                     * 获取录制文件回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @return RecordNotifyUrl 录制文件回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    std::string GetRecordNotifyUrl() const;

                    /**
                     * 设置录制文件回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @param _recordNotifyUrl 录制文件回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    void SetRecordNotifyUrl(const std::string& _recordNotifyUrl);

                    /**
                     * 判断参数 RecordNotifyUrl 是否已赋值
                     * @return RecordNotifyUrl 是否已赋值
                     * 
                     */
                    bool RecordNotifyUrlHasBeenSet() const;

                    /**
                     * 获取录制状态回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @return RecordStatusNotifyUrl 录制状态回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    std::string GetRecordStatusNotifyUrl() const;

                    /**
                     * 设置录制状态回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @param _recordStatusNotifyUrl 录制状态回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    void SetRecordStatusNotifyUrl(const std::string& _recordStatusNotifyUrl);

                    /**
                     * 判断参数 RecordStatusNotifyUrl 是否已赋值
                     * @return RecordStatusNotifyUrl 是否已赋值
                     * 
                     */
                    bool RecordStatusNotifyUrlHasBeenSet() const;

                    /**
                     * 获取截图回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @return SnapshotNotifyUrl 截图回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    std::string GetSnapshotNotifyUrl() const;

                    /**
                     * 设置截图回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * @param _snapshotNotifyUrl 截图回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    void SetSnapshotNotifyUrl(const std::string& _snapshotNotifyUrl);

                    /**
                     * 判断参数 SnapshotNotifyUrl 是否已赋值
                     * @return SnapshotNotifyUrl 是否已赋值
                     * 
                     */
                    bool SnapshotNotifyUrlHasBeenSet() const;

                    /**
                     * 获取鉴黄回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32741)。
                     * @return PornCensorshipNotifyUrl 鉴黄回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32741)。
                     * 
                     */
                    std::string GetPornCensorshipNotifyUrl() const;

                    /**
                     * 设置鉴黄回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32741)。
                     * @param _pornCensorshipNotifyUrl 鉴黄回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32741)。
                     * 
                     */
                    void SetPornCensorshipNotifyUrl(const std::string& _pornCensorshipNotifyUrl);

                    /**
                     * 判断参数 PornCensorshipNotifyUrl 是否已赋值
                     * @return PornCensorshipNotifyUrl 是否已赋值
                     * 
                     */
                    bool PornCensorshipNotifyUrlHasBeenSet() const;

                    /**
                     * 获取回调 Key，回调 URL 公用，回调签名详见事件消息通知文档。
[事件消息通知](/document/product/267/32744)。
                     * @return CallbackKey 回调 Key，回调 URL 公用，回调签名详见事件消息通知文档。
[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置回调 Key，回调 URL 公用，回调签名详见事件消息通知文档。
[事件消息通知](/document/product/267/32744)。
                     * @param _callbackKey 回调 Key，回调 URL 公用，回调签名详见事件消息通知文档。
[事件消息通知](/document/product/267/32744)。
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取参数已弃用。
                     * @return StreamMixNotifyUrl 参数已弃用。
                     * 
                     */
                    std::string GetStreamMixNotifyUrl() const;

                    /**
                     * 设置参数已弃用。
                     * @param _streamMixNotifyUrl 参数已弃用。
                     * 
                     */
                    void SetStreamMixNotifyUrl(const std::string& _streamMixNotifyUrl);

                    /**
                     * 判断参数 StreamMixNotifyUrl 是否已赋值
                     * @return StreamMixNotifyUrl 是否已赋值
                     * 
                     */
                    bool StreamMixNotifyUrlHasBeenSet() const;

                    /**
                     * 获取推流异常回调 URL。
                     * @return PushExceptionNotifyUrl 推流异常回调 URL。
                     * 
                     */
                    std::string GetPushExceptionNotifyUrl() const;

                    /**
                     * 设置推流异常回调 URL。
                     * @param _pushExceptionNotifyUrl 推流异常回调 URL。
                     * 
                     */
                    void SetPushExceptionNotifyUrl(const std::string& _pushExceptionNotifyUrl);

                    /**
                     * 判断参数 PushExceptionNotifyUrl 是否已赋值
                     * @return PushExceptionNotifyUrl 是否已赋值
                     * 
                     */
                    bool PushExceptionNotifyUrlHasBeenSet() const;

                    /**
                     * 获取音频审核回调 URL。
                     * @return AudioAuditNotifyUrl 音频审核回调 URL。
                     * 
                     */
                    std::string GetAudioAuditNotifyUrl() const;

                    /**
                     * 设置音频审核回调 URL。
                     * @param _audioAuditNotifyUrl 音频审核回调 URL。
                     * 
                     */
                    void SetAudioAuditNotifyUrl(const std::string& _audioAuditNotifyUrl);

                    /**
                     * 判断参数 AudioAuditNotifyUrl 是否已赋值
                     * @return AudioAuditNotifyUrl 是否已赋值
                     * 
                     */
                    bool AudioAuditNotifyUrlHasBeenSet() const;

                    /**
                     * 获取录制异常回调 URL。
                     * @return RecordExceptionNotifyUrl 录制异常回调 URL。
                     * 
                     */
                    std::string GetRecordExceptionNotifyUrl() const;

                    /**
                     * 设置录制异常回调 URL。
                     * @param _recordExceptionNotifyUrl 录制异常回调 URL。
                     * 
                     */
                    void SetRecordExceptionNotifyUrl(const std::string& _recordExceptionNotifyUrl);

                    /**
                     * 判断参数 RecordExceptionNotifyUrl 是否已赋值
                     * @return RecordExceptionNotifyUrl 是否已赋值
                     * 
                     */
                    bool RecordExceptionNotifyUrlHasBeenSet() const;

                    /**
                     * 获取录制异常回调级别，可选择：error、warning、info。
                     * @return RecordExceptionLevels 录制异常回调级别，可选择：error、warning、info。
                     * 
                     */
                    std::vector<std::string> GetRecordExceptionLevels() const;

                    /**
                     * 设置录制异常回调级别，可选择：error、warning、info。
                     * @param _recordExceptionLevels 录制异常回调级别，可选择：error、warning、info。
                     * 
                     */
                    void SetRecordExceptionLevels(const std::vector<std::string>& _recordExceptionLevels);

                    /**
                     * 判断参数 RecordExceptionLevels 是否已赋值
                     * @return RecordExceptionLevels 是否已赋值
                     * 
                     */
                    bool RecordExceptionLevelsHasBeenSet() const;

                private:

                    /**
                     * 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开播回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     */
                    std::string m_streamBeginNotifyUrl;
                    bool m_streamBeginNotifyUrlHasBeenSet;

                    /**
                     * 断流回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     */
                    std::string m_streamEndNotifyUrl;
                    bool m_streamEndNotifyUrlHasBeenSet;

                    /**
                     * 录制文件回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     */
                    std::string m_recordNotifyUrl;
                    bool m_recordNotifyUrlHasBeenSet;

                    /**
                     * 录制状态回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     */
                    std::string m_recordStatusNotifyUrl;
                    bool m_recordStatusNotifyUrlHasBeenSet;

                    /**
                     * 截图回调 URL，
相关协议文档：[事件消息通知](/document/product/267/32744)。
                     */
                    std::string m_snapshotNotifyUrl;
                    bool m_snapshotNotifyUrlHasBeenSet;

                    /**
                     * 鉴黄回调 URL ，
相关协议文档：[事件消息通知](/document/product/267/32741)。
                     */
                    std::string m_pornCensorshipNotifyUrl;
                    bool m_pornCensorshipNotifyUrlHasBeenSet;

                    /**
                     * 回调 Key，回调 URL 公用，回调签名详见事件消息通知文档。
[事件消息通知](/document/product/267/32744)。
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * 参数已弃用。
                     */
                    std::string m_streamMixNotifyUrl;
                    bool m_streamMixNotifyUrlHasBeenSet;

                    /**
                     * 推流异常回调 URL。
                     */
                    std::string m_pushExceptionNotifyUrl;
                    bool m_pushExceptionNotifyUrlHasBeenSet;

                    /**
                     * 音频审核回调 URL。
                     */
                    std::string m_audioAuditNotifyUrl;
                    bool m_audioAuditNotifyUrlHasBeenSet;

                    /**
                     * 录制异常回调 URL。
                     */
                    std::string m_recordExceptionNotifyUrl;
                    bool m_recordExceptionNotifyUrlHasBeenSet;

                    /**
                     * 录制异常回调级别，可选择：error、warning、info。
                     */
                    std::vector<std::string> m_recordExceptionLevels;
                    bool m_recordExceptionLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECALLBACKTEMPLATEREQUEST_H_
