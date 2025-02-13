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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECALLBACKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECALLBACKTEMPLATEREQUEST_H_

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
                * ModifyLiveCallbackTemplate请求参数结构体
                */
                class ModifyLiveCallbackTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLiveCallbackTemplateRequest();
                    ~ModifyLiveCallbackTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeLiveCallbackTemplates接口返回的模板 ID。
                     * @return TemplateId DescribeLiveCallbackTemplates接口返回的模板 ID。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置DescribeLiveCallbackTemplates接口返回的模板 ID。
                     * @param _templateId DescribeLiveCallbackTemplates接口返回的模板 ID。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _templateName 模板名称。
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
                     * @return Description 描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param _description 描述信息。
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
                     * 获取开播回调 URL。
                     * @return StreamBeginNotifyUrl 开播回调 URL。
                     * 
                     */
                    std::string GetStreamBeginNotifyUrl() const;

                    /**
                     * 设置开播回调 URL。
                     * @param _streamBeginNotifyUrl 开播回调 URL。
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
                     * 获取断流回调 URL。
                     * @return StreamEndNotifyUrl 断流回调 URL。
                     * 
                     */
                    std::string GetStreamEndNotifyUrl() const;

                    /**
                     * 设置断流回调 URL。
                     * @param _streamEndNotifyUrl 断流回调 URL。
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
                     * 获取录制文件回调 URL。
                     * @return RecordNotifyUrl 录制文件回调 URL。
                     * 
                     */
                    std::string GetRecordNotifyUrl() const;

                    /**
                     * 设置录制文件回调 URL。
                     * @param _recordNotifyUrl 录制文件回调 URL。
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
                     * 获取录制状态回调 URL 。
                     * @return RecordStatusNotifyUrl 录制状态回调 URL 。
                     * 
                     */
                    std::string GetRecordStatusNotifyUrl() const;

                    /**
                     * 设置录制状态回调 URL 。
                     * @param _recordStatusNotifyUrl 录制状态回调 URL 。
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
                     * 获取截图回调 URL。
                     * @return SnapshotNotifyUrl 截图回调 URL。
                     * 
                     */
                    std::string GetSnapshotNotifyUrl() const;

                    /**
                     * 设置截图回调 URL。
                     * @param _snapshotNotifyUrl 截图回调 URL。
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
                     * 获取鉴黄回调 URL。
                     * @return PornCensorshipNotifyUrl 鉴黄回调 URL。
                     * 
                     */
                    std::string GetPornCensorshipNotifyUrl() const;

                    /**
                     * 设置鉴黄回调 URL。
                     * @param _pornCensorshipNotifyUrl 鉴黄回调 URL。
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
                     * DescribeLiveCallbackTemplates接口返回的模板 ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开播回调 URL。
                     */
                    std::string m_streamBeginNotifyUrl;
                    bool m_streamBeginNotifyUrlHasBeenSet;

                    /**
                     * 断流回调 URL。
                     */
                    std::string m_streamEndNotifyUrl;
                    bool m_streamEndNotifyUrlHasBeenSet;

                    /**
                     * 录制文件回调 URL。
                     */
                    std::string m_recordNotifyUrl;
                    bool m_recordNotifyUrlHasBeenSet;

                    /**
                     * 录制状态回调 URL 。
                     */
                    std::string m_recordStatusNotifyUrl;
                    bool m_recordStatusNotifyUrlHasBeenSet;

                    /**
                     * 截图回调 URL。
                     */
                    std::string m_snapshotNotifyUrl;
                    bool m_snapshotNotifyUrlHasBeenSet;

                    /**
                     * 鉴黄回调 URL。
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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECALLBACKTEMPLATEREQUEST_H_
