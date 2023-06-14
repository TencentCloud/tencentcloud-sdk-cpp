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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICEREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/Task.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ScanVoice请求参数结构体
                */
                class ScanVoiceRequest : public AbstractModel
                {
                public:
                    ScanVoiceRequest();
                    ~ScanVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @return BizId 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @param _bizId 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取语音检测场景，参数值目前要求为 default。 预留场景设置： 谩骂、色情、广告、违禁等场景，<a href="#Label_Value">具体取值见上述 Label 说明。</a>
                     * @return Scenes 语音检测场景，参数值目前要求为 default。 预留场景设置： 谩骂、色情、广告、违禁等场景，<a href="#Label_Value">具体取值见上述 Label 说明。</a>
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置语音检测场景，参数值目前要求为 default。 预留场景设置： 谩骂、色情、广告、违禁等场景，<a href="#Label_Value">具体取值见上述 Label 说明。</a>
                     * @param _scenes 语音检测场景，参数值目前要求为 default。 预留场景设置： 谩骂、色情、广告、违禁等场景，<a href="#Label_Value">具体取值见上述 Label 说明。</a>
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取是否为直播流。值为 false 时表示普通语音文件检测；为 true 时表示语音流检测。
                     * @return Live 是否为直播流。值为 false 时表示普通语音文件检测；为 true 时表示语音流检测。
                     * 
                     */
                    bool GetLive() const;

                    /**
                     * 设置是否为直播流。值为 false 时表示普通语音文件检测；为 true 时表示语音流检测。
                     * @param _live 是否为直播流。值为 false 时表示普通语音文件检测；为 true 时表示语音流检测。
                     * 
                     */
                    void SetLive(const bool& _live);

                    /**
                     * 判断参数 Live 是否已赋值
                     * @return Live 是否已赋值
                     * 
                     */
                    bool LiveHasBeenSet() const;

                    /**
                     * 获取语音检测任务列表，列表最多支持100个检测任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * @return Tasks 语音检测任务列表，列表最多支持100个检测任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * 
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 设置语音检测任务列表，列表最多支持100个检测任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * @param _tasks 语音检测任务列表，列表最多支持100个检测任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * 
                     */
                    void SetTasks(const std::vector<Task>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取异步检测结果回调地址，具体见上述<a href="#Callback_Declare">回调相关说明</a>。（说明：该字段为空时，必须通过接口(查询语音检测结果)获取检测结果）。
                     * @return Callback 异步检测结果回调地址，具体见上述<a href="#Callback_Declare">回调相关说明</a>。（说明：该字段为空时，必须通过接口(查询语音检测结果)获取检测结果）。
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置异步检测结果回调地址，具体见上述<a href="#Callback_Declare">回调相关说明</a>。（说明：该字段为空时，必须通过接口(查询语音检测结果)获取检测结果）。
                     * @param _callback 异步检测结果回调地址，具体见上述<a href="#Callback_Declare">回调相关说明</a>。（说明：该字段为空时，必须通过接口(查询语音检测结果)获取检测结果）。
                     * 
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取语种，不传默认中文
                     * @return Lang 语种，不传默认中文
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置语种，不传默认中文
                     * @param _lang 语种，不传默认中文
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 语音检测场景，参数值目前要求为 default。 预留场景设置： 谩骂、色情、广告、违禁等场景，<a href="#Label_Value">具体取值见上述 Label 说明。</a>
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * 是否为直播流。值为 false 时表示普通语音文件检测；为 true 时表示语音流检测。
                     */
                    bool m_live;
                    bool m_liveHasBeenSet;

                    /**
                     * 语音检测任务列表，列表最多支持100个检测任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 异步检测结果回调地址，具体见上述<a href="#Callback_Declare">回调相关说明</a>。（说明：该字段为空时，必须通过接口(查询语音检测结果)获取检测结果）。
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * 语种，不传默认中文
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICEREQUEST_H_
