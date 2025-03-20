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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ALARMPROFILELIST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ALARMPROFILELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ReceiveInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 通知模板
                */
                class AlarmProfileList : public AbstractModel
                {
                public:
                    AlarmProfileList();
                    ~AlarmProfileList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0-不是 1-是
                     * @return IsWebHook 0-不是 1-是
                     * 
                     */
                    int64_t GetIsWebHook() const;

                    /**
                     * 设置0-不是 1-是
                     * @param _isWebHook 0-不是 1-是
                     * 
                     */
                    void SetIsWebHook(const int64_t& _isWebHook);

                    /**
                     * 判断参数 IsWebHook 是否已赋值
                     * @return IsWebHook 是否已赋值
                     * 
                     */
                    bool IsWebHookHasBeenSet() const;

                    /**
                     * 获取接收告警用户数量
                     * @return ReceiveUinCount 接收告警用户数量
                     * 
                     */
                    int64_t GetReceiveUinCount() const;

                    /**
                     * 设置接收告警用户数量
                     * @param _receiveUinCount 接收告警用户数量
                     * 
                     */
                    void SetReceiveUinCount(const int64_t& _receiveUinCount);

                    /**
                     * 判断参数 ReceiveUinCount 是否已赋值
                     * @return ReceiveUinCount 是否已赋值
                     * 
                     */
                    bool ReceiveUinCountHasBeenSet() const;

                    /**
                     * 获取语言
                     * @return Lang 语言
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置语言
                     * @param _lang 语言
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取模板类型
                     * @return TemplateType 模板类型
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置模板类型
                     * @param _templateType 模板类型
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取接收组数量
                     * @return ReceiveGroupCount 接收组数量
                     * 
                     */
                    int64_t GetReceiveGroupCount() const;

                    /**
                     * 设置接收组数量
                     * @param _receiveGroupCount 接收组数量
                     * 
                     */
                    void SetReceiveGroupCount(const int64_t& _receiveGroupCount);

                    /**
                     * 判断参数 ReceiveGroupCount 是否已赋值
                     * @return ReceiveGroupCount 是否已赋值
                     * 
                     */
                    bool ReceiveGroupCountHasBeenSet() const;

                    /**
                     * 获取更新用户的uin
                     * @return UpdateUin 更新用户的uin
                     * 
                     */
                    int64_t GetUpdateUin() const;

                    /**
                     * 设置更新用户的uin
                     * @param _updateUin 更新用户的uin
                     * 
                     */
                    void SetUpdateUin(const int64_t& _updateUin);

                    /**
                     * 判断参数 UpdateUin 是否已赋值
                     * @return UpdateUin 是否已赋值
                     * 
                     */
                    bool UpdateUinHasBeenSet() const;

                    /**
                     * 获取接收类型
                     * @return ReceiveType 接收类型
                     * 
                     */
                    std::vector<int64_t> GetReceiveType() const;

                    /**
                     * 设置接收类型
                     * @param _receiveType 接收类型
                     * 
                     */
                    void SetReceiveType(const std::vector<int64_t>& _receiveType);

                    /**
                     * 判断参数 ReceiveType 是否已赋值
                     * @return ReceiveType 是否已赋值
                     * 
                     */
                    bool ReceiveTypeHasBeenSet() const;

                    /**
                     * 获取接收用户信息
                     * @return ReceiveInfo 接收用户信息
                     * 
                     */
                    std::vector<ReceiveInfo> GetReceiveInfo() const;

                    /**
                     * 设置接收用户信息
                     * @param _receiveInfo 接收用户信息
                     * 
                     */
                    void SetReceiveInfo(const std::vector<ReceiveInfo>& _receiveInfo);

                    /**
                     * 判断参数 ReceiveInfo 是否已赋值
                     * @return ReceiveInfo 是否已赋值
                     * 
                     */
                    bool ReceiveInfoHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取模板名
                     * @return TemplateName 模板名
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名
                     * @param _templateName 模板名
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
                     * 获取发送渠道
                     * @return SendChannel 发送渠道
                     * 
                     */
                    std::vector<int64_t> GetSendChannel() const;

                    /**
                     * 设置发送渠道
                     * @param _sendChannel 发送渠道
                     * 
                     */
                    void SetSendChannel(const std::vector<int64_t>& _sendChannel);

                    /**
                     * 判断参数 SendChannel 是否已赋值
                     * @return SendChannel 是否已赋值
                     * 
                     */
                    bool SendChannelHasBeenSet() const;

                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
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
                     * 获取webhook数量
                     * @return WebHookCount webhook数量
                     * 
                     */
                    int64_t GetWebHookCount() const;

                    /**
                     * 设置webhook数量
                     * @param _webHookCount webhook数量
                     * 
                     */
                    void SetWebHookCount(const int64_t& _webHookCount);

                    /**
                     * 判断参数 WebHookCount 是否已赋值
                     * @return WebHookCount 是否已赋值
                     * 
                     */
                    bool WebHookCountHasBeenSet() const;

                private:

                    /**
                     * 0-不是 1-是
                     */
                    int64_t m_isWebHook;
                    bool m_isWebHookHasBeenSet;

                    /**
                     * 接收告警用户数量
                     */
                    int64_t m_receiveUinCount;
                    bool m_receiveUinCountHasBeenSet;

                    /**
                     * 语言
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 模板类型
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 接收组数量
                     */
                    int64_t m_receiveGroupCount;
                    bool m_receiveGroupCountHasBeenSet;

                    /**
                     * 更新用户的uin
                     */
                    int64_t m_updateUin;
                    bool m_updateUinHasBeenSet;

                    /**
                     * 接收类型
                     */
                    std::vector<int64_t> m_receiveType;
                    bool m_receiveTypeHasBeenSet;

                    /**
                     * 接收用户信息
                     */
                    std::vector<ReceiveInfo> m_receiveInfo;
                    bool m_receiveInfoHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 模板名
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 发送渠道
                     */
                    std::vector<int64_t> m_sendChannel;
                    bool m_sendChannelHasBeenSet;

                    /**
                     * 模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * webhook数量
                     */
                    int64_t m_webHookCount;
                    bool m_webHookCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ALARMPROFILELIST_H_
