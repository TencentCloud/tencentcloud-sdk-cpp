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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 回调模板信息。
                */
                class CallBackTemplateInfo : public AbstractModel
                {
                public:
                    CallBackTemplateInfo();
                    ~CallBackTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板 ID。
                     * @return TemplateId 模板 ID。
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板 ID。
                     * @param TemplateId 模板 ID。
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param TemplateName 模板名称。
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param Description 描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取开播回调 URL。
                     * @return StreamBeginNotifyUrl 开播回调 URL。
                     */
                    std::string GetStreamBeginNotifyUrl() const;

                    /**
                     * 设置开播回调 URL。
                     * @param StreamBeginNotifyUrl 开播回调 URL。
                     */
                    void SetStreamBeginNotifyUrl(const std::string& _streamBeginNotifyUrl);

                    /**
                     * 判断参数 StreamBeginNotifyUrl 是否已赋值
                     * @return StreamBeginNotifyUrl 是否已赋值
                     */
                    bool StreamBeginNotifyUrlHasBeenSet() const;

                    /**
                     * 获取混流回调 URL。(参数已弃用)。
                     * @return StreamMixNotifyUrl 混流回调 URL。(参数已弃用)。
                     */
                    std::string GetStreamMixNotifyUrl() const;

                    /**
                     * 设置混流回调 URL。(参数已弃用)。
                     * @param StreamMixNotifyUrl 混流回调 URL。(参数已弃用)。
                     */
                    void SetStreamMixNotifyUrl(const std::string& _streamMixNotifyUrl);

                    /**
                     * 判断参数 StreamMixNotifyUrl 是否已赋值
                     * @return StreamMixNotifyUrl 是否已赋值
                     */
                    bool StreamMixNotifyUrlHasBeenSet() const;

                    /**
                     * 获取断流回调 URL。
                     * @return StreamEndNotifyUrl 断流回调 URL。
                     */
                    std::string GetStreamEndNotifyUrl() const;

                    /**
                     * 设置断流回调 URL。
                     * @param StreamEndNotifyUrl 断流回调 URL。
                     */
                    void SetStreamEndNotifyUrl(const std::string& _streamEndNotifyUrl);

                    /**
                     * 判断参数 StreamEndNotifyUrl 是否已赋值
                     * @return StreamEndNotifyUrl 是否已赋值
                     */
                    bool StreamEndNotifyUrlHasBeenSet() const;

                    /**
                     * 获取录制回调 URL。
                     * @return RecordNotifyUrl 录制回调 URL。
                     */
                    std::string GetRecordNotifyUrl() const;

                    /**
                     * 设置录制回调 URL。
                     * @param RecordNotifyUrl 录制回调 URL。
                     */
                    void SetRecordNotifyUrl(const std::string& _recordNotifyUrl);

                    /**
                     * 判断参数 RecordNotifyUrl 是否已赋值
                     * @return RecordNotifyUrl 是否已赋值
                     */
                    bool RecordNotifyUrlHasBeenSet() const;

                    /**
                     * 获取截图回调 URL。
                     * @return SnapshotNotifyUrl 截图回调 URL。
                     */
                    std::string GetSnapshotNotifyUrl() const;

                    /**
                     * 设置截图回调 URL。
                     * @param SnapshotNotifyUrl 截图回调 URL。
                     */
                    void SetSnapshotNotifyUrl(const std::string& _snapshotNotifyUrl);

                    /**
                     * 判断参数 SnapshotNotifyUrl 是否已赋值
                     * @return SnapshotNotifyUrl 是否已赋值
                     */
                    bool SnapshotNotifyUrlHasBeenSet() const;

                    /**
                     * 获取鉴黄回调 URL。
                     * @return PornCensorshipNotifyUrl 鉴黄回调 URL。
                     */
                    std::string GetPornCensorshipNotifyUrl() const;

                    /**
                     * 设置鉴黄回调 URL。
                     * @param PornCensorshipNotifyUrl 鉴黄回调 URL。
                     */
                    void SetPornCensorshipNotifyUrl(const std::string& _pornCensorshipNotifyUrl);

                    /**
                     * 判断参数 PornCensorshipNotifyUrl 是否已赋值
                     * @return PornCensorshipNotifyUrl 是否已赋值
                     */
                    bool PornCensorshipNotifyUrlHasBeenSet() const;

                    /**
                     * 获取回调的鉴权 key。
                     * @return CallbackKey 回调的鉴权 key。
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置回调的鉴权 key。
                     * @param CallbackKey 回调的鉴权 key。
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取推流异常回调 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PushExceptionNotifyUrl 推流异常回调 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPushExceptionNotifyUrl() const;

                    /**
                     * 设置推流异常回调 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PushExceptionNotifyUrl 推流异常回调 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPushExceptionNotifyUrl(const std::string& _pushExceptionNotifyUrl);

                    /**
                     * 判断参数 PushExceptionNotifyUrl 是否已赋值
                     * @return PushExceptionNotifyUrl 是否已赋值
                     */
                    bool PushExceptionNotifyUrlHasBeenSet() const;

                private:

                    /**
                     * 模板 ID。
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
                     * 混流回调 URL。(参数已弃用)。
                     */
                    std::string m_streamMixNotifyUrl;
                    bool m_streamMixNotifyUrlHasBeenSet;

                    /**
                     * 断流回调 URL。
                     */
                    std::string m_streamEndNotifyUrl;
                    bool m_streamEndNotifyUrlHasBeenSet;

                    /**
                     * 录制回调 URL。
                     */
                    std::string m_recordNotifyUrl;
                    bool m_recordNotifyUrlHasBeenSet;

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
                     * 回调的鉴权 key。
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * 推流异常回调 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pushExceptionNotifyUrl;
                    bool m_pushExceptionNotifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKTEMPLATEINFO_H_
