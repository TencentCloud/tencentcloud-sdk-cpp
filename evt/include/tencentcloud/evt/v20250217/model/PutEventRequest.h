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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_PUTEVENTREQUEST_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_PUTEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * PutEvent请求参数结构体
                */
                class PutEventRequest : public AbstractModel
                {
                public:
                    PutEventRequest();
                    ~PutEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>插件ID</p>
                     * @return PluginId <p>插件ID</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>插件ID</p>
                     * @param _pluginId <p>插件ID</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * @return Data <p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * @param _data <p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * @return Source <p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * @param _source <p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>可以接受当前消息的Uin</p>
                     * @return TargetUin <p>可以接受当前消息的Uin</p>
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置<p>可以接受当前消息的Uin</p>
                     * @param _targetUin <p>可以接受当前消息的Uin</p>
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * <p>插件ID</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>数据推送来源，会在生成的单据中展示数据来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>可以接受当前消息的Uin</p>
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_PUTEVENTREQUEST_H_
