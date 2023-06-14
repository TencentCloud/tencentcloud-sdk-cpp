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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONREQUEST_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20200713/model/User.h>
#include <tencentcloud/tms/v20200713/model/Device.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * TextModeration请求参数结构体
                */
                class TextModerationRequest : public AbstractModel
                {
                public:
                    TextModerationRequest();
                    ~TextModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文本内容Base64编码。限制原文长度不能超过10000个unicode字符
                     * @return Content 文本内容Base64编码。限制原文长度不能超过10000个unicode字符
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容Base64编码。限制原文长度不能超过10000个unicode字符
                     * @param _content 文本内容Base64编码。限制原文长度不能超过10000个unicode字符
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     * @return BizType 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     * @param _bizType 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
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
                     * 获取数据ID，英文字母、下划线、-组成，不超过64个字符
                     * @return DataId 数据ID，英文字母、下划线、-组成，不超过64个字符
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据ID，英文字母、下划线、-组成，不超过64个字符
                     * @param _dataId 数据ID，英文字母、下划线、-组成，不超过64个字符
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取账号相关信息字段，填入后可识别违规风险账号
                     * @return User 账号相关信息字段，填入后可识别违规风险账号
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置账号相关信息字段，填入后可识别违规风险账号
                     * @param _user 账号相关信息字段，填入后可识别违规风险账号
                     * 
                     */
                    void SetUser(const User& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取设备相关信息字段，填入后可识别违规风险设备
                     * @return Device 设备相关信息字段，填入后可识别违规风险设备
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置设备相关信息字段，填入后可识别违规风险设备
                     * @param _device 设备相关信息字段，填入后可识别违规风险设备
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                private:

                    /**
                     * 文本内容Base64编码。限制原文长度不能超过10000个unicode字符
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 数据ID，英文字母、下划线、-组成，不超过64个字符
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 账号相关信息字段，填入后可识别违规风险账号
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 设备相关信息字段，填入后可识别违规风险设备
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONREQUEST_H_
