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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/TaskInput.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateVideoModerationTask请求参数结构体
                */
                class CreateVideoModerationTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoModerationTaskRequest();
                    ~CreateVideoModerationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取该参数用于传入审核任务的任务类型，取值：**VIDEO**（点播视频），**LIVE_VIDEO**（直播视频）。
                     * @return Type 该参数用于传入审核任务的任务类型，取值：**VIDEO**（点播视频），**LIVE_VIDEO**（直播视频）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置该参数用于传入审核任务的任务类型，取值：**VIDEO**（点播视频），**LIVE_VIDEO**（直播视频）。
                     * @param _type 该参数用于传入审核任务的任务类型，取值：**VIDEO**（点播视频），**LIVE_VIDEO**（直播视频）。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取该字段表示输入的视频审核任务信息，具体输入内容请参见TaskInput数据结构的详细描述。<br> 备注：最多同时可创建**10个任务**。
                     * @return Tasks 该字段表示输入的视频审核任务信息，具体输入内容请参见TaskInput数据结构的详细描述。<br> 备注：最多同时可创建**10个任务**。
                     * 
                     */
                    std::vector<TaskInput> GetTasks() const;

                    /**
                     * 设置该字段表示输入的视频审核任务信息，具体输入内容请参见TaskInput数据结构的详细描述。<br> 备注：最多同时可创建**10个任务**。
                     * @param _tasks 该字段表示输入的视频审核任务信息，具体输入内容请参见TaskInput数据结构的详细描述。<br> 备注：最多同时可创建**10个任务**。
                     * 
                     */
                    void SetTasks(const std::vector<TaskInput>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用biztype为default的策略，没有则需要新建；传入则会在审核时根据业务场景取相应的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @return BizType 该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用biztype为default的策略，没有则需要新建；传入则会在审核时根据业务场景取相应的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用biztype为default的策略，没有则需要新建；传入则会在审核时根据业务场景取相应的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @param _bizType 该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用biztype为default的策略，没有则需要新建；传入则会在审核时根据业务场景取相应的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取可选参数，该字段表示回调签名的key信息，用于保证数据的安全性。 签名方法为在返回的HTTP头部添加 X-Signature 的字段，值为： seed + body 的 SHA256 编码和Hex字符串，在收到回调数据后，可以根据返回的body，用 **sha256(seed + body)**, 计算出 `X-Signature` 进行验证。<br>具体使用实例可参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51885)。
                     * @return Seed 可选参数，该字段表示回调签名的key信息，用于保证数据的安全性。 签名方法为在返回的HTTP头部添加 X-Signature 的字段，值为： seed + body 的 SHA256 编码和Hex字符串，在收到回调数据后，可以根据返回的body，用 **sha256(seed + body)**, 计算出 `X-Signature` 进行验证。<br>具体使用实例可参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51885)。
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置可选参数，该字段表示回调签名的key信息，用于保证数据的安全性。 签名方法为在返回的HTTP头部添加 X-Signature 的字段，值为： seed + body 的 SHA256 编码和Hex字符串，在收到回调数据后，可以根据返回的body，用 **sha256(seed + body)**, 计算出 `X-Signature` 进行验证。<br>具体使用实例可参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51885)。
                     * @param _seed 可选参数，该字段表示回调签名的key信息，用于保证数据的安全性。 签名方法为在返回的HTTP头部添加 X-Signature 的字段，值为： seed + body 的 SHA256 编码和Hex字符串，在收到回调数据后，可以根据返回的body，用 **sha256(seed + body)**, 计算出 `X-Signature` 进行验证。<br>具体使用实例可参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51885)。
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取可选参数，该字段表示接受审核信息回调的地址，格式为URL链接默认格式。配置成功后，审核过程中产生的违规音视频片段将通过此接口发送。回调返回内容格式请参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51879#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>备注：音频默认截取时长为**15秒**，视频截帧默认为**5秒**截取一张图片；若用户自行配置截取间隔，则按照用户配置返回相应片段。
                     * @return CallbackUrl 可选参数，该字段表示接受审核信息回调的地址，格式为URL链接默认格式。配置成功后，审核过程中产生的违规音视频片段将通过此接口发送。回调返回内容格式请参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51879#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>备注：音频默认截取时长为**15秒**，视频截帧默认为**5秒**截取一张图片；若用户自行配置截取间隔，则按照用户配置返回相应片段。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置可选参数，该字段表示接受审核信息回调的地址，格式为URL链接默认格式。配置成功后，审核过程中产生的违规音视频片段将通过此接口发送。回调返回内容格式请参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51879#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>备注：音频默认截取时长为**15秒**，视频截帧默认为**5秒**截取一张图片；若用户自行配置截取间隔，则按照用户配置返回相应片段。
                     * @param _callbackUrl 可选参数，该字段表示接受审核信息回调的地址，格式为URL链接默认格式。配置成功后，审核过程中产生的违规音视频片段将通过此接口发送。回调返回内容格式请参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51879#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>备注：音频默认截取时长为**15秒**，视频截帧默认为**5秒**截取一张图片；若用户自行配置截取间隔，则按照用户配置返回相应片段。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取可选参数，该参数用于传入审核任务的优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级，用于处理插队等逻辑；该参数**默认值为0**。
                     * @return Priority 可选参数，该参数用于传入审核任务的优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级，用于处理插队等逻辑；该参数**默认值为0**。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置可选参数，该参数用于传入审核任务的优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级，用于处理插队等逻辑；该参数**默认值为0**。
                     * @param _priority 可选参数，该参数用于传入审核任务的优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级，用于处理插队等逻辑；该参数**默认值为0**。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 该参数用于传入审核任务的任务类型，取值：**VIDEO**（点播视频），**LIVE_VIDEO**（直播视频）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 该字段表示输入的视频审核任务信息，具体输入内容请参见TaskInput数据结构的详细描述。<br> 备注：最多同时可创建**10个任务**。
                     */
                    std::vector<TaskInput> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用biztype为default的策略，没有则需要新建；传入则会在审核时根据业务场景取相应的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 可选参数，该字段表示回调签名的key信息，用于保证数据的安全性。 签名方法为在返回的HTTP头部添加 X-Signature 的字段，值为： seed + body 的 SHA256 编码和Hex字符串，在收到回调数据后，可以根据返回的body，用 **sha256(seed + body)**, 计算出 `X-Signature` 进行验证。<br>具体使用实例可参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51885)。
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 可选参数，该字段表示接受审核信息回调的地址，格式为URL链接默认格式。配置成功后，审核过程中产生的违规音视频片段将通过此接口发送。回调返回内容格式请参考 [回调签名示例](https://cloud.tencent.com/document/product/1265/51879#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>备注：音频默认截取时长为**15秒**，视频截帧默认为**5秒**截取一张图片；若用户自行配置截取间隔，则按照用户配置返回相应片段。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 可选参数，该参数用于传入审核任务的优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级，用于处理插队等逻辑；该参数**默认值为0**。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
