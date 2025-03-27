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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyEventConfig请求参数结构体
                */
                class ModifyEventConfigRequest : public AbstractModel
                {
                public:
                    ModifyEventConfigRequest();
                    ~ModifyEventConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取接收事件通知的方式。
<li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li>
<li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * @return Mode 接收事件通知的方式。
<li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li>
<li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置接收事件通知的方式。
<li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li>
<li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * @param _mode 接收事件通知的方式。
<li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li>
<li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取采用 [HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779) 接收方式时，用于接收 3.0 格式回调的地址。
注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。
                     * @return NotificationUrl 采用 [HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779) 接收方式时，用于接收 3.0 格式回调的地址。
注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。
                     * 
                     */
                    std::string GetNotificationUrl() const;

                    /**
                     * 设置采用 [HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779) 接收方式时，用于接收 3.0 格式回调的地址。
注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。
                     * @param _notificationUrl 采用 [HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779) 接收方式时，用于接收 3.0 格式回调的地址。
注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。
                     * 
                     */
                    void SetNotificationUrl(const std::string& _notificationUrl);

                    /**
                     * 判断参数 NotificationUrl 是否已赋值
                     * @return NotificationUrl 是否已赋值
                     * 
                     */
                    bool NotificationUrlHasBeenSet() const;

                    /**
                     * 获取是否接收 [视频上传完成](https://cloud.tencent.com/document/product/266/7830) 事件通知， 默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * @return UploadMediaCompleteEventSwitch 是否接收 [视频上传完成](https://cloud.tencent.com/document/product/266/7830) 事件通知， 默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * 
                     */
                    std::string GetUploadMediaCompleteEventSwitch() const;

                    /**
                     * 设置是否接收 [视频上传完成](https://cloud.tencent.com/document/product/266/7830) 事件通知， 默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * @param _uploadMediaCompleteEventSwitch 是否接收 [视频上传完成](https://cloud.tencent.com/document/product/266/7830) 事件通知， 默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * 
                     */
                    void SetUploadMediaCompleteEventSwitch(const std::string& _uploadMediaCompleteEventSwitch);

                    /**
                     * 判断参数 UploadMediaCompleteEventSwitch 是否已赋值
                     * @return UploadMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool UploadMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取是否接收 [视频删除完成](https://cloud.tencent.com/document/product/266/13434) 事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * @return DeleteMediaCompleteEventSwitch 是否接收 [视频删除完成](https://cloud.tencent.com/document/product/266/13434) 事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * 
                     */
                    std::string GetDeleteMediaCompleteEventSwitch() const;

                    /**
                     * 设置是否接收 [视频删除完成](https://cloud.tencent.com/document/product/266/13434) 事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * @param _deleteMediaCompleteEventSwitch 是否接收 [视频删除完成](https://cloud.tencent.com/document/product/266/13434) 事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * 
                     */
                    void SetDeleteMediaCompleteEventSwitch(const std::string& _deleteMediaCompleteEventSwitch);

                    /**
                     * 判断参数 DeleteMediaCompleteEventSwitch 是否已赋值
                     * @return DeleteMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool DeleteMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取是否接收剪辑固化完成事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * @return PersistenceCompleteEventSwitch 是否接收剪辑固化完成事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * 
                     */
                    std::string GetPersistenceCompleteEventSwitch() const;

                    /**
                     * 设置是否接收剪辑固化完成事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * @param _persistenceCompleteEventSwitch 是否接收剪辑固化完成事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     * 
                     */
                    void SetPersistenceCompleteEventSwitch(const std::string& _persistenceCompleteEventSwitch);

                    /**
                     * 判断参数 PersistenceCompleteEventSwitch 是否已赋值
                     * @return PersistenceCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventSwitchHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 接收事件通知的方式。
<li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li>
<li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 采用 [HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779) 接收方式时，用于接收 3.0 格式回调的地址。
注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * 是否接收 [视频上传完成](https://cloud.tencent.com/document/product/266/7830) 事件通知， 默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * 是否接收 [视频删除完成](https://cloud.tencent.com/document/product/266/13434) 事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * 是否接收剪辑固化完成事件通知，  默认 "OFF" 为忽略该事件通知，"ON" 为接收事件通知。
                     */
                    std::string m_persistenceCompleteEventSwitch;
                    bool m_persistenceCompleteEventSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
