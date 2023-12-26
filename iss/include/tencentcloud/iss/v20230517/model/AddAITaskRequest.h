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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDAITASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDAITASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AITemplates.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddAITask请求参数结构体
                */
                class AddAITaskRequest : public AbstractModel
                {
                public:
                    AddAITaskRequest();
                    ~AddAITaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AI 任务名称。仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * @return Name AI 任务名称。仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置AI 任务名称。仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * @param _name AI 任务名称。仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取通道 ID 列表。不能添加存在于其他 AI 任务的通道，限制1000个通道。
                     * @return ChannelList 通道 ID 列表。不能添加存在于其他 AI 任务的通道，限制1000个通道。
                     * 
                     */
                    std::vector<std::string> GetChannelList() const;

                    /**
                     * 设置通道 ID 列表。不能添加存在于其他 AI 任务的通道，限制1000个通道。
                     * @param _channelList 通道 ID 列表。不能添加存在于其他 AI 任务的通道，限制1000个通道。
                     * 
                     */
                    void SetChannelList(const std::vector<std::string>& _channelList);

                    /**
                     * 判断参数 ChannelList 是否已赋值
                     * @return ChannelList 是否已赋值
                     * 
                     */
                    bool ChannelListHasBeenSet() const;

                    /**
                     * 获取AI 配置列表
                     * @return Templates AI 配置列表
                     * 
                     */
                    std::vector<AITemplates> GetTemplates() const;

                    /**
                     * 设置AI 配置列表
                     * @param _templates AI 配置列表
                     * 
                     */
                    void SetTemplates(const std::vector<AITemplates>& _templates);

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     * 
                     */
                    bool TemplatesHasBeenSet() const;

                    /**
                     * 获取AI 任务描述。仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * @return Desc AI 任务描述。仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置AI 任务描述。仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * @param _desc AI 任务描述。仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取AI 结果回调地址。类似 "http://ip:port/***或者https://domain/***
                     * @return CallbackUrl AI 结果回调地址。类似 "http://ip:port/***或者https://domain/***
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置AI 结果回调地址。类似 "http://ip:port/***或者https://domain/***
                     * @param _callbackUrl AI 结果回调地址。类似 "http://ip:port/***或者https://domain/***
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
                     * 获取是否立即开启 AI 任务。"true"代表立即开启 AI 任务，"false"代表暂不开启 AI 任务，默认为 false。
                     * @return IsStartTheTask 是否立即开启 AI 任务。"true"代表立即开启 AI 任务，"false"代表暂不开启 AI 任务，默认为 false。
                     * 
                     */
                    bool GetIsStartTheTask() const;

                    /**
                     * 设置是否立即开启 AI 任务。"true"代表立即开启 AI 任务，"false"代表暂不开启 AI 任务，默认为 false。
                     * @param _isStartTheTask 是否立即开启 AI 任务。"true"代表立即开启 AI 任务，"false"代表暂不开启 AI 任务，默认为 false。
                     * 
                     */
                    void SetIsStartTheTask(const bool& _isStartTheTask);

                    /**
                     * 判断参数 IsStartTheTask 是否已赋值
                     * @return IsStartTheTask 是否已赋值
                     * 
                     */
                    bool IsStartTheTaskHasBeenSet() const;

                private:

                    /**
                     * AI 任务名称。仅支持中文、英文、数字、_、-，长度不超过32个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通道 ID 列表。不能添加存在于其他 AI 任务的通道，限制1000个通道。
                     */
                    std::vector<std::string> m_channelList;
                    bool m_channelListHasBeenSet;

                    /**
                     * AI 配置列表
                     */
                    std::vector<AITemplates> m_templates;
                    bool m_templatesHasBeenSet;

                    /**
                     * AI 任务描述。仅支持中文、英文、数字、_、-，长度不超过128个字符
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * AI 结果回调地址。类似 "http://ip:port/***或者https://domain/***
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 是否立即开启 AI 任务。"true"代表立即开启 AI 任务，"false"代表暂不开启 AI 任务，默认为 false。
                     */
                    bool m_isStartTheTask;
                    bool m_isStartTheTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDAITASKREQUEST_H_
