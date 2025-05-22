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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 仪表盘订阅通知方式
                */
                class DashboardNoticeMode : public AbstractModel
                {
                public:
                    DashboardNoticeMode();
                    ~DashboardNoticeMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仪表盘通知方式。<br>
<li/>Uin：腾讯云用户<br>
<li/>Group：腾讯云用户组<br>
<li/>Email：自定义Email<br>
<li/>WeCom: 企业微信回调
                     * @return ReceiverType 仪表盘通知方式。<br>
<li/>Uin：腾讯云用户<br>
<li/>Group：腾讯云用户组<br>
<li/>Email：自定义Email<br>
<li/>WeCom: 企业微信回调
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置仪表盘通知方式。<br>
<li/>Uin：腾讯云用户<br>
<li/>Group：腾讯云用户组<br>
<li/>Email：自定义Email<br>
<li/>WeCom: 企业微信回调
                     * @param _receiverType 仪表盘通知方式。<br>
<li/>Uin：腾讯云用户<br>
<li/>Group：腾讯云用户组<br>
<li/>Email：自定义Email<br>
<li/>WeCom: 企业微信回调
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取知方式对应的值。
<br> <li/> 当ReceiverType不是 WeCom 时，Values必填。
                     * @return Values 知方式对应的值。
<br> <li/> 当ReceiverType不是 WeCom 时，Values必填。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置知方式对应的值。
<br> <li/> 当ReceiverType不是 WeCom 时，Values必填。
                     * @param _values 知方式对应的值。
<br> <li/> 当ReceiverType不是 WeCom 时，Values必填。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取仪表盘通知渠道。
<br><li/> 支持：["Email","Sms","WeChat","Phone"]。
<br><li/> 当ReceiverType是 Email 或 WeCom 时，ReceiverChannels不能赋值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverChannels 仪表盘通知渠道。
<br><li/> 支持：["Email","Sms","WeChat","Phone"]。
<br><li/> 当ReceiverType是 Email 或 WeCom 时，ReceiverChannels不能赋值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceiverChannels() const;

                    /**
                     * 设置仪表盘通知渠道。
<br><li/> 支持：["Email","Sms","WeChat","Phone"]。
<br><li/> 当ReceiverType是 Email 或 WeCom 时，ReceiverChannels不能赋值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverChannels 仪表盘通知渠道。
<br><li/> 支持：["Email","Sms","WeChat","Phone"]。
<br><li/> 当ReceiverType是 Email 或 WeCom 时，ReceiverChannels不能赋值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverChannels(const std::vector<std::string>& _receiverChannels);

                    /**
                     * 判断参数 ReceiverChannels 是否已赋值
                     * @return ReceiverChannels 是否已赋值
                     * 
                     */
                    bool ReceiverChannelsHasBeenSet() const;

                    /**
                     * 获取回调Url。
<br><li/> 当ReceiverType是 WeCom 时，Url必填。
<br><li/> 当ReceiverType不是 WeCom 时，Url不能填写。
                     * @return Url 回调Url。
<br><li/> 当ReceiverType是 WeCom 时，Url必填。
<br><li/> 当ReceiverType不是 WeCom 时，Url不能填写。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置回调Url。
<br><li/> 当ReceiverType是 WeCom 时，Url必填。
<br><li/> 当ReceiverType不是 WeCom 时，Url不能填写。
                     * @param _url 回调Url。
<br><li/> 当ReceiverType是 WeCom 时，Url必填。
<br><li/> 当ReceiverType不是 WeCom 时，Url不能填写。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 仪表盘通知方式。<br>
<li/>Uin：腾讯云用户<br>
<li/>Group：腾讯云用户组<br>
<li/>Email：自定义Email<br>
<li/>WeCom: 企业微信回调
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 知方式对应的值。
<br> <li/> 当ReceiverType不是 WeCom 时，Values必填。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 仪表盘通知渠道。
<br><li/> 支持：["Email","Sms","WeChat","Phone"]。
<br><li/> 当ReceiverType是 Email 或 WeCom 时，ReceiverChannels不能赋值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receiverChannels;
                    bool m_receiverChannelsHasBeenSet;

                    /**
                     * 回调Url。
<br><li/> 当ReceiverType是 WeCom 时，Url必填。
<br><li/> 当ReceiverType不是 WeCom 时，Url不能填写。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_
