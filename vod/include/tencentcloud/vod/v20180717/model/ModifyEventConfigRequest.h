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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>接收事件通知的方式。</p><li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li><li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * @return Mode <p>接收事件通知的方式。</p><li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li><li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>接收事件通知的方式。</p><li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li><li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     * @param _mode <p>接收事件通知的方式。</p><li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li><li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
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
                     * 获取<p>采用 <a href="https://cloud.tencent.com/document/product/266/33779">HTTP 回调通知</a> 接收方式时，用于接收 3.0 格式回调的地址。<br>注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。</p>
                     * @return NotificationUrl <p>采用 <a href="https://cloud.tencent.com/document/product/266/33779">HTTP 回调通知</a> 接收方式时，用于接收 3.0 格式回调的地址。<br>注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。</p>
                     * 
                     */
                    std::string GetNotificationUrl() const;

                    /**
                     * 设置<p>采用 <a href="https://cloud.tencent.com/document/product/266/33779">HTTP 回调通知</a> 接收方式时，用于接收 3.0 格式回调的地址。<br>注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。</p>
                     * @param _notificationUrl <p>采用 <a href="https://cloud.tencent.com/document/product/266/33779">HTTP 回调通知</a> 接收方式时，用于接收 3.0 格式回调的地址。<br>注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。</p>
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
                     * 获取<p>是否接收 <a href="https://cloud.tencent.com/document/product/266/7830">视频上传完成</a> 事件通知， 默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * @return UploadMediaCompleteEventSwitch <p>是否接收 <a href="https://cloud.tencent.com/document/product/266/7830">视频上传完成</a> 事件通知， 默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * 
                     */
                    std::string GetUploadMediaCompleteEventSwitch() const;

                    /**
                     * 设置<p>是否接收 <a href="https://cloud.tencent.com/document/product/266/7830">视频上传完成</a> 事件通知， 默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * @param _uploadMediaCompleteEventSwitch <p>是否接收 <a href="https://cloud.tencent.com/document/product/266/7830">视频上传完成</a> 事件通知， 默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
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
                     * 获取<p>是否接收 <a href="https://cloud.tencent.com/document/product/266/13434">视频删除完成</a> 事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * @return DeleteMediaCompleteEventSwitch <p>是否接收 <a href="https://cloud.tencent.com/document/product/266/13434">视频删除完成</a> 事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * 
                     */
                    std::string GetDeleteMediaCompleteEventSwitch() const;

                    /**
                     * 设置<p>是否接收 <a href="https://cloud.tencent.com/document/product/266/13434">视频删除完成</a> 事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * @param _deleteMediaCompleteEventSwitch <p>是否接收 <a href="https://cloud.tencent.com/document/product/266/13434">视频删除完成</a> 事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
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
                     * 获取<p>是否接收剪辑固化完成事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * @return PersistenceCompleteEventSwitch <p>是否接收剪辑固化完成事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * 
                     */
                    std::string GetPersistenceCompleteEventSwitch() const;

                    /**
                     * 设置<p>是否接收剪辑固化完成事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * @param _persistenceCompleteEventSwitch <p>是否接收剪辑固化完成事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     * 
                     */
                    void SetPersistenceCompleteEventSwitch(const std::string& _persistenceCompleteEventSwitch);

                    /**
                     * 判断参数 PersistenceCompleteEventSwitch 是否已赋值
                     * @return PersistenceCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取<p>回调密钥，由大小写字母及数字组成，最长32字符。配置后将在回调中发送<code>Sign</code>与<code>T</code>字段，可用于鉴权。</p><ul><li><code>Sign</code>：string类型。事件通知安全签名 Sign = MD5（SignKey + T）。说明：腾讯云把加密 SignKey 和 T 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自腾讯云后台。</li><li><code>T</code>：int64类型。过期时间，事件通知签名过期 UNIX 时间戳。来自腾讯云的消息通知默认过期时间是10分钟，如果一条消息通知中的 t 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。T 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。</li></ul>
                     * @return SignKey <p>回调密钥，由大小写字母及数字组成，最长32字符。配置后将在回调中发送<code>Sign</code>与<code>T</code>字段，可用于鉴权。</p><ul><li><code>Sign</code>：string类型。事件通知安全签名 Sign = MD5（SignKey + T）。说明：腾讯云把加密 SignKey 和 T 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自腾讯云后台。</li><li><code>T</code>：int64类型。过期时间，事件通知签名过期 UNIX 时间戳。来自腾讯云的消息通知默认过期时间是10分钟，如果一条消息通知中的 t 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。T 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。</li></ul>
                     * 
                     */
                    std::string GetSignKey() const;

                    /**
                     * 设置<p>回调密钥，由大小写字母及数字组成，最长32字符。配置后将在回调中发送<code>Sign</code>与<code>T</code>字段，可用于鉴权。</p><ul><li><code>Sign</code>：string类型。事件通知安全签名 Sign = MD5（SignKey + T）。说明：腾讯云把加密 SignKey 和 T 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自腾讯云后台。</li><li><code>T</code>：int64类型。过期时间，事件通知签名过期 UNIX 时间戳。来自腾讯云的消息通知默认过期时间是10分钟，如果一条消息通知中的 t 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。T 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。</li></ul>
                     * @param _signKey <p>回调密钥，由大小写字母及数字组成，最长32字符。配置后将在回调中发送<code>Sign</code>与<code>T</code>字段，可用于鉴权。</p><ul><li><code>Sign</code>：string类型。事件通知安全签名 Sign = MD5（SignKey + T）。说明：腾讯云把加密 SignKey 和 T 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自腾讯云后台。</li><li><code>T</code>：int64类型。过期时间，事件通知签名过期 UNIX 时间戳。来自腾讯云的消息通知默认过期时间是10分钟，如果一条消息通知中的 t 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。T 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。</li></ul>
                     * 
                     */
                    void SetSignKey(const std::string& _signKey);

                    /**
                     * 判断参数 SignKey 是否已赋值
                     * @return SignKey 是否已赋值
                     * 
                     */
                    bool SignKeyHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>接收事件通知的方式。</p><li>PUSH：[HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)；</li><li>PULL：[基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779)。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>采用 <a href="https://cloud.tencent.com/document/product/266/33779">HTTP 回调通知</a> 接收方式时，用于接收 3.0 格式回调的地址。<br>注意：如果带 NotificationUrl  参数且值为空字符串时将会清空 3.0 格式回调地址。</p>
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * <p>是否接收 <a href="https://cloud.tencent.com/document/product/266/7830">视频上传完成</a> 事件通知， 默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * <p>是否接收 <a href="https://cloud.tencent.com/document/product/266/13434">视频删除完成</a> 事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * <p>是否接收剪辑固化完成事件通知，  默认 &quot;OFF&quot; 为忽略该事件通知，&quot;ON&quot; 为接收事件通知。</p>
                     */
                    std::string m_persistenceCompleteEventSwitch;
                    bool m_persistenceCompleteEventSwitchHasBeenSet;

                    /**
                     * <p>回调密钥，由大小写字母及数字组成，最长32字符。配置后将在回调中发送<code>Sign</code>与<code>T</code>字段，可用于鉴权。</p><ul><li><code>Sign</code>：string类型。事件通知安全签名 Sign = MD5（SignKey + T）。说明：腾讯云把加密 SignKey 和 T 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自腾讯云后台。</li><li><code>T</code>：int64类型。过期时间，事件通知签名过期 UNIX 时间戳。来自腾讯云的消息通知默认过期时间是10分钟，如果一条消息通知中的 t 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。T 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。</li></ul>
                     */
                    std::string m_signKey;
                    bool m_signKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
